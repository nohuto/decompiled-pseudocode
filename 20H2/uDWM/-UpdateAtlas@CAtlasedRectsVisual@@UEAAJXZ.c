/*
 * XREFs of ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001A6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18001AA10 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 *     ??$CreateProxy@VCAtlasedRectsGroupProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsGroupProxy@@@Z @ 0x180023D60 (--$CreateProxy@VCAtlasedRectsGroupProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsGroupProxy@@@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::UpdateAtlas(CAtlasedRectsVisual *this)
{
  volatile signed __int32 *v1; // rbx
  unsigned int v2; // esi
  unsigned __int64 v4; // r15
  __int32 *v5; // rcx
  __int64 v6; // r14
  const RECT *p_si128; // r12
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned int v11; // ebp
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // al
  int v17; // eax
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r8
  int v26; // eax
  int v27; // ebp
  __int64 v29; // rcx
  volatile signed __int32 *v30; // [rsp+30h] [rbp-58h] BYREF
  __int64 v31; // [rsp+38h] [rbp-50h]
  __m128i si128; // [rsp+40h] [rbp-48h] BYREF

  v1 = 0LL;
  v2 = 0;
  v4 = *((unsigned int *)this + 66);
  v30 = 0LL;
  v31 = 0LL;
  if ( !(_DWORD)v4 )
  {
LABEL_31:
    (*(void (__fastcall **)(CAtlasedRectsVisual *, volatile signed __int32 *))(*(_QWORD *)this + 40LL))(this, v1);
    goto LABEL_32;
  }
  v5 = (__int32 *)*((_QWORD *)this + 34);
  v6 = 0LL;
  p_si128 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v5 )
  {
    p_si128 = (const RECT *)&si128;
    si128.m128i_i32[0] = *v5;
    si128.m128i_i32[1] = v5[2];
    si128.m128i_i32[2] = *((_DWORD *)this + 30) - v5[1];
    si128.m128i_i32[3] = *((_DWORD *)this + 31) - v5[3];
  }
  v8 = CCompositor::CreateProxy<CAtlasedRectsGroupProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         &v30);
  v2 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xBBu);
    v1 = v30;
    goto LABEL_32;
  }
  v9 = 8 * v4;
  if ( !is_mul_ok(v4, 8uLL) )
    v9 = -1LL;
  v31 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v9);
  if ( !v31 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xBDu);
    v1 = v30;
    goto LABEL_32;
  }
  v10 = 0LL;
  v11 = 0;
  do
  {
    v12 = *(_QWORD *)((char *)v1 + *((_QWORD *)this + 30));
    v13 = *(_QWORD *)(v12 + 72);
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 16);
    else
      v14 = 0LL;
    v15 = v14;
    if ( v6 )
      v15 = v6;
    v6 = v15;
    if ( !v14 )
      goto LABEL_19;
    v16 = *(_BYTE *)(v12 + 116);
    if ( p_si128 )
    {
      if ( !v16 || !EqualRect((const RECT *)(v12 + 100), p_si128) )
      {
LABEL_38:
        if ( p_si128 )
        {
          *(_BYTE *)(v12 + 116) = 1;
          *(RECT *)(v12 + 100) = *p_si128;
        }
        else
        {
          *(_BYTE *)(v12 + 116) = 0;
        }
        *(_DWORD *)(v12 + 96) |= 1u;
        v29 = *(_QWORD *)(v12 + 80);
        if ( v29 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 24LL))(v29, 0x2000LL);
      }
    }
    else if ( v16 )
    {
      goto LABEL_38;
    }
    v17 = CAtlasedImage::Validate(*(CAtlasedImage **)((char *)v1 + *((_QWORD *)this + 30)));
    v2 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0xCEu);
      v1 = v30;
      goto LABEL_32;
    }
    if ( (*(unsigned __int8 (__fastcall **)(CAtlasedRectsVisual *, _QWORD))(*(_QWORD *)this + 200LL))(
           this,
           *(_QWORD *)((char *)v1 + *((_QWORD *)this + 30))) )
    {
      *(_QWORD *)(v31 + 8 * v10) = *(_QWORD *)(*(_QWORD *)((char *)v1 + *((_QWORD *)this + 30)) + 88LL);
      v10 = (unsigned int)(v10 + 1);
    }
LABEL_19:
    ++v11;
    v1 += 2;
  }
  while ( v11 < (unsigned int)v4 );
  v1 = v30;
  v18 = 0LL;
  if ( (_DWORD)v10 )
  {
    v19 = (unsigned int)v10;
    v20 = 4LL * (unsigned int)v10;
    if ( !is_mul_ok((unsigned int)v10, 4uLL) )
      v20 = -1LL;
    v21 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
            WPF::g_pProcessHeap,
            v20);
    v18 = v21;
    if ( v21 )
    {
      v22 = (__int64 *)v31;
      v23 = v21;
      do
      {
        v24 = *v22;
        v23 += 4LL;
        ++v22;
        *(_DWORD *)(v23 - 4) = *(_DWORD *)(*(_QWORD *)(v24 + 16) + 24LL);
        --v19;
      }
      while ( v19 );
      goto LABEL_26;
    }
    v27 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x24u);
  }
  else
  {
LABEL_26:
    if ( v6 )
      v25 = *(unsigned int *)(*(_QWORD *)(v6 + 16) + 24LL);
    else
      v25 = 0LL;
    v26 = (*(__int64 (__fastcall **)(void (__fastcall *)(_QWORD, __int64), _QWORD, __int64, __int64, _DWORD))(**(_QWORD **)(*((_QWORD *)v1 + 2) + 16LL) + 928LL))(
            *(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)v1 + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)v1 + 2) + 24LL),
            v25,
            v18,
            v10);
    v27 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x30u);
    else
      v27 = 0;
  }
  (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v18);
  v2 = v27;
  if ( v27 >= 0 )
    goto LABEL_31;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0xD7u);
LABEL_32:
  (*(void (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap, v31);
  if ( v1 && _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v30)(v30, 1LL);
  return v2;
}
