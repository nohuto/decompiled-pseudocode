/*
 * XREFs of ?ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00EF0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002824 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  unsigned int v3; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v13; // rbx
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26; // [rsp+28h] [rbp-20h]
  char v27; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 7039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7039);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 7039LL);
  v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  *(_QWORD *)(v10 + 24) = a2;
  *(_QWORD *)(v10 + 32) = this;
  if ( a2 )
  {
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
    {
      v13 = a2 - 4;
      if ( *(_DWORD *)v13 == 305419896 )
      {
        v14 = (_QWORD *)*((_QWORD *)v13 + 1);
        if ( !v14 )
          goto LABEL_12;
        v15 = (_QWORD *)*((_QWORD *)this + 3);
        if ( v15 == (_QWORD *)((char *)this + 24) )
          goto LABEL_23;
        if ( !--v15 )
          goto LABEL_23;
        do
        {
          if ( v15 == v14 )
            break;
          v22 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v15[1];
          v15 = (_QWORD *)((char *)v22 - 8);
          if ( v22 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
            v15 = 0LL;
        }
        while ( v15 );
        if ( !v15 )
        {
LABEL_23:
          v23 = WdLogNewEntry5_WdError(v15, v14);
          *(_QWORD *)(v23 + 24) = v13;
          *(_QWORD *)(v23 + 32) = this;
          WdLogEvent5_WdError(v23);
          v3 = -1071774928;
        }
        else
        {
LABEL_12:
          operator delete[](*((void **)v13 + 46));
          operator delete(v13);
        }
      }
      else
      {
        v21 = WdLogNewEntry5_WdError(v12, v11);
        *(_QWORD *)(v21 + 24) = v13;
        WdLogEvent5_WdError(v21);
        v3 = -1071774951;
      }
    }
    else
    {
      v24 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v24 + 24) = this;
      WdLogEvent5_WdError(v24);
      v3 = -1071774976;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v20 + 24) = 0LL;
    WdLogEvent5_WdError(v20);
    v3 = -1071774951;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v16);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v25);
  return v3;
}
