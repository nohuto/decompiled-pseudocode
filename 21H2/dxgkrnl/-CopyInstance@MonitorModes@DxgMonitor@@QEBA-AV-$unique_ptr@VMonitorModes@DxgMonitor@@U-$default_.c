/*
 * XREFs of ?CopyInstance@MonitorModes@DxgMonitor@@QEBA?AV?$unique_ptr@VMonitorModes@DxgMonitor@@U?$default_delete@VMonitorModes@DxgMonitor@@@wistd@@@wistd@@AEBVIMonitorComponentParent@2@AEBVIMonitorRegistry@2@@Z @ 0x1C03B7864
 * Callers:
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C03B5278 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z @ 0x1C020845C (--0MonitorModes@DxgMonitor@@QEAA@AEBVIMonitorComponentParent@1@AEBVIMonitorRegistry@1@@Z.c)
 *     ??1MonitorModes@DxgMonitor@@QEAA@XZ @ 0x1C03B780C (--1MonitorModes@DxgMonitor@@QEAA@XZ.c)
 */

DxgMonitor::MonitorModes **__fastcall DxgMonitor::MonitorModes::CopyInstance(
        __int64 a1,
        DxgMonitor::MonitorModes **a2,
        const struct DxgMonitor::IMonitorComponentParent *a3,
        const struct DxgMonitor::IMonitorRegistry *a4)
{
  DxgMonitor::MonitorModes *v8; // rax
  DxgMonitor::MonitorModes *v9; // rax
  __int64 v10; // r9
  DxgMonitor::MonitorModes *v11; // rbx
  __int64 i; // rax
  __int64 v13; // rax
  DxgMonitor::MonitorModes *v14; // rcx
  DxgMonitor::MonitorModes **v15; // r8
  __int64 v16; // rdi
  int v17; // eax
  _QWORD *v18; // rbp
  _QWORD *j; // rax
  _OWORD *v20; // rax
  DxgMonitor::MonitorModes **v21; // rdx
  DxgMonitor::MonitorModes *v22; // rax
  _QWORD *v23; // rdi

  v8 = (DxgMonitor::MonitorModes *)operator new[](0xF8uLL, 0x4D677844u, 256LL, (__int64)a4);
  if ( v8 && (v9 = DxgMonitor::MonitorModes::MonitorModes(v8, a3, a4), (v11 = v9) != 0LL) )
  {
    *((_BYTE *)v9 + 116) = *(_BYTE *)(a1 + 116);
    *((_DWORD *)v9 + 28) = *(_DWORD *)(a1 + 112);
    for ( i = *(_QWORD *)(a1 + 128); i != a1 + 128; i = *(_QWORD *)(v16 + 96) )
    {
      v16 = i - 96;
      if ( !i )
        v16 = 0LL;
      if ( !v16 )
        break;
      v13 = operator new[](0x78uLL, 0x4D677844u, 256LL, v10);
      if ( !v13 )
      {
LABEL_14:
        WdLogSingleEntry0(6LL);
        *a2 = 0LL;
        DxgMonitor::MonitorModes::~MonitorModes(v11);
        operator delete(v11);
        return a2;
      }
      v14 = (DxgMonitor::MonitorModes *)(v13 + 96);
      *(_OWORD *)v13 = *(_OWORD *)v16;
      *(_OWORD *)(v13 + 16) = *(_OWORD *)(v16 + 16);
      *(_OWORD *)(v13 + 32) = *(_OWORD *)(v16 + 32);
      *(_OWORD *)(v13 + 48) = *(_OWORD *)(v16 + 48);
      *(_OWORD *)(v13 + 64) = *(_OWORD *)(v16 + 64);
      *(_OWORD *)(v13 + 80) = *(_OWORD *)(v16 + 80);
      *(_OWORD *)(v13 + 96) = *(_OWORD *)(v16 + 96);
      *(_QWORD *)(v13 + 112) = *(_QWORD *)(v16 + 112);
      v15 = (DxgMonitor::MonitorModes **)*((_QWORD *)v11 + 17);
      if ( *v15 != (DxgMonitor::MonitorModes *)((char *)v11 + 128) )
LABEL_23:
        __fastfail(3u);
      *(_QWORD *)v14 = (char *)v11 + 128;
      *(_QWORD *)(v13 + 104) = v15;
      *v15 = v14;
      *((_QWORD *)v11 + 17) = v14;
      ++*((_DWORD *)v11 + 30);
      if ( v16 == *(_QWORD *)(a1 + 144) )
        *((_QWORD *)v11 + 18) = v13;
    }
    v17 = *(_DWORD *)(a1 + 124);
    v18 = (_QWORD *)(a1 + 176);
    *((_DWORD *)v11 + 31) = v17;
    for ( j = (_QWORD *)*v18; j != v18; j = (_QWORD *)v23[6] )
    {
      v23 = j - 6;
      if ( !j )
        v23 = 0LL;
      if ( !v23 )
        break;
      v20 = (_OWORD *)operator new[](0x40uLL, 0x4D677844u, 256LL, v10);
      if ( !v20 )
        goto LABEL_14;
      *v20 = *(_OWORD *)v23;
      v20[1] = *((_OWORD *)v23 + 1);
      v20[2] = *((_OWORD *)v23 + 2);
      v20[3] = *((_OWORD *)v23 + 3);
      v21 = (DxgMonitor::MonitorModes **)*((_QWORD *)v11 + 23);
      v22 = (DxgMonitor::MonitorModes *)(v20 + 3);
      if ( *v21 != (DxgMonitor::MonitorModes *)((char *)v11 + 176) )
        goto LABEL_23;
      *(_QWORD *)v22 = (char *)v11 + 176;
      *((_QWORD *)v22 + 1) = v21;
      *v21 = v22;
      *((_QWORD *)v11 + 23) = v22;
      ++*((_DWORD *)v11 + 42);
    }
    *a2 = v11;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
