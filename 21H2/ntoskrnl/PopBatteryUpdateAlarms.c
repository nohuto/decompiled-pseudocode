/*
 * XREFs of PopBatteryUpdateAlarms @ 0x140793C80
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14077FDDC (PopBatteryApplyCompositeState.c)
 *     PopBatteryAlarmPowerSettingCallback @ 0x140793C50 (PopBatteryAlarmPowerSettingCallback.c)
 * Callees:
 *     PopGetPowerSettingValue @ 0x140270104 (PopGetPowerSettingValue.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopApplyPolicy @ 0x140793F7C (PopApplyPolicy.c)
 */

__int64 __fastcall PopBatteryUpdateAlarms(char a1, __int64 a2)
{
  signed int v2; // r15d
  char v3; // r14
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rdi
  int *v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+28h] [rbp-E0h]
  __int64 v30; // [rsp+30h] [rbp-D8h]
  __int64 v31; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v33[6]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v34[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v35; // [rsp+128h] [rbp+20h]

  v2 = dword_140C2332C;
  v3 = a1;
  LOBYTE(v31) = a1;
  v4 = 128LL;
  LODWORD(v32) = 0;
  v5 = *(_OWORD *)PopPolicy;
  HIDWORD(v31) = 0;
  v6 = *((_OWORD *)PopPolicy + 1);
  v33[0] = v5;
  v7 = *((_OWORD *)PopPolicy + 2);
  v33[1] = v6;
  v8 = *((_OWORD *)PopPolicy + 3);
  v33[2] = v7;
  v9 = *((_OWORD *)PopPolicy + 4);
  v33[3] = v8;
  v10 = *((_OWORD *)PopPolicy + 5);
  v33[4] = v9;
  v11 = *((_OWORD *)PopPolicy + 6);
  v33[5] = v10;
  v34[0] = v11;
  v34[1] = *((_OWORD *)PopPolicy + 7);
  v12 = *((_OWORD *)PopPolicy + 9);
  v34[2] = *((_OWORD *)PopPolicy + 8);
  v13 = *((_OWORD *)PopPolicy + 10);
  v34[3] = v12;
  v14 = *((_OWORD *)PopPolicy + 11);
  v34[4] = v13;
  v15 = *((_OWORD *)PopPolicy + 12);
  v34[5] = v14;
  v16 = *((_OWORD *)PopPolicy + 13);
  v17 = *((_QWORD *)PopPolicy + 28);
  v34[6] = v15;
  v34[7] = v16;
  v35 = v17;
  v18 = a2 + 1;
  if ( v3 )
  {
    v18 = 4;
    a2 = 0LL;
  }
  if ( (unsigned int)a2 < v18 )
  {
    v19 = 8LL * (unsigned int)a2;
    v20 = (int *)v34 + 6 * a2 + 1;
    v21 = v18 - (unsigned int)a2;
    do
    {
      if ( (int)PopGetPowerSettingValue(
                  *(_QWORD *)((char *)&GUIDS_BATTERY_DISCHARGE_ACTION + v19),
                  a2,
                  v2,
                  (char *)&v31 + 4,
                  v27,
                  (unsigned int *)&v32) >= 0 )
      {
        v23 = HIDWORD(v31);
        if ( HIDWORD(v31) <= 6 )
        {
          v20[1] = HIDWORD(v31);
          *((_BYTE *)v20 - 4) = v23 != 0;
        }
      }
      if ( (int)PopGetPowerSettingValue(
                  *(_QWORD *)((char *)&GUIDS_BATTERY_DISCHARGE_LEVEL + v19),
                  v22,
                  v2,
                  (char *)&v31 + 4,
                  v28,
                  (unsigned int *)&v32) >= 0 )
      {
        v25 = HIDWORD(v31);
        if ( HIDWORD(v31) > 0x64 )
          v25 = 100;
        *v20 = v25;
      }
      if ( (int)PopGetPowerSettingValue(
                  *(_QWORD *)((char *)&GUIDS_BATTERY_DISCHARGE_FLAGS + v19),
                  v24,
                  v2,
                  (char *)&v31 + 4,
                  v29,
                  (unsigned int *)&v32) >= 0 )
        v20[3] = BYTE4(v31) & 7;
      v20 += 6;
      v19 += 8LL;
      --v21;
    }
    while ( v21 );
    v3 = v31;
  }
  LOBYTE(a2) = v3;
  LOBYTE(v4) = 1;
  return ((__int64 (__fastcall *)(__int64, __int64, _OWORD *, __int64, __int64, __int64, __int64, __int64))PopApplyPolicy)(
           v4,
           a2,
           v33,
           232LL,
           v27,
           v30,
           v31,
           v32);
}
