/*
 * XREFs of KeStopProfile @ 0x1405716A4
 * Callers:
 *     EtwpDisableKernelTrace @ 0x1406D56D0 (EtwpDisableKernelTrace.c)
 *     EtwTimeProfileReset @ 0x1408644E0 (EtwTimeProfileReset.c)
 *     EtwpCoverageSamplerStop @ 0x1409F39DC (EtwpCoverageSamplerStop.c)
 *     ExpProfileDelete @ 0x140A06830 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x140A06DF0 (NtStopProfile.c)
 * Callees:
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiStopProfileTarget @ 0x140571D50 (KiStopProfileTarget.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall KeStopProfile(ULONG_PTR a1)
{
  ULONG_PTR Context; // [rsp+20h] [rbp-148h] BYREF
  int v3; // [rsp+28h] [rbp-140h]
  int v4; // [rsp+2Ch] [rbp-13Ch]
  int v5; // [rsp+30h] [rbp-138h]
  _DWORD v6[69]; // [rsp+34h] [rbp-134h] BYREF

  v4 = KeNumberProcessors_0;
  Context = a1;
  v3 = KeNumberProcessors_0;
  v5 = 2097153;
  memset(v6, 0, sizeof(v6));
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    KiStopProfileTarget((ULONG_PTR)&Context);
  else
    KeIpiGenericCall(KiStopProfileTarget, (ULONG_PTR)&Context);
  if ( *(_QWORD *)&v6[65] )
    ExFreePoolWithTag(*(PVOID *)&v6[65], 0);
  return v6[67];
}
