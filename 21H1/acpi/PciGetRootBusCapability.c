/*
 * XREFs of PciGetRootBusCapability @ 0x1C0098160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     AcpiEvaluateDsmMethodOnPciRootBus @ 0x1C0098240 (AcpiEvaluateDsmMethodOnPciRootBus.c)
 */

char __fastcall PciGetRootBusCapability(__int64 a1, __int64 a2)
{
  int v4; // eax
  char v5; // si
  const char *v6; // rcx
  int v7; // eax
  const char *v8; // rcx
  const char *v9; // rcx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  *(_DWORD *)(a2 + 24) = PciRootBusFeaturesSupported;
  *(_DWORD *)(a2 + 28) = PciRootBusFeaturesControlRequest;
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 304);
  v4 = AcpiEvaluateDsmMethodOnPciRootBus(a1, &v11);
  v5 = v11;
  *(_DWORD *)(a1 + 220) = 0;
  *(_BYTE *)(a1 + 216) = 0;
  if ( v4 < 0 )
    v5 = 0;
  v6 = *(const char **)(a1 + 568);
  if ( v6 && strstr(v6, "PNP0A08")
    || (v8 = *(const char **)(a1 + 192)) != 0LL && strstr(v8, "PNP0A08")
    || (v9 = *(const char **)(a1 + 200)) != 0LL && strstr(v9, "PNP0A08") )
  {
    if ( *(_BYTE *)(a1 + 224) )
    {
      if ( *(_BYTE *)(a1 + 231) < 8u )
      {
        *(_DWORD *)(a1 + 220) = *(_BYTE *)(a1 + 231) >= 2u;
        goto LABEL_8;
      }
      *(_DWORD *)(a1 + 220) = 2;
    }
    else
    {
      *(_DWORD *)(a1 + 220) = 3;
    }
    *(_BYTE *)(a1 + 216) = 1;
  }
LABEL_8:
  if ( !*(_BYTE *)(a1 + 216)
    && (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1195787085LL, 0LL, 0LL) )
  {
    *(_BYTE *)(a1 + 216) = 1;
  }
  v7 = *(_DWORD *)(a1 + 220);
  *(_DWORD *)a2 = v7;
  if ( v5 )
  {
    *(_BYTE *)(a2 + 4) = 1;
    *(_DWORD *)(a2 + 8) = *(unsigned __int8 *)(a1 + 231);
    *(_DWORD *)(a2 + 12) = *(unsigned __int16 *)(a1 + 232);
    LOBYTE(v7) = *(_BYTE *)(a1 + 230);
    if ( (v7 & 4) != 0 )
    {
      *(_BYTE *)(a2 + 16) = 1;
      LOBYTE(v7) = *(_BYTE *)(a1 + 230);
    }
    if ( (v7 & 1) != 0 )
      *(_DWORD *)(a2 + 20) = 1;
  }
  return v7;
}
