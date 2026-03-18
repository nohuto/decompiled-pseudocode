/*
 * XREFs of ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00ACD50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C003797C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0037AE8 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0037B6C (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxRealDefWindowProc @ 0x1C00ACEC8 (xxxRealDefWindowProc.c)
 */

__int64 __fastcall xxxWrapRealDefWindowProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v6; // ebx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v9; // rbp
  __int64 v10; // rdi
  int v12; // r15d
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
      return xxxRealDefWindowProc((int)a1, v6, a3, a4);
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
        return xxxRealDefWindowProc((int)a1, v6, a3, a4);
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
          return xxxRealDefWindowProc((int)a1, v6, a3, a4);
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
          return xxxRealDefWindowProc((int)a1, v6, a3, a4);
        if ( v6 == 793 )
        {
          v17 = *((_QWORD *)a1 + 2);
          if ( *(struct tagWND **)(v17 + 1384) == a1 && *(_QWORD *)(v17 + 424) == *(_QWORD *)(gptiCurrent + 424LL) )
            return xxxRealDefWindowProc((int)a1, v6, a3, a4);
        }
        EtwTraceUIPIMsgError(v9, v10, v6, a3, a4);
        UserSetLastError(5LL, v18, v19);
        MSGSQMAddMessage(v9, (struct tagPROCESSINFO *)v10, v6, a3, a4, 1, 0);
      }
      if ( v12 )
        return xxxRealDefWindowProc((int)a1, v6, a3, a4);
    }
    if ( *(_QWORD *)v9 == gpepCSRSS )
      return xxxRealDefWindowProc((int)a1, v6, a3, a4);
  }
  UserSetLastError(5LL, a2, a3);
  return 0LL;
}
