/*
 * XREFs of DxgkDestroyOutputDuplInternal @ 0x1C03247E8
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C0324550 (DxgkCreateOutputDupl.c)
 *     DxgkDestroyOutputDupl @ 0x1C03247D0 (DxgkDestroyOutputDupl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C03242FC (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkDestroyOutputDuplInternal(__int64 a1, int a2, __int64 a3)
{
  ULONG64 v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v9; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+58h] [rbp-30h]
  char v11; // [rsp+60h] [rbp-28h]
  unsigned int v12[2]; // [rsp+68h] [rbp-20h] BYREF
  int v13; // [rsp+70h] [rbp-18h]

  v4 = a1;
  v9 = -1;
  v10 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v11 = 1;
    v9 = 2062;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2062);
  }
  else
  {
    v11 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v9, 2062);
  if ( a2 )
  {
    if ( v4 <= MmUserProbeAddress )
    {
      WdLogSingleEntry1(1LL, 3364LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(ULONG_PTR)pDestroy > MM_USER_PROBE_ADDRESS",
        3364LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)v12 = *(_QWORD *)v4;
    v13 = *(_DWORD *)(v4 + 8);
  }
  else
  {
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    *(_QWORD *)v12 = *(_QWORD *)v4;
    v13 = *(_DWORD *)(v4 + 8);
  }
  v5 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         v12[0],
         v12[1],
         (__int64)v12,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_::_lambda_invoker_cdecl_);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v9);
  if ( v11 )
  {
    LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v9);
  }
  return v5;
}
