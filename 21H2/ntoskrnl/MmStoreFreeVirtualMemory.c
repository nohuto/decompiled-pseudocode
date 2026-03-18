/*
 * XREFs of MmStoreFreeVirtualMemory @ 0x1408042A4
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14037DAEC (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiFreeVadRange @ 0x1402ECEB0 (MiFreeVadRange.c)
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 *     MiUnlockPageTableRange @ 0x140395864 (MiUnlockPageTableRange.c)
 */

__int64 __fastcall MmStoreFreeVirtualMemory(unsigned __int64 a1)
{
  ULONG_PTR v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  _KPROCESS *Process; // rax
  int v7; // [rsp+58h] [rbp+10h] BYREF

  v2 = MiObtainReferencedVadEx(a1, 0, &v7);
  v3 = *(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32);
  v4 = *(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32);
  MiUnlockPageTableRange(a1, (v3 << 12) | 0xFFF);
  Process = KeGetCurrentThread()->ApcState.Process;
  LOBYTE(v7) = 0;
  return MiFreeVadRange(v2, (int)&v7, v4, v3, (__int64)Process, 0);
}
