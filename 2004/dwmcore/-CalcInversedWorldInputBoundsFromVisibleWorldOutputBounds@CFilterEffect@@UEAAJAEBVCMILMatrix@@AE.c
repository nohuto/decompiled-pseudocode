/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1800205F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        _DWORD *a5,
        __int64 a6)
{
  __int64 (__fastcall *v10)(__int64, __int128 *, __int64); // rax
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // edi
  int v14; // eax
  unsigned int v15; // ecx
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  __int128 v22; // [rsp+40h] [rbp-58h] BYREF

  *a5 = 0;
  a5[1] = 0;
  a5[2] = 0;
  a5[3] = 0;
  v10 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 264LL);
  v22 = *a4;
  v11 = v10(a1, &v22, a2);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x166u, 0LL);
  }
  else
  {
    v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int128 *, _DWORD *, __int64))(*(_QWORD *)a1 + 256LL))(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x16Eu, 0LL);
    }
    else
    {
      if ( *(float *)a3 > *(float *)a6 )
        *(_DWORD *)a6 = *(_DWORD *)a3;
      v16 = *(float *)(a3 + 4);
      if ( v16 > *(float *)(a6 + 4) )
        *(float *)(a6 + 4) = v16;
      v17 = *(float *)(a3 + 8);
      v18 = *(float *)(a6 + 8);
      if ( v18 > v17 )
      {
        *(float *)(a6 + 8) = v17;
        v18 = v17;
      }
      v19 = *(float *)(a3 + 12);
      v20 = *(float *)(a6 + 12);
      if ( v20 > v19 )
      {
        *(float *)(a6 + 12) = v19;
        v20 = v19;
        v18 = *(float *)(a6 + 8);
      }
      if ( v18 <= *(float *)a6 || v20 <= *(float *)(a6 + 4) )
      {
        *(_DWORD *)(a6 + 12) = 0;
        *(_DWORD *)(a6 + 8) = 0;
        *(_DWORD *)(a6 + 4) = 0;
        *(_DWORD *)a6 = 0;
      }
    }
  }
  if ( v13 < 0 )
  {
    v13 = 0;
    *(_OWORD *)a5 = *a4;
    *(_OWORD *)a6 = *(_OWORD *)a3;
  }
  return (unsigned int)v13;
}
