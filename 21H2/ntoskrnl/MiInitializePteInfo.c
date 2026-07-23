/*
 * XREFs of MiInitializePteInfo @ 0x140A4F918
 * Callers:
 *     MiInitializeSystemSpaceMap @ 0x140786910 (MiInitializeSystemSpaceMap.c)
 *     MiInitializeKernelStacks @ 0x140A4E410 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x140A4F1C4 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiInitializePteInfo(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rbp
  char v10; // r12
  unsigned __int64 v11; // r10
  ULONG_PTR v14; // rax
  int v15; // eax
  __int64 result; // rax

  LODWORD(v7) = 0;
  v8 = 0LL;
  v9 = a6 >> 12;
  v10 = a4;
  v11 = a3;
  if ( !a3 )
  {
    v7 = ((((v9 + a7 - 1LL) / a7 + 7) >> 3) + 4095) >> 12;
    v14 = MiReservePtes((__int64)&qword_140C4EF80, v7, 0LL, a4);
    v8 = (_QWORD *)v14;
    if ( !v14 )
      return 0LL;
    v11 = (__int64)(v14 << 25) >> 16;
  }
  if ( !(unsigned int)MiInitializeDynamicBitmap((_QWORD *)a1, v11, v9 / a7, v10) )
  {
    if ( v8 )
      MiReleasePtes((__int64)&qword_140C4EF80, v8, v7);
    return 0LL;
  }
  *(_DWORD *)(a1 + 24) = 2;
  v15 = *(_DWORD *)(a1 + 24);
  if ( a7 == 16 )
    v15 = 6;
  *(_DWORD *)(a1 + 28) = a2;
  *(_DWORD *)(a1 + 24) = v15;
  *(_QWORD *)(a1 + 32) = a1 + 40;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)a1 = 0LL;
  result = 1LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 16) = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
