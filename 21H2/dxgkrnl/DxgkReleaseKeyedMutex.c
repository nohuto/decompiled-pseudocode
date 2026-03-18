/*
 * XREFs of DxgkReleaseKeyedMutex @ 0x1C03432D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005591C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C00598B8 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z @ 0x1C0340B28 (-ReleaseSync@DXGKEYEDMUTEX@@QEAAJI_K0PEAXI_N@Z.c)
 */

__int64 __fastcall DxgkReleaseKeyedMutex(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // sf
  __int64 v12; // rdi
  struct DXGKEYEDMUTEX *v13; // r14
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  size_t Size; // [rsp+28h] [rbp-70h]
  int v20; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h]
  char v22; // [rsp+60h] [rbp-38h]
  unsigned int v23[4]; // [rsp+68h] [rbp-30h]
  unsigned __int64 v24; // [rsp+78h] [rbp-20h]
  struct DXGKEYEDMUTEX *v25; // [rsp+A8h] [rbp+10h] BYREF
  DXGKEYEDMUTEX *v26; // [rsp+B0h] [rbp+18h] BYREF

  v3 = a1;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2055;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2055);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2055);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( !v22 )
      return 3221225485LL;
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_15:
    if ( v11 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v20);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v23 = *(_OWORD *)v3;
  v24 = *(_QWORD *)(v3 + 16);
  v25 = 0LL;
  v12 = v23[0];
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v26, v23[0], Current, &v25);
  v13 = v25;
  if ( !v25 )
  {
    WdLogSingleEntry2(3LL, (unsigned int)v12, -1073741811LL);
    if ( v26 )
      DXGKEYEDMUTEX::ReleaseReference(v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( !v22 )
      return 3221225485LL;
    LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_15;
  }
  LODWORD(Size) = 0;
  v15 = DXGKEYEDMUTEX::ReleaseSync((void **)v25, v12, *(unsigned __int64 *)&v23[2], v24, 0LL, Size, 1);
  v16 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry3(2LL, v12, v13, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hKeyedMutex = 0x%I64x failed to release pKeyedMutex 0x%I64x returning 0x%I64x",
      v12,
      (__int64)v13,
      v16,
      0LL,
      0LL);
  }
  if ( v26 )
    DXGKEYEDMUTEX::ReleaseReference(v26);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v20);
  return (unsigned int)v16;
}
