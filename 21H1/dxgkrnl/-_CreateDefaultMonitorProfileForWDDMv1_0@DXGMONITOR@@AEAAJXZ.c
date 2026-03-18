/*
 * XREFs of ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C02F540C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0167C8C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C016A258 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F652C (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C001EDD4 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     ConvertVideoSignalInfo @ 0x1C0169D90 (ConvertVideoSignalInfo.c)
 */

__int64 __fastcall DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(DXGMONITOR *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r15
  const wchar_t *v9; // rax
  __int64 v10; // rcx
  unsigned __int16 *v11; // r12
  __int64 v12; // r13
  ULONG v13; // r8d
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // cx
  int VideoModeDescriptor; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  _DWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // r14
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int128 v36; // [rsp+38h] [rbp-39h]
  _VideoModeDescriptor v37; // [rsp+48h] [rbp-29h] BYREF
  int v38; // [rsp+D8h] [rbp+67h]
  const wchar_t *v39; // [rsp+E0h] [rbp+6Fh]

  v38 = 0;
  v2 = WdLogNewEntry5_WdDmmEvent(this);
  *(_QWORD *)(v2 + 24) = this;
  WdLogEvent5_WdDmmEvent(v2);
  if ( *((_DWORD *)this + 52) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4, v3);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = (_QWORD *)((char *)this + 216);
  if ( (_QWORD *)*v6 != v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v4, v3);
    WdLogEvent5_WdAssertion(v7);
  }
  *(_QWORD *)&v36 = 0x800000008LL;
  v8 = 0LL;
  *((_QWORD *)&v36 + 1) = 8LL;
  while ( 2 )
  {
    v9 = L"<FHKU";
    v10 = (unsigned int)v8;
    v39 = L"<FHKU";
    v11 = &word_1C008D430[2 * v8];
    v12 = 0LL;
    do
    {
      v13 = *v9;
      v14 = word_1C008D430[2 * v10 + 1];
      v15 = *v11;
      memset(&v37, 0, sizeof(v37));
      VideoModeDescriptor = GTF_GetVideoModeDescriptor(v15, v14, v13, 1u, 0, &v37);
      v19 = VideoModeDescriptor;
      if ( VideoModeDescriptor < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v18, v17);
        v32 = 2LL;
        v33 = (_QWORD *)(v31 + 24);
        do
        {
          v34 = *v11++;
          *v33++ = v34;
          --v32;
        }
        while ( v32 );
        *(_QWORD *)(v31 + 48) = v19;
        *(_QWORD *)(v31 + 40) = aFhku[v12];
        WdLogEvent5_WdError(v31);
        goto LABEL_22;
      }
      v20 = operator new[](0x78uLL, 0x4D677844u, PagedPool);
      v23 = v20;
      if ( !v20 )
      {
        v30 = WdLogNewEntry5_WdError(v22, v21);
        WdLogEvent5_WdError(v30);
        LODWORD(v19) = -1073741801;
        goto LABEL_22;
      }
      *v20 = (*((_DWORD *)this + 53))++;
      LODWORD(v19) = ConvertVideoSignalInfo(&v37.PixelClockRate, (__int64)(v20 + 2));
      if ( (int)v19 < 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v25, v24);
        WdLogEvent5_WdAssertion(v26);
      }
      v23[16] = 2;
      v23[21] = 1;
      v23[22] = 2;
      *(_OWORD *)(v23 + 17) = v36;
      v23[28] = 5;
      v27 = v23 + 24;
      v28 = (_QWORD *)*((_QWORD *)this + 28);
      if ( (_QWORD *)*v28 != v6 )
        __fastfail(3u);
      ++v38;
      v27[1] = v28;
      v12 = (unsigned int)(v12 + 1);
      *v27 = v6;
      *v28 = v27;
      v9 = v39 + 1;
      *((_QWORD *)this + 28) = v27;
      ++*((_DWORD *)this + 52);
      ++v39;
      v10 = (unsigned int)v8;
    }
    while ( (unsigned int)v12 < 5 );
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 < 0x10 )
      continue;
    break;
  }
  if ( *((DXGMONITOR **)this + 33) != (DXGMONITOR *)((char *)this + 264) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v10, v24);
    WdLogEvent5_WdAssertion(v29);
  }
  *((_DWORD *)this + 30) = 3;
LABEL_22:
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ ((unsigned int)~(_DWORD)v19 >> 28)) & 8;
  return (unsigned int)v19;
}
