/*
 * XREFs of ?FlushAllDevices@CDeviceManager@@QEAAXXZ @ 0x1800CE2A8
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18003E980 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x1800407A0 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ?OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ @ 0x18019EE40 (-OnPresentComplete@MagnifierCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800386EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x1800CE318 (-Flush@CD3DDevice@@QEAAXXZ.c)
 */

void __fastcall CDeviceManager::FlushAllDevices(CDeviceManager *this)
{
  CD3DDevice **v1; // rdi
  CD3DDevice **i; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  v1 = (CD3DDevice **)xmmword_18034D610;
  for ( i = (CD3DDevice **)qword_18034D608; i != v1; i += 2 )
  {
    if ( *((int *)*i + 282) >= 0 )
      CD3DDevice::Flush(*i);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v3);
}
