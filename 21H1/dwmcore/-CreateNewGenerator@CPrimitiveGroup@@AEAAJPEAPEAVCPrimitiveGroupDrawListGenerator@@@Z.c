/*
 * XREFs of ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18007C948
 * Callers:
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800A8830 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x18003748C (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18007CC60 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800A9A28 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewGenerator(
        CPrimitiveGroup *this,
        struct CPrimitiveGroupDrawListGenerator **a2)
{
  struct ID2D1PrivateCompositorBuffer *v2; // rsi
  struct CSharedSection *v4; // r8
  unsigned int v6; // edx
  __int64 v7; // r14
  void *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  struct ID2D1PrivateCompositorBuffer *v11; // r15
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 *v16; // r12
  unsigned int v17; // r8d
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 *v24; // rsi
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rcx
  unsigned int i; // r9d
  unsigned int v30; // eax
  __int64 j; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int128 v40; // [rsp+30h] [rbp-30h] BYREF
  __int128 v41; // [rsp+40h] [rbp-20h] BYREF
  __int128 v42; // [rsp+50h] [rbp-10h] BYREF
  struct ID2D1PrivateCompositorBuffer *v43; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v44; // [rsp+A8h] [rbp+48h] BYREF
  struct ID2D1PrivateCompositorBuffer *v45; // [rsp+B0h] [rbp+50h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v4 = (struct CSharedSection *)*((_QWORD *)this + 54);
  v6 = *((_DWORD *)this + 130);
  v7 = 0LL;
  v8 = (void *)*((_QWORD *)this + 64);
  v45 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  v9 = CD2DSharedBuffer::CreateFromSharedSection(v8, v6, v4, &v45);
  v11 = v45;
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x28Au, 0LL);
    goto LABEL_20;
  }
  v13 = CD2DSharedBuffer::CreateFromSharedSection(
          *((void **)this + 66),
          *((_DWORD *)this + 134),
          *((struct CSharedSection **)this + 54),
          &v43);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x290u, 0LL);
    goto LABEL_41;
  }
  v15 = *((_DWORD *)this + 50);
  v16 = (__int64 *)((char *)this + 304);
  v17 = *((_DWORD *)this + 112);
  v18 = *((_DWORD *)this + 113);
  v19 = *((_DWORD *)this + 66);
  if ( v17 >= v15 )
    v17 = *((_DWORD *)this + 50);
  v20 = v15 - v17;
  *((_DWORD *)this + 112) = v17;
  if ( v18 >= v20 )
    v18 = v20;
  v21 = *((_DWORD *)this + 114);
  *((_DWORD *)this + 113) = v18;
  if ( v21 >= v19 )
    v21 = v19;
  *((_DWORD *)this + 114) = v21;
  v22 = DynArrayImpl<0>::Grow((int)this + 304, 8, v18 + v17, 1, 0LL);
  v12 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x297u, 0LL);
    goto LABEL_41;
  }
  v24 = (__int64 *)((char *)this + 368);
  *((_DWORD *)this + 82) = *((_DWORD *)this + 112) + *((_DWORD *)this + 113);
  v25 = DynArrayImpl<0>::Grow((int)this + 368, 8, *((_DWORD *)this + 114), 1, 0LL);
  v12 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x29Au, 0LL);
LABEL_41:
    v2 = v43;
    goto LABEL_20;
  }
  v27 = 0LL;
  for ( *((_DWORD *)this + 98) = *((_DWORD *)this + 114);
        (unsigned int)v27 < *((_DWORD *)this + 112);
        v27 = (unsigned int)(v27 + 1) )
  {
    v28 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v27);
    *(_QWORD *)(*v16 + 8 * v27) = (v28 + 64) & -(__int64)(v28 != 0);
  }
  for ( i = 0; i < *((_DWORD *)this + 113); *(_QWORD *)(*v16 + 8 * v38) = (v39 + 64) & -(__int64)(v39 != 0) )
  {
    v38 = i + *((_DWORD *)this + 112);
    v39 = *(_QWORD *)(*((_QWORD *)this + 22) + 8 * v38);
    ++i;
  }
  v30 = *((_DWORD *)this + 114);
  for ( j = 0LL; (unsigned int)j < v30; v30 = *((_DWORD *)this + 114) )
  {
    *(_QWORD *)(*v24 + 8 * j) = *(_QWORD *)(*((_QWORD *)this + 30) + 8 * j);
    j = (unsigned int)(j + 1);
  }
  v32 = *v16;
  v33 = v30;
  v34 = *v24;
  *(_QWORD *)&v40 = v33;
  *((_QWORD *)&v40 + 1) = v34;
  if ( !v34 && v33
    || (v33 = *((unsigned int *)this + 112),
        j = *((unsigned int *)this + 113),
        *(_QWORD *)&v41 = j,
        (*((_QWORD *)&v41 + 1) = v32 + 8 * v33) == 0LL)
    && j
    || (*(_QWORD *)&v42 = v33, (*((_QWORD *)&v42 + 1) = v32) == 0LL) && v33 )
  {
    ((void (__fastcall *)(__int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v33, v32, j);
    __debugbreak();
  }
  v2 = v43;
  v35 = CPrimitiveGroupDrawListGenerator::Create(v11, v43, &v42, &v41, &v40, &v44);
  v12 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x2C9u, 0LL);
    v7 = v44;
  }
  else
  {
    *a2 = (struct CPrimitiveGroupDrawListGenerator *)v44;
  }
LABEL_20:
  if ( v11 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v2 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v2 + 16LL))(v2);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  return v12;
}
