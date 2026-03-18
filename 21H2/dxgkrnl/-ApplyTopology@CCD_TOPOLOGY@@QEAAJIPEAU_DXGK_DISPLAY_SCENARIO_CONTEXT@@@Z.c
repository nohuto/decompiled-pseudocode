/*
 * XREFs of ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C07FC
 * Callers:
 *     DxgkApplyPathsModality @ 0x1C01C2DF0 (DxgkApplyPathsModality.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C01EDEC0 (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 * Callees:
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000F45C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C01A46EC (DxgkReleaseSessionModeChangeLock.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C01ADE34 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01AEBD8 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01BF100 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x1C01C0964 (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C03A9208 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 *     ?RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z @ 0x1C03A9BAC (-RemoveAllNonDesktopPaths@CCD_TOPOLOGY@@QEAAJPEAE@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ApplyTopology(CCD_TOPOLOGY *this, DWORD a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  int v6; // eax
  __int64 v7; // rbx
  int active; // eax
  unsigned __int16 v10; // cx
  __int64 v11; // rax
  unsigned __int16 v12; // dx
  int v13; // eax
  __int64 v14; // rax
  __int16 v15; // cx
  __int64 v16; // r8
  __int16 v17; // ax
  unsigned int i; // r9d
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  _BYTE v22[16]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v23[64]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v24; // [rsp+70h] [rbp+17h]
  unsigned __int8 v25; // [rsp+D8h] [rbp+7Fh] BYREF

  v22[0] = 0;
  v6 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v22, 1);
  LODWORD(v7) = v6;
  if ( v6 >= 0 )
  {
    CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v23, 8u, 0);
    if ( (*((_DWORD *)this + 21) & 1) == 0 )
    {
      active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)v23, 1);
      v7 = active;
      if ( active >= 0 )
      {
        if ( active == 255 )
          goto LABEL_5;
        if ( v24 )
          v10 = *(_WORD *)(v24 + 20);
        else
          v10 = 0;
        v11 = *((_QWORD *)this + 8);
        if ( v11 )
          v12 = *(_WORD *)(v11 + 20);
        else
          v12 = 0;
        if ( v10 <= v12 )
          WdLogSingleEntry0(1LL);
        v13 = CCD_TOPOLOGY::ApplyTopologyWorker((CCD_TOPOLOGY *)v23, a2, a3);
        v7 = v13;
        if ( v13 >= 0 )
        {
          v25 = 0;
          CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)v23, &v25);
          if ( !v25 )
            WdLogSingleEntry0(1LL);
          v14 = *((_QWORD *)this + 8);
          if ( v14 )
            v15 = *(_WORD *)(v14 + 20);
          else
            v15 = 0;
          v16 = v24;
          if ( v24 )
            v17 = *(_WORD *)(v24 + 20);
          else
            v17 = 0;
          if ( v15 != v17 )
          {
            WdLogSingleEntry0(1LL);
            v16 = v24;
          }
          for ( i = 0;
                i < *(_DWORD *)(v16 + 40);
                *(_DWORD *)(*(_QWORD *)(v16 + 48) + v20 + 80) &= ~*(_DWORD *)(*(_QWORD *)(v16 + 48) + 340 * v19 + 232) )
          {
            v19 = i++;
            v20 = 340 * v19;
            *(_DWORD *)(*(_QWORD *)(v16 + 48) + v20 + 84) &= ~*(_DWORD *)(*(_QWORD *)(v16 + 48) + 340 * v19 + 232);
          }
          v21 = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)v23);
          v7 = v21;
          if ( v21 >= 0 )
            goto LABEL_6;
        }
      }
      WdLogSingleEntry1(2LL, v7);
      goto LABEL_6;
    }
LABEL_5:
    LODWORD(v7) = CCD_TOPOLOGY::ApplyTopologyWorker(this, a2, a3);
LABEL_6:
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v23);
    goto LABEL_7;
  }
  WdLogSingleEntry1(2LL, v6);
LABEL_7:
  if ( v22[0] )
    DxgkReleaseSessionModeChangeLock();
  return (unsigned int)v7;
}
