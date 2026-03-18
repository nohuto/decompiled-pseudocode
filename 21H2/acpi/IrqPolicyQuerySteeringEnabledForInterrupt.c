/*
 * XREFs of IrqPolicyQuerySteeringEnabledForInterrupt @ 0x1C009C438
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0099330 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     IrqPolicyQueryInterruptSteeringEnabled @ 0x1C009C4DC (IrqPolicyQueryInterruptSteeringEnabled.c)
 */

__int64 __fastcall IrqPolicyQuerySteeringEnabledForInterrupt(int a1, __int64 a2, char a3)
{
  unsigned int v3; // edx
  char v4; // cl
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( IrqMachinePolicy != 6 )
    return 0LL;
  v3 = a1 + 0x100000;
  v7 = 0LL;
  v6 = 0LL;
  LODWORD(v6) = a1;
  BYTE5(v6) = a3;
  v4 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 4));
  if ( v3 > 0xFFFFE )
    v4 = 1;
  BYTE6(v6) = 1;
  BYTE4(v6) = v4;
  LOWORD(v7) = 0;
  *((_QWORD *)&v6 + 1) = KeQueryGroupAffinity(0);
  return IrqPolicyQueryInterruptSteeringEnabled(&v6);
}
