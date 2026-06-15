/*
 * XREFs of ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14005CFD4
 * Callers:
 *     ??1?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14005CBA0 (--1-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x14005CC3C (--1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x14005CD34 (--1-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14005D1C0 (--_G-$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCSpatialCrossProcessServerEndpoint@@UEAAPEAXI@Z @ 0x14005D380 (--_GCSpatialCrossProcessServerEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002134 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140016FBC (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C938 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14003FB64 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint(
        CSpatialCrossProcessServerEndpoint *this,
        int a2,
        int a3)
{
  void *v4; // rcx
  void *v5; // rcx
  char *v6; // rcx

  *(_QWORD *)this = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 164) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `IAudioCrossProcessServerEndpoint'};
  *((_QWORD *)this + 165) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessServerEndpoint'};
  v4 = (void *)*((_QWORD *)this + 175);
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 175) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    AERTDestroyZoneHeap(v5, a2, a3);
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_QWORD *)this + 168) = 0LL;
  wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset((__int64 *)this + 167);
  v6 = (char *)*((_QWORD *)this + 169);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v6);
    *((_QWORD *)this + 169) = 0LL;
  }
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)this + 167);
  CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(this);
}
