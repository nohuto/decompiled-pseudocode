/*
 * XREFs of ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C02F997C
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0186E4C (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0188BF4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02FAA9C (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C001F020 (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     ConvertVideoSignalInfo @ 0x1C018872C (ConvertVideoSignalInfo.c)
 */

__int64 __fastcall DXGMONITOR::_CreateDefaultMonitorProfileForWDDMv1_0(DXGMONITOR *this, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r15
  const wchar_t *v10; // rax
  __int64 v11; // rcx
  unsigned __int16 *v12; // r12
  __int64 v13; // r13
  ULONG v14; // r8d
  unsigned __int16 v15; // dx
  unsigned __int16 v16; // cx
  int VideoModeDescriptor; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  _DWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _DWORD *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // r14
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // rcx
  __int128 v37; // [rsp+38h] [rbp-39h]
  _VideoModeDescriptor v38; // [rsp+48h] [rbp-29h] BYREF
  int v39; // [rsp+D8h] [rbp+67h]
  const wchar_t *v40; // [rsp+E0h] [rbp+6Fh]

  v39 = 0;
  v3 = WdLogNewEntry5_WdDmmEvent(this, a2);
  *(_QWORD *)(v3 + 24) = this;
  WdLogEvent5_WdDmmEvent(v3);
  if ( *((_DWORD *)this + 52) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (_QWORD *)((char *)this + 216);
  if ( (_QWORD *)*v7 != v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v8);
  }
  *(_QWORD *)&v37 = 0x800000008LL;
  v9 = 0LL;
  *((_QWORD *)&v37 + 1) = 8LL;
  while ( 2 )
  {
    v10 = L"<FHKU";
    v11 = (unsigned int)v9;
    v40 = L"<FHKU";
    v12 = &word_1C008FAB0[2 * v9];
    v13 = 0LL;
    do
    {
      v14 = *v10;
      v15 = word_1C008FAB0[2 * v11 + 1];
      v16 = *v12;
      memset(&v38, 0, sizeof(v38));
      VideoModeDescriptor = GTF_GetVideoModeDescriptor(v16, v15, v14, 1u, 0, &v38);
      v20 = VideoModeDescriptor;
      if ( VideoModeDescriptor < 0 )
      {
        v32 = WdLogNewEntry5_WdError(v19, v18);
        v33 = 2LL;
        v34 = (_QWORD *)(v32 + 24);
        do
        {
          v35 = *v12++;
          *v34++ = v35;
          --v33;
        }
        while ( v33 );
        *(_QWORD *)(v32 + 48) = v20;
        *(_QWORD *)(v32 + 40) = aFhku[v13];
        WdLogEvent5_WdError(v32);
        goto LABEL_22;
      }
      v21 = operator new[](0x78uLL, 0x4D677844u, PagedPool);
      v24 = v21;
      if ( !v21 )
      {
        v31 = WdLogNewEntry5_WdError(v23, v22);
        WdLogEvent5_WdError(v31);
        LODWORD(v20) = -1073741801;
        goto LABEL_22;
      }
      *v21 = (*((_DWORD *)this + 53))++;
      LODWORD(v20) = ConvertVideoSignalInfo(&v38.PixelClockRate, (__int64)(v21 + 2));
      if ( (int)v20 < 0 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v26, v25);
        WdLogEvent5_WdAssertion(v27);
      }
      v24[16] = 2;
      v24[21] = 1;
      v24[22] = 2;
      *(_OWORD *)(v24 + 17) = v37;
      v24[28] = 5;
      v28 = v24 + 24;
      v29 = (_QWORD *)*((_QWORD *)this + 28);
      if ( (_QWORD *)*v29 != v7 )
        __fastfail(3u);
      ++v39;
      v28[1] = v29;
      v13 = (unsigned int)(v13 + 1);
      *v28 = v7;
      *v29 = v28;
      v10 = v40 + 1;
      *((_QWORD *)this + 28) = v28;
      ++*((_DWORD *)this + 52);
      ++v40;
      v11 = (unsigned int)v9;
    }
    while ( (unsigned int)v13 < 5 );
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 < 0x10 )
      continue;
    break;
  }
  if ( *((DXGMONITOR **)this + 33) != (DXGMONITOR *)((char *)this + 264) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v11, v25);
    WdLogEvent5_WdAssertion(v30);
  }
  *((_DWORD *)this + 30) = 3;
LABEL_22:
  *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ ((unsigned int)~(_DWORD)v20 >> 28)) & 8;
  return (unsigned int)v20;
}
