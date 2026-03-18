/*
 * XREFs of DxgkIsVidPnSourceOwnerExclusive @ 0x1C0134180
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0011A58 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 */

char __fastcall DxgkIsVidPnSourceOwnerExclusive(ADAPTER_DISPLAY **a1, unsigned int a2, _BYTE *a3)
{
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int VidPnSourceOwnerType; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // [rsp+20h] [rbp-79h] BYREF
  __int64 v19; // [rsp+28h] [rbp-71h]
  char v20; // [rsp+30h] [rbp-69h]
  _BYTE v21[144]; // [rsp+40h] [rbp-59h] BYREF

  v18 = -1;
  v19 = 0LL;
  v6 = 1;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v20 = 1;
    v18 = 2182;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2182);
  }
  else
  {
    v20 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v18, 2182LL);
  if ( !a1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v16 + 24) = 7675LL;
    WdLogEvent5_WdAssertion(v16);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, (struct DXGADAPTER *const)a1, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21, 0LL) < 0 )
  {
LABEL_10:
    v6 = 0;
    goto LABEL_11;
  }
  if ( !a1[334] )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v17 + 24) = 7685LL;
    WdLogEvent5_WdAssertion(v17);
  }
  *a3 = 0;
  VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(a1[334], a2);
  if ( VidPnSourceOwnerType != 2 )
  {
    if ( VidPnSourceOwnerType == 3 )
    {
      *a3 = 1;
      goto LABEL_11;
    }
    goto LABEL_10;
  }
LABEL_11:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21, v9);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v18, v12);
  if ( v20 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v18);
  return v6;
}
