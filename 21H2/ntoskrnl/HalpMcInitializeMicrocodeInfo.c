/*
 * XREFs of HalpMcInitializeMicrocodeInfo @ 0x140A395C8
 * Callers:
 *     HalpProcInitSystem @ 0x14099B4C0 (HalpProcInitSystem.c)
 * Callees:
 *     HalpMcRecordProcessorInfo @ 0x1403A65B4 (HalpMcRecordProcessorInfo.c)
 *     HalpMcSetUpdateInfoInvalid @ 0x1403A83D4 (HalpMcSetUpdateInfoInvalid.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

void __fastcall HalpMcInitializeMicrocodeInfo(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD v3[3]; // [rsp+40h] [rbp-48h] BYREF

  qword_140C49748 = (__int64)&HalpMcUpdateInfoHead;
  HalpMcUpdateInfoHead = &HalpMcUpdateInfoHead;
  memset(v3, 0, sizeof(v3));
  if ( HalpMcUpdateMicrocodeFuncEx )
  {
    LOBYTE(a3) = HalpMcUpdateSelfHosting;
    HalpMcUpdateRecordingSupported = 1;
    HalpMcUpdateInfoValid = 1;
    if ( (int)HalpMcUpdateMicrocodeFuncEx(1LL, 0LL, a3, v3, 0LL, 1, 0) < 0 )
      HalpMcSetUpdateInfoInvalid();
    else
      HalpMcRecordProcessorInfo((__int64)v3);
  }
  else
  {
    HalpMcUpdateInfoValid = 0;
  }
}
