/*
 * XREFs of CcIncrementVacbActiveCount @ 0x14031BAB4
 * Callers:
 *     CcGetVirtualAddressIfMapped @ 0x14031A194 (CcGetVirtualAddressIfMapped.c)
 *     CcGetVacbMiss @ 0x14031B710 (CcGetVacbMiss.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcIncrementVacbActiveCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 16));
  if ( !(_WORD)result )
    KeBugCheckEx(0x34u, 0x9FFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( (_WORD)result == 1 )
    _InterlockedAdd((volatile signed __int32 *)(v1 + 544), 1u);
  return result;
}
