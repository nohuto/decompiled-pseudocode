/*
 * XREFs of DxgkOutputDuplGetPointerShapeData @ 0x1C029D860
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C029CE08 (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetPointerShapeData(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r15
  ULONG64 v4; // rax
  PVOID v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  char *v16; // r14
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+28h] [rbp-60h]
  char v24; // [rsp+30h] [rbp-58h]
  PVOID v25; // [rsp+38h] [rbp-50h]
  size_t Size[2]; // [rsp+40h] [rbp-48h] BYREF
  void *v27[2]; // [rsp+50h] [rbp-38h]
  __int128 v28; // [rsp+60h] [rbp-28h]
  __int64 v29; // [rsp+70h] [rbp-18h]

  v3 = a1;
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2065;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2065);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2065LL);
  v4 = v3;
  if ( v3 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)Size = *(_OWORD *)v4;
  *(_OWORD *)v27 = *(_OWORD *)(v4 + 16);
  v28 = *(_OWORD *)(v4 + 32);
  v29 = *(_QWORD *)(v4 + 48);
  v5 = operator new[](LODWORD(Size[1]), 0x674D444Fu, PagedPool);
  v10 = v5;
  v25 = v5;
  if ( v5 )
  {
    v16 = (char *)v27[0];
    v27[0] = v5;
    v17 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
            LODWORD(Size[0]),
            HIDWORD(Size[0]),
            (__int64)Size,
            (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_323a6f2bac221de0325809d248e0690f_::_lambda_invoker_cdecl_);
    v27[0] = v16;
    if ( (int)(v17 + 0x80000000) < 0 || v17 == -1073741789 )
    {
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = *(_OWORD *)Size;
      *(_OWORD *)(v3 + 16) = *(_OWORD *)v27;
      *(_OWORD *)(v3 + 32) = v28;
      *(_QWORD *)(v3 + 48) = v29;
    }
    if ( v17 >= 0 )
    {
      v18 = LODWORD(v27[1]);
      if ( LODWORD(v27[1]) )
      {
        if ( LODWORD(Size[1]) < LODWORD(v27[1]) )
          v18 = LODWORD(Size[1]);
        if ( (unsigned __int64)&v16[v18] > MmUserProbeAddress || &v16[v18] <= v16 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v16, v10, (unsigned int)v18);
      }
    }
    operator delete[](v10);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v19);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v22);
    return (unsigned int)v17;
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = LODWORD(Size[1]);
    WdLogEvent5_WdLowResource(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22, v12);
    if ( v24 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v22);
    }
    return 3221225495LL;
  }
}
