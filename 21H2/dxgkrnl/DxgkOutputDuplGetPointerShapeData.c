/*
 * XREFs of DxgkOutputDuplGetPointerShapeData @ 0x1C0324D70
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C03242FC (-RunThunk@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_O.c)
 */

__int64 __fastcall DxgkOutputDuplGetPointerShapeData(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r14
  __int64 v4; // r9
  ULONG64 v5; // rax
  void *v6; // rax
  void *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // r8
  char *v11; // r15
  int v12; // esi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // [rsp+50h] [rbp-68h] BYREF
  __int64 v17; // [rsp+58h] [rbp-60h]
  char v18; // [rsp+60h] [rbp-58h]
  void *v19; // [rsp+68h] [rbp-50h]
  size_t Size[2]; // [rsp+70h] [rbp-48h] BYREF
  void *v21[2]; // [rsp+80h] [rbp-38h]
  __int128 v22; // [rsp+90h] [rbp-28h]
  __int64 v23; // [rsp+A0h] [rbp-18h]

  v3 = a1;
  v16 = -1;
  v17 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v18 = 1;
    v16 = 2065;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2065);
  }
  else
  {
    v18 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v16, 2065);
  v5 = v3;
  if ( v3 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  *(_OWORD *)Size = *(_OWORD *)v5;
  *(_OWORD *)v21 = *(_OWORD *)(v5 + 16);
  v22 = *(_OWORD *)(v5 + 32);
  v23 = *(_QWORD *)(v5 + 48);
  v6 = (void *)operator new[](LODWORD(Size[1]), 0x674D444Fu, 256LL, v4);
  v7 = v6;
  v19 = v6;
  if ( v6 )
  {
    v11 = (char *)v21[0];
    v21[0] = v6;
    v12 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
            LODWORD(Size[0]),
            HIDWORD(Size[0]),
            (__int64)Size,
            (__int64 (__fastcall *)(struct OUTPUTDUPL_MGR *, __int64))lambda_323a6f2bac221de0325809d248e0690f_::_lambda_invoker_cdecl_);
    v21[0] = v11;
    if ( (int)(v12 + 0x80000000) < 0 || v12 == -1073741789 )
    {
      if ( v3 >= MmUserProbeAddress )
        v3 = MmUserProbeAddress;
      *(_OWORD *)v3 = *(_OWORD *)Size;
      *(_OWORD *)(v3 + 16) = *(_OWORD *)v21;
      *(_OWORD *)(v3 + 32) = v22;
      *(_QWORD *)(v3 + 48) = v23;
    }
    if ( v12 >= 0 )
    {
      v13 = LODWORD(v21[1]);
      if ( LODWORD(v21[1]) )
      {
        if ( LODWORD(Size[1]) < LODWORD(v21[1]) )
          v13 = LODWORD(Size[1]);
        if ( (unsigned __int64)&v11[v13] > MmUserProbeAddress || &v11[v13] <= v11 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v11, v7, (unsigned int)v13);
      }
    }
    operator delete[](v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v16);
    return (unsigned int)v12;
  }
  else
  {
    WdLogSingleEntry1(6LL, LODWORD(Size[1]));
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Couldn't allocate buffer of size 0x%I64x for pointer shape kernel mode buffer",
      LODWORD(Size[1]),
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v16);
    if ( v18 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v16);
    }
    return 3221225495LL;
  }
}
