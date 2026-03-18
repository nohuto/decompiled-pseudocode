/*
 * XREFs of NtUserTrackMouseEvent @ 0x1C005B710
 * Callers:
 *     <none>
 * Callees:
 *     QueryTrackMouseEvent @ 0x1C005B808 (QueryTrackMouseEvent.c)
 *     TrackMouseEvent @ 0x1C005B8A0 (TrackMouseEvent.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserTrackMouseEvent(__m128i *a1)
{
  __m128i *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ebx
  __m128i v8; // [rsp+38h] [rbp-40h] BYREF
  __int64 v9; // [rsp+48h] [rbp-30h]

  v8 = 0LL;
  v9 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (__m128i *)MmUserProbeAddress;
  v8 = *v2;
  v9 = v2[1].m128i_i64[0];
  if ( _mm_cvtsi128_si32(v8) == 24 )
  {
    if ( (v8.m128i_i32[1] & 0x3FFFFFEC) != 0 )
    {
      UserSetLastError(1004LL);
      v6 = 0;
    }
    else if ( (v8.m128i_i32[1] & 0x40000000) != 0 )
    {
      v6 = QueryTrackMouseEvent(&v8);
      *a1 = v8;
      a1[1].m128i_i64[0] = v9;
    }
    else
    {
      v6 = TrackMouseEvent(&v8);
    }
  }
  else
  {
    UserSetLastError(87LL);
    v6 = 0;
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5);
  return v6;
}
