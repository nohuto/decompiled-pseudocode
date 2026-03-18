/*
 * XREFs of PopFxFindDeviceAndAllocateUniqueId @ 0x140723798
 * Callers:
 *     PoFxPrepareDevice @ 0x14036AC30 (PoFxPrepareDevice.c)
 * Callees:
 *     PopFxQueryBiosDeviceName @ 0x14036AE20 (PopFxQueryBiosDeviceName.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x14037BB20 (PopFxFindAcpiDeviceByUniqueId.c)
 *     Feature_Servicing_27169067__private_IsEnabled @ 0x1403F0FA0 (Feature_Servicing_27169067__private_IsEnabled.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxFindDeviceAndAllocateUniqueId(__int64 a1, _QWORD *a2)
{
  bool v4; // si
  unsigned int v5; // edi
  int AcpiDeviceByUniqueId; // eax
  UNICODE_STRING v7; // xmm0
  UNICODE_STRING P; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0LL;
  P = 0LL;
  v4 = 0;
  if ( PopFxQueryBiosDeviceName(a1, (__int64)&P) < 0 )
  {
    v5 = 0;
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a1 + 40);
    goto LABEL_13;
  }
  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(&P, &v10);
  v5 = AcpiDeviceByUniqueId;
  if ( AcpiDeviceByUniqueId >= 0 )
  {
    if ( (unsigned int)Feature_Servicing_27169067__private_IsEnabled() )
      v7 = P;
    else
      v7 = *(UNICODE_STRING *)(v10 + 27);
    *(UNICODE_STRING *)(a1 + 128) = v7;
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 0x2000u);
    v4 = (unsigned int)Feature_Servicing_27169067__private_IsEnabled() == 0;
LABEL_10:
    v5 = 0;
    if ( !v4 )
      goto LABEL_13;
    goto LABEL_11;
  }
  if ( AcpiDeviceByUniqueId != -1073741738 )
  {
    *(UNICODE_STRING *)(a1 + 128) = P;
    goto LABEL_10;
  }
LABEL_11:
  if ( P.Buffer )
    ExFreePoolWithTag(P.Buffer, 0x4D584650u);
LABEL_13:
  *a2 = v10;
  return v5;
}
