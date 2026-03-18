/*
 * XREFs of ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18009D418
 * Callers:
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009D34C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180077110 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x18009D65C (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18009DD3C (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawListCache::Update(
        CDrawListCache *this,
        struct CDrawListEntry *a2,
        struct CDrawListEntry **a3,
        __int64 a4,
        enum D2D1_ANTIALIAS_MODE a5,
        bool a6,
        bool a7)
{
  __int64 v7; // rsi
  struct CDrawListEntry *v8; // rbx
  __int64 v9; // r15
  struct CDrawListEntry *v10; // r12
  CDrawListCache *v11; // rdi
  _DWORD *v12; // r14
  __int64 v13; // r8
  char *v14; // rdx
  char *v15; // r8
  __int64 v16; // rax
  _QWORD *v17; // r10
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // rbx
  int v24; // eax
  __int128 v25; // xmm0
  int v26; // ecx
  int v27; // ecx
  __int64 v28; // [rsp+20h] [rbp-50h] BYREF
  struct CDrawListEntry **v29; // [rsp+28h] [rbp-48h]
  __int128 v30; // [rsp+30h] [rbp-40h] BYREF
  __int128 v31; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v32[16]; // [rsp+50h] [rbp-20h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]

  v7 = 0LL;
  v8 = (struct CDrawListEntry *)(unsigned int)a4;
  v9 = (unsigned int)a4;
  v10 = a2;
  v28 = (unsigned int)a4;
  v11 = this;
  v29 = a3;
  if ( !a3 && (_DWORD)a4 )
  {
LABEL_33:
    ((void (__fastcall *)(CDrawListCache *, struct CDrawListEntry *, struct CDrawListEntry **, __int64, __int64, struct CDrawListEntry **))`gsl::details::get_terminate_handler'::`2'::handler)(
      this,
      a2,
      a3,
      a4,
      v28,
      v29);
    __debugbreak();
  }
  v12 = (_DWORD *)((char *)this + 32);
  *((_QWORD *)&v30 + 1) = 0LL;
  v13 = *((_QWORD *)this + 4);
  *(_QWORD *)&v30 = &v28;
  if ( (v13 & 3) != 0 )
  {
    if ( (v13 & 3) == 1 )
    {
      v14 = (char *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
      goto LABEL_5;
    }
    if ( (v13 & 3) == 2 )
    {
      v14 = 0LL;
      goto LABEL_5;
    }
    if ( (v13 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v14 = (char *)this + 32;
LABEL_5:
  if ( (v13 & 3) == 0 )
    goto LABEL_39;
  if ( (v13 & 3) != 1 )
  {
    if ( (v13 & 3) == 2 )
    {
      v15 = 0LL;
      goto LABEL_8;
    }
    if ( (v13 & 3) != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
LABEL_39:
    v15 = (char *)this + 32;
    goto LABEL_8;
  }
  v15 = (char *)(v13 & 0xFFFFFFFFFFFFFFFCuLL);
LABEL_8:
  v16 = detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::reserve_region(
          v12,
          (v14 - v15) >> 3,
          (unsigned int)a4);
  a3 = (struct CDrawListEntry **)v30;
  v17 = (_QWORD *)v16;
  a2 = (struct CDrawListEntry *)*((_QWORD *)&v30 + 1);
  a4 = 0LL;
  while ( a2 != v8 || a3 != (struct CDrawListEntry **)&v28 )
  {
    if ( a2 == *a3 )
      goto LABEL_33;
    this = *(CDrawListCache **)((char *)a3[1] + a4);
    *v17 = this;
    if ( a4 < 0 || a2 == *a3 )
      goto LABEL_33;
    a2 = (struct CDrawListEntry *)((char *)a2 + 1);
    a4 += 8LL;
    ++v17;
  }
  if ( (*v12 & 3u) > 1 && (*v12 & 3u) - 2 >= 2 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  *((_DWORD *)v11 + 24) = a5;
  *((_BYTE *)v11 + 100) = a6;
  *((_BYTE *)v11 + 101) = a7;
  *((_QWORD *)v11 + 3) = v10;
  if ( (_DWORD)v8 )
  {
    v31 = 0uLL;
    v18 = detail::pointer_buffer_impl<CDrawListEntry *>::first(v12, a2, a3, a4, v28, v29);
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)v18 + 16LL) + 24LL))(*(_QWORD *)v18 + 16LL);
    *((_DWORD *)v11 + 23) = -1;
    *((_DWORD *)v11 + 4) = v19;
    *((_DWORD *)v11 + 22) = 0;
    do
    {
      v23 = *(_DWORD **)(detail::pointer_buffer_impl<CDrawListEntry *>::first(v12, v20, v21, v22, v28, v29) + v7);
      (**(void (__fastcall ***)(_DWORD *))v23)(v23);
      v24 = v23[42];
      *((_DWORD *)v11 + 22) |= v24;
      *((_DWORD *)v11 + 23) &= v24;
      v30 = *(_OWORD *)(*(__int64 (__fastcall **)(_DWORD *, _BYTE *))(*(_QWORD *)v23 + 24LL))(v23, v32);
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v31, (float *)&v30);
      v7 += 8LL;
      --v9;
    }
    while ( v9 );
    v25 = v31;
    v30 = v31;
  }
  else
  {
    v25 = 0LL;
    *((_DWORD *)v11 + 22) = 16;
    *((_DWORD *)v11 + 23) = 16;
  }
  v26 = *((_DWORD *)v11 + 4);
  *(_OWORD *)((char *)v11 + 40) = v25;
  v27 = v26 - 1;
  if ( v27 )
  {
    if ( v27 == 1 )
      ++dword_180344370;
  }
  else
  {
    ++dword_180344364;
  }
}
