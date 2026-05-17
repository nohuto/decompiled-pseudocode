/*
 * XREFs of RtlpTimeToTimeFields @ 0x18005B350
 * Callers:
 *     RtlCutoverTimeToSystemTime @ 0x18005AE50 (RtlCutoverTimeToSystemTime.c)
 *     RtlTimeToTimeFields @ 0x18005B340 (RtlTimeToTimeFields.c)
 * Callees:
 *     RtlpTimeToTimeFieldsNoLeapSeconds @ 0x18005B448 (RtlpTimeToTimeFieldsNoLeapSeconds.c)
 */

__int16 __fastcall RtlpTimeToTimeFields(__int64 *a1, _OWORD *a2, __int64 *a3)
{
  _LEAP_SECOND_DATA *LeapSecondData; // r9
  unsigned int Count; // edi
  unsigned int v6; // ebx
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // r8d
  unsigned int v10; // r11d
  __int64 v11; // rax
  __int16 result; // ax
  _LARGE_INTEGER *Data; // r9
  __int64 QuadPart; // rdx
  __int64 v15; // rdx
  signed __int32 v16[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  LeapSecondData = NtCurrentPeb()->LeapSecondData;
  if ( !LeapSecondData || !LeapSecondData->Enabled )
    return ((__int64 (*)(void))RtlpTimeToTimeFieldsNoLeapSeconds)();
  Count = LeapSecondData->Count;
  _InterlockedOr(v16, 0);
  v6 = NtCurrentPeb()->LeapSecondFlags & 1;
  if ( a3 )
    v7 = *a3;
  else
    v7 = 0LL;
  v8 = *a1;
  v9 = 0;
  v10 = 0;
  if ( Count )
  {
    Data = LeapSecondData->Data;
    do
    {
      QuadPart = Data->QuadPart;
      if ( Data->QuadPart < 0 )
      {
        if ( v8 < (QuadPart & 0x7FFFFFFFFFFFFFFFLL) - v7 )
          break;
        --v9;
      }
      else
      {
        v15 = QuadPart - v7;
        if ( v8 < v15 + 20000000 )
        {
          if ( v8 < v15 + 10000000 )
          {
            if ( v8 < v15 )
              break;
            v6 |= 4u;
          }
          else
          {
            v6 |= 2u;
          }
        }
        else
        {
          ++v9;
        }
      }
      ++v10;
      ++Data;
    }
    while ( v10 < Count );
  }
  v11 = v8 - 10000000LL * v9;
  v18 = v11;
  if ( (v6 & 2) != 0 )
    v18 = v11 - 10000000;
  result = RtlpTimeToTimeFieldsNoLeapSeconds(&v18, &v17);
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 2) != 0 )
      ++WORD5(v17);
  }
  else
  {
    if ( (v6 & 4) != 0 )
    {
      result = SWORD6(v17) / 2;
      SWORD6(v17) /= 2;
    }
    else
    {
      result = WORD6(v17);
    }
    if ( (v6 & 2) != 0 )
    {
      result = result / 2 + 500;
      WORD6(v17) = result;
    }
  }
  *a2 = v17;
  return result;
}
