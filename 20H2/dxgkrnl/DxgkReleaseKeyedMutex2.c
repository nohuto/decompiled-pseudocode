/*
 * XREFs of DxgkReleaseKeyedMutex2 @ 0x1C0292980
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003FF70 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0048150 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1C029043C (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex2(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGKEYEDMUTEX *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  size_t Size; // [rsp+28h] [rbp-60h]
  int v28; // [rsp+40h] [rbp-48h] BYREF
  __int64 v29; // [rsp+48h] [rbp-40h]
  char v30; // [rsp+50h] [rbp-38h]
  unsigned int v31[4]; // [rsp+58h] [rbp-30h]
  void *Src[2]; // [rsp+68h] [rbp-20h]
  size_t v33; // [rsp+78h] [rbp-10h]
  struct DXGKEYEDMUTEX *v34; // [rsp+98h] [rbp+10h] BYREF
  DXGKEYEDMUTEX *v35; // [rsp+A0h] [rbp+18h] BYREF

  v3 = a1;
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2069;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2069);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2069LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v10);
    if ( v30 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v28);
    }
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v31 = *(_OWORD *)v3;
  *(_OWORD *)Src = *(_OWORD *)(v3 + 16);
  v33 = *(_QWORD *)(v3 + 32);
  v34 = 0LL;
  v11 = v31[0];
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v35, v31[0], Current, &v34);
  v15 = v34;
  if ( !v34 )
  {
    v16 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v16 + 24) = v11;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v16);
    if ( v35 )
      DXGKEYEDMUTEX::ReleaseReference(v35, v10);
    goto LABEL_12;
  }
  LODWORD(Size) = v33;
  v20 = DXGKEYEDMUTEX::ReleaseSync(
          (void **)v34,
          v11,
          *(unsigned __int64 *)&v31[2],
          (unsigned __int64)Src[0],
          (char *)Src[1],
          Size,
          1);
  v23 = v20;
  if ( v20 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v24[3] = v11;
    v24[4] = v15;
    v24[5] = v23;
    WdLogEvent5_WdError(v24);
  }
  if ( v35 )
    DXGKEYEDMUTEX::ReleaseReference(v35, v21);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v21);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v28);
  return (unsigned int)v23;
}
