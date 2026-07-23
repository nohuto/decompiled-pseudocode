/*
 * XREFs of PiSwDeviceInterfaceSetState @ 0x14074D5F0
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14074D2D8 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfaceSetState @ 0x1407CEF2C (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PnpAllocatePWSTR @ 0x14062CF38 (PnpAllocatePWSTR.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x14062F75C (_CmSetDeviceInterfacePathFormat.c)
 *     IoSetDeviceInterfaceState @ 0x140749220 (IoSetDeviceInterfaceState.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwDeviceInterfaceSetState(__int64 a1, __int64 a2, BOOLEAN a3)
{
  WCHAR *v3; // rbx
  int v4; // edi
  __int64 v5; // rax
  __int64 v8; // rax
  int PWSTR; // eax
  __int64 v10; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  PCWSTR SourceString; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  SourceString = 0LL;
  v4 = 0;
  DestinationString = 0LL;
  v5 = *(_QWORD *)(a1 + 120);
  if ( !v5
    || (v8 = *(_QWORD *)(v5 + 64)) == 0
    || (*(_DWORD *)(v8 + 8) & 1) == 0
    || *(_BYTE *)(a2 + 36) == a3
    || (PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 16), 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)&SourceString),
        v3 = (WCHAR *)SourceString,
        v4 = PWSTR,
        PWSTR >= 0)
    && (v4 = CmSetDeviceInterfacePathFormat(v10, (__int64 *)SourceString, 1), v4 >= 0)
    && (RtlInitUnicodeString(&DestinationString, v3), v4 = IoSetDeviceInterfaceState(&DestinationString, a3), v4 >= 0) )
  {
    *(_BYTE *)(a2 + 36) = a3;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x57706E50u);
  return (unsigned int)v4;
}
