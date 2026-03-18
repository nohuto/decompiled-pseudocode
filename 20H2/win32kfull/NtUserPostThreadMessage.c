/*
 * XREFs of NtUserPostThreadMessage @ 0x1C00BE490
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C001A3EC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C001A558 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C001A5DC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     IsPrivileged @ 0x1C001A7F0 (IsPrivileged.c)
 *     GetDesktopView @ 0x1C003E860 (GetDesktopView.c)
 *     _PostThreadMessage @ 0x1C00BE598 (_PostThreadMessage.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v8; // ebx
  __int64 *i; // rcx
  _QWORD *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rdi
  struct tagPROCESSINFO *v13; // rsi
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // r12d
  unsigned __int8 v22; // al
  __int64 v23; // rcx
  bool v24; // zf
  __int16 v25; // ax
  __int64 v26; // [rsp+40h] [rbp-10h] BYREF
  __int64 v27; // [rsp+48h] [rbp-8h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL);
    v8 = 0;
    goto LABEL_6;
  }
  v8 = 0;
  v10 = (_QWORD *)PtiFromThreadId(a1);
  if ( !v10 )
  {
    v15 = (_QWORD *)gpwpiFirstWow;
LABEL_8:
    if ( !v15 )
      goto LABEL_9;
    for ( i = (__int64 *)v15[2]; ; i = (__int64 *)*i )
    {
      if ( !i )
      {
        v15 = (_QWORD *)*v15;
        goto LABEL_8;
      }
      if ( *((unsigned __int16 *)i + 16) == a1 )
        break;
    }
    v10 = (_QWORD *)i[2];
  }
  v11 = v10[57];
  if ( *(_QWORD *)(gptiCurrent + 456LL) == v11
    || (*(_DWORD *)(gptiCurrent + 488LL) & 8) != 0
    || GetDesktopView(*(_QWORD *)(gptiCurrent + 424LL), v11) )
  {
    goto LABEL_4;
  }
  v27 = 0LL;
  v26 = 0LL;
  if ( !(unsigned int)IsPrivileged(psTcb) )
  {
LABEL_9:
    UserSetLastError(1444LL);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)Enforced(v16) )
  {
    if ( (int)GetProcessLuid(*gptiCurrent, &v27, v17, v18) >= 0
      && (int)GetProcessLuid(*v10, &v26, v19, v20) >= 0
      && v27 == v26 )
    {
      goto LABEL_4;
    }
    goto LABEL_9;
  }
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 424LL) + 880LL, v10[53] + 880LL) )
  {
    UserSetLastError(1444LL);
    EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 424LL), v10[53], a2, a3, a4);
    goto LABEL_6;
  }
LABEL_4:
  v12 = v10[53];
  v13 = *(struct tagPROCESSINFO **)(gptiCurrent + 424LL);
  if ( (struct tagPROCESSINFO *)v12 == v13 )
    goto LABEL_5;
  if ( a2 == 717 )
    goto LABEL_6;
  if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(v13, (void *const **)v12, 0LL, a2, a3, a4, 0) )
    goto LABEL_5;
  v21 = IsMessageAlwaysAllowedAcrossIL(a2);
  if ( v21 )
  {
    MSGSQMAddMessage(v13, (struct tagPROCESSINFO *)v12, a2, a3, a4, 0, 2);
    goto LABEL_44;
  }
  if ( a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
  {
    if ( *(_QWORD *)v12 == gpepCSRSS )
      v26 = 0x2000LL;
    else
      v26 = *(_QWORD *)(v12 + 880);
    v22 = CheckAccess((char *)v13 + 880, &v26);
    v21 = v22;
    if ( v22 )
    {
      v24 = (unsigned __int8)Enforced(v23) == 0;
      v25 = 5;
      if ( v24 )
        v25 = 1;
      MSGSQMAddMessage(v13, (struct tagPROCESSINFO *)v12, a2, a3, a4, 0, v25);
    }
    if ( !v21 )
    {
      EtwTraceUIPIMsgError(v13, v12, a2, a3, a4);
      UserSetLastError(5LL);
      MSGSQMAddMessage(v13, (struct tagPROCESSINFO *)v12, a2, a3, a4, 0, 0);
LABEL_44:
      if ( !v21 )
        goto LABEL_6;
    }
  }
  else
  {
    MSGSQMAddMessage(v13, (struct tagPROCESSINFO *)v12, 0x112u, a3, a4, 0, 2);
  }
LABEL_5:
  v8 = PostThreadMessage(v10, a2, a3);
LABEL_6:
  UserSessionSwitchLeaveCrit(i);
  return v8;
}
