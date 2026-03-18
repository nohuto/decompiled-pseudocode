/*
 * XREFs of ?DxgMiniportQueryVidPnInterfaceCB@@YAJQEAUD3DKMDT_HVIDPN__@@W4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEBU_DXGK_VIDPN_INTERFACE@@@Z @ 0x1C01D1B50
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgMiniportQueryVidPnInterfaceCB(
        struct D3DKMDT_HVIDPN__ *const a1,
        enum _DXGK_VIDPN_INTERFACE_VERSION a2,
        const struct _DXGK_VIDPN_INTERFACE **a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  const struct _DXGK_VIDPN_INTERFACE *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]
  char v16; // [rsp+40h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v14 = -1;
  v15 = 0LL;
  v5 = a2;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v16 = 1;
    v14 = 7056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 7056);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 7056);
  if ( a3 )
  {
    *a3 = 0LL;
    if ( !a1 || *((_DWORD *)a1 + 16) != 1833172997 )
    {
      WdLogSingleEntry1(2LL, a1);
      v8 = -1071774973;
      goto LABEL_10;
    }
    v6 = (_QWORD *)*((_QWORD *)a1 + 6);
    if ( KeGetCurrentIrql() )
    {
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v17, (__int64)v6);
      v12 = v6[1];
      if ( !v12 )
      {
        WdLogSingleEntry0(1LL);
        v12 = v6[1];
      }
      v13 = *(_QWORD *)(v12 + 16);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
        WdLogSingleEntry5(0LL, 275LL, 20LL, v13, 0LL, 0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v17 + 40));
    }
    if ( (_DWORD)v5 == 1 )
    {
      v7 = (const struct _DXGK_VIDPN_INTERFACE *)v6[51];
    }
    else
    {
      if ( (_DWORD)v5 != 2 )
      {
        *a3 = 0LL;
        WdLogSingleEntry1(3LL, v5);
        v8 = -1073741637;
        goto LABEL_10;
      }
      v7 = (const struct _DXGK_VIDPN_INTERFACE *)v6[52];
    }
    *a3 = v7;
    v8 = 0;
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, v5, a1);
    v8 = -1073741811;
  }
LABEL_10:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 )
  {
    LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v14);
  }
  return v8;
}
