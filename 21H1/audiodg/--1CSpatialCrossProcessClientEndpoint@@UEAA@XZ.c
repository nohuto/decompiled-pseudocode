/*
 * XREFs of ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x14005CF50
 * Callers:
 *     ??1?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14005CB3C (--1-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ @ 0x14005CC04 (--1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ.c)
 *     ??1?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14005CC74 (--1-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ??_G?$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14005D140 (--_G-$CComContainedObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECSpatialCrossProcessClientEndpoint@@UEAAPEAXI@Z @ 0x14005D340 (--_ECSpatialCrossProcessClientEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140016FBC (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint(
        CSpatialCrossProcessClientEndpoint *this,
        int a2,
        int a3)
{
  void *v4; // rcx

  *(_QWORD *)this = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 2) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `ISpatialAudioProcessBlockRT'};
  *((_QWORD *)this + 3) = &CSpatialCrossProcessServerEndpoint::`vftable'{for `ISpatialAudioCrossProcessResourceControl'};
  *((_QWORD *)this + 164) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `ISpatialAudioCrossProcessClientEndpoint'};
  *((_QWORD *)this + 165) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock'};
  *((_QWORD *)this + 166) = &CSpatialCrossProcessClientEndpoint::`vftable'{for `IAudioClock2'};
  v4 = (void *)*((_QWORD *)this + 168);
  if ( v4 )
    AERTDestroyZoneHeap(v4, a2, a3);
  CSpatialCrossProcessBaseEndpoint::~CSpatialCrossProcessBaseEndpoint(this);
}
