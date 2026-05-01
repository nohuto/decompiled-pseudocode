/*
 * XREFs of ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x1803492D0
 * Callers:
 *     ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18033E370 (-OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Tex.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x180349ECC (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedResize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const __m128i *a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  __m128 v7; // xmm2
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm1_4
  HMONITOR v12; // rax
  HMONITOR v13; // rdi
  int v15; // r8d
  int v16; // r9d
  int v17; // r14d
  signed int v18; // ecx
  signed int v19; // eax
  int v20; // r12d
  int v21; // edx
  LONG top; // ecx
  LONG v23; // eax
  LONG left; // edx
  int v25; // r9d
  __m128i v26; // xmm3
  KeyboardHosting::MonitorInformation *v27; // rcx
  RECT rc; // [rsp+38h] [rbp-51h] BYREF
  HMONITOR v29; // [rsp+48h] [rbp-41h] BYREF
  __int128 v30; // [rsp+50h] [rbp-39h]
  __int128 v31; // [rsp+60h] [rbp-29h]
  int v32; // [rsp+70h] [rbp-19h]

  v7 = (__m128)_mm_loadu_si128(a4);
  *(_QWORD *)&rc.left = a3;
  *a7 = 0;
  v9 = *(float *)&rc.left;
  v10 = *(float *)&rc.top;
  v11 = _mm_shuffle_ps(v7, v7, 85).m128_f32[0];
  rc.left = (int)v7.m128_f32[0];
  *(_OWORD *)a6 = 0LL;
  rc.top = (int)v11;
  rc.right = (int)(float)(_mm_shuffle_ps(v7, v7, 170).m128_f32[0] + v7.m128_f32[0]);
  rc.bottom = (int)(float)(_mm_shuffle_ps(v7, v7, 255).m128_f32[0] + v11);
  v12 = MonitorFromRect(&rc, 0);
  v13 = v12;
  if ( !v12 )
    return 2147549183LL;
  v32 = 100;
  v29 = v12;
  v30 = 0LL;
  v31 = 0LL;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)&v29);
  v15 = DWORD2(v31);
  v16 = HIDWORD(v31);
  v17 = _mm_cvtsi128_si32((__m128i)rc);
  v18 = abs32(DWORD2(v31) - v31);
  v19 = abs32(HIDWORD(v31) - DWORD1(v31));
  v20 = (int)(float)((float)((float)v32 * v10) / 100.0);
  v21 = (int)(float)((float)((float)v32 * v9) / 100.0);
  if ( v21 >= v18 )
    v21 = v18;
  if ( v20 >= v19 )
    v20 = v19;
  if ( v21 + v17 < SDWORD2(v31) )
    v15 = v21 + v17;
  if ( v20 + rc.top < SHIDWORD(v31) )
    v16 = v20 + rc.top;
  top = rc.top;
  if ( a5 )
  {
    left = rc.left;
  }
  else
  {
    v23 = v15 - v21;
    left = rc.left;
    if ( v17 >= v23 )
      left = v23;
    if ( rc.top >= v16 - v20 )
      top = v16 - v20;
  }
  if ( left <= (int)v31 )
    left = v31;
  if ( top <= SDWORD1(v31) )
    top = DWORD1(v31);
  if ( left != v17 || v15 != rc.right || top != rc.top || v16 != rc.bottom )
  {
    *a7 = 1;
    v25 = v16 - top;
    v26 = _mm_cvtsi32_si128(top);
    v27 = (KeyboardHosting::MonitorInformation *)(a1 + 232);
    *(float *)a6 = (float)left;
    *(_DWORD *)(a6 + 4) = _mm_cvtepi32_ps(v26).m128_u32[0];
    *(float *)(a6 + 8) = (float)(v15 - left);
    *(float *)(a6 + 12) = (float)v25;
    if ( *(HMONITOR *)(a1 + 232) != v13 )
    {
      *(_QWORD *)v27 = v13;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v27);
      *(_BYTE *)(a1 + 448) = 1;
    }
  }
  return 0LL;
}
