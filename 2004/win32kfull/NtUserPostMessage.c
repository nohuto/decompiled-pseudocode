/*
 * XREFs of NtUserPostMessage @ 0x1C0093530
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C003797C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0037AE8 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0037B6C (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     IAMThreadAccessGranted @ 0x1C0066514 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00938D0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ForwardTouchMessage @ 0x1C01DCBBC (ForwardTouchMessage.c)
 *     ValidateDDEConvPair @ 0x1C021D530 (ValidateDDEConvPair.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPostMessage(unsigned __int64 a1, unsigned int a2, unsigned __int64 a3, volatile void *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // edi
  __int64 v13; // rsi
  BOOL v14; // ebp
  __int64 v15; // rbp
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v17; // r14
  struct tagQMSG *v18; // rax
  unsigned __int8 v20; // al
  int v21; // r13d
  char v22; // al
  __int16 v23; // cx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v28; // rdx
  __int64 v29; // [rsp+50h] [rbp-38h] BYREF

  v4 = a2;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  if ( (v4 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v8, v10);
    v12 = 0;
    goto LABEL_21;
  }
  v11 = 0x2000LL;
  if ( (unsigned int)v4 < 0x400 )
  {
    v9 = (unsigned __int16)MessageTable[v4];
    if ( (v9 & 0x2000) != 0 )
    {
      v12 = 0;
      v26 = 5LL;
LABEL_60:
      UserSetLastError(v26, v11, v10);
      goto LABEL_21;
    }
  }
  v12 = 0;
  if ( a1 >= 0x10000 && a1 != -1LL )
    goto LABEL_5;
  if ( !a1 )
  {
    v13 = 0LL;
    goto LABEL_6;
  }
  if ( a1 == 0xFFFF || a1 == -1LL )
  {
    v13 = -1LL;
  }
  else
  {
LABEL_5:
    v13 = ValidateHwnd(a1);
    if ( !v13 )
    {
      if ( (_DWORD)v4 == 993 )
        v12 = 1;
      goto LABEL_21;
    }
  }
LABEL_6:
  if ( (_DWORD)v4 == 576 )
  {
    if ( (unsigned __int64)(v13 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      v26 = 1400LL;
      goto LABEL_60;
    }
    v12 = ForwardTouchMessage(gptiCurrent, a4, 1, 0LL, 0, 0LL);
  }
  else
  {
    if ( (((_DWORD)v4 - 281) & 0xFFFFFFFD) == 0
      || (unsigned int)(v4 - 577) <= 3
      || (unsigned int)(v4 - 581) <= 0x12 && (_DWORD)v4 != 589 )
    {
      v26 = 1002LL;
      goto LABEL_60;
    }
    v14 = 0;
    if ( (unsigned int)(v4 - 992) <= 8 )
      v14 = ValidateDDEConvPair(a3, v13, v10) != 0;
    if ( (_DWORD)v4 == 274 && a3 == 61488 && IAMThreadAccessGranted(gptiCurrent) )
      v14 = 1;
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL && !v14 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v13 + 16) + 416LL);
      CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v9);
      v17 = CurrentProcessWin32Process;
      if ( (struct tagPROCESSINFO *)v15 != CurrentProcessWin32Process )
      {
        if ( (_DWORD)v4 == 717 )
          goto LABEL_21;
        if ( !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                              CurrentProcessWin32Process,
                              (void *const **)v15,
                              (struct tagWND *)v13,
                              v4,
                              a3,
                              (__int64)a4,
                              0) )
        {
          if ( (unsigned int)IsMessageAlwaysAllowedAcrossIL(v4) )
          {
            MSGSQMAddMessage(v17, (struct tagPROCESSINFO *)v15, v4, a3, (unsigned __int64)a4, 0, 2);
          }
          else if ( (_DWORD)v4 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
          {
            if ( *(_QWORD *)v15 == gpepCSRSS )
              v29 = 0x2000LL;
            else
              v29 = *(_QWORD *)(v15 + 880);
            v20 = CheckAccess((char *)v17 + 880, &v29);
            v21 = v20;
            if ( v20 )
            {
              v22 = Enforced();
              v23 = 1;
              if ( v22 )
                v23 = 5;
              MSGSQMAddMessage(v17, (struct tagPROCESSINFO *)v15, v4, a3, (unsigned __int64)a4, 0, v23);
            }
            if ( !v21 )
            {
              if ( (_DWORD)v4 != 793
                || (v28 = *(_QWORD *)(v13 + 16), *(_QWORD *)(v28 + 1384) != v13)
                || *(_QWORD *)(v28 + 424) != *(_QWORD *)(gptiCurrent + 424LL) )
              {
                EtwTraceUIPIMsgError(v17, v15, (unsigned int)v4, a3, a4);
                UserSetLastError(5LL, v24, v25);
                MSGSQMAddMessage(v17, (struct tagPROCESSINFO *)v15, v4, a3, (unsigned __int64)a4, 0, 0);
                goto LABEL_21;
              }
            }
          }
          else
          {
            MSGSQMAddMessage(v17, (struct tagPROCESSINFO *)v15, 0x112u, a3, (unsigned __int64)a4, 0, 2);
          }
        }
      }
    }
    v18 = _PostTransformableMessageExtended((struct tagWND *)v13, v4, a3, (__int64)a4, 0LL, 1);
    v9 = (unsigned __int64)MmSystemRangeStart;
    if ( v18 >= MmSystemRangeStart )
    {
      if ( v18 )
        v12 = 1;
      LODWORD(v18) = v12;
    }
    v12 = (int)v18;
  }
LABEL_21:
  UserSessionSwitchLeaveCrit(v9, v11, v10);
  return v12;
}
