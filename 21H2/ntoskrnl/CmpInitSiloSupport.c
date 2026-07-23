/*
 * XREFs of CmpInitSiloSupport @ 0x1407A58F8
 * Callers:
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     PspStorageAllocSlot @ 0x140795A48 (PspStorageAllocSlot.c)
 *     CmInitServerSiloState @ 0x1407A5928 (CmInitServerSiloState.c)
 */

__int64 __fastcall CmpInitSiloSupport(__int64 a1)
{
  __int64 result; // rax

  result = PspStorageAllocSlot((ULONG *)&CmpSiloContextSlot);
  if ( (int)result >= 0 )
    return CmInitServerSiloState(a1);
  return result;
}
