/*
 * XREFs of KeStopProfile @ 0x14051BF20
 * Callers:
 *     EtwpDisableKernelTrace @ 0x14079866C (EtwpDisableKernelTrace.c)
 *     EtwpCoverageSamplerStop @ 0x140947628 (EtwpCoverageSamplerStop.c)
 *     ExpProfileDelete @ 0x14095AC50 (ExpProfileDelete.c)
 *     NtStopProfile @ 0x14095B210 (NtStopProfile.c)
 * Callees:
 *     KeIpiGenericCall @ 0x1403A4C70 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiStopProfileTarget @ 0x14051C5A0 (KiStopProfileTarget.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

char __fastcall KeStopProfile(ULONG_PTR a1)
{
  ULONG_PTR Context; // [rsp+20h] [rbp-E8h] BYREF
  int v3; // [rsp+28h] [rbp-E0h]
  int v4; // [rsp+2Ch] [rbp-DCh]
  int v5; // [rsp+30h] [rbp-D8h]
  _DWORD v6[45]; // [rsp+34h] [rbp-D4h] BYREF

  v4 = KeNumberProcessors_0;
  Context = a1;
  v3 = KeNumberProcessors_0;
  v5 = 1310721;
  memset(v6, 0, sizeof(v6));
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    KiStopProfileTarget((ULONG_PTR)&Context);
  else
    KeIpiGenericCall(KiStopProfileTarget, (ULONG_PTR)&Context);
  if ( *(_QWORD *)&v6[41] )
    ExFreePoolWithTag(*(PVOID *)&v6[41], 0);
  return v6[43];
}
