/*
 * XREFs of ??4?$TimestampedProperty@W4ButtonFlags@SpatialInteractionDevices@@@Holographic@Internal@Windows@@QEAAAEAU0123@$$QEAW4ButtonFlags@SpatialInteractionDevices@@@Z @ 0x1800C5D54
 * Callers:
 *     _lambda_b4e0cd5f6af37fda6baddea144408786_::operator() @ 0x18016A430 (_lambda_b4e0cd5f6af37fda6baddea144408786_--operator().c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER *__fastcall Windows::Internal::Holographic::TimestampedProperty<enum SpatialInteractionDevices::ButtonFlags>::operator=(
        LARGE_INTEGER *a1,
        DWORD *a2)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  a1->LowPart = *a2;
  QueryPerformanceCounter(&PerformanceCount);
  a1[1] = PerformanceCount;
  return a1;
}
