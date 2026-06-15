/*
 * XREFs of ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x1400169A4
 * Callers:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x14001691C (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14005BB8C (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 *     ??_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x14005C0C0 (--_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140016A68 (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140016B64 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140016F44 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140016F9C (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(CCrossProcessBaseEndpoint *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rcx

  *(_QWORD *)this = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &CCrossProcessBaseEndpoint::`vftable'{for `IAudioEndpointRT'};
  v2 = (void *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    AERTDestroyZoneHeap(v2);
    *((_QWORD *)this + 18) = 0LL;
  }
  v3 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *((_QWORD *)this + 9) = 0LL;
  v4 = AERTGetDLLRTHeap();
  AERTFree(*((void **)this + 10), v4);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 25) = &CCrossProcessEndpointTraceLogger::`vftable';
  CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum CpGlitchEvent,unsigned int *,0,0>((char *)this + 304);
  *((_QWORD *)this + 28) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
}
