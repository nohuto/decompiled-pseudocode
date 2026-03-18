/*
 * XREFs of __PostMessageCheckIL@20 @ 0x14EADF
 * Callers:
 *     _ForwardTouchMessage@36 @ 0x149C25 (_ForwardTouchMessage@36.c)
 *     _PostGestureMessage@8 @ 0x188A48 (_PostGestureMessage@8.c)
 * Callees:
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z @ 0x7FEB8 (-IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z.c)
 *     _MSGSQMAddMessage@28 @ 0x7FF98 (_MSGSQMAddMessage@28.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YGHI@Z @ 0x8015A (-IsMessageAlwaysAllowedAcrossIL@@YGHI@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ValidateDDEConvPair@8 @ 0x17FF6F (_ValidateDDEConvPair@8.c)
 */

unsigned int __fastcall _PostMessageCheckIL(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2,
        struct tagWND *a3,
        unsigned int a4,
        int a5)
{
  BOOL v6; // ebx
  _DWORD *v8; // ebx
  int CurrentProcessWin32Process; // eax
  unsigned __int8 v11; // al
  char v12; // al
  int v13; // edx
  int v14; // [esp+0h] [ebp-1Ch]
  unsigned int v15; // [esp+0h] [ebp-1Ch]
  int v16; // [esp+4h] [ebp-18h]
  int v17; // [esp+Ch] [ebp-10h] BYREF
  int v18; // [esp+10h] [ebp-Ch]
  int v19; // [esp+14h] [ebp-8h]
  struct tagPROCESSINFO *v20; // [esp+18h] [ebp-4h]
  struct tagWND *v21; // [esp+24h] [ebp+8h]

  v6 = 0;
  v20 = a1;
  if ( (unsigned int)a2 - 992 <= 8 )
    v6 = ValidateDDEConvPair(a3, a1) != 0;
  if ( !v20 )
    return _PostMessage((int)v20, (int)a2, (int)a3, a4);
  if ( v20 == (struct tagPROCESSINFO *)-1 )
    return _PostMessage((int)v20, (int)a2, (int)a3, a4);
  if ( v6 )
    return _PostMessage((int)v20, (int)a2, (int)a3, a4);
  v8 = *(_DWORD **)(*((_DWORD *)v20 + 2) + 232);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v21 = (struct tagWND *)CurrentProcessWin32Process;
  if ( v8 == (_DWORD *)CurrentProcessWin32Process )
    return _PostMessage((int)v20, (int)a2, (int)a3, a4);
  if ( a2 != (struct tagPROCESSINFO *)717 )
  {
    if ( !IsMessageAllowedAcrossILByReceiver((int)v8, CurrentProcessWin32Process, v20, a2, a3, a4, 0, v14, v16) )
    {
      v19 = IsMessageAlwaysAllowedAcrossIL(v15);
      if ( v19 )
      {
        MSGSQMAddMessage((int)v21, (int)v8, (int)a2, (int)a3, a4, 0, 2);
      }
      else
      {
        if ( a2 == (struct tagPROCESSINFO *)274
          && (a3 == (struct tagWND *)61472 || a3 == (struct tagWND *)61728 || a3 == (struct tagWND *)61536) )
        {
          MSGSQMAddMessage((int)v21, (int)v8, 274, (int)a3, a4, 0, 2);
          return _PostMessage((int)v20, (int)a2, (int)a3, a4);
        }
        if ( *v8 == _gpepCSRSS )
        {
          v18 = 0;
          v17 = 0x2000;
        }
        else
        {
          v17 = v8[124];
          v18 = v8[125];
        }
        v11 = CheckAccess((char *)v21 + 496, &v17);
        v19 = v11;
        if ( v11 )
        {
          v12 = Enforced();
          MSGSQMAddMessage((int)v21, (int)v8, (int)a2, (int)a3, a4, 0, 4 * (v12 != 0) + 1);
          if ( v19 )
            return _PostMessage((int)v20, (int)a2, (int)a3, a4);
        }
        if ( a2 == (struct tagPROCESSINFO *)793 )
        {
          v13 = *((_DWORD *)v20 + 2);
          if ( *(struct tagPROCESSINFO **)(v13 + 796) == v20
            && *(_DWORD *)(v13 + 236) == *(_DWORD *)(_gptiCurrent + 236) )
          {
            return _PostMessage((int)v20, (int)a2, (int)a3, a4);
          }
        }
        EtwTraceUIPIMsgError(v21, v8, a2, a3, a4);
        UserSetLastError((struct _NT_TIB *)5);
        MSGSQMAddMessage((int)v21, (int)v8, (int)a2, (int)a3, a4, 0, 0);
      }
      if ( !v19 )
        return 0;
    }
    return _PostMessage((int)v20, (int)a2, (int)a3, a4);
  }
  return 0;
}
