/*
 * XREFs of ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x18010C460
 * Callers:
 *     ??1CStreamResource@Sarm@@QEAA@XZ @ 0x1801065AC (--1CStreamResource@Sarm@@QEAA@XZ.c)
 *     ?Add@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@PEAPEAU__POSITION@@@Z @ 0x180106850 (-Add@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sar.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180106B9C (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?FreeNode@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1801071E0 (-FreeNode@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioStr.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180108FC4 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x18010AEC8 (-AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x18010BB40 (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 */

void __fastcall Sarm::CStreamResource::Reclaim(Sarm::CStreamResource *this, __int64 a2, __int64 a3, __int64 a4)
{
  Sarm::CEndpointResourcePool *v4; // rdi
  unsigned int v6; // edx
  __int64 v7; // rcx
  const char *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (Sarm::CEndpointResourcePool *)*((_QWORD *)this + 1);
  if ( v4 )
  {
    v6 = *((_DWORD *)this + 21) + *((_DWORD *)this + 20);
    if ( v6 )
    {
      Sarm::CEndpointResourcePool::AddToDynamicPool(v4, v6, a3, a4);
      v4 = (Sarm::CEndpointResourcePool *)*((_QWORD *)this + 1);
      *((_QWORD *)this + 10) = 0LL;
      *((_DWORD *)this + 19) = 0;
    }
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x2B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\EndpointResourcePool.h",
      (const char *)(*((_DWORD *)v4 + 3) == 0),
      (bool)"Detaching from CEndpointResourcePool when nothing attached",
      v8);
    --*((_DWORD *)v4 + 3);
    *((_QWORD *)this + 1) = 0LL;
  }
  v7 = *(_QWORD *)this;
  *(_QWORD *)this = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_BYTE *)this + 88) = 0;
  *((GUID *)this + 1) = GUID_00000000_0000_0000_0000_000000000000;
}
