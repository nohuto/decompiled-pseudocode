/*
 * XREFs of ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18008721C
 * Callers:
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180087148 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x18008750C (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800C9E90 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawListCache::Update(
        CDrawListCache *this,
        __int64 a2,
        struct CDrawListEntry **a3,
        unsigned int a4,
        enum D2D1_ANTIALIAS_MODE a5,
        bool a6)
{
  __int64 v6; // r12
  CDrawListCache *v9; // rdi
  _DWORD *v10; // rsi
  __int64 v11; // r9
  CDrawListCache *v12; // r14
  int v13; // eax
  char *v14; // rdx
  char *v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  struct CDrawListEntry **v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned int v21; // r14d
  __int64 v22; // r15
  unsigned __int64 v23; // rbx
  _DWORD *v24; // rbx
  __int64 v25; // rax
  int v26; // eax
  bool v27; // zf
  int v28; // eax
  int v29; // eax
  __int128 v30; // [rsp+20h] [rbp-50h] BYREF
  gsl::details *v31; // [rsp+30h] [rbp-40h]
  __int128 v32; // [rsp+40h] [rbp-30h] BYREF
  gsl::details *v33; // [rsp+50h] [rbp-20h]
  void *retaddr; // [rsp+98h] [rbp+28h]

  v6 = a4;
  v9 = this;
  if ( !a3 && a4 )
  {
LABEL_40:
    gsl::details::terminate(this);
    JUMPOUT(0x180087502LL);
  }
  v10 = (_DWORD *)((char *)this + 48);
  *(_QWORD *)&v30 = a3;
  v11 = *((_QWORD *)this + 6);
  v12 = (CDrawListCache *)&a3[v6];
  *((_QWORD *)&v30 + 1) = v12;
  v13 = v11 & 3;
  v31 = (gsl::details *)a3;
  if ( (v11 & 3) == 0 )
    goto LABEL_35;
  if ( v13 != 1 )
  {
    if ( v13 == 2 )
    {
      v14 = 0LL;
      goto LABEL_30;
    }
LABEL_35:
    v14 = (char *)this + 48;
    if ( (v11 & 3) != 0 )
    {
      v28 = v13 - 1;
      if ( !v28 )
        goto LABEL_5;
      v29 = v28 - 1;
      if ( !v29 )
      {
LABEL_30:
        v15 = 0LL;
        goto LABEL_6;
      }
      if ( v29 != 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
    v15 = (char *)this + 48;
    goto LABEL_6;
  }
  v14 = (char *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_5:
  v15 = (char *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_6:
  v32 = v30;
  v33 = v31;
  v16 = detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::reserve_region(
          v10,
          (v14 - v15) >> 3,
          (8 * v6) >> 3);
  v17 = *((_QWORD *)&v30 + 1);
  v18 = (struct CDrawListEntry **)v30;
  v19 = v16 - (_QWORD)a3;
  for ( this = v31; ; this = (CDrawListCache *)((char *)this + 8) )
  {
    if ( v18 != a3 || (CDrawListCache *)v17 != v12 )
      goto LABEL_40;
    if ( this == v12 )
      break;
    if ( !v18 || !v17 || v18 > (struct CDrawListEntry **)this || (unsigned __int64)this >= v17 )
      goto LABEL_40;
    *(_QWORD *)((char *)this + v19) = *(_QWORD *)this;
  }
  if ( (*v10 & 3u) > 1 && (*v10 & 3u) - 2 >= 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v20 = 0LL;
  if ( g_pComposition )
    v20 = *((_QWORD *)g_pComposition + 62);
  *((_QWORD *)v9 + 4) = v20;
  *((_QWORD *)v9 + 3) = v20;
  *((_DWORD *)v9 + 24) = a5;
  *((_BYTE *)v9 + 100) = a6;
  *((_QWORD *)v9 + 5) = a2;
  *((_BYTE *)v9 + 102) = 0;
  if ( (_DWORD)v6 )
  {
    v21 = 0;
    v32 = 0uLL;
    *((_DWORD *)v9 + 22) = 0;
    *((_DWORD *)v9 + 23) = -1;
    v22 = 0LL;
    while ( 1 )
    {
      if ( (*(_QWORD *)v10 & 3) == 0 )
        goto LABEL_31;
      if ( (*v10 & 3) != 1 )
        break;
      v23 = *(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCuLL;
LABEL_23:
      v24 = *(_DWORD **)(v23 + v22);
      (**(void (__fastcall ***)(_DWORD *, unsigned __int64, struct CDrawListEntry **, __int64))v24)(v24, v17, v18, v19);
      v25 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v24 + 40LL))(v24);
      (*(void (__fastcall **)(__int64, CDrawListCache *))(*(_QWORD *)v25 + 56LL))(v25, v9);
      v26 = v24[12];
      *((_DWORD *)v9 + 22) |= v26;
      *((_DWORD *)v9 + 23) &= v26;
      v30 = *(_OWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v24 + 48LL))(v24);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v32, &v30);
      if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v24 + 32LL))(v24) == 2 )
        *((_BYTE *)v9 + 102) = 1;
      ++v21;
      v22 += 8LL;
      if ( v21 >= (unsigned int)v6 )
      {
        v27 = *((_BYTE *)v9 + 102) == 0;
        v30 = v32;
        *((_OWORD *)v9 + 4) = v32;
        if ( v27 )
          goto LABEL_27;
        ++dword_1803D3250;
        return;
      }
    }
    if ( (*v10 & 3) == 2 )
    {
      v23 = 0LL;
      goto LABEL_23;
    }
    if ( (*v10 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_31:
    v23 = (unsigned __int64)v10;
    goto LABEL_23;
  }
  *((_DWORD *)v9 + 22) = 16;
  *((_DWORD *)v9 + 23) = 16;
  *((_OWORD *)v9 + 4) = 0LL;
LABEL_27:
  ++dword_1803D3244;
}
