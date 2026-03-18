/*
 * XREFs of HalEfiGetTime @ 0x1404BE2A8
 * Callers:
 *     HalQueryRealTimeClock @ 0x140201830 (HalQueryRealTimeClock.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140201A34 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HalpConvertEfiToNtStatus @ 0x1404BE980 (HalpConvertEfiToNtStatus.c)
 *     HalpEfiStartRuntimeCode @ 0x1404BE9B4 (HalpEfiStartRuntimeCode.c)
 */

__int64 __fastcall HalEfiGetTime(_QWORD *a1)
{
  __int64 v3; // rax
  int v4; // esi
  char *v5; // rbx
  unsigned int v6; // r14d
  __int64 v7; // rax
  unsigned int v8; // r8d
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  signed __int32 v12[8]; // [rsp+0h] [rbp-60h] BYREF
  __int16 v13[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  if ( !HalEfiRuntimeServicesTable || !*HalEfiRuntimeServicesTable )
    return 3221225474LL;
  if ( !a1 )
    return 3221225485LL;
  _InterlockedIncrement(&HalpEfiTimeCalls);
  HalpEfiStartRuntimeCode(1LL);
  v3 = ((__int64 (__fastcall *)(__int128 *, _QWORD))*HalEfiRuntimeServicesTable)(&v16, 0LL);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFE);
  _InterlockedDecrement(&HalpEfiTimeCalls);
  v4 = HalpConvertEfiToNtStatus(v3);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v14 = 0LL;
  v5 = (char *)ExLeapSecondData;
  v13[0] = v16;
  v13[1] = BYTE2(v16);
  v13[2] = BYTE3(v16);
  v13[3] = BYTE4(v16);
  v13[4] = BYTE5(v16);
  v13[5] = BYTE6(v16);
  v13[6] = DWORD2(v16) / 0xF4240;
  v13[7] = 7;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    if ( !RtlpTimeFieldsToTimeNoLeapSeconds(v13, &v15) )
      return (unsigned int)-1073741823;
    v7 = v15;
    goto LABEL_25;
  }
  v6 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v12, 0);
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(v13, &v14) )
    return (unsigned int)-1073741823;
  v7 = v14;
  v8 = 0;
  if ( !v6 )
  {
LABEL_25:
    if ( (unsigned int)(SWORD6(v16) + 1440) > 0xB40 )
      *a1 = v7 + ExpTimeZoneBias;
    else
      *a1 = v7 + 600000000LL * SWORD6(v16);
    return (unsigned int)v4;
  }
  v9 = (__int64 *)(v5 + 8);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 >= 0 )
    {
      if ( v7 < v10 + 10000000 )
      {
        if ( v7 < v10 )
          goto LABEL_25;
        v7 = 2 * v7 - v10;
      }
      else
      {
        v7 += 10000000LL;
      }
      goto LABEL_18;
    }
    v11 = v10 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v7 < v11 + 10000000 )
      break;
    v7 -= 10000000LL;
LABEL_18:
    ++v8;
    ++v9;
    if ( v8 >= v6 )
      goto LABEL_25;
  }
  if ( v7 < v11 )
    goto LABEL_25;
  return (unsigned int)-1073741823;
}
