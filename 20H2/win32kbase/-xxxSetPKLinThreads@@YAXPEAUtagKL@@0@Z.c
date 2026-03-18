/*
 * XREFs of ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C008A0C0
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0088548 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C00555C0 (HMAssignmentLock.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C00882B0 (xxxChangeForegroundKeyboardTable.c)
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C008A1A0 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1C01C5F60 (ApiSetEditionImmActivateAndUnloadThreadsLayout.c)
 */

void __fastcall xxxSetPKLinThreads(struct tagKL *a1, struct tagKL *a2)
{
  __int64 v4; // rdx
  __int64 ThreadsWithPKL; // rsi
  int v6; // r8d
  struct tagTHREADINFO **v7; // r14
  __int64 v8; // rax
  _QWORD v9[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]
  struct tagTHREADINFO **v12; // [rsp+70h] [rbp+8h] BYREF

  v12 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  ThreadsWithPKL = GetThreadsWithPKL(&v12, (struct _TL *)&v10, a2);
  if ( a1 && gptiForeground && *((struct tagKL **)gptiForeground + 55) == a2 )
    xxxChangeForegroundKeyboardTable(a2, a1);
  if ( (_DWORD)ThreadsWithPKL )
  {
    if ( a2 )
    {
      ApiSetEditionImmActivateAndUnloadThreadsLayout((_DWORD)v12, ThreadsWithPKL, v6, (_DWORD)a1, *((_DWORD *)a2 + 10));
    }
    else
    {
      v7 = v12;
      do
      {
        v8 = (__int64)*v7 + 440;
        v9[1] = a1;
        v9[0] = v8;
        HMAssignmentLock((__int64)v9, v4);
        ++v7;
        --ThreadsWithPKL;
      }
      while ( ThreadsWithPKL );
    }
    if ( qword_1C024FFE8 )
      qword_1C024FFE8(&v10);
  }
  if ( a2 )
  {
    if ( *((struct tagKL **)a2 + 2) != a1 )
    {
      *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) = *((_QWORD *)a1 + 2);
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = *((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
      *((_QWORD *)a1 + 3) = a2;
      *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) = a1;
      *((_QWORD *)a2 + 2) = a1;
    }
  }
}
