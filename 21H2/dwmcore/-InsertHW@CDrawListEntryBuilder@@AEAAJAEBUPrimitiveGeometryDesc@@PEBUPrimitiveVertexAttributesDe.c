/*
 * XREFs of ?InsertHW@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@_N@Z @ 0x1800AC0F4
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AC3C0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 * Callees:
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRoundedRectangleShape@@AEBVCMILMatrix@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18005739C (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@PEBVCRou.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z @ 0x180057630 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@PEAVCMILMatrix@@@Z.c)
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x1800636A8 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800A81A0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B3EB0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?clear_region@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D997C (-clear_region@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimitive.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?clear@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801E37AC (-clear@-$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V-$buffer_impl@UPrimitiveSubRect.c)
 */

__int64 __fastcall CDrawListEntryBuilder::InsertHW(
        CCpuClip **this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        char a4)
{
  float *v8; // rax
  struct CPrimitiveColor *v9; // rbx
  char v10; // cl
  int appended; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  float v15; // xmm0_4
  _BYTE *v16; // rbx
  int v17; // eax
  _BYTE *v18; // r14
  __int64 v19; // rcx
  int v20; // r15d
  float v21; // xmm1_4
  float v22; // xmm1_4
  CCpuClip *v23; // rcx
  char v24; // r15
  unsigned __int64 v25; // r14
  CCpuClip *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  struct CShape *v29; // rbx
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  int BuiltHWPrimitiveEntry; // eax
  __int64 v36; // rcx
  void *v37; // rcx
  bool v38; // zf
  HANDLE ProcessHeap; // rax
  int v40; // eax
  __int64 v41; // rcx
  int v42; // [rsp+34h] [rbp-CCh]
  struct CPrimitiveColor *v43; // [rsp+38h] [rbp-C8h]
  struct CShape *v44; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+58h] [rbp-A8h]
  char v47; // [rsp+60h] [rbp-A0h]
  _BYTE v48[64]; // [rsp+70h] [rbp-90h] BYREF
  int v49; // [rsp+B0h] [rbp-50h]
  _BYTE *v50; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v51; // [rsp+C8h] [rbp-38h]
  __int64 *v52; // [rsp+D0h] [rbp-30h]
  _BYTE v53[216]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v54; // [rsp+1B0h] [rbp+B0h] BYREF

  if ( !a3 )
  {
    v43 = 0LL;
LABEL_3:
    if ( *((_BYTE *)this + 4428) )
    {
      BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                                (CDrawListEntryBuilder *)this,
                                0,
                                0LL,
                                0LL);
      v13 = BuiltHWPrimitiveEntry;
      if ( BuiltHWPrimitiveEntry < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0LL, BuiltHWPrimitiveEntry, 0x128u);
        return v13;
      }
      *((_BYTE *)this + 4428) = 0;
    }
    goto LABEL_4;
  }
  v8 = (float *)*((_QWORD *)a3 + 3);
  v9 = (struct CPrimitiveColor *)*((_QWORD *)a3 + 2);
  v43 = v9;
  if ( !v8 )
    goto LABEL_3;
  if ( !*((_BYTE *)this + 4428) || *((float *)this + 1102) != *v8 || *((float *)this + 1103) != v8[1] )
  {
    v33 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry((CDrawListEntryBuilder *)this, 0, 0LL, 0LL);
    v13 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0LL, v33, 0x120u);
      return v13;
    }
    *((_BYTE *)this + 4428) = 1;
    this[551] = (CCpuClip *)**((_QWORD **)a3 + 3);
  }
  v43 = v9;
LABEL_4:
  v10 = 0;
  if ( (*((_BYTE *)a2 + 24) & 1) == 0 )
    v10 = a4;
  if ( !v10 || !*((_BYTE *)this + 4426) || (*((_BYTE *)a2 + 24) & 2) == 0 )
    goto LABEL_8;
  v15 = *((float *)a2 + 2);
  v52 = &v54;
  v16 = v53;
  v17 = CCommonRegistryData::MegaRectSize;
  v18 = v53;
  v19 = 1LL;
  v50 = v53;
  v51 = v53;
  v20 = 0;
  if ( !CCommonRegistryData::MegaRectSize )
    v17 = 1;
  v42 = v17;
  if ( v15 < *(float *)a2 || (v21 = *((float *)a2 + 3), v21 < *((float *)a2 + 1)) )
    v22 = 0.0;
  else
    v22 = (float)(v21 - *((float *)a2 + 1)) * (float)(v15 - *(float *)a2);
  if ( v22 < (float)v17 )
    goto LABEL_31;
  v23 = this[2];
  if ( *(_QWORD *)v23 || *((_QWORD *)v23 + 10) )
  {
    if ( !CCpuClip::IsAxisAlignedRectangle((CShape **)v23) )
    {
      v26 = this[2];
      v49 = 0;
      v27 = CCpuClip::ResolveClip(v26, &v44, (struct CMILMatrix *)v48);
      v20 = v27;
      v13 = v27;
      if ( v27 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0x4C9u);
        goto LABEL_55;
      }
      v29 = v44;
      if ( !(*(unsigned int (__fastcall **)(struct CShape *, _QWORD))(*(_QWORD *)v44 + 8LL))(v44, 0LL) )
      {
        CDrawListEntryBuilder::PartitionPrimitiveWithRoundedRectangleClip(
          v42,
          (int)a2,
          (__int64)v29,
          (__int64)v48,
          (__int64)&v50);
        v18 = v51;
        v16 = v50;
        goto LABEL_21;
      }
    }
    v18 = v51;
    v16 = v50;
LABEL_31:
    v13 = v20;
    if ( v20 >= 0 )
      goto LABEL_21;
LABEL_55:
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v20, 0x138u);
    goto LABEL_56;
  }
  v13 = 0;
LABEL_21:
  if ( v18 == v16 )
  {
    v24 = 0;
LABEL_23:
    v25 = 0xAAAAAAAAAAAAAAABuLL * ((v18 - v16) >> 3);
    if ( v25 )
    {
      detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear_region(
        &v50,
        0LL,
        v25);
      v16 = v50;
    }
    v50 = 0LL;
    if ( v16 == v53 )
      v16 = 0LL;
    if ( v16 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v16);
    }
    if ( v24 )
    {
LABEL_9:
      if ( v43 )
      {
        v40 = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(
                (CDrawListEntryBuilder *)this,
                0,
                v43,
                (const struct _D3DCOLORVALUE *)a3);
        v13 = v40;
        if ( v40 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0LL, v40, 0x156u);
      }
      return v13;
    }
LABEL_8:
    appended = CDrawListEntryBuilder::AppendHWPrimitive((CDrawListEntryBuilder *)this, a2, a3);
    v13 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, appended, 0x150u);
      return v13;
    }
    goto LABEL_9;
  }
  v47 = v47 & 0xF8 | *((_BYTE *)a2 + 24) & 6;
  while ( 1 )
  {
    if ( v16 == v18 )
    {
      v18 = v51;
      v24 = 1;
      v16 = v50;
      goto LABEL_23;
    }
    v30 = *((_DWORD *)a2 + 4);
    v45 = *(_OWORD *)v16;
    v46 = *((_DWORD *)v16 + 4) & v30;
    v31 = CDrawListEntryBuilder::AppendHWPrimitive(
            (CDrawListEntryBuilder *)this,
            (const struct PrimitiveGeometryDesc *)&v45,
            a3);
    v13 = v31;
    if ( v31 < 0 )
      break;
    v16 += 24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, v31, 0x147u);
LABEL_56:
  detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::clear(&v50);
  v37 = v50;
  v38 = v50 == v53;
  v50 = 0LL;
  if ( v38 )
    v37 = 0LL;
  DefaultHeap::Free(v37);
  return v13;
}
