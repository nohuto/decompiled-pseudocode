/*
 * XREFs of ?NotifyClientOfEdgyDetected@EdgyConnection@@QEAAJPEBUCandidateIdentity@@PEAUCandidateEdgyDetectedInfo@@PEBUEdgyPointerInfo@@2@Z @ 0x180177554
 * Callers:
 *     ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x18017AA3C (-OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z @ 0x1800FF820 (-EdgyGestureDetected@BamoEdgyControllerClientProxy@@UEAAJPEBGIAEBUD2D_VECTOR_2F@@_K12II@Z.c)
 */

__int64 __fastcall EdgyConnection::NotifyClientOfEdgyDetected(
        EdgyConnection *this,
        const struct CandidateIdentity *a2,
        struct CandidateEdgyDetectedInfo *a3,
        const struct EdgyPointerInfo *a4,
        D2D_VECTOR_2F a5)
{
  bool v5; // zf
  D2D_VECTOR_2F v6; // rsi
  FLOAT v10; // xmm1_4
  int v11; // eax
  FLOAT v12; // xmm0_4
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  __int64 v19; // [rsp+50h] [rbp-1h] BYREF
  int v20; // [rsp+58h] [rbp+7h]
  struct D2D_VECTOR_2F v21; // [rsp+5Ch] [rbp+Bh]
  __int64 v22; // [rsp+68h] [rbp+17h]
  D2D_VECTOR_2F v23; // [rsp+70h] [rbp+1Fh]
  __int64 v24; // [rsp+78h] [rbp+27h]
  int v25; // [rsp+80h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+57h]
  struct D2D_VECTOR_2F v27; // [rsp+C0h] [rbp+6Fh] BYREF

  v5 = *(_BYTE *)a3 == 0;
  v6 = a5;
  v10 = (float)*((int *)a4 + 4);
  v11 = *(_DWORD *)(*(_QWORD *)&a5 + 12LL);
  v27.x = (float)*((int *)a4 + 3);
  v12 = (float)v11;
  v13 = *(_DWORD *)(*(_QWORD *)&a5 + 16LL);
  v27.y = v10;
  a5.x = v12;
  a5.y = (float)v13;
  if ( !v5 )
  {
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(const struct CandidateIdentity **)a2;
    BamoEdgyControllerClientProxy::EdgyGestureDetected(
      (BamoEdgyControllerClientProxy *)(*((_QWORD *)a3 + 2) + 8LL),
      (const unsigned __int16 *)a2,
      *(_DWORD *)a4,
      &v27,
      *((_QWORD *)a4 + 3),
      &a5,
      *(_QWORD *)(*(_QWORD *)&v6 + 24LL),
      *((_DWORD *)a3 + 6),
      *((_DWORD *)a3 + 7));
  }
  if ( *((_BYTE *)a3 + 1) )
  {
    v14 = *((_QWORD *)this + 2);
    v15 = *((_QWORD *)this + 7);
    v19 = *((_QWORD *)a3 + 9);
    v20 = *(_DWORD *)a4;
    v22 = *((_QWORD *)a4 + 3);
    v24 = *(_QWORD *)(*(_QWORD *)&v6 + 24LL);
    v16 = *((_DWORD *)a3 + 12);
    v21 = v27;
    v25 = v16;
    v23 = a5;
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64))(*(_QWORD *)v14 + 176LL))(
            v14,
            v15,
            &v19,
            56LL);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        420LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgyconnection.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
  }
  return 0LL;
}
