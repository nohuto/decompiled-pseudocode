/*
 * XREFs of DxgkOutputDuplGetFrameInfo @ 0x1C029D480
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C029CE08 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetFrameInfo(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rdi
  ULONG64 v4; // rax
  ULONG64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+20h] [rbp-68h] BYREF
  __int64 v11; // [rsp+28h] [rbp-60h]
  char v12; // [rsp+30h] [rbp-58h]
  unsigned int v13[4]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v14; // [rsp+48h] [rbp-40h]
  __int128 v15; // [rsp+58h] [rbp-30h]
  __int64 v16; // [rsp+68h] [rbp-20h]

  v3 = a1;
  v10 = -1;
  v11 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2063;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2063);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2063LL);
  v4 = v3;
  if ( v3 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)v13 = *(_OWORD *)v4;
  v14 = *(_OWORD *)(v4 + 16);
  v15 = *(_OWORD *)(v4 + 32);
  v16 = *(_QWORD *)(v4 + 48);
  v6 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
         v13[0],
         v13[1],
         (__int64)v13,
         (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_a555c8f1bf148962729f2402570fc0b4_::_lambda_invoker_cdecl_);
  if ( v6 >= 0 )
  {
    v5 = MmUserProbeAddress;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    *(_OWORD *)v3 = *(_OWORD *)v13;
    *(_OWORD *)(v3 + 16) = v14;
    *(_OWORD *)(v3 + 32) = v15;
    *(_QWORD *)(v3 + 48) = v16;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10, v5);
  if ( v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v10);
  return (unsigned int)v6;
}
