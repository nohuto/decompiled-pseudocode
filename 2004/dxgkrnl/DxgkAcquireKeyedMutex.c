/*
 * XREFs of DxgkAcquireKeyedMutex @ 0x1C0292380
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C028F458 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 */

__int64 __fastcall DxgkAcquireKeyedMutex(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edi
  ULONG64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _OWORD *v14; // rax
  union _LARGE_INTEGER *v15; // r9
  __int64 *v16; // rdx
  ULONG64 v17; // rcx
  _QWORD *v18; // r8
  size_t v19; // [rsp+30h] [rbp-68h]
  int v20; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h]
  char v22; // [rsp+60h] [rbp-38h]
  unsigned int v23[4]; // [rsp+68h] [rbp-30h]
  __int128 v24; // [rsp+78h] [rbp-20h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+10h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2054);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2054LL);
  if ( !DXGPROCESS::GetCurrent(v5, v4) )
  {
    v8 = WdLogNewEntry5_WdError(v7, v6);
    v9 = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
LABEL_7:
    WdLogEvent5_WdError(v8);
    goto LABEL_8;
  }
  v14 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v14 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v23 = *v14;
  v24 = v14[1];
  v15 = 0LL;
  v25 = 0LL;
  v16 = (__int64 *)v24;
  if ( (_QWORD)v24 )
  {
    if ( (unsigned __int64)v24 >= MmUserProbeAddress )
      v16 = (__int64 *)MmUserProbeAddress;
    v25 = *v16;
    v15 = (union _LARGE_INTEGER *)&v25;
  }
  LODWORD(v19) = 0;
  v9 = DXGKEYEDMUTEX::AcquireSync(
         v23[0],
         *(unsigned __int64 *)&v23[2],
         0,
         v15,
         (DXGKEYEDMUTEX *)((char *)&v24 + 8),
         0LL,
         v19,
         0LL,
         1);
  if ( v9 >= 0 )
  {
    v18 = (_QWORD *)(a1 + 24);
    v17 = MmUserProbeAddress;
    v10 = MmUserProbeAddress;
    if ( a1 + 24 >= MmUserProbeAddress )
      v18 = (_QWORD *)MmUserProbeAddress;
    *v18 = *((_QWORD *)&v24 + 1);
  }
  if ( v9 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v17, v10);
    *(_QWORD *)(v8 + 24) = v23[0];
    *(_QWORD *)(v8 + 32) = v9;
    goto LABEL_7;
  }
LABEL_8:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20, v10);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v20);
  return (unsigned int)v9;
}
