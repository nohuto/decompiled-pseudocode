/*
 * XREFs of MmStoreFreeVirtualMemory @ 0x1406E8C30
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1403092F0 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     MiFreeVadRange @ 0x1402AB094 (MiFreeVadRange.c)
 *     MiUnlockPageTableRange @ 0x14032085C (MiUnlockPageTableRange.c)
 */

__int64 __fastcall MmStoreFreeVirtualMemory(unsigned __int64 a1)
{
  volatile signed __int32 *v2; // rbp
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  _KPROCESS *Process; // rax
  char v7; // [rsp+68h] [rbp+10h] BYREF
  int v8; // [rsp+70h] [rbp+18h] BYREF

  v2 = MiObtainReferencedVadEx(a1, 0, &v8);
  v3 = *((unsigned int *)v2 + 7) | ((unsigned __int64)*((unsigned __int8 *)v2 + 33) << 32);
  v4 = *((unsigned int *)v2 + 6) | ((unsigned __int64)*((unsigned __int8 *)v2 + 32) << 32);
  MiUnlockPageTableRange(a1, (v3 << 12) | 0xFFF);
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = 0;
  return MiFreeVadRange(v2, (int)&v7, v4, v3, (__int64)Process, 0);
}
