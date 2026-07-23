/*
 * XREFs of HalEfiSetTime @ 0x1404C3F00
 * Callers:
 *     HalSetRealTimeClock @ 0x1404B6D80 (HalSetRealTimeClock.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x140233DF8 (RtlpTimeToTimeFields.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HalpConvertEfiToNtStatus @ 0x1404C41B4 (HalpConvertEfiToNtStatus.c)
 *     HalpEfiStartRuntimeCode @ 0x1404C41E8 (HalpEfiStartRuntimeCode.c)
 */

__int64 __fastcall HalEfiSetTime(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 v5; // rax
  __int128 v6; // [rsp+20h] [rbp-30h] BYREF
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  __int128 v8; // [rsp+38h] [rbp-18h] BYREF

  v8 = 0LL;
  v6 = 0LL;
  if ( !HalEfiRuntimeServicesTable || !*HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[1] )
    return 3221225474LL;
  if ( !a1 )
    return 3221225485LL;
  _InterlockedIncrement(&HalpEfiTimeCalls);
  HalpEfiStartRuntimeCode(1LL);
  v3 = ((__int64 (__fastcall *)(__int128 *, _QWORD))*HalEfiRuntimeServicesTable)(&v8, 0LL);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFE);
  _InterlockedDecrement(&HalpEfiTimeCalls);
  result = HalpConvertEfiToNtStatus(v3);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int64)(SWORD6(v8) + 1440LL) > 0xB40 )
    {
      if ( ExpRealTimeIsUniversal )
      {
        v7 = *a1;
        WORD6(v8) = 0;
      }
      else
      {
        WORD6(v8) = MEMORY[0xFFFFF78000000020] / 0x23C34600uLL;
        v7 = *a1
           - *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(
                                       MEMORY[0xFFFFF78000000020],
                                       MEMORY[0xFFFFF78000000020] / 0x23C34600uLL)
                         + 133)
                       + 440LL);
        if ( MEMORY[0xFFFFF78000000240] )
        {
          if ( MEMORY[0xFFFFF78000000240] == 1 )
          {
            BYTE14(v8) = 1;
          }
          else if ( MEMORY[0xFFFFF78000000240] == 2 )
          {
            BYTE14(v8) = 3;
          }
          goto LABEL_12;
        }
      }
      BYTE14(v8) = 0;
    }
    else
    {
      v7 = *a1 - 600000000LL * SWORD6(v8);
    }
LABEL_12:
    RtlpTimeToTimeFields(&v7, &v6, v4);
    LOWORD(v8) = v6;
    BYTE2(v8) = BYTE2(v6);
    BYTE3(v8) = BYTE4(v6);
    BYTE4(v8) = BYTE6(v6);
    BYTE5(v8) = BYTE8(v6);
    BYTE6(v8) = BYTE10(v6);
    DWORD2(v8) = 1000000 * SWORD6(v6);
    _InterlockedIncrement(&HalpEfiTimeCalls);
    _InterlockedIncrement(&HalpEfiTimeWrites);
    HalpEfiStartRuntimeCode(2LL);
    v5 = ((__int64 (__fastcall *)(__int128 *))HalEfiRuntimeServicesTable[1])(&v8);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFD);
    _InterlockedDecrement(&HalpEfiTimeWrites);
    _InterlockedDecrement(&HalpEfiTimeCalls);
    return HalpConvertEfiToNtStatus(v5);
  }
  return result;
}
