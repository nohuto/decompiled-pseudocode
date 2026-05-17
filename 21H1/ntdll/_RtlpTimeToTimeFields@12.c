/*
 * XREFs of _RtlpTimeToTimeFields@12 @ 0x4B2DCCE0
 * Callers:
 *     _RtlCutoverTimeToSystemTime@16 @ 0x4B2DCAE0 (_RtlCutoverTimeToSystemTime@16.c)
 *     _RtlTimeToTimeFields@8 @ 0x4B2DCCC0 (_RtlTimeToTimeFields@8.c)
 * Callees:
 *     _RtlpTimeToTimeFieldsNoLeapSeconds@8 @ 0x4B2DCDB3 (_RtlpTimeToTimeFieldsNoLeapSeconds@8.c)
 */

__int16 __stdcall RtlpTimeToTimeFields(unsigned int *a1, _DWORD *a2, unsigned int *a3)
{
  _LEAP_SECOND_DATA *LeapSecondData; // edx
  unsigned int v4; // ecx
  unsigned int v5; // esi
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rax
  bool v9; // cf
  unsigned int v10; // esi
  unsigned int v11; // edi
  int v12; // ebx
  int v13; // eax
  _LARGE_INTEGER *Data; // edx
  unsigned int LowPart; // ebx
  int HighPart; // edx
  signed __int64 v17; // kr10_8
  _DWORD v19[2]; // [esp+0h] [ebp-34h] BYREF
  int v20; // [esp+8h] [ebp-2Ch]
  int v21; // [esp+Ch] [ebp-28h]
  unsigned __int64 v22; // [esp+10h] [ebp-24h] BYREF
  unsigned int v23; // [esp+18h] [ebp-1Ch] BYREF
  unsigned int Count; // [esp+1Ch] [ebp-18h]
  unsigned int v25; // [esp+20h] [ebp-14h]
  unsigned int v26; // [esp+24h] [ebp-10h]
  unsigned int v27; // [esp+28h] [ebp-Ch]
  unsigned int v28; // [esp+2Ch] [ebp-8h]
  int v29; // [esp+30h] [ebp-4h]

  LeapSecondData = NtCurrentPeb()->LeapSecondData;
  if ( !LeapSecondData || !LeapSecondData->Enabled )
  {
    LOWORD(v13) = RtlpTimeToTimeFieldsNoLeapSeconds(a1, a2);
    return v13;
  }
  Count = LeapSecondData->Count;
  _InterlockedOr((volatile signed __int32 *)&v23, 0);
  v4 = NtCurrentPeb()->LeapSecondFlags & 1;
  v28 = v4;
  if ( a3 )
  {
    v27 = *a3;
    v26 = a3[1];
  }
  else
  {
    v27 = 0;
    v26 = 0;
  }
  v5 = *a1;
  v6 = a1[1];
  v7 = 0;
  v25 = 0;
  v29 = 0;
  if ( Count )
  {
    Data = LeapSecondData->Data;
    v28 = (unsigned int)Data;
    while ( 1 )
    {
      LowPart = Data->LowPart;
      HighPart = Data->HighPart;
      if ( HighPart < 0 )
      {
        if ( __SPAIR64__(v6, v5) < (__int64)(__PAIR64__(HighPart & 0x7FFFFFFF, LowPart) - __PAIR64__(v26, v27)) )
          goto LABEL_28;
        --v7;
      }
      else
      {
        v17 = __PAIR64__(HighPart, LowPart) - __PAIR64__(v26, v27);
        v23 = LowPart - v27 + 20000000;
        if ( __SPAIR64__(v6, v5) < (__int64)(__PAIR64__(HighPart, LowPart) - __PAIR64__(v26, v27) + 20000000) )
        {
          v23 = v17 + 10000000;
          if ( __SPAIR64__(v6, v5) < v17 + 10000000 )
          {
            if ( __SPAIR64__(v6, v5) < v17 )
              goto LABEL_28;
            v4 |= 4u;
          }
          else
          {
            v4 |= 2u;
          }
          v7 = v29;
          goto LABEL_27;
        }
        v7 = v29 + 1;
      }
      v29 = v7;
LABEL_27:
      Data = (_LARGE_INTEGER *)(v28 + 8);
      ++v25;
      v28 += 8;
      if ( v25 >= Count )
      {
LABEL_28:
        v7 = v29;
        v28 = v4;
        break;
      }
    }
  }
  v8 = 10000000LL * v7;
  v9 = v5 < (unsigned int)v8;
  v10 = v5 - v8;
  LODWORD(v22) = v10;
  v11 = v6 - (v9 + HIDWORD(v8));
  HIDWORD(v22) = v11;
  v12 = v4 & 2;
  if ( (v4 & 2) != 0 )
    v22 = __PAIR64__(v11, v10) - 10000000;
  RtlpTimeToTimeFieldsNoLeapSeconds(&v22, v19);
  LOWORD(v13) = v28;
  if ( (v28 & 1) != 0 )
  {
    if ( v12 )
      ++HIWORD(v20);
  }
  else
  {
    if ( (v28 & 4) != 0 )
    {
      LOWORD(v13) = (__int16)v21 / 2;
      LOWORD(v21) = (__int16)v21 / 2;
    }
    else
    {
      LOWORD(v13) = v21;
    }
    if ( v12 )
    {
      v13 = (__int16)v13 / 2 + 500;
      LOWORD(v21) = v13;
    }
  }
  *a2 = v19[0];
  a2[1] = v19[1];
  a2[2] = v20;
  a2[3] = v21;
  return v13;
}
