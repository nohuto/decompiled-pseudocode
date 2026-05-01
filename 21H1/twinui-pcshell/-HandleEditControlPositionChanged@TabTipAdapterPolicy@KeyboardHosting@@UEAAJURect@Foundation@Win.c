/*
 * XREFs of ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180347290
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x180346B24 (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18034857C (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x180349ECC (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleEditControlPositionChanged(
        const __m128i *a1,
        __m128i *a2,
        _DWORD *a3)
{
  __m128i v3; // xmm0
  HMONITOR CurrentMonitorWithRect; // rax
  __m128 v8; // xmm1
  __m128i v10; // [rsp+20h] [rbp-50h] BYREF
  HMONITOR v11; // [rsp+30h] [rbp-40h] BYREF
  __int128 v12; // [rsp+38h] [rbp-38h]
  __int128 v13; // [rsp+48h] [rbp-28h]
  unsigned int v14; // [rsp+58h] [rbp-18h]

  v3 = *a2;
  *a3 = 0;
  v10 = v3;
  CurrentMonitorWithRect = KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(&v10);
  v14 = 100;
  v11 = CurrentMonitorWithRect;
  v12 = 0LL;
  v13 = 0LL;
  KeyboardHosting::MonitorInformation::UpdateMonitorInfo((KeyboardHosting::MonitorInformation *)&v11);
  v8 = (__m128)_mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(&v10, a2, v14));
  v10 = _mm_loadu_si128(a1 + 11);
  if ( v8.m128_f32[0] != *(float *)v10.m128i_i32
    || _mm_shuffle_ps(v8, v8, 85).m128_f32[0] != *(float *)&v10.m128i_i32[1]
    || _mm_shuffle_ps(v8, v8, 170).m128_f32[0] != *(float *)&v10.m128i_i32[2]
    || _mm_shuffle_ps(v8, v8, 255).m128_f32[0] != *(float *)&v10.m128i_i32[3] )
  {
    a1[11] = (const __m128i)v8;
    *a3 = 3;
    a1[28].m128i_i8[12] = 0;
  }
  return 0LL;
}
