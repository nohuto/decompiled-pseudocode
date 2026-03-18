/*
 * XREFs of HalEfiSetTime @ 0x1404BE6DC
 * Callers:
 *     HalSetRealTimeClock @ 0x1404B15A0 (HalSetRealTimeClock.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x140201C48 (RtlpTimeToTimeFields.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HalpConvertEfiToNtStatus @ 0x1404BE980 (HalpConvertEfiToNtStatus.c)
 *     HalpEfiStartRuntimeCode @ 0x1404BE9B4 (HalpEfiStartRuntimeCode.c)
 */

__int64 __fastcall HalEfiSetTime(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rax
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-20h] BYREF
  __int128 v9; // [rsp+38h] [rbp-18h] BYREF

  v9 = 0LL;
  v7 = 0LL;
  if ( !HalEfiRuntimeServicesTable || !*HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[1] )
    return 3221225474LL;
  if ( !a1 )
    return 3221225485LL;
  _InterlockedIncrement(&HalpEfiTimeCalls);
  HalpEfiStartRuntimeCode(1LL);
  v3 = ((__int64 (__fastcall *)(__int128 *, _QWORD))*HalEfiRuntimeServicesTable)(&v9, 0LL);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFE);
  _InterlockedDecrement(&HalpEfiTimeCalls);
  result = HalpConvertEfiToNtStatus(v3);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int64)(SWORD6(v9) + 1440LL) > 0xB40 )
    {
      if ( ExpRealTimeIsUniversal )
      {
        v8 = *a1;
        WORD6(v9) = 0;
      }
      else
      {
        v6 = *a1 - ExpTimeZoneBias;
        WORD6(v9) = MEMORY[0xFFFFF78000000020] / 0x23C34600uLL;
        v8 = v6;
        if ( MEMORY[0xFFFFF78000000240] )
        {
          if ( MEMORY[0xFFFFF78000000240] == 1 )
          {
            BYTE14(v9) = 1;
          }
          else if ( MEMORY[0xFFFFF78000000240] == 2 )
          {
            BYTE14(v9) = 3;
          }
          goto LABEL_12;
        }
      }
      BYTE14(v9) = 0;
    }
    else
    {
      v8 = *a1 - 600000000LL * SWORD6(v9);
    }
LABEL_12:
    RtlpTimeToTimeFields(&v8, &v7, v4);
    LOWORD(v9) = v7;
    BYTE2(v9) = BYTE2(v7);
    BYTE3(v9) = BYTE4(v7);
    BYTE4(v9) = BYTE6(v7);
    BYTE5(v9) = BYTE8(v7);
    BYTE6(v9) = BYTE10(v7);
    DWORD2(v9) = 1000000 * SWORD6(v7);
    _InterlockedIncrement(&HalpEfiTimeCalls);
    _InterlockedIncrement(&HalpEfiTimeWrites);
    HalpEfiStartRuntimeCode(2LL);
    v5 = ((__int64 (__fastcall *)(__int128 *))HalEfiRuntimeServicesTable[1])(&v9);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFD);
    _InterlockedDecrement(&HalpEfiTimeWrites);
    _InterlockedDecrement(&HalpEfiTimeCalls);
    return HalpConvertEfiToNtStatus(v5);
  }
  return result;
}
