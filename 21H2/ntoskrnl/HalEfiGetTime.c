/*
 * XREFs of HalEfiGetTime @ 0x1404C3AB8
 * Callers:
 *     HalQueryRealTimeClock @ 0x140233750 (HalQueryRealTimeClock.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140233BE4 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HalpConvertEfiToNtStatus @ 0x1404C41B4 (HalpConvertEfiToNtStatus.c)
 *     HalpEfiStartRuntimeCode @ 0x1404C41E8 (HalpEfiStartRuntimeCode.c)
 */

__int64 __fastcall HalEfiGetTime(_QWORD *a1)
{
  __int64 v3; // rax
  int v4; // esi
  char *v5; // rbx
  unsigned int v6; // r14d
  __int64 *v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  signed __int32 v13[8]; // [rsp+0h] [rbp-60h] BYREF
  __int16 v14[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  if ( !HalEfiRuntimeServicesTable || !*HalEfiRuntimeServicesTable )
    return 3221225474LL;
  if ( !a1 )
    return 3221225485LL;
  _InterlockedIncrement(&HalpEfiTimeCalls);
  HalpEfiStartRuntimeCode(1LL);
  v3 = ((__int64 (__fastcall *)(__int128 *, _QWORD))*HalEfiRuntimeServicesTable)(&v17, 0LL);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFE);
  _InterlockedDecrement(&HalpEfiTimeCalls);
  v4 = HalpConvertEfiToNtStatus(v3);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v15 = 0LL;
  v5 = (char *)ExLeapSecondData;
  v14[0] = v17;
  v14[1] = BYTE2(v17);
  v14[2] = BYTE3(v17);
  v14[3] = BYTE4(v17);
  v14[4] = BYTE5(v17);
  v14[5] = BYTE6(v17);
  v14[6] = DWORD2(v17) / 0xF4240;
  v14[7] = 7;
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    if ( !RtlpTimeFieldsToTimeNoLeapSeconds(v14, &v16) )
      return (unsigned int)-1073741823;
    v9 = v16;
    goto LABEL_26;
  }
  v6 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v13, 0);
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(v14, &v15) )
    return (unsigned int)-1073741823;
  v8 = 0;
  if ( !v6 )
  {
    v9 = v15;
LABEL_26:
    v12 = (unsigned int)SWORD6(v17);
    if ( (unsigned int)(v12 + 1440) > 0xB40 )
      *a1 = v9 + *(_QWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals(v12, (__int64)v7) + 133) + 440LL);
    else
      *a1 = v9 + 600000000LL * (_DWORD)v12;
    return (unsigned int)v4;
  }
  v7 = (__int64 *)(v5 + 8);
  v9 = v15;
  while ( 1 )
  {
    v10 = *v7;
    if ( *v7 >= 0 )
    {
      if ( v9 < v10 + 10000000 )
      {
        if ( v9 < v10 )
          goto LABEL_26;
        v9 = 2 * v9 - v10;
      }
      else
      {
        v9 += 10000000LL;
      }
      goto LABEL_18;
    }
    v11 = v10 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v9 < v11 + 10000000 )
      break;
    v9 -= 10000000LL;
LABEL_18:
    ++v8;
    ++v7;
    if ( v8 >= v6 )
      goto LABEL_26;
  }
  if ( v9 < v11 )
    goto LABEL_26;
  return (unsigned int)-1073741823;
}
