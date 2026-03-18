/*
 * XREFs of PiSwDeviceInterfacesUpdateState @ 0x1407635A4
 * Callers:
 *     PiSwProcessRemove @ 0x1406619F8 (PiSwProcessRemove.c)
 *     PiSwPdoPnPDispatch @ 0x140763800 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     McTemplateK0zzzt_EtwWriteTransfer @ 0x140563F5C (McTemplateK0zzzt_EtwWriteTransfer.c)
 *     IoSetDeviceInterfaceState @ 0x140769100 (IoSetDeviceInterfaceState.c)
 *     PnpAllocatePWSTR @ 0x14077DE70 (PnpAllocatePWSTR.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140788E8C (_CmSetDeviceInterfacePathFormat.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwDeviceInterfacesUpdateState(__int64 a1, char a2)
{
  __int64 *v2; // r14
  __int64 *v4; // rdi
  NTSTATUS PWSTR; // esi
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF

  v2 = (__int64 *)(a1 + 184);
  v4 = *(__int64 **)(a1 + 184);
  PWSTR = 0;
  DestinationString = 0LL;
  if ( v4 != (__int64 *)(a1 + 184) )
  {
    do
    {
      if ( *((_BYTE *)v4 + 36) )
      {
        PWSTR = PnpAllocatePWSTR((NTSTRSAFE_PCWSTR)v4[2]);
        if ( PWSTR < 0 )
          return (unsigned int)PWSTR;
        LOBYTE(v9) = 1;
        PWSTR = CmSetDeviceInterfacePathFormat(v8, 0LL, v9);
        if ( PWSTR < 0 )
          return (unsigned int)PWSTR;
        RtlInitUnicodeString(&DestinationString, 0LL);
        PWSTR = IoSetDeviceInterfaceState(&DestinationString, a2);
        if ( PWSTR < 0 )
          return (unsigned int)PWSTR;
        if ( (byte_140C0DD4C & 2) != 0 )
          McTemplateK0zzzt_EtwWriteTransfer(
            v11,
            v10,
            v12,
            *(const wchar_t **)(a1 + 8),
            *(const wchar_t **)(a1 + 16),
            0LL,
            a2);
        ExFreePoolWithTag(0LL, 0x57706E50u);
      }
      v4 = (__int64 *)*v4;
    }
    while ( v4 != v2 );
  }
  return (unsigned int)PWSTR;
}
