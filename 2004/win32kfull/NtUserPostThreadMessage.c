/*
 * XREFs of NtUserPostThreadMessage @ 0x1C00BE7A0
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C0026530 (GetDesktopView.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C003797C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0037AE8 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0037B6C (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     IsPrivileged @ 0x1C0039594 (IsPrivileged.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _PostThreadMessage @ 0x1C00BE8A8 (_PostThreadMessage.c)
 */

__int64 __fastcall NtUserPostThreadMessage(unsigned int a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ebx
  __int64 *i; // rcx
  __int64 v12; // r8
  _QWORD *v13; // r15
  _QWORD *v14; // rdx
  __int64 v15; // rdi
  struct tagPROCESSINFO *v16; // rsi
  __int64 v18; // rcx
  int v19; // r12d
  unsigned __int8 v20; // al
  __int64 v21; // rcx
  bool v22; // zf
  __int16 v23; // ax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // [rsp+40h] [rbp-10h] BYREF
  __int64 v27; // [rsp+48h] [rbp-8h] BYREF

  EnterCrit(0LL, 1LL);
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v8, v9);
    v10 = 0;
    goto LABEL_6;
  }
  v10 = 0;
  v13 = (_QWORD *)PtiFromThreadId(a1);
  if ( !v13 )
  {
    v14 = (_QWORD *)gpwpiFirstWow;
LABEL_8:
    if ( !v14 )
      goto LABEL_9;
    for ( i = (__int64 *)v14[2]; ; i = (__int64 *)*i )
    {
      if ( !i )
      {
        v14 = (_QWORD *)*v14;
        goto LABEL_8;
      }
      if ( *((unsigned __int16 *)i + 16) == a1 )
        break;
    }
    v13 = (_QWORD *)i[2];
  }
  v14 = (_QWORD *)v13[56];
  if ( *(_QWORD **)(gptiCurrent + 448LL) == v14
    || (*(_DWORD *)(gptiCurrent + 480LL) & 8) != 0
    || GetDesktopView(*(_QWORD *)(gptiCurrent + 416LL), (__int64)v14) )
  {
    goto LABEL_4;
  }
  v27 = 0LL;
  v26 = 0LL;
  if ( !(unsigned int)IsPrivileged(psTcb) )
  {
LABEL_9:
    UserSetLastError(1444LL, (__int64)v14, v12);
    goto LABEL_6;
  }
  if ( !(unsigned __int8)Enforced(v18) )
  {
    if ( (int)GetProcessLuid(*gptiCurrent, &v27) >= 0 && (int)GetProcessLuid(*v13, &v26) >= 0 && v27 == v26 )
      goto LABEL_4;
    goto LABEL_9;
  }
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 880LL, v13[52] + 880LL) )
  {
    UserSetLastError(1444LL, (__int64)v14, v12);
    EtwTraceUIPIMsgError(*(_QWORD *)(gptiCurrent + 416LL), v13[52], a2, a3, a4);
    goto LABEL_6;
  }
LABEL_4:
  v15 = v13[52];
  v16 = *(struct tagPROCESSINFO **)(gptiCurrent + 416LL);
  if ( (struct tagPROCESSINFO *)v15 == v16 )
    goto LABEL_5;
  if ( a2 == 717 )
    goto LABEL_6;
  if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(v16, (void *const **)v15, 0LL, a2, a3, a4, 0) )
    goto LABEL_5;
  v19 = IsMessageAlwaysAllowedAcrossIL(a2);
  if ( v19 )
  {
    MSGSQMAddMessage(v16, (struct tagPROCESSINFO *)v15, a2, a3, a4, 0, 2);
    goto LABEL_44;
  }
  if ( a2 != 274 || ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) != 0 || a3 == 61792 )
  {
    if ( *(_QWORD *)v15 == gpepCSRSS )
      v26 = 0x2000LL;
    else
      v26 = *(_QWORD *)(v15 + 880);
    v20 = CheckAccess((char *)v16 + 880, &v26);
    v19 = v20;
    if ( v20 )
    {
      v22 = (unsigned __int8)Enforced(v21) == 0;
      v23 = 5;
      if ( v22 )
        v23 = 1;
      MSGSQMAddMessage(v16, (struct tagPROCESSINFO *)v15, a2, a3, a4, 0, v23);
    }
    if ( !v19 )
    {
      EtwTraceUIPIMsgError(v16, v15, a2, a3, a4);
      UserSetLastError(5LL, v24, v25);
      MSGSQMAddMessage(v16, (struct tagPROCESSINFO *)v15, a2, a3, a4, 0, 0);
LABEL_44:
      if ( !v19 )
        goto LABEL_6;
    }
  }
  else
  {
    MSGSQMAddMessage(v16, (struct tagPROCESSINFO *)v15, 0x112u, a3, a4, 0, 2);
  }
LABEL_5:
  v10 = PostThreadMessage(v13, a2, a3);
LABEL_6:
  UserSessionSwitchLeaveCrit(i, v14, v12);
  return v10;
}
