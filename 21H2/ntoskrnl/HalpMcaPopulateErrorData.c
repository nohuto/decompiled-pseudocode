/*
 * XREFs of HalpMcaPopulateErrorData @ 0x1404BA8BC
 * Callers:
 *     HalpMcaReadError @ 0x1404BAA50 (HalpMcaReadError.c)
 * Callees:
 *     HalpGetCpuVendor @ 0x1403A108C (HalpGetCpuVendor.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpMcaInitializeErrorSection @ 0x1404BA820 (HalpMcaInitializeErrorSection.c)
 *     HalpReadExtendedMcaRegistersAMD @ 0x1404BD74C (HalpReadExtendedMcaRegistersAMD.c)
 *     HalpReadExtendedMcaRegistersIntel @ 0x1404BD8C8 (HalpReadExtendedMcaRegistersIntel.c)
 *     HalpHvGetMachineCheckContext @ 0x1404C2C54 (HalpHvGetMachineCheckContext.c)
 *     HalpWheaReadMsrAddress @ 0x1404CFA00 (HalpWheaReadMsrAddress.c)
 *     HalpWheaReadMsrMisc @ 0x1404CFA58 (HalpWheaReadMsrMisc.c)
 */

char __fastcall HalpMcaPopulateErrorData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // di
  bool v15; // zf
  _OWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF

  HalpMcaInitializeErrorSection(a5, a1);
  v9 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a1, 378LL, 0LL);
  *(_DWORD *)(a5 + 36) = a2;
  *(_QWORD *)(a5 + 40) = a3;
  if ( (a3 & 0x400000000000000LL) != 0 )
    *(_QWORD *)(a5 + 48) = HalpWheaReadMsrAddress(a1, a2);
  v10 = 0LL;
  if ( (a3 & 0x800000000000000LL) != 0 && HalpMcaMiscImplemented )
    *(_QWORD *)(a5 + 56) = HalpWheaReadMsrMisc(a1, a2);
  v11 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a1, 377LL, 0LL);
  v13 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v13 == 1 )
  {
    LOBYTE(v11) = HalpReadExtendedMcaRegistersIntel(v11, v12, a1, a5);
  }
  else if ( (_DWORD)v13 == 2 )
  {
    LOBYTE(v11) = HalpReadExtendedMcaRegistersAMD(v13, a2, a1, a5);
  }
  v14 = v9;
  if ( (v9 & 4) != 0 )
  {
    v15 = HalpHvWheaEnlightenedCpuManager == 0;
    *(_QWORD *)(a5 + 20) = v9;
    if ( !v15 )
    {
      v17[0] = 0LL;
      if ( (int)HalpHvGetMachineCheckContext((unsigned int)a1, v17) >= 0 && LODWORD(v17[0]) != 2 )
        v14 = v9 & 0xFD;
    }
    if ( a4 && (v14 & 2) != 0 )
      *(_QWORD *)(a5 + 28) = *(_QWORD *)(a4 + 360);
    LOBYTE(v11) = HalpGetCpuVendor();
    if ( (_BYTE)v11 == 2 )
    {
      v11 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a1, 377LL, 0LL);
      v10 = v11;
    }
    *(_QWORD *)(a5 + 264) = v10;
  }
  return v11;
}
