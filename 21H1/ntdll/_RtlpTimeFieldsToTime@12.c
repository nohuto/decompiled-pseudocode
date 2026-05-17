/*
 * XREFs of _RtlpTimeFieldsToTime@12 @ 0x4B2DCF80
 * Callers:
 *     _RtlCutoverTimeToSystemTime@16 @ 0x4B2DCAE0 (_RtlCutoverTimeToSystemTime@16.c)
 *     _RtlTimeFieldsToTime@8 @ 0x4B2DCF60 (_RtlTimeFieldsToTime@8.c)
 * Callees:
 *     _RtlpTimeFieldsToTimeNoLeapSeconds@8 @ 0x4B2DD021 (_RtlpTimeFieldsToTimeNoLeapSeconds@8.c)
 */

char __stdcall RtlpTimeFieldsToTime(_DWORD *a1, unsigned int *a2, unsigned int *a3)
{
  _LEAP_SECOND_DATA *LeapSecondData; // ebx
  unsigned int Count; // esi
  unsigned int v5; // eax
  unsigned int v6; // edx
  bool v7; // zf
  unsigned int v8; // esi
  char result; // al
  unsigned int v10; // ecx
  _LARGE_INTEGER *Data; // ebx
  int HighPart; // ecx
  unsigned int LowPart; // edi
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  _LARGE_INTEGER *v17; // eax
  int v18; // ecx
  unsigned int v19; // edi
  signed __int64 v20; // kr30_8
  unsigned __int64 v21; // kr40_8
  _DWORD v22[2]; // [esp+10h] [ebp-34h] BYREF
  int v23; // [esp+18h] [ebp-2Ch]
  int v24; // [esp+1Ch] [ebp-28h]
  unsigned int v25; // [esp+20h] [ebp-24h] BYREF
  unsigned int v26; // [esp+24h] [ebp-20h]
  unsigned int v27; // [esp+28h] [ebp-1Ch] BYREF
  unsigned int v28; // [esp+2Ch] [ebp-18h]
  int v29; // [esp+30h] [ebp-14h]
  unsigned int v30; // [esp+34h] [ebp-10h]
  unsigned int v31; // [esp+38h] [ebp-Ch]
  int v32; // [esp+3Ch] [ebp-8h]

  LeapSecondData = NtCurrentPeb()->LeapSecondData;
  if ( !LeapSecondData || !LeapSecondData->Enabled )
    return RtlpTimeFieldsToTimeNoLeapSeconds(a1, a2);
  Count = LeapSecondData->Count;
  v28 = Count;
  _InterlockedOr((volatile signed __int32 *)&v27, 0);
  v5 = NtCurrentPeb()->LeapSecondFlags & 1;
  v32 = v5;
  if ( a3 )
  {
    v10 = a3[1];
    v31 = *a3;
    v30 = v10;
  }
  else
  {
    v31 = 0;
    v30 = 0;
  }
  if ( v5 )
  {
    v22[0] = *a1;
    v22[1] = a1[1];
    v23 = a1[2];
    v24 = a1[3];
    if ( HIWORD(v23) == 60 )
    {
      HIWORD(v23) = 59;
      v32 = v5 | 2;
    }
    if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(v22, &v25) )
      return 0;
    v27 = 0;
    v8 = v26;
    v6 = v25;
    if ( v28 )
    {
      Data = LeapSecondData->Data;
      do
      {
        HighPart = Data->HighPart;
        LowPart = Data->LowPart;
        if ( HighPart < 0 )
        {
          v15 = (__PAIR64__(HighPart & 0x7FFFFFFF, LowPart) - __PAIR64__(v30, v31)) >> 32;
          v29 = LowPart - v31 + 10000000;
          if ( __SPAIR64__(v8, v6) < (__int64)(__PAIR64__(v15, 10000000) + LowPart - v31) )
          {
            if ( __SPAIR64__(v8, v6) >= __SPAIR64__(v15, LowPart - v31) )
              return 0;
            break;
          }
          v8 = (__PAIR64__(v8, v6) - 10000000) >> 32;
          v6 -= 10000000;
        }
        else
        {
          v14 = (__PAIR64__(HighPart, LowPart) - __PAIR64__(v30, v31)) >> 32;
          v29 = LowPart - v31 + 10000000;
          if ( __SPAIR64__(v8, v6) < (__int64)(__PAIR64__(v14, 10000000) + LowPart - v31) )
          {
            if ( __SPAIR64__(v8, v6) < __SPAIR64__(v14, LowPart - v31) )
              break;
            v16 = v32 | 4;
LABEL_27:
            if ( (v16 & 2) == 0 )
              goto LABEL_8;
            if ( v16 >= 4 )
            {
              v8 = (__PAIR64__(v8, v6) + 10000000) >> 32;
              v6 += 10000000;
              goto LABEL_8;
            }
            return 0;
          }
          v8 = (__PAIR64__(v8, v6) + 10000000) >> 32;
          v6 += 10000000;
        }
        ++Data;
        ++v27;
      }
      while ( v27 < v28 );
    }
    v16 = v32;
    goto LABEL_27;
  }
  if ( !(unsigned __int8)RtlpTimeFieldsToTimeNoLeapSeconds(a1, &v25) )
    return 0;
  v6 = v25;
  v7 = Count == 0;
  v8 = v26;
  v27 = 0;
  if ( v7 )
    goto LABEL_8;
  v17 = LeapSecondData->Data;
  v29 = (int)LeapSecondData->Data;
  while ( 1 )
  {
    v18 = v17->HighPart;
    v19 = v17->LowPart;
    if ( v18 >= 0 )
    {
      v20 = __PAIR64__(v18, v19) - __PAIR64__(v30, v31);
      v32 = v19 - v31 + 10000000;
      if ( __SPAIR64__(v8, v6) < (__int64)(__PAIR64__(v18, v19) - __PAIR64__(v30, v31) + 10000000) )
      {
        if ( __SPAIR64__(v8, v6) < v20 )
          goto LABEL_8;
        v21 = 2 * __PAIR64__(v8, v6) - v20;
        v8 = HIDWORD(v21);
        v6 = v21;
      }
      else
      {
        v8 = (__PAIR64__(v8, v6) + 10000000) >> 32;
        v6 += 10000000;
      }
      goto LABEL_38;
    }
    v32 = v19 - v31 + 10000000;
    if ( __SPAIR64__(v8, v6) < (__int64)(__PAIR64__(v18 & 0x7FFFFFFF, v19) - __PAIR64__(v30, v31) + 10000000) )
      break;
    v8 = (__PAIR64__(v8, v6) - 10000000) >> 32;
    v6 -= 10000000;
LABEL_38:
    v17 = (_LARGE_INTEGER *)(v29 + 8);
    ++v27;
    v29 += 8;
    if ( v27 >= v28 )
      goto LABEL_8;
  }
  if ( __SPAIR64__(v8, v6) < (__int64)(__PAIR64__(v18 & 0x7FFFFFFF, v19) - __PAIR64__(v30, v31)) )
  {
LABEL_8:
    result = 1;
    *a2 = v6;
    a2[1] = v8;
    return result;
  }
  return 0;
}
