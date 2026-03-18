/*
 * XREFs of SetVacb @ 0x1402C1720
 * Callers:
 *     CcGetVacbMiss @ 0x1402BE330 (CcGetVacbMiss.c)
 *     CcDereferenceFileOffset @ 0x1404E5F28 (CcDereferenceFileOffset.c)
 *     CcReferenceFileOffset @ 0x1404E60F4 (CcReferenceFileOffset.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404E6424 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x1402C5060 (CcSetVacbLargeOffset.c)
 */

char __fastcall SetVacb(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  char v5; // r8

  v5 = 1;
  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v5 = CcSetVacbLargeOffset(a1, a2, a3, a4);
  }
  else if ( a3 < 0xFFFFFFFFFFFFFFFEuLL )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * ((unsigned __int64)(unsigned int)a2 >> 18)) = a3;
  }
  if ( a3 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 540));
    else
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 540));
  }
  return v5;
}
