/*
 * XREFs of ?_CreateDefaultMonitorProfileForWDDMv1_0@MonitorModes@DxgMonitor@@AEAAJXZ @ 0x1C03B8054
 * Callers:
 *     ?CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1C03B7A9C (-CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z @ 0x1C002288C (-GTF_GetVideoModeDescriptor@@YAJGGKKEPEAU_VideoModeDescriptor@@@Z.c)
 *     ?ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00273C8 (-ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::_CreateDefaultMonitorProfileForWDDMv1_0(DxgMonitor::MonitorModes *this)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbp
  __int64 v4; // r15
  const wchar_t *v5; // r13
  unsigned __int16 v6; // dx
  ULONG v7; // r8d
  unsigned __int16 v8; // cx
  int VideoModeDescriptor; // eax
  __int64 v10; // r9
  int v11; // edi
  __int64 v12; // rax
  __int64 v13; // r14
  int v14; // edx
  _QWORD *v15; // r14
  _QWORD *v16; // rax
  __int128 v18; // [rsp+30h] [rbp-88h]
  _VideoModeDescriptor v19; // [rsp+40h] [rbp-78h] BYREF
  int v20; // [rsp+C0h] [rbp+8h]

  v20 = 0;
  WdLogSingleEntry1(7LL, this);
  if ( *((_DWORD *)this + 30) )
    WdLogSingleEntry0(1LL);
  v2 = (_QWORD *)((char *)this + 128);
  if ( (_QWORD *)*v2 != v2 )
    WdLogSingleEntry0(1LL);
  v3 = 0LL;
  *(_QWORD *)&v18 = 0x800000008LL;
  *((_QWORD *)&v18 + 1) = 8LL;
  while ( 2 )
  {
    v4 = 0LL;
    v5 = L"<FHKU";
    do
    {
      v6 = word_1C010B1C0[2 * v3 + 1];
      v7 = *v5;
      v8 = word_1C010B1C0[2 * v3];
      memset(&v19, 0, sizeof(v19));
      VideoModeDescriptor = GTF_GetVideoModeDescriptor(v8, v6, v7, 1u, 0, &v19);
      v11 = VideoModeDescriptor;
      if ( VideoModeDescriptor < 0 )
      {
        WdLogSingleEntry4(2LL, word_1C010B1C0[2 * v3], word_1C010B1C0[2 * v3 + 1], aFhku[v4], VideoModeDescriptor);
        goto LABEL_20;
      }
      v12 = operator new[](0x78uLL, 0x4D677844u, 256LL, v10);
      v13 = v12;
      if ( !v12 )
      {
        WdLogSingleEntry0(2LL);
        v11 = -1073741801;
        goto LABEL_20;
      }
      v14 = *((_DWORD *)this + 31);
      *((_DWORD *)this + 31) = v14 + 1;
      *(_DWORD *)v12 = v14;
      v11 = ConvertVideoSignalInfo(&v19, (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v12 + 8));
      if ( v11 < 0 )
        WdLogSingleEntry0(1LL);
      *(_DWORD *)(v13 + 64) = 2;
      *(_DWORD *)(v13 + 84) = 1;
      *(_DWORD *)(v13 + 88) = 2;
      *(_OWORD *)(v13 + 68) = v18;
      *(_DWORD *)(v13 + 112) = 5;
      v15 = (_QWORD *)(v13 + 96);
      v16 = (_QWORD *)*((_QWORD *)this + 17);
      if ( (_QWORD *)*v16 != v2 )
        __fastfail(3u);
      *v15 = v2;
      v15[1] = v16;
      ++v5;
      *v16 = v15;
      *((_QWORD *)this + 17) = v15;
      ++*((_DWORD *)this + 30);
      v4 = (unsigned int)(v4 + 1);
      ++v20;
    }
    while ( (unsigned int)v4 < 5 );
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 < 0x10 )
      continue;
    break;
  }
  if ( *((DxgMonitor::MonitorModes **)this + 22) != (DxgMonitor::MonitorModes *)((char *)this + 176) )
    WdLogSingleEntry0(1LL);
  *((_DWORD *)this + 28) = 3;
LABEL_20:
  *((_BYTE *)this + 116) = v11 >= 0;
  return (unsigned int)v11;
}
