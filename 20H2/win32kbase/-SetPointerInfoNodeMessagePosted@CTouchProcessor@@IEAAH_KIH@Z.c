/*
 * XREFs of ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1C0199138
 * Callers:
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x1C01931A0 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C018B6A8 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z @ 0x1C0193144 (-LookupNode@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@K@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C019C058 (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeMessagePosted(
        struct _KTHREAD **this,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  __int64 v6; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  PDEVICE_OBJECT v12; // rcx
  int v13; // r9d
  struct CPointerInputFrame *FrameById; // rax
  CTouchProcessor *v15; // rcx
  __int64 v16; // r9
  struct CPointerInputFrame *v17; // rbp
  struct CPointerInfoNode *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  int *v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // esi
  int v28; // edi
  int v29; // eax
  int v30; // eax
  int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx

  v6 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      234,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  if ( !(unsigned int)IsPointerInputMessageWithState(a3) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10, v11);
  if ( !v6 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v13 = 235;
LABEL_14:
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(v12->DeviceExtension, v8, 7, v13, (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
    return 0LL;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v6 + 28));
  v17 = FrameById;
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v12 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 0LL;
    v13 = 236;
    goto LABEL_14;
  }
  v19 = CTouchProcessor::LookupNode(v15, FrameById, *(unsigned int *)(v6 + 32), v16);
  v23 = *(unsigned __int16 *)(v6 + 16);
  v24 = (int *)v19;
  if ( *((_WORD *)v19 + 86) != (_WORD)v23 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v20, v21, v22);
  v25 = *((unsigned int *)v17 + 12);
  if ( v24[2] >= (unsigned int)v25 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v20, v21, v22);
  switch ( a3 )
  {
    case 0x249u:
      v20 = (unsigned int)*v24;
      v26 = (unsigned int)v20;
      if ( (v20 & 8) == 0 && (v20 & 0x40) == 0 && (v24[45] & 1) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM((unsigned int)v20, v20, v21, v22);
        v26 = (unsigned int)*v24;
      }
      v27 = 0x800000;
      v28 = 0x1000000;
      if ( (v26 & 0x800000) != 0 || (v26 & 0x1000000) != 0 || (v26 & 0x4000000) != 0 || (v26 & 0x2000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v20, v21, v22);
        LODWORD(v26) = *v24;
      }
      v29 = a4 << 24;
LABEL_31:
      v30 = v27 | v26 ^ v28 & (v26 ^ v29);
LABEL_61:
      *v24 = v30;
      goto LABEL_62;
    case 0x24Au:
      v26 = (unsigned int)*v24;
      v27 = 0x8000000;
      v28 = 0x10000000;
      if ( (v26 & 0x8000000) != 0 || (v26 & 0x10000000) != 0 || (v26 & 0x40000000) != 0 || (v26 & 0x20000000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v20, v21, v22);
        LODWORD(v26) = *v24;
      }
      v29 = a4 << 28;
      goto LABEL_31;
    case 0x251u:
      v31 = *v24;
      if ( (*v24 & 0x40) == 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v20, v21, v22);
        v31 = *v24;
      }
      if ( v31 < 0 || (v25 = (unsigned int)v24[1], (v25 & 1) != 0) || (v25 & 4) != 0 || (v25 & 2) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v20, v21, v22);
        v31 = *v24;
        LODWORD(v25) = v24[1];
      }
      *v24 = v31 | 0x80000000;
      v32 = v25 ^ ((unsigned __int8)a4 ^ (unsigned __int8)v25) & 1;
      break;
    case 0x252u:
      v33 = (unsigned int)v24[1];
      if ( (v33 & 8) != 0 || (v33 & 0x10) != 0 || (v33 & 0x40) != 0 || (v33 & 0x20) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v20, v21, v22);
        LODWORD(v33) = v24[1];
      }
      v32 = v33 ^ ((unsigned __int8)v33 ^ (unsigned __int8)(16 * a4)) & 0x10 | 8;
      break;
    default:
      v34 = (unsigned int)*v24;
      if ( (v34 & 0x80000) != 0 || (v34 & 0x400000) != 0 || (v34 & 0x200000) != 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v20, v21, v22);
        LODWORD(v34) = *v24;
      }
      v30 = v34 ^ (v34 ^ (a4 << 20)) & 0x100000 | 0x80000;
      goto LABEL_61;
  }
  v24[1] = v32;
LABEL_62:
  if ( a4 )
    *(_DWORD *)(160LL * (unsigned int)v24[2] + *((_QWORD *)v17 + 18) + 140) |= 8u;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v20) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      7,
      237,
      (__int64)&WPP_50814762fbc63e38c7e5eacf83347307_Traceguids);
  }
  return 1LL;
}
