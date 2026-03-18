/*
 * XREFs of DpiLdaPreStartChain @ 0x1C0066474
 * Callers:
 *     DpiLdaStartAdapterInChain @ 0x1C0396848 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     DpiFdoCreateSysMmAdapter @ 0x1C01F58C8 (DpiFdoCreateSysMmAdapter.c)
 */

__int64 __fastcall DpiLdaPreStartChain(struct _DEVICE_OBJECT *a1)
{
  int SysMmAdapter; // eax
  unsigned int v2; // ebx

  if ( *((_QWORD *)a1->DeviceExtension + 709) )
    return 0LL;
  SysMmAdapter = DpiFdoCreateSysMmAdapter(a1);
  v2 = SysMmAdapter;
  if ( SysMmAdapter >= 0 )
    return 0LL;
  WdLogSingleEntry1(2LL, SysMmAdapter);
  return v2;
}
