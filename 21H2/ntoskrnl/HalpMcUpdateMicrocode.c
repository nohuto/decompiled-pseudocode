/*
 * XREFs of HalpMcUpdateMicrocode @ 0x1403A6514
 * Callers:
 *     HalpLoadMicrocode @ 0x140866020 (HalpLoadMicrocode.c)
 *     HalpPostSleepMP @ 0x140995864 (HalpPostSleepMP.c)
 *     HalpProcInitSystem @ 0x14099B4C0 (HalpProcInitSystem.c)
 *     HalpDpPostReplaceInitialization @ 0x1409A84D8 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpMcRecordProcessorInfo @ 0x1403A65B4 (HalpMcRecordProcessorInfo.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpMcUpdateMicrocode(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  _OWORD v5[3]; // [rsp+40h] [rbp-48h] BYREF

  v3 = 0;
  memset(v5, 0, sizeof(v5));
  if ( HalpMcUpdateMicrocodeFuncEx )
  {
    LODWORD(a2) = KeGetPcr()->Prcb.Number;
    LOBYTE(a3) = HalpMcUpdateSelfHosting;
    v3 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _OWORD *, PVOID, _BYTE, char))HalpMcUpdateMicrocodeFuncEx)(
           1LL,
           a2,
           a3,
           v5,
           HalpMcUpdateData,
           0,
           HalpMcUpdateMinVerSupported);
    HalpMcRecordProcessorInfo(v5);
  }
  return v3;
}
