/*
 * XREFs of PiSwDeviceInterfacesUpdateState @ 0x14075E8E0
 * Callers:
 *     PiSwProcessRemove @ 0x14071EAD8 (PiSwProcessRemove.c)
 *     PiSwPdoPnPDispatch @ 0x140737A70 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     PnpAllocatePWSTR @ 0x1406AA0A8 (PnpAllocatePWSTR.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1406B41A0 (_CmSetDeviceInterfacePathFormat.c)
 *     IoSetDeviceInterfaceState @ 0x14072FA80 (IoSetDeviceInterfaceState.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwDeviceInterfacesUpdateState(__int64 a1, BOOLEAN a2)
{
  __int64 *v2; // r14
  WCHAR *v3; // rbx
  __int64 *v4; // rdi
  int v5; // esi
  int PWSTR; // eax
  __int64 v9; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+50h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 184);
  v3 = 0LL;
  v4 = *(__int64 **)(a1 + 184);
  v5 = 0;
  SourceString = 0LL;
  DestinationString = 0LL;
  if ( v4 == (__int64 *)(a1 + 184) )
    return (unsigned int)v5;
  while ( !*((_BYTE *)v4 + 36) )
  {
LABEL_4:
    v4 = (__int64 *)*v4;
    if ( v4 == v2 )
      goto LABEL_5;
  }
  PWSTR = PnpAllocatePWSTR((NTSTRSAFE_PCWSTR)v4[2], 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)&SourceString);
  v3 = (WCHAR *)SourceString;
  v5 = PWSTR;
  if ( PWSTR >= 0 )
  {
    v5 = CmSetDeviceInterfacePathFormat(v9, (WCHAR *)SourceString, 1);
    if ( v5 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v3);
      v5 = IoSetDeviceInterfaceState(&DestinationString, a2);
      if ( v5 >= 0 )
      {
        ExFreePoolWithTag(v3, 0x57706E50u);
        v3 = 0LL;
        SourceString = 0LL;
        goto LABEL_4;
      }
    }
  }
LABEL_5:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x57706E50u);
  return (unsigned int)v5;
}
