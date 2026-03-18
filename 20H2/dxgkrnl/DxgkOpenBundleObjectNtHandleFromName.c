/*
 * XREFs of DxgkOpenBundleObjectNtHandleFromName @ 0x1C0277D00
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DxgkOpenBundleObjectNtHandleFromName(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  ULONG64 v5; // rax
  ULONG64 v6; // rdx
  int v7; // ebx
  _QWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r8
  int v12; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+48h] [rbp-30h]
  char v14; // [rsp+50h] [rbp-28h]
  __int128 v15; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-10h]
  __int64 v17; // [rsp+88h] [rbp+10h] BYREF

  v12 = -1;
  v13 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2205;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2205);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v12, 2205LL);
  v5 = a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  v15 = *(_OWORD *)v5;
  v16 = *(_QWORD *)(v5 + 16);
  v17 = 0LL;
  LOBYTE(v4) = 1;
  v7 = ObOpenObjectByName(*((_QWORD *)&v15 + 1), g_pDxgkSharedBundleObjectType, v4, 0LL, v15, 0LL, &v17);
  if ( v7 >= 0 )
  {
    v8 = (_QWORD *)(a1 + 16);
    v6 = MmUserProbeAddress;
    if ( a1 + 16 >= MmUserProbeAddress )
      v8 = (_QWORD *)MmUserProbeAddress;
    *v8 = v17;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12, v6);
  if ( v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v12);
  return (unsigned int)v7;
}
