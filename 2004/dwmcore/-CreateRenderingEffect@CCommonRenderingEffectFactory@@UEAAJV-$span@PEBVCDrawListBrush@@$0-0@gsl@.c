/*
 * XREFs of ?CreateRenderingEffect@CCommonRenderingEffectFactory@@UEAAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCRenderingEffect@@@Z @ 0x180053340
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003E144 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPixelFormatInfo@CDrawListBitmap@@QEBA?AUPixelFormatInfo@@XZ @ 0x18003F3C0 (-GetPixelFormatInfo@CDrawListBitmap@@QEBA-AUPixelFormatInfo@@XZ.c)
 *     IsWhitePixelOptimizationCandidate @ 0x18003F8B4 (IsWhitePixelOptimizationCandidate.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x180049A60 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@AEBV0@@Z @ 0x18004CED4 (--0CDrawListBitmap@@QEAA@AEBV0@@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180054D44 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0SamplerMode@@QEAA@XZ @ 0x1800DE290 (--0SamplerMode@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCommonRenderingEffectFactory::CreateRenderingEffect(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r13d
  _QWORD *v4; // rsi
  char v5; // di
  __int64 v6; // r14
  __int64 v7; // r15
  int Current; // eax
  struct CThreadContext *v9; // rcx
  char *v10; // rbx
  int v11; // edx
  __int64 v12; // rsi
  CDrawListBitmap *v13; // rax
  char v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  CDrawListBitmap *v18; // rcx
  char v19; // al
  __int64 v20; // xmm1_8
  char v21; // di
  __int16 *v22; // rax
  CDrawListBitmap *v23; // r14
  __int64 v24; // r15
  SamplerMode *v25; // r14
  CDrawListBitmap *v26; // r15
  __int64 v27; // rsi
  _QWORD *v28; // r14
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int128 v32; // xmm0
  char v33; // al
  __int64 v34; // xmm1_8
  CDrawListBitmap *v35; // r15
  __int64 v36; // rdx
  __int64 v37; // r12
  __int64 v38; // rdx
  __int64 v39; // r12
  __int16 *v40; // rcx
  char v41; // al
  __int64 v42; // rcx
  bool v43; // al
  char v44; // al
  __int64 v45; // rcx
  __int64 v47; // rcx
  char *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int16 v58; // [rsp+30h] [rbp-D0h] BYREF
  char v59; // [rsp+32h] [rbp-CEh]
  __int16 v60; // [rsp+33h] [rbp-CDh] BYREF
  char v61; // [rsp+35h] [rbp-CBh]
  __int16 v62; // [rsp+36h] [rbp-CAh] BYREF
  char v63; // [rsp+38h] [rbp-C8h]
  int v64; // [rsp+3Ch] [rbp-C4h] BYREF
  CDrawListBitmap *v65; // [rsp+40h] [rbp-C0h]
  CDrawListBitmap *v66; // [rsp+48h] [rbp-B8h]
  __int16 *v67; // [rsp+50h] [rbp-B0h]
  __int16 *v68; // [rsp+58h] [rbp-A8h]
  struct CThreadContext *v69; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+68h] [rbp-98h]
  _QWORD *v71; // [rsp+70h] [rbp-90h]
  __int128 v72; // [rsp+78h] [rbp-88h] BYREF
  __int128 v73; // [rsp+88h] [rbp-78h]
  __int128 v74; // [rsp+98h] [rbp-68h]
  __int64 v75; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v76; // [rsp+B0h] [rbp-50h]
  __int128 v77; // [rsp+B8h] [rbp-48h]
  __int64 v78; // [rsp+C8h] [rbp-38h]
  char v79; // [rsp+D0h] [rbp-30h]
  __int128 v80; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v81; // [rsp+E8h] [rbp-18h]
  __int128 v82; // [rsp+F8h] [rbp-8h]
  char v83[8]; // [rsp+108h] [rbp+8h] BYREF
  char v84[40]; // [rsp+110h] [rbp+10h] BYREF
  int v85[4]; // [rsp+138h] [rbp+38h] BYREF
  void *retaddr; // [rsp+188h] [rbp+88h]

  v3 = 0;
  v71 = a3;
  v64 = 0;
  v4 = a3;
  v5 = 0;
  if ( *(__int64 *)a2 <= 0 )
    v6 = 0LL;
  else
    v6 = **(_QWORD **)(a2 + 8);
  if ( *(__int64 *)a2 > 1 )
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL);
  else
    v7 = 0LL;
  Current = CThreadContext::GetCurrent(&v69);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  v9 = v69;
  v10 = 0LL;
  v11 = *((_DWORD *)v69 + 35);
  if ( v11 )
  {
    v10 = (char *)*((_QWORD *)v69 + 18);
    *((_QWORD *)v69 + 18) = *(_QWORD *)v10;
    *((_DWORD *)v9 + 35) = v11 - 1;
  }
  if ( v10 || (v10 = (char *)DefaultHeap::Alloc(0x78uLL)) != 0LL )
  {
    v12 = 2LL;
    if ( v7 )
    {
      v62 = *(_WORD *)(v7 + 104);
      v63 = *(_BYTE *)(v7 + 106);
      v68 = &v62;
      v13 = CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)v83, (const struct CDrawListBitmap *)(v7 + 56));
      v14 = 1;
    }
    else
    {
      v58 = 257;
      v59 = 1;
      v81 = 0LL;
      DWORD2(v81) = 0;
      v13 = (CDrawListBitmap *)&v80;
      v82 = 0LL;
      BYTE8(v82) = 0;
      v14 = 2;
      v68 = &v58;
      v80 = 0LL;
    }
    v66 = v13;
    if ( v6 )
    {
      v15 = *(_QWORD *)(v6 + 56);
      v75 = v15;
      if ( v15 )
      {
        v47 = v15 + 8 + *(int *)(*(_QWORD *)(v15 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 8LL))(v47);
      }
      v16 = *(_QWORD *)(v6 + 64);
      v76 = v16;
      if ( v16 )
      {
        v17 = v16 + 8 + *(int *)(*(_QWORD *)(v16 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      }
      v18 = (CDrawListBitmap *)&v75;
      v19 = *(_BYTE *)(v6 + 96);
      v20 = *(_QWORD *)(v6 + 88);
      v21 = 4;
      v77 = *(_OWORD *)(v6 + 72);
      v79 = v19;
      v78 = v20;
    }
    else
    {
      v18 = (CDrawListBitmap *)&v72;
      v73 = 0LL;
      DWORD2(v73) = 0;
      v21 = 8;
      v74 = 0LL;
      BYTE8(v74) = 0;
      v72 = 0LL;
    }
    v5 = v14 | v21;
    v65 = v18;
    if ( v6 )
    {
      LOWORD(v64) = *(_WORD *)(v6 + 104);
      BYTE2(v64) = *(_BYTE *)(v6 + 106);
      v22 = (__int16 *)&v64;
    }
    else
    {
      v60 = 257;
      v22 = &v60;
      v61 = 1;
    }
    v67 = v22;
    v23 = (CDrawListBitmap *)(v10 + 16);
    *((_DWORD *)v10 + 2) = 0;
    *(_QWORD *)v10 = &CCommonRenderingEffect::`vftable';
    v24 = 2LL;
    do
    {
      CDrawListBitmap::CDrawListBitmap(v23);
      v23 = (CDrawListBitmap *)((char *)v23 + 48);
      --v24;
    }
    while ( v24 );
    v25 = (SamplerMode *)(v10 + 112);
    do
    {
      SamplerMode::SamplerMode(v25);
      v25 = (SamplerMode *)((char *)v25 + 3);
      --v12;
    }
    while ( v12 );
    v26 = v65;
    v27 = *((_QWORD *)v10 + 2);
    v28 = *(_QWORD **)v65;
    *((_QWORD *)v10 + 2) = *(_QWORD *)v65;
    if ( v28 )
    {
      v48 = (char *)v28 + *(int *)(v28[1] + 4LL) + 8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v48 + 8LL))(v48);
    }
    if ( v27 )
    {
      v52 = v27 + *(int *)(*(_QWORD *)(v27 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    }
    v29 = *((_QWORD *)v26 + 1);
    v30 = *((_QWORD *)v10 + 3);
    v70 = v30;
    *((_QWORD *)v10 + 3) = v29;
    if ( v29 )
    {
      v31 = v29 + *(int *)(*(_QWORD *)(v29 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
      v30 = v70;
    }
    if ( v30 )
    {
      v53 = v30 + 8 + *(int *)(*(_QWORD *)(v30 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v32 = *((_OWORD *)v26 + 1);
    v33 = *((_BYTE *)v26 + 40);
    v34 = *((_QWORD *)v26 + 4);
    v35 = v66;
    *((_OWORD *)v10 + 2) = v32;
    v10[56] = v33;
    *((_QWORD *)v10 + 6) = v34;
    v36 = *(_QWORD *)v35;
    v37 = *((_QWORD *)v10 + 8);
    *((_QWORD *)v10 + 8) = *(_QWORD *)v35;
    if ( v36 )
    {
      v50 = v36 + 8 + *(int *)(*(_QWORD *)(v36 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 8LL))(v50);
    }
    if ( v37 )
    {
      v54 = v37 + *(int *)(*(_QWORD *)(v37 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    v38 = *((_QWORD *)v35 + 1);
    v39 = *((_QWORD *)v10 + 9);
    *((_QWORD *)v10 + 9) = v38;
    if ( v38 )
    {
      v51 = v38 + 8 + *(int *)(*(_QWORD *)(v38 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
    }
    if ( v39 )
    {
      v55 = v39 + *(int *)(*(_QWORD *)(v39 + 8) + 4LL) + 8LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    }
    v40 = v67;
    *((_OWORD *)v10 + 5) = *((_OWORD *)v35 + 1);
    *((_QWORD *)v10 + 12) = *((_QWORD *)v35 + 4);
    v10[104] = *((_BYTE *)v35 + 40);
    *((_WORD *)v10 + 56) = *v40;
    v41 = *((_BYTE *)v40 + 2);
    v42 = (__int64)v68;
    v10[114] = v41;
    *(_WORD *)(v10 + 115) = *(_WORD *)v42;
    v10[117] = *(_BYTE *)(v42 + 2);
    v43 = !v28 && !v29
       || CCommonRegistryData::EnableCommonSuperSets
       && v28
       && (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28)
       && !CDrawListBitmap::GetPixelFormatInfo(v65, v85)[2];
    v10[118] = v43;
    if ( !*(_QWORD *)v35 && !*((_QWORD *)v35 + 1) || (v44 = IsWhitePixelOptimizationCandidate(v35, 1)) != 0 )
      v44 = 1;
    v10[118] &= v44;
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    v4 = v71;
  }
  else
  {
    v10 = 0LL;
  }
  if ( (v5 & 8) != 0 )
  {
    v5 &= ~8u;
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v72 + 8);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)&v72);
  }
  if ( (v5 & 4) != 0 )
  {
    v5 &= ~4u;
    if ( v76 )
    {
      v45 = v76 + 8 + *(int *)(*(_QWORD *)(v76 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    if ( v75 )
    {
      v49 = v75 + 8 + *(int *)(*(_QWORD *)(v75 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
    }
  }
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    if ( *((_QWORD *)&v80 + 1) )
    {
      v56 = *((_QWORD *)&v80 + 1) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)&v80 + 1) + 8LL) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    }
    if ( (_QWORD)v80 )
    {
      v57 = v80 + 8 + *(int *)(*(_QWORD *)(v80 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    }
  }
  if ( (v5 & 1) != 0 )
  {
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v84);
    wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)v83);
  }
  if ( v10 )
  {
    *v4 = v10;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, -2147024882, 0x31u, 0LL);
  }
  return v3;
}
