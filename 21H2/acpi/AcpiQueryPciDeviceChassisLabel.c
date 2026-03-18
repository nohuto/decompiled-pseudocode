/*
 * XREFs of AcpiQueryPciDeviceChassisLabel @ 0x1C0090240
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C00937D0 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0001778 (ACPIInternalSetFlags.c)
 *     AMLIFreeDataBuffs @ 0x1C001C758 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0090340 (ACPIAmliEvaluateDsm.c)
 *     ACPIInternalPciDeviceLabel @ 0x1C00AF2DC (ACPIInternalPciDeviceLabel.c)
 */

__int64 __fastcall AcpiQueryPciDeviceChassisLabel(__int64 a1)
{
  __int64 result; // rax
  _BYTE *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  PVOID v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rdx
  PVOID P[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v10; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v11[3]; // [rsp+50h] [rbp-48h] BYREF

  result = 0LL;
  v3 = (_BYTE *)(a1 + 1000);
  DWORD1(v11[0]) = 0;
  if ( (*v3 & 1) == 0 )
  {
    ACPIInternalSetFlags(v3, 1uLL);
    v4 = *(_QWORD *)(a1 + 760);
    P[0] = 0LL;
    memset(v11, 0, sizeof(v11));
    v10 = PCI_ROOT_BUS_DSM_UUID;
    v5 = ACPIAmliEvaluateDsm(v4, (unsigned int)&v10, 2, 7, (__int64)v11, (__int64)P);
    v6 = P[0];
    if ( v5 >= 0 && *((_WORD *)P[0] + 1) == 4 )
    {
      v8 = *((_QWORD *)P[0] + 4);
      if ( *((_DWORD *)P[0] + 6) >= 0x58u && (unsigned int)(*(_DWORD *)v8 - 1) <= 1 && *(_WORD *)(v8 + 10) == 1 )
        v7 = ACPIInternalPciDeviceLabel(a1);
      else
        v7 = -1073741823;
    }
    else
    {
      v7 = 0;
    }
    if ( v6 )
    {
      AMLIFreeDataBuffs((__int64)v6);
      ExFreePoolWithTag(v6, 0x52706341u);
    }
    return v7;
  }
  return result;
}
