/*
 * XREFs of ?DxgMiniportQueryVidPnInterfaceCB@@YAJQEAUD3DKMDT_HVIDPN__@@W4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEBU_DXGK_VIDPN_INTERFACE@@@Z @ 0x1C015AB30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgMiniportQueryVidPnInterfaceCB(
        struct D3DKMDT_HVIDPN__ *const a1,
        enum _DXGK_VIDPN_INTERFACE_VERSION a2,
        const struct _DXGK_VIDPN_INTERFACE **a3)
{
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct D3DKMDT_HVIDPN__ *v9; // rax
  __int64 v10; // rbx
  const struct _DXGK_VIDPN_INTERFACE *v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+20h] [rbp-28h] BYREF
  __int64 v27; // [rsp+28h] [rbp-20h]
  char v28; // [rsp+30h] [rbp-18h]
  __int64 v29; // [rsp+60h] [rbp+18h] BYREF

  v26 = -1;
  v27 = 0LL;
  v5 = a2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v28 = 1;
    v26 = 7056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 7056);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 7056LL);
  if ( a3 )
  {
    *a3 = 0LL;
    if ( a1 && *((_DWORD *)a1 + 16) == 1833172997 )
      v9 = a1;
    else
      v9 = 0LL;
    if ( v9 )
    {
      v10 = *((_QWORD *)v9 + 6);
      if ( KeGetCurrentIrql() )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v29, v10);
        v20 = *(_QWORD *)(v10 + 8);
        if ( !v20 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v19, v18);
          WdLogEvent5_WdAssertion(v21);
          v20 = *(_QWORD *)(v10 + 8);
        }
        v22 = *(_QWORD *)(v20 + 16);
        v23 = *(_QWORD *)(*(_QWORD *)(v22 + 216) + 64LL);
        if ( *(_DWORD *)(*(_QWORD *)(v23 + 40) + 28LL) >= 0x2003u )
        {
          v24 = WdLogNewEntry5_WdCriticalError(v23, v18);
          *(_QWORD *)(v24 + 24) = 275LL;
          *(_QWORD *)(v24 + 32) = 20LL;
          *(_QWORD *)(v24 + 40) = v22;
          *(_OWORD *)(v24 + 48) = 0LL;
          WdLogEvent5_WdCriticalError(v24);
        }
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v29 + 40), v18);
      }
      if ( (_DWORD)v5 == 1 )
      {
        v11 = *(const struct _DXGK_VIDPN_INTERFACE **)(v10 + 368);
        v12 = 0;
        *a3 = v11;
      }
      else
      {
        *a3 = 0LL;
        v25 = WdLogNewEntry5_WdWarning(v7, v6, v8);
        *(_QWORD *)(v25 + 24) = v5;
        WdLogEvent5_WdWarning(v25);
        v12 = -1073741637;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v17 + 24) = a1;
      WdLogEvent5_WdError(v17);
      v12 = -1071774973;
    }
  }
  else
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
    v16[3] = 0LL;
    v16[4] = v5;
    v16[5] = a1;
    WdLogEvent5_WdError(v16);
    v12 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26, v6);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v26);
  return v12;
}
