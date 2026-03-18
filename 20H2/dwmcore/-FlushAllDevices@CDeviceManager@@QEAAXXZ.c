/*
 * XREFs of ?FlushAllDevices@CDeviceManager@@QEAAXXZ @ 0x1800D5DE8
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18007B000 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007CE20 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x18019A610 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x1800D5E58 (-Flush@CD3DDevice@@QEAAXXZ.c)
 */

void __fastcall CDeviceManager::FlushAllDevices(CDeviceManager *this)
{
  CD3DDevice **v1; // rdi
  CD3DDevice **i; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = &stru_180348570;
  EnterCriticalSection(&stru_180348570);
  v1 = (CD3DDevice **)xmmword_1803485A0;
  for ( i = (CD3DDevice **)qword_180348598; i != v1; i += 2 )
  {
    if ( *((int *)*i + 282) >= 0 )
      CD3DDevice::Flush(*i);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
}
