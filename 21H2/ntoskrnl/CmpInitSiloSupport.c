/*
 * XREFs of CmpInitSiloSupport @ 0x140861E5C
 * Callers:
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 * Callees:
 *     PspStorageAllocSlot @ 0x1408258B8 (PspStorageAllocSlot.c)
 *     CmInitServerSiloState @ 0x140861E8C (CmInitServerSiloState.c)
 */

__int64 __fastcall CmpInitSiloSupport(__int64 a1)
{
  __int64 result; // rax

  result = PspStorageAllocSlot((ULONG *)&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState(a1);
  return result;
}
