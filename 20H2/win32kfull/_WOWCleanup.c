/*
 * XREFs of _WOWCleanup @ 0x1C0227870
 * Callers:
 *     NtUserWOWCleanup @ 0x1C0204400 (NtUserWOWCleanup.c)
 * Callees:
 *     DestroyClass @ 0x1C00D30CC (DestroyClass.c)
 */

__int64 __fastcall WOWCleanup(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  __int64 CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v6; // rbp
  struct _CALLPROCDATA ***v7; // rbx
  __int64 v8; // rdi
  struct _CALLPROCDATA **v9; // rdx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rdi
  __int64 v13; // rdx

  v3 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  v6 = (struct tagPROCESSINFO *)CurrentProcessWin32Process;
  if ( !a1 )
  {
    v7 = (struct _CALLPROCDATA ***)(CurrentProcessWin32Process + 344);
    v8 = 2LL;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( !*v7 )
          break;
        if ( *((unsigned __int16 *)v9 + 15) == v3 && (*((_BYTE *)v9[1] + 6) & 4) != 0 && !*((_DWORD *)v9 + 18) )
          DestroyClass(v6, v7);
        else
          v7 = (struct _CALLPROCDATA ***)*v7;
      }
      v7 = (struct _CALLPROCDATA ***)((char *)v6 + 352);
      --v8;
    }
    while ( v8 );
    v10 = gSharedInfo[1];
    v11 = v10 + 32LL * giheLast;
    v12 = (_QWORD *)gpKernelHandleTable;
    while ( v10 <= v11 )
    {
      v13 = *(unsigned __int8 *)(v10 + 24);
      if ( (_BYTE)v13
        && (gahti[24 * v13 + 12] & 2) != 0
        && (struct tagPROCESSINFO *)v12[1] == v6
        && *(_DWORD *)(*v12 + 16LL) == v3
        && (_BYTE)v13 != 7
        && (*(_BYTE *)(v10 + 25) & 1) == 0 )
      {
        HMDestroyUnlockedObject(v10);
      }
      v10 += 32LL;
      v12 += 3;
    }
  }
  return 1LL;
}
