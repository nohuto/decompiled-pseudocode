/*
 * XREFs of CmpInitSiloSupport @ 0x14079B640
 * Callers:
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 * Callees:
 *     PspStorageAllocSlot @ 0x14078B328 (PspStorageAllocSlot.c)
 *     CmInitServerSiloState @ 0x14079B670 (CmInitServerSiloState.c)
 */

__int64 __fastcall CmpInitSiloSupport(__int64 a1)
{
  __int64 result; // rax

  result = PspStorageAllocSlot((ULONG *)&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState(a1);
  return result;
}
