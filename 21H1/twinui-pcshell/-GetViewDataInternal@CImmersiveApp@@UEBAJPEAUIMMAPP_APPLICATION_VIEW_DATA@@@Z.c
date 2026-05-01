/*
 * XREFs of ?GetViewDataInternal@CImmersiveApp@@UEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x18006CF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::GetViewDataInternal(CImmersiveApp *this, struct IMMAPP_APPLICATION_VIEW_DATA *a2)
{
  unsigned int v2; // r8d
  __m128i v3; // xmm2
  __int128 v4; // xmm1

  v2 = 0;
  *((_QWORD *)a2 + 4) = 3LL;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
  *((_QWORD *)a2 + 8) = 0LL;
  *((_DWORD *)a2 + 18) = 0;
  *((_DWORD *)a2 + 21) = 0;
  *(_QWORD *)((char *)a2 + 76) = 3LL;
  if ( *((_BYTE *)this + 624) )
  {
    return (unsigned int)-2147019873;
  }
  else if ( *((_DWORD *)this + 54) == -1 || *((_DWORD *)this + 65) == -1 )
  {
    return (unsigned int)-2147023728;
  }
  else
  {
    *(_OWORD *)a2 = *(_OWORD *)((char *)this + 216);
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 232);
    *((_QWORD *)a2 + 4) = *((_QWORD *)this + 31);
    *((_DWORD *)a2 + 10) = *((_DWORD *)this + 64);
    v3 = *(__m128i *)((char *)this + 292);
    v4 = *(_OWORD *)((char *)this + 276);
    *(_OWORD *)((char *)a2 + 44) = *(_OWORD *)((char *)this + 260);
    *(_OWORD *)((char *)a2 + 60) = v4;
    *(_QWORD *)((char *)a2 + 76) = v3.m128i_i64[0];
    *((_DWORD *)a2 + 21) = _mm_cvtsi128_si32(_mm_srli_si128(v3, 8));
  }
  return v2;
}
