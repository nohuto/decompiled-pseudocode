/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1406410B8
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x14063BC00 (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x14063C738 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PnpGetObjectProperty @ 0x14063FC6C (PnpGetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceInterfaceFilters(int a1, int a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  int ObjectProperty; // edi
  int v9; // [rsp+60h] [rbp-18h] BYREF
  int v10; // [rsp+64h] [rbp-14h] BYREF
  PVOID P; // [rsp+68h] [rbp-10h] BYREF

  P = 0LL;
  v9 = 0;
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     0xC8uLL,
                     a2,
                     3,
                     a3,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v9,
                     &P,
                     &v10,
                     0);
  if ( ObjectProperty >= 0 )
    ObjectProperty = PiPnpRtlApplyMandatoryDeviceFilters(a1, (__int64)P, 0LL, a4, a5);
  if ( P )
    ExFreePoolWithTag(P, 0x47706E50u);
  return (unsigned int)ObjectProperty;
}
