/*
 * XREFs of ?WriteInstruction@CDrawNineGridInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18003B150
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawNineGridInstruction::WriteInstruction(
        CDrawNineGridInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  int v3; // r11d
  int v5; // ebx
  unsigned int v6; // ebp
  int v8; // ecx
  int v9; // r9d
  bool v10; // sf
  int v11; // ecx
  __int64 v12; // rsi
  int v13; // r8d
  int v14; // edx
  int v15; // r10d
  unsigned int v16; // ebx
  __int64 *i; // rdi
  __int64 v18; // r10
  __int64 v20; // rdx
  int v21; // r9d
  __int64 v22; // rcx
  int v23; // r8d
  __m128i v24; // xmm0
  int v25; // eax
  int v26; // eax
  __int128 v27; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v28[4]; // [rsp+40h] [rbp-48h]
  _DWORD v29[4]; // [rsp+50h] [rbp-38h]

  v3 = *((_DWORD *)this + 8);
  v5 = *((_DWORD *)this + 10);
  v6 = 0;
  v8 = *((_DWORD *)a3 + 31) + *((_DWORD *)this + 11);
  v9 = v3 + *((_DWORD *)a3 + 30) + *((_DWORD *)this + 9);
  if ( v9 < 0 )
    v9 = 0;
  v10 = v5 + v8 < 0;
  v11 = v5 + v8;
  v12 = *((_QWORD *)this + 2);
  v27 = *((_OWORD *)this + 1);
  if ( v10 )
    v11 = 0;
  if ( HIDWORD(v12) + (int)v12 > v9 )
  {
    v13 = (int)v12 * v9 / (HIDWORD(v12) + (int)v12);
    LODWORD(v12) = v13;
  }
  else
  {
    v13 = v9 - HIDWORD(v12);
  }
  v14 = DWORD2(v27);
  if ( HIDWORD(v27) + DWORD2(v27) > v11 )
  {
    v15 = DWORD2(v27) * v11 / (HIDWORD(v27) + DWORD2(v27));
    v14 = v15;
  }
  else
  {
    v15 = v11 - HIDWORD(v27);
  }
  v29[1] = v14 - v5;
  v29[2] = v15 - v5;
  v29[3] = v11 - v5;
  v29[0] = -v5;
  v28[1] = v12 - v3;
  v28[2] = v13 - v3;
  v28[3] = v9 - v3;
  v16 = 0;
  v28[0] = -v3;
  for ( i = (__int64 *)((char *)this + 48); ; ++i )
  {
    v18 = *i;
    if ( *i )
    {
      v20 = v16 / 3;
      v21 = v29[v20];
      v22 = v16 % 3;
      v23 = v28[v22];
      v24 = _mm_cvtsi32_si128(v28[(unsigned int)(v22 + 1)] - v23);
      v25 = v29[(unsigned int)(v20 + 1)];
      *((float *)&v27 + 1) = (float)v21;
      *(float *)&v27 = (float)v23;
      *((float *)&v27 + 2) = _mm_cvtepi32_ps(v24).m128_f32[0] + (float)v23;
      *((float *)&v27 + 3) = (float)(v25 - v21) + (float)v21;
      v26 = (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, __int128 *, _QWORD))(*(_QWORD *)a2 + 56LL))(
              a2,
              &v27,
              *(unsigned int *)(*(_QWORD *)(v18 + 16) + 24LL));
      v6 = v26;
      if ( v26 < 0 )
        break;
    }
    if ( ++v16 >= 9 )
      return v6;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x11Cu);
  return v6;
}
