/*
 * XREFs of RtlpTimeFieldsToTime @ 0x18005B020
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x18005AE50 (RtlCutoverTimeToSystemTime.c)
 *     RtlTimeFieldsToTime @ 0x18005B010 (RtlTimeFieldsToTime.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x18005B124 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 */

char __fastcall RtlpTimeFieldsToTime(__m128i *a1, _QWORD *a2, __int64 *a3)
{
  _LEAP_SECOND_DATA *LeapSecondData; // rdi
  unsigned int Count; // esi
  unsigned int v6; // edx
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // r8d
  unsigned __int64 v11; // xmm0_8
  unsigned int v12; // ebx
  unsigned int v13; // r8d
  _LARGE_INTEGER *Data; // rdi
  __int64 QuadPart; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  _LARGE_INTEGER *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  signed __int32 v22[8]; // [rsp+0h] [rbp-48h] BYREF
  __m128i v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+68h] [rbp+20h] BYREF

  LeapSecondData = NtCurrentPeb()->LeapSecondData;
  if ( !LeapSecondData || !LeapSecondData->Enabled )
    return ((__int64 (*)(void))RtlpTimeFieldsToTimeNoLeapSeconds)();
  Count = LeapSecondData->Count;
  _InterlockedOr(v22, 0);
  v6 = NtCurrentPeb()->LeapSecondFlags & 1;
  if ( a3 )
    v7 = *a3;
  else
    v7 = 0LL;
  if ( v6 )
  {
    v23 = *a1;
    v11 = _mm_srli_si128(v23, 8).m128i_u64[0];
    if ( WORD1(v11) == 60 )
      v23.m128i_i16[5] = 59;
    v12 = v6 | 2;
    if ( WORD1(v11) != 60 )
      v12 = v6;
    if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(&v23, &v24) )
      return 0;
    v8 = v24;
    v13 = 0;
    if ( !Count )
      goto LABEL_16;
    Data = LeapSecondData->Data;
    while ( 1 )
    {
      QuadPart = Data->QuadPart;
      if ( Data->QuadPart < 0 )
      {
        v17 = (QuadPart & 0x7FFFFFFFFFFFFFFFLL) - v7;
        if ( v8 < v17 + 10000000 )
        {
          if ( v8 >= v17 )
            return 0;
          goto LABEL_16;
        }
        v8 -= 10000000LL;
      }
      else
      {
        v16 = QuadPart - v7;
        if ( v8 < v16 + 10000000 )
        {
          if ( v8 >= v16 )
            v12 |= 4u;
LABEL_16:
          if ( (v12 & 2) == 0 )
            goto LABEL_8;
          if ( v12 >= 4 )
          {
            v8 += 10000000LL;
            goto LABEL_8;
          }
          return 0;
        }
        v8 += 10000000LL;
      }
      ++v13;
      ++Data;
      if ( v13 >= Count )
        goto LABEL_16;
    }
  }
  if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(a1, &v24) )
    return 0;
  v8 = v24;
  v9 = 0;
  if ( !Count )
    goto LABEL_8;
  v18 = LeapSecondData->Data;
  while ( 1 )
  {
    v19 = v18->QuadPart;
    if ( v18->QuadPart >= 0 )
    {
      v20 = v19 - v7;
      if ( v8 < v20 + 10000000 )
      {
        if ( v8 < v20 )
          goto LABEL_8;
        v8 = 2 * v8 - v20;
      }
      else
      {
        v8 += 10000000LL;
      }
      goto LABEL_41;
    }
    v21 = (v19 & 0x7FFFFFFFFFFFFFFFLL) - v7;
    if ( v8 < v21 + 10000000 )
      break;
    v8 -= 10000000LL;
LABEL_41:
    ++v9;
    ++v18;
    if ( v9 >= Count )
      goto LABEL_8;
  }
  if ( v8 < v21 )
  {
LABEL_8:
    *a2 = v8;
    return 1;
  }
  return 0;
}
