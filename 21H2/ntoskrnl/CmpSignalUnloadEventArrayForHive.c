/*
 * XREFs of CmpSignalUnloadEventArrayForHive @ 0x1405E04CC
 * Callers:
 *     CmpCompleteUnloadKey @ 0x1405E0268 (CmpCompleteUnloadKey.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpSignalUnloadEventArrayForHive(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // eax

  v1 = 0LL;
  if ( *(_DWORD *)(a1 + 2912) )
  {
    do
    {
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(a1 + 2920) + 8 * v1), 0, 0);
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)(*(_QWORD *)(a1 + 2920) + 8 * v1));
      v3 = *(_DWORD *)(a1 + 2912);
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < v3 );
    if ( v3 )
      ExFreePoolWithTag(*(PVOID *)(a1 + 2920), 0);
  }
}
