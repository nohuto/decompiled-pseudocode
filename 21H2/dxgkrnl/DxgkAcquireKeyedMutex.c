/*
 * XREFs of DxgkAcquireKeyedMutex @ 0x1C0341D80
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C033E6E8 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  _OWORD *v11; // rax
  union _LARGE_INTEGER *v12; // r9
  __int64 *v13; // rdx
  int v14; // r14d
  _QWORD *v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19[2]; // [rsp+30h] [rbp-78h]
  int v20; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+58h] [rbp-50h]
  char v22; // [rsp+60h] [rbp-48h]
  unsigned int v23[4]; // [rsp+68h] [rbp-40h]
  __int128 v24; // [rsp+78h] [rbp-30h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+10h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2054);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2054);
  if ( DXGPROCESS::GetCurrent(v5, v4, v6, v7) )
  {
    v11 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v23 = *v11;
    v24 = v11[1];
    v12 = 0LL;
    v25 = 0LL;
    v13 = (__int64 *)v24;
    if ( (_QWORD)v24 )
    {
      if ( (unsigned __int64)v24 >= MmUserProbeAddress )
        v13 = (__int64 *)MmUserProbeAddress;
      v25 = *v13;
      v12 = (union _LARGE_INTEGER *)&v25;
    }
    v19[0] = 0;
    v14 = DXGKEYEDMUTEX::AcquireSync(
            v23[0],
            *(unsigned __int64 *)&v23[2],
            0LL,
            v12,
            (DXGKEYEDMUTEX *)((char *)&v24 + 8),
            0LL,
            *(size_t *)v19,
            0LL,
            1);
    if ( v14 >= 0 )
    {
      v15 = (_QWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v15 = (_QWORD *)MmUserProbeAddress;
      *v15 = *((_QWORD *)&v24 + 1);
    }
    if ( v14 < 0 )
    {
      v16 = v23[0];
      WdLogSingleEntry2(2LL, v23[0], v14);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"hDevice 0x%I64x failed to acquire hKeyedMutex 0x%I64x returning 0x%I64x",
        v16,
        v14,
        0LL,
        0LL,
        0LL);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v20);
    return (unsigned int)v14;
  }
  else
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
    if ( v22 )
    {
      LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v20);
    }
    return 3221225485LL;
  }
}
