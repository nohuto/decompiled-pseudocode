/*
 * XREFs of ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0069480
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMouseLatencyTracker@@@Z @ 0x1C0069808 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAU_MOUSE_INPUT_DATA@@PEAU_PTPMou.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C01C360C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z @ 0x1C006969C (-CalculateLatencyInMicroseconds@MousePerfSummary@@AEAA_K_K0@Z.c)
 *     ?SampleRandomPickEnd@MousePerfSummary@@AEAAXXZ @ 0x1C0069764 (-SampleRandomPickEnd@MousePerfSummary@@AEAAXXZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0069980 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@333333333333333@Z @ 0x1C01C49E4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTempl.c)
 *     ?SendMouseLatencyTelemetryRandomPick@MousePerfSummary@@AEAAXXZ @ 0x1C01C53B8 (-SendMouseLatencyTelemetryRandomPick@MousePerfSummary@@AEAAXXZ.c)
 *     ?SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ @ 0x1C01C55A0 (-SendMousePerfSummaryTelemetry@MousePerfSummary@@AEAAXXZ.c)
 *     ?UpdatePerfData@MousePerfStage@@QEAAX_K@Z @ 0x1C01C5A08 (-UpdatePerfData@MousePerfStage@@QEAAX_K@Z.c)
 */

void __fastcall MousePerfSummary::CollectMousePerfTelemetry(MousePerfSummary *this, const struct _MousePerf *a2)
{
  unsigned __int64 *v3; // rsi
  MousePerfSummary *v4; // rcx
  MousePerfSummary *v6; // rcx
  MousePerfSummary *v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  int v10; // ecx
  struct tagTHREADINFO *v11; // r15
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  MousePerfSummary *v17; // rax
  MousePerfSummary *v18; // rcx
  MousePerfSummary *v19; // rcx
  MousePerfSummary *v20; // rcx
  MousePerfSummary *v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  MousePerfStage *v24; // rcx
  __int64 v25; // [rsp+A0h] [rbp-80h] BYREF
  unsigned __int64 v26; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v31; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v35; // [rsp+F0h] [rbp-30h] BYREF
  _QWORD v36[7]; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v37; // [rsp+140h] [rbp+20h] BYREF
  __int64 v38; // [rsp+148h] [rbp+28h] BYREF
  __int64 v39; // [rsp+150h] [rbp+30h] BYREF
  __int64 v40; // [rsp+158h] [rbp+38h] BYREF

  v3 = (unsigned __int64 *)((char *)a2 + 8);
  v4 = (MousePerfSummary *)*((unsigned int *)a2 + 18);
  *((_DWORD *)this + 131) = (_DWORD)v4;
  if ( (_DWORD)v4 == 1 )
  {
    v15 = *((_QWORD *)a2 + 2);
    v16 = *(_QWORD *)a2;
    if ( !v15 )
      v15 = *v3;
    v17 = (MousePerfSummary *)MousePerfSummary::CalculateLatencyInMicroseconds(v4, v16, v15);
    *((_QWORD *)this + 50) = v17;
    *((_QWORD *)this + 57) = MousePerfSummary::CalculateLatencyInMicroseconds(v17, *((_QWORD *)a2 + 2), *v3);
    *((_QWORD *)this + 51) = MousePerfSummary::CalculateLatencyInMicroseconds(v18, *v3, *((_QWORD *)a2 + 3));
    *((_QWORD *)this + 58) = MousePerfSummary::CalculateLatencyInMicroseconds(
                               v19,
                               *((_QWORD *)a2 + 3),
                               *((_QWORD *)a2 + 4));
    *((_QWORD *)this + 59) = MousePerfSummary::CalculateLatencyInMicroseconds(
                               v20,
                               *((_QWORD *)a2 + 4),
                               *((_QWORD *)a2 + 7));
    *((_QWORD *)this + 52) = MousePerfSummary::CalculateLatencyInMicroseconds(
                               v21,
                               *((_QWORD *)a2 + 7),
                               *((_QWORD *)a2 + 8));
    MousePerfStage::UpdatePerfData(this, v22);
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 40), *((_QWORD *)this + 57));
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 80), *((_QWORD *)this + 51));
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 120), *((_QWORD *)this + 58));
    v23 = *((_QWORD *)this + 59);
    v24 = (MousePerfSummary *)((char *)this + 160);
    goto LABEL_15;
  }
  *((_QWORD *)this + 50) = MousePerfSummary::CalculateLatencyInMicroseconds(v4, *(_QWORD *)a2, *v3);
  *((_QWORD *)this + 51) = MousePerfSummary::CalculateLatencyInMicroseconds(v6, *v3, *((_QWORD *)a2 + 7));
  *((_QWORD *)this + 52) = MousePerfSummary::CalculateLatencyInMicroseconds(
                             v7,
                             *((_QWORD *)a2 + 7),
                             *((_QWORD *)a2 + 8));
  if ( !v10 )
  {
    MousePerfStage::UpdatePerfData(this, v9);
    v23 = *((_QWORD *)this + 51);
    v24 = (MousePerfSummary *)((char *)this + 80);
LABEL_15:
    MousePerfStage::UpdatePerfData(v24, v23);
    MousePerfStage::UpdatePerfData((MousePerfSummary *)((char *)this + 200), *((_QWORD *)this + 52));
  }
  v11 = gptiForeground;
  if ( gptiForeground )
  {
    v8 = *((_QWORD *)gptiForeground + 52);
    if ( v8 )
    {
      RtlStringCchCopyW((unsigned __int16 *)this + 242, 0x10uLL, (const unsigned __int16 *)(v8 + 992));
      *((_WORD *)this + 257) = 0;
      *((_DWORD *)this + 129) = *(_DWORD *)(*((_QWORD *)v11 + 52) + 56LL);
    }
  }
  if ( (unsigned int)dword_1C024B170 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C024B170, 16LL, v8, v9) )
  {
    v37 = *((_QWORD *)a2 + 8);
    v38 = *((_QWORD *)a2 + 7);
    v39 = *((_QWORD *)a2 + 4);
    v40 = *((_QWORD *)a2 + 3);
    v25 = *((_QWORD *)a2 + 2);
    v26 = *v3;
    v27 = *(_QWORD *)a2;
    v28 = *((_QWORD *)a2 + 6);
    v29 = *((_QWORD *)a2 + 5);
    v30 = *((_QWORD *)this + 59);
    v31 = *((_QWORD *)this + 58);
    v32 = *((_QWORD *)this + 57);
    v33 = *((_QWORD *)this + 52);
    v34 = *((_QWORD *)this + 51);
    v35 = *((_QWORD *)this + 50);
    v36[0] = *((int *)this + 131);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v12,
      (unsigned int)&unk_1C0221885,
      v13,
      v14,
      (__int64)v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37);
  }
  MousePerfSummary::SampleRandomPickEnd(this);
  if ( (unsigned int)(*((_DWORD *)this + 131) - 2) > 1 )
  {
    MousePerfSummary::SendMousePerfSummaryTelemetry(this);
    MousePerfSummary::SendMouseLatencyTelemetryRandomPick(this);
  }
}
