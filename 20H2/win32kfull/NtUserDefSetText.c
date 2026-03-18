/*
 * XREFs of NtUserDefSetText @ 0x1C014AA80
 * Callers:
 *     <none>
 * Callees:
 *     DefSetText @ 0x1C004ACE8 (DefSetText.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserDefSetText(__int64 a1, __m128i *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // r9
  unsigned int v6; // ebx
  unsigned __int64 v7; // xmm0_8
  ULONG64 v8; // rdx
  ULONG64 v9; // rdx
  __m128i v11; // [rsp+38h] [rbp-20h] BYREF

  v11 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = (_QWORD *)ValidateHwnd(a1);
  v6 = 0;
  if ( v5 )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (__m128i *)MmUserProbeAddress;
      v11 = *a2;
      v7 = _mm_srli_si128(v11, 8).m128i_u64[0];
      if ( v7 )
      {
        if ( v11.m128i_i32[0] > (v11.m128i_i32[1] & 0x7FFFFFFFu) )
          ExRaiseAccessViolation();
        if ( v11.m128i_i32[1] < 0 )
        {
          v9 = v7 + v11.m128i_u32[0] + 1LL;
          if ( v9 < v7 || v9 > MmUserProbeAddress )
            ExRaiseAccessViolation();
        }
        else
        {
          if ( (v11.m128i_i8[8] & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v8 = v7 + v11.m128i_u32[0] + 2LL;
          if ( v8 < v7 || v8 > MmUserProbeAddress )
            ExRaiseAccessViolation();
        }
      }
      else
      {
        v11.m128i_i32[0] = 0;
      }
      a2 = &v11;
    }
    v6 = DefSetText(v5, (unsigned int *)a2);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
