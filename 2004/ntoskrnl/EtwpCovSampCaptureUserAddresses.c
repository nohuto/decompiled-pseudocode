/*
 * XREFs of EtwpCovSampCaptureUserAddresses @ 0x14093F42C
 * Callers:
 *     EtwpCovSampCaptureApc @ 0x1405A8EC0 (EtwpCovSampCaptureApc.c)
 *     EtwpCovSampCaptureSample @ 0x1405A9C78 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     EtwpCovSampCaptureBufferAddIP @ 0x1405A9038 (EtwpCovSampCaptureBufferAddIP.c)
 *     EtwpCovSampCaptureBufferGet @ 0x1405A9070 (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x14093EAEC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureUserStack @ 0x14093F498 (EtwpCovSampCaptureUserStack.c)
 */

__int64 __fastcall EtwpCovSampCaptureUserAddresses(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdi

  v4 = EtwpCovSampCaptureBufferGet(a1);
  v5 = 0;
  v6 = v4;
  if ( v4 )
  {
    EtwpCovSampCaptureBufferAddIP(v4, a2);
    EtwpCovSampCaptureUserStack();
    EtwpCovSampCaptureBufferMapAddressesAndQueue(a1, v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
