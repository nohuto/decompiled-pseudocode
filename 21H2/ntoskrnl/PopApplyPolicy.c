/*
 * XREFs of PopApplyPolicy @ 0x140793F7C
 * Callers:
 *     PopVideoPowerSettingCallback @ 0x1403A8FC0 (PopVideoPowerSettingCallback.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PopConsoleLockPowerSettingCallback @ 0x140793500 (PopConsoleLockPowerSettingCallback.c)
 *     PopHardDiskPowerSettingCallback @ 0x140793630 (PopHardDiskPowerSettingCallback.c)
 *     PopSleepPowerSettingCallback @ 0x1407937B0 (PopSleepPowerSettingCallback.c)
 *     PopPowerButtonSettingCallback @ 0x140793A60 (PopPowerButtonSettingCallback.c)
 *     PopBatteryUpdateAlarms @ 0x140793C80 (PopBatteryUpdateAlarms.c)
 *     PopResetCurrentPolicies @ 0x140793E98 (PopResetCurrentPolicies.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PopSetNotificationWork @ 0x1402700D0 (PopSetNotificationWork.c)
 *     PopOpenPowerKey @ 0x1403A7DDC (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopInitSIdle @ 0x14078CC68 (PopInitSIdle.c)
 *     PopVerifySystemPowerPolicy @ 0x140794244 (PopVerifySystemPowerPolicy.c)
 *     PopResetCBTriggers @ 0x140794518 (PopResetCBTriggers.c)
 */

__int64 __fastcall PopApplyPolicy(char a1, char a2, _OWORD *a3, unsigned int a4)
{
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm0
  _OWORD *v15; // rbx
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 result; // rax
  int v23; // ebx
  _QWORD *v24; // rdi
  char v25; // r14
  __int64 v26; // r8
  __int64 v27; // rcx
  _OWORD *v28; // rcx
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int64 v42; // rax
  __int64 v43; // rcx
  HANDLE DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD Buf1[15]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD Data[14]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v48; // [rsp+228h] [rbp+120h]

  memset(Buf1, 0, 0xE8uLL);
  DestinationString = 0LL;
  DestinationString_8 = 0LL;
  if ( a4 < 0xE8 )
    return 3221225507LL;
  if ( a4 > 0xE8 )
    return 2147483653LL;
  v8 = a3[1];
  Data[0] = *a3;
  v9 = a3[2];
  Data[1] = v8;
  v10 = a3[3];
  Data[2] = v9;
  v11 = a3[4];
  Data[3] = v10;
  v12 = a3[5];
  Data[4] = v11;
  v13 = a3[6];
  Data[5] = v12;
  Data[6] = v13;
  v14 = a3[7];
  v15 = a3 + 8;
  Data[7] = v14;
  v16 = *((_QWORD *)v15 + 12);
  v17 = v15[1];
  Data[8] = *v15;
  v18 = v15[2];
  Data[9] = v17;
  v19 = v15[3];
  Data[10] = v18;
  v20 = v15[4];
  Data[11] = v19;
  v21 = v15[5];
  Data[12] = v20;
  Data[13] = v21;
  v48 = v16;
  result = PopVerifySystemPowerPolicy(Data, Buf1);
  v23 = result;
  if ( (int)result >= 0 )
  {
    v24 = PopPolicy;
    if ( !memcmp(Buf1, PopPolicy, 0xE8uLL) && !a1 )
    {
      return 0LL;
    }
    else
    {
      v25 = 0;
      v26 = 0LL;
      while ( 1 )
      {
        v27 = *((_QWORD *)&Buf1[6] + 3 * v26) - v24[3 * v26 + 12];
        if ( !v27 )
        {
          v27 = *((_QWORD *)&Buf1[6] + 3 * v26 + 1) - v24[3 * v26 + 13];
          if ( !v27 )
            v27 = *((_QWORD *)&Buf1[7] + 3 * v26) - v24[3 * v26 + 14];
        }
        if ( v27 )
          break;
        v26 = (unsigned int)(v26 + 1);
        if ( (unsigned int)v26 >= 4 )
          goto LABEL_12;
      }
      v25 = 1;
LABEL_12:
      v28 = PopPolicy;
      v29 = Buf1[1];
      *(_OWORD *)PopPolicy = Buf1[0];
      v30 = Buf1[2];
      v28[1] = v29;
      v31 = Buf1[3];
      v28[2] = v30;
      v32 = Buf1[4];
      v28[3] = v31;
      v33 = Buf1[5];
      v28[4] = v32;
      v34 = Buf1[6];
      v28[5] = v33;
      v35 = Buf1[7];
      v28[6] = v34;
      v28 += 8;
      v36 = Buf1[8];
      *(v28 - 1) = v35;
      v37 = Buf1[9];
      *v28 = v36;
      v38 = Buf1[10];
      v28[1] = v37;
      v39 = Buf1[11];
      v28[2] = v38;
      v40 = Buf1[12];
      v28[3] = v39;
      v41 = Buf1[13];
      v42 = *(_QWORD *)&Buf1[14];
      v28[4] = v40;
      v28[5] = v41;
      *((_QWORD *)v28 + 12) = v42;
      PopSetNotificationWork(2u);
      if ( v25 && !a2 )
      {
        LOBYTE(v43) = -125;
        PopResetCBTriggers(v43);
      }
      PopInitSIdle(3u);
      if ( a1 )
      {
        v23 = PopOpenPowerKey((__int64)&DestinationString);
        if ( v23 >= 0 )
        {
          RtlInitUnicodeString(&DestinationString_8, L"SystemPowerPolicy");
          v23 = ZwSetValueKey(DestinationString, &DestinationString_8, 0, 3u, Data, 0xE8u);
          ZwClose(DestinationString);
        }
      }
      return (unsigned int)v23;
    }
  }
  return result;
}
