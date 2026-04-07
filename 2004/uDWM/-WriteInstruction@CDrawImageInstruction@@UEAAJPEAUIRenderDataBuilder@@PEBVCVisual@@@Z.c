/*
 * XREFs of ?WriteInstruction@CDrawImageInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x18003CBA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawImageInstruction::WriteInstruction(
        const RECT *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  BOOL v6; // eax
  __int64 v7; // rdx
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  _DWORD v11[4]; // [rsp+20h] [rbp-38h] BYREF

  v6 = IsRectEmpty(this + 1);
  v7 = 0LL;
  if ( v6 )
  {
    v9 = _mm_cvtsi32_si128(*((_DWORD *)a3 + 30));
    v10 = _mm_cvtsi32_si128(*((_DWORD *)a3 + 31));
    v11[0] = 0;
    v11[1] = 0;
    v11[2] = _mm_cvtepi32_ps(v9).m128_u32[0];
    v11[3] = _mm_cvtepi32_ps(v10).m128_u32[0];
  }
  else
  {
    do
    {
      *(float *)&v11[v7] = (float)*(&this[1].left + v7);
      ++v7;
    }
    while ( v7 < 4 );
  }
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _DWORD *, _QWORD))(*(_QWORD *)a2 + 40LL))(
           a2,
           v11,
           *(unsigned int *)(*(_QWORD *)(*(_QWORD *)&this[2].left + 16LL) + 24LL));
}
