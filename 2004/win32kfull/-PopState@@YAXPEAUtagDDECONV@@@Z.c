/*
 * XREFs of ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C021B8E4
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BDD0 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C190 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C7B0 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C9F0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021CE00 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021CF70 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021D260 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C021E188 (xxxFreeDdeConv.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     FreeDdeXact @ 0x1C021D4B0 (FreeDdeXact.c)
 */

void __fastcall PopState(struct tagDDECONV *a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  char *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  _QWORD *v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v15[2] = 0LL;
  v1 = (_QWORD *)((char *)a1 + 56);
  v2 = *((_QWORD *)a1 + 7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v15[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v15;
  v15[1] = v2;
  HMLockObject(v2);
  v5 = *v1;
  v13 = v1;
  v14 = *(_QWORD *)(v5 + 24);
  v6 = v14;
  v7 = HMAssignmentLock(&v13);
  v8 = (char *)a1 + 64;
  if ( v6 )
    v8 = (char *)(v7 + 24);
  HMAssignmentUnlock(v8);
  v12 = ThreadUnlock1(v10, v9, v11);
  if ( v12 )
    FreeDdeXact(v12);
}
