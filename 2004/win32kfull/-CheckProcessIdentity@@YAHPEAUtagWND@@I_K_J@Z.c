/*
 * XREFs of ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C00BBE74
 * Callers:
 *     ?xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00BB0B0 (-xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0151350 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E4220 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E4280 (-xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E42E0 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C003797C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0037AE8 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0037B6C (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall CheckProcessIdentity(struct tagWND *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // edi
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v9; // rsi
  __int64 v10; // rbx
  int v12; // r14d
  unsigned __int8 v13; // al
  __int64 v14; // rcx
  bool v15; // zf
  __int16 v16; // ax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF

  v6 = a2;
  if ( a1 != (struct tagWND *)-1LL )
  {
    CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
    v9 = CurrentProcessWin32Process;
    v10 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL);
    if ( (struct tagPROCESSINFO *)v10 == CurrentProcessWin32Process )
      return 1LL;
    if ( v6 != 717 )
    {
      if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                           CurrentProcessWin32Process,
                           (void *const **)v10,
                           a1,
                           v6,
                           a3,
                           a4,
                           1) )
        return 1LL;
      v12 = IsMessageAlwaysAllowedAcrossIL(v6);
      if ( v12 )
      {
        MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, v6, a3, a4, 1, 2);
      }
      else
      {
        if ( v6 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
        {
          MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, 0x112u, a3, a4, 1, 2);
          return 1LL;
        }
        if ( *(_QWORD *)v10 == gpepCSRSS )
          v20 = 0x2000LL;
        else
          v20 = *(_QWORD *)(v10 + 880);
        v13 = CheckAccess((char *)v9 + 880, &v20);
        v12 = v13;
        if ( v13 )
        {
          v15 = (unsigned __int8)Enforced(v14) == 0;
          v16 = 5;
          if ( v15 )
            v16 = 1;
          MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, v6, a3, a4, 1, v16);
        }
        if ( v12 )
          return 1LL;
        if ( v6 == 793 )
        {
          v17 = *((_QWORD *)a1 + 2);
          if ( *(struct tagWND **)(v17 + 1384) == a1 && *(_QWORD *)(v17 + 424) == *(_QWORD *)(gptiCurrent + 424LL) )
            return 1LL;
        }
        EtwTraceUIPIMsgError(v9, v10, v6, a3, a4);
        UserSetLastError(5LL, v18, v19);
        MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, v6, a3, a4, 1, 0);
      }
      if ( v12 )
        return 1LL;
    }
    a2 = gpepCSRSS;
    if ( *(_QWORD *)v9 == gpepCSRSS )
      return 1LL;
  }
  UserSetLastError(5LL, a2, a3);
  return 0LL;
}
