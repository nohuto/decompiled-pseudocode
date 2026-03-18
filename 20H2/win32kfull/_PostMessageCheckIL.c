/*
 * XREFs of _PostMessageCheckIL @ 0x1C01E2048
 * Callers:
 *     ForwardTouchMessage @ 0x1C01DBEFC (ForwardTouchMessage.c)
 *     NtUserInjectGesture @ 0x1C01FD6D0 (NtUserInjectGesture.c)
 * Callees:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C001A3EC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C001A558 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C001A5DC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ValidateDDEConvPair @ 0x1C021C6A0 (ValidateDDEConvPair.c)
 */

__int64 __fastcall PostMessageCheckIL(struct tagWND *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // ebx
  BOOL v8; // edi
  __int16 v9; // r13
  __int64 v10; // rdi
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v12; // r14
  int v13; // r15d
  unsigned __int8 v15; // al
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  v6 = a2;
  v8 = 0;
  v9 = 1;
  if ( (unsigned int)(a2 - 992) <= 8 )
    v8 = ValidateDDEConvPair(a3, a1, a3) != 0;
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return PostMessage((int)a1, v6, a3, a4);
  if ( v8 )
    return PostMessage((int)a1, v6, a3, a4);
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2, a3);
  v12 = CurrentProcessWin32Process;
  if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
    return PostMessage((int)a1, v6, a3, a4);
  if ( v6 != 717 )
  {
    if ( !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                          CurrentProcessWin32Process,
                          (void *const **)v10,
                          a1,
                          v6,
                          a3,
                          a4,
                          0) )
    {
      v13 = IsMessageAlwaysAllowedAcrossIL(v6);
      if ( v13 )
      {
        MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, v6, a3, a4, 0, 2);
      }
      else
      {
        if ( v6 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
        {
          MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, 0x112u, a3, a4, 0, 2);
          return PostMessage((int)a1, v6, a3, a4);
        }
        if ( *(_QWORD *)v10 == gpepCSRSS )
          v20 = 0x2000LL;
        else
          v20 = *(_QWORD *)(v10 + 880);
        v15 = CheckAccess((char *)v12 + 880, &v20);
        v13 = v15;
        if ( v15 )
        {
          if ( (unsigned __int8)Enforced(v16) )
            v9 = 5;
          MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, v6, a3, a4, 0, v9);
        }
        if ( v13 )
          return PostMessage((int)a1, v6, a3, a4);
        if ( v6 == 793 )
        {
          v17 = *((_QWORD *)a1 + 2);
          if ( *(struct tagWND **)(v17 + 1392) == a1 && *(_QWORD *)(v17 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
            return PostMessage((int)a1, v6, a3, a4);
        }
        EtwTraceUIPIMsgError(v12, v10, v6, a3, a4);
        UserSetLastError(5LL, v18, v19);
        MSGSQMAddMessage(v12, (struct tagPROCESSINFO *)v10, v6, a3, a4, 0, 0);
      }
      if ( !v13 )
        return 0LL;
    }
    return PostMessage((int)a1, v6, a3, a4);
  }
  return 0LL;
}
