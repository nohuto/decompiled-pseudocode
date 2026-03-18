/*
 * XREFs of ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C03A6910
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0010C88 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00114FC (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0011528 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0189954 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01A85C4 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C03A53AC (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  _QWORD *v8; // rax
  DMMVIDPNTOPOLOGY *v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  _QWORD *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h]
  char v21; // [rsp+40h] [rbp-10h]
  struct DMMVIDPNPRESENTPATH *v22; // [rsp+88h] [rbp+38h] BYREF
  struct DMMVIDPNPRESENTPATH *v23; // [rsp+90h] [rbp+40h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 7041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7041);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 7041);
  if ( a2 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v8[3] = *(_DWORD *)a2;
    v8[4] = *((unsigned int *)a2 + 1);
    v8[5] = a2;
    v8[6] = this;
    v9 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle((__int64)this);
    if ( v9 )
    {
      if ( !*((_DWORD *)a2 + 16) )
      {
        WdLogSingleEntry1(3LL, a2);
        *((_DWORD *)a2 + 16) = 255;
      }
      if ( !*((_DWORD *)a2 + 17) )
      {
        WdLogSingleEntry3(3LL, *(_DWORD *)a2, *((unsigned int *)a2 + 1), this);
        memset(a2 + 19, 0, 0x100uLL);
        *((_DWORD *)a2 + 83) = 0;
        *((_DWORD *)a2 + 83) |= 1u;
        *(_QWORD *)(a2 + 17) = 1LL;
      }
      if ( *((_DWORD *)a2 + 84) != 1 || *((_QWORD *)a2 + 43) || *((_QWORD *)a2 + 44) )
      {
        WdLogSingleEntry4(3LL, *((int *)a2 + 84), *(_DWORD *)a2, *((unsigned int *)a2 + 1), this);
        *((_DWORD *)a2 + 84) = 1;
        *((_QWORD *)a2 + 43) = 0LL;
        *((_QWORD *)a2 + 44) = 0LL;
      }
      v22 = 0LL;
      v23 = 0LL;
      v10 = DMMVIDPNTOPOLOGY::CreateNewPath(v9, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2, &v23);
      v13 = v10;
      v7 = -1071774970;
      if ( v10 == -1071774970 )
      {
        WdLogSingleEntry3(2LL, *(_DWORD *)a2, *((unsigned int *)a2 + 1), -1071774970LL);
      }
      else if ( v10 >= 0 )
      {
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(
          (__int64 (__fastcall ****)(_QWORD, __int64))&v22,
          (__int64 (__fastcall ***)(_QWORD, __int64))v23);
        v15 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPNTOPOLOGY **)v9, v22, D3DKMDT_MCC_ENFORCE);
        v7 = v15;
        if ( v15 >= 0 )
        {
          v22 = 0LL;
          v7 = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v9, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2);
        }
        else
        {
          WdLogSingleEntry4(7LL, *(_DWORD *)a2, *((unsigned int *)a2 + 1), v9, v15);
        }
      }
      else
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
        v7 = v13;
        v14[3] = *(_DWORD *)a2;
        v14[4] = *((unsigned int *)a2 + 1);
        v14[5] = v13;
      }
      auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v22);
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v7 = -1071774976;
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v7 = -1071774951;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v19);
  }
  return v7;
}
