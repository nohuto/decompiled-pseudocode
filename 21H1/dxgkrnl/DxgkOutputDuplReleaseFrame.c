/*
 * XREFs of DxgkOutputDuplReleaseFrame @ 0x1C0299160
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C0298438 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplReleaseFrame(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  ULONG64 v5; // rdx
  int v6; // ebx
  _DWORD *v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  char v13; // [rsp+30h] [rbp-28h]
  unsigned int v14[2]; // [rsp+38h] [rbp-20h] BYREF
  int v15; // [rsp+40h] [rbp-18h]

  v11 = -1;
  v12 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v13 = 1;
    v11 = 2072;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2072);
  }
  else
  {
    v13 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v11, 2072LL);
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_QWORD *)v14 = *(_QWORD *)v4;
  v15 = *(_DWORD *)(v4 + 8);
  v6 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         v14[0],
         v14[1],
         (__int64)v14,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_693db078d59c16956e85dd4c51bec7d2_::_lambda_invoker_cdecl_);
  if ( v6 >= 0 )
  {
    v7 = (_DWORD *)(a1 + 8);
    v5 = MmUserProbeAddress;
    if ( a1 + 8 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = v15;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11, v5);
  if ( v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v11);
  return (unsigned int)v6;
}
