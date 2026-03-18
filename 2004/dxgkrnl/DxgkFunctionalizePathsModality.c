/*
 * XREFs of DxgkFunctionalizePathsModality @ 0x1C015E790
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01331A4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z @ 0x1C015E958 (-Functionalize@CCD_TOPOLOGY@@QEAAJI_N@Z.c)
 */

__int64 __fastcall DxgkFunctionalizePathsModality(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rax
  int v13; // [rsp+28h] [rbp-29h] BYREF
  __int64 v14; // [rsp+30h] [rbp-21h]
  char v15; // [rsp+38h] [rbp-19h]
  int v16; // [rsp+48h] [rbp-9h] BYREF
  __int128 v17; // [rsp+50h] [rbp-1h]
  __int64 v18; // [rsp+60h] [rbp+Fh]
  __int16 v19; // [rsp+68h] [rbp+17h]
  __int128 v20; // [rsp+70h] [rbp+1Fh]
  __int64 v21; // [rsp+80h] [rbp+2Fh]
  __int64 v22; // [rsp+88h] [rbp+37h]
  char v23; // [rsp+90h] [rbp+3Fh]
  BOOL v24; // [rsp+94h] [rbp+43h]
  int v25; // [rsp+98h] [rbp+47h]
  _BOOL8 v26; // [rsp+9Ch] [rbp+4Bh]

  v13 = -1;
  v4 = a1;
  v14 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2168;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2168);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 2168LL);
  if ( a2 )
  {
    if ( (v4 & 0xFEFD7FFF) != 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v6, v5);
      *(_QWORD *)(v12 + 24) = 228LL;
      WdLogEvent5_WdAssertion(v12);
    }
    v22 = a2;
    v16 = 0;
    v18 = 0LL;
    v19 = 0;
    v21 = 0LL;
    v23 = 0;
    v17 = 0LL;
    v20 = 0LL;
    v25 = 1;
    v24 = (v4 & 0x8000) != 0;
    v26 = (v4 & 0x1000000) != 0;
    v7 = CCD_TOPOLOGY::Functionalize((CCD_TOPOLOGY *)&v16, v4, 0);
    v24 = 0;
    v8 = v7;
    CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v16);
  }
  else
  {
    v8 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13, v5);
  if ( v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v13);
  return v8;
}
