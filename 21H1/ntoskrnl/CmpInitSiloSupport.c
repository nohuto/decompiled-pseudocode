/*
 * XREFs of CmpInitSiloSupport @ 0x14078CDB8
 * Callers:
 *     CmInitSystem1 @ 0x140A525D4 (CmInitSystem1.c)
 * Callees:
 *     PspStorageAllocSlot @ 0x14077E598 (PspStorageAllocSlot.c)
 *     CmInitServerSiloState @ 0x14078CDE8 (CmInitServerSiloState.c)
 */

__int64 __fastcall CmpInitSiloSupport(__int64 a1)
{
  __int64 result; // rax

  result = PspStorageAllocSlot((ULONG *)&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState(a1);
  return result;
}
