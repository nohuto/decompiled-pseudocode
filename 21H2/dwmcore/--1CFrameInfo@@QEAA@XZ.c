/*
 * XREFs of ??1CFrameInfo@@QEAA@XZ @ 0x1801CA600
 * Callers:
 *     <none>
 * Callees:
 *     ??_GTouchUpdateInfo@InteractionLatencyTelemetry@@QEAAPEAXI@Z @ 0x18001A93C (--_GTouchUpdateInfo@InteractionLatencyTelemetry@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x18007CB0C (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CFrameInfo::~CFrameInfo(CFrameInfo *this)
{
  __int64 i; // rbx
  InteractionLatencyTelemetry::TouchUpdateInfo *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 46); i = (unsigned int)(i + 1) )
  {
    v3 = *(InteractionLatencyTelemetry::TouchUpdateInfo **)(*((_QWORD *)this + 20) + 8 * i);
    if ( v3 )
      InteractionLatencyTelemetry::TouchUpdateInfo::`scalar deleting destructor'(v3);
  }
  *((_DWORD *)this + 46) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 160, 8u);
  CFrameInfo::ReleaseResponses(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 24);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 20);
}
