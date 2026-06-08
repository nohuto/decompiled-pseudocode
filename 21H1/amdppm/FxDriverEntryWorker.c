/*
 * XREFs of FxDriverEntryWorker @ 0x1C00027D4
 * Callers:
 *     FxDriverEntry @ 0x1C00027A0 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0002764 (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0002934 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     ?FxStubInitTypes@@YAJXZ @ 0x1C0002B90 (-FxStubInitTypes@@YAJXZ.c)
 *     DriverEntry @ 0x1C003635C (DriverEntry.c)
 */

NTSTATUS __fastcall FxDriverEntryWorker(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  struct _WDF_BIND_INFO *v5; // rcx
  struct _WDF_BIND_INFO *v6; // rcx
  int inited; // ebx
  NTSTATUS v8; // eax
  void (__fastcall *DriverUnload)(_DRIVER_OBJECT *); // rax

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  *(_DWORD *)&DestinationString.Length = 34078720;
  DestinationString.Buffer = (wchar_t *)&unk_1C00131B0;
  RtlCopyUnicodeString(&DestinationString, RegistryPath);
  result = WdfVersionBind(DriverObject, &DestinationString, &WdfBindInfo, &WdfDriverGlobals);
  if ( result >= 0 )
  {
    inited = FxStubBindClasses(v5);
    if ( inited < 0 )
      goto LABEL_8;
    inited = FxStubInitTypes();
    if ( inited < 0 )
      goto LABEL_8;
    v8 = DriverEntry(DriverObject, RegistryPath);
    inited = v8;
    if ( v8 < 0 )
    {
      DbgPrintEx(0x4Du, 0, "DriverEntry failed 0x%x for driver %wZ\n", (unsigned int)v8, &DestinationString);
LABEL_8:
      FxStubDriverUnloadCommon(v6);
      return inited;
    }
    if ( WdfDriverGlobals->DisplaceDriverUnload )
    {
      DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))qword_1C00133B8;
      if ( DriverObject->DriverUnload )
        DriverUnload = DriverObject->DriverUnload;
      qword_1C00133B8 = (__int64)DriverUnload;
      DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
    }
    return 0;
  }
  return result;
}
