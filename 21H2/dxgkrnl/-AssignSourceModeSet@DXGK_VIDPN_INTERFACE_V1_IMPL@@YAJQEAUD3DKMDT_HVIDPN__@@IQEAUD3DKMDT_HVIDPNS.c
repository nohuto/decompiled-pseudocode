/*
 * XREFs of ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C01DEAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010C68 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0011B2C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C001D584 (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AssignSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  struct DMMVIDPNSOURCEMODESET **v10; // rdi
  __int64 v11; // r8
  struct DMMVIDPNSOURCEMODESET **v12; // rax
  __int64 v13; // r10
  struct DMMVIDPNSOURCEMODESET **v14; // rsi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  char v21; // [rsp+30h] [rbp-18h]

  v19 = -1;
  v4 = a3;
  v20 = 0LL;
  v6 = (unsigned int)a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 7046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7046);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 7046);
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v9[3] = v4;
  v9[4] = v6;
  v9[5] = this;
  if ( ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this) )
  {
    v10 = (struct DMMVIDPNSOURCEMODESET **)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v4);
    if ( v10 )
    {
      v12 = (struct DMMVIDPNSOURCEMODESET **)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(v11 + 304), v6);
      v14 = v12;
      if ( v12 )
      {
        v15 = DMMVIDPNSOURCE::SetCofuncModeSet(v12, v10);
        v4 = v15;
        if ( v15 < 0 )
        {
          if ( v15 != -1071774958 )
            WdLogSingleEntry0(1LL);
          WdLogSingleEntry3(2LL, v10, *((unsigned int *)v14 + 6), v4);
        }
        else
        {
          LODWORD(v4) = 0;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, v13);
        LODWORD(v4) = -1071774972;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, v4);
      LODWORD(v4) = -1071774968;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    LODWORD(v4) = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v19);
  }
  return (unsigned int)v4;
}
