/*
 * XREFs of ?AddRef@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x14001F940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CSystemAudioDeviceShared>::AddRef(__int64 a1, volatile int *a2)
{
  return ATL::CComObject<CSystemAudioDeviceShared>::AddRef(a1 - 16, a2);
}
