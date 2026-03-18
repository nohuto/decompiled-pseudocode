/*
 * XREFs of _NtUserPostMessage@16 @ 0x6D25E
 * Callers:
 *     <none>
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z @ 0x7FEB8 (-IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z.c)
 *     _MSGSQMAddMessage@28 @ 0x7FF98 (_MSGSQMAddMessage@28.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YGHI@Z @ 0x8015A (-IsMessageAlwaysAllowedAcrossIL@@YGHI@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ForwardTouchMessage@36 @ 0x149C25 (_ForwardTouchMessage@36.c)
 *     _ValidateDDEConvPair@8 @ 0x17FF6F (_ValidateDDEConvPair@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
unsigned int __userpurge NtUserPostMessage@<eax>(
        struct tagINPUT_MESSAGE_SOURCE *a1@<edi>,
        int a2,
        struct tagPROCESSINFO *a3,
        struct tagTHREADINFO *a4,
        volatile void *Address)
{
  unsigned int v5; // ebx
  int v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // eax
  unsigned __int8 v12; // al
  char v13; // al
  int v14; // ecx
  int v15; // edx
  struct tagINPUT_MESSAGE_SOURCE *v16; // [esp-4h] [ebp-18h]
  int v17; // [esp+0h] [ebp-14h]
  int v18; // [esp+8h] [ebp-Ch] BYREF
  int v19; // [esp+Ch] [ebp-8h]
  int v20; // [esp+10h] [ebp-4h]
  struct tagPROCESSINFO *CurrentProcessWin32Process; // [esp+1Ch] [ebp+8h]
  BOOL v22; // [esp+20h] [ebp+Ch]
  struct tagPROCESSINFO *v23; // [esp+20h] [ebp+Ch]

  v5 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  if ( ((unsigned int)a3 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    goto LABEL_25;
  }
  if ( (unsigned int)a3 < 0x400 )
    v7 = ((unsigned __int16)MessageTable[(_DWORD)a3] >> 13) & 1;
  else
    v7 = 0;
  if ( v7 )
  {
    UserSetLastError(5);
    goto LABEL_25;
  }
  v16 = a1;
  if ( a2 )
  {
    if ( a2 == 0xFFFF || a2 == -1 )
    {
      v8 = -1;
    }
    else
    {
      v8 = ValidateHwnd(a2);
      if ( !v8 )
      {
        v5 = a3 == (struct tagPROCESSINFO *)993;
        goto LABEL_25;
      }
    }
  }
  else
  {
    v8 = 0;
  }
  if ( a3 == (struct tagPROCESSINFO *)576 )
  {
    if ( !v8 || v8 == -1 )
    {
      v14 = 1400;
LABEL_57:
      UserSetLastError(v14);
      goto LABEL_25;
    }
    v10 = ForwardTouchMessage(576, a4, Address, 1, 0, 0, 0);
    goto LABEL_24;
  }
  if ( a3 == (struct tagPROCESSINFO *)283
    || a3 == (struct tagPROCESSINFO *)281
    || (unsigned int)a3 - 577 <= 3
    || (unsigned int)a3 - 581 <= 0x12 && a3 != (struct tagPROCESSINFO *)589 )
  {
    v14 = 1002;
    goto LABEL_57;
  }
  v22 = 0;
  if ( (unsigned int)a3 - 992 <= 8 )
    v22 = ValidateDDEConvPair(a4, v8) != 0;
  v9 = a3 == (struct tagPROCESSINFO *)274 && a4 == (struct tagTHREADINFO *)61488 && IAMThreadAccessGranted(_gptiCurrent)
    || v22;
  if ( v8 )
  {
    if ( v8 != -1 && !v9 )
    {
      v23 = *(struct tagPROCESSINFO **)(*(_DWORD *)(v8 + 8) + 232);
      CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process();
      if ( v23 != CurrentProcessWin32Process )
      {
        if ( a3 == (struct tagPROCESSINFO *)717 )
          goto LABEL_25;
        if ( !IsMessageAllowedAcrossILByReceiver(
                (struct tagPROCESSINFO *)v8,
                a3,
                a4,
                (unsigned int)Address,
                0,
                (int)v16,
                v17) )
        {
          v20 = IsMessageAlwaysAllowedAcrossIL((unsigned int)v16);
          if ( v20 )
          {
            MSGSQMAddMessage(CurrentProcessWin32Process, v23, a3, a4, Address, 0, 2);
            goto LABEL_31;
          }
          if ( a3 == (struct tagPROCESSINFO *)274
            && (a4 == (struct tagTHREADINFO *)61536
             || a4 == (struct tagTHREADINFO *)61472
             || a4 == (struct tagTHREADINFO *)61728) )
          {
            MSGSQMAddMessage(CurrentProcessWin32Process, v23, 274, a4, Address, 0, 2);
            goto LABEL_22;
          }
          if ( *(_DWORD *)v23 == _gpepCSRSS )
          {
            v18 = 0x2000;
            v19 = 0;
          }
          else
          {
            v18 = *((_DWORD *)v23 + 124);
            v19 = *((_DWORD *)v23 + 125);
          }
          v12 = CheckAccess((char *)CurrentProcessWin32Process + 496, &v18);
          v20 = v12;
          if ( !v12
            || (v13 = Enforced(),
                MSGSQMAddMessage(CurrentProcessWin32Process, v23, a3, a4, Address, 0, 4 * (v13 != 0) + 1),
                !v20) )
          {
            if ( a3 != (struct tagPROCESSINFO *)793
              || (v15 = *(_DWORD *)(v8 + 8), *(_DWORD *)(v15 + 796) != v8)
              || *(_DWORD *)(v15 + 236) != *(_DWORD *)(_gptiCurrent + 236) )
            {
              EtwTraceUIPIMsgError(CurrentProcessWin32Process, v23, a3, a4, Address);
              UserSetLastError(5);
              MSGSQMAddMessage(CurrentProcessWin32Process, v23, a3, a4, Address, 0, 0);
LABEL_31:
              if ( !v20 )
                goto LABEL_25;
            }
          }
        }
      }
    }
  }
LABEL_22:
  v5 = _PostTransformableMessageExtended(a3, (int *)v8, a4, (unsigned int)Address, 0, 1, v16, v17);
  if ( v5 >= (unsigned int)_MmSystemRangeStart )
  {
    v10 = v5 != 0;
LABEL_24:
    v5 = v10;
  }
LABEL_25:
  UserSessionSwitchLeaveCrit();
  return v5;
}
