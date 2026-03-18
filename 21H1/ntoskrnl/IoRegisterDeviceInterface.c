/*
 * XREFs of IoRegisterDeviceInterface @ 0x14072E7C0
 * Callers:
 *     PiSwCompleteCreate @ 0x140753438 (PiSwCompleteCreate.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     wcspbrk @ 0x1403D0210 (wcspbrk.c)
 *     ObQueryNameStringMode @ 0x1405D9AA0 (ObQueryNameStringMode.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406A7714 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1406A94DC (PnpUnicodeStringToWstr.c)
 *     IopRegisterDeviceInterface @ 0x14072DB00 (IopRegisterDeviceInterface.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterDeviceInterface(
        PDEVICE_OBJECT PhysicalDeviceObject,
        const GUID *InterfaceClassGuid,
        PUNICODE_STRING ReferenceString,
        PUNICODE_STRING SymbolicLinkName)
{
  WCHAR *v4; // rdi
  wchar_t *v5; // rsi
  PVOID DeviceNode; // r14
  __int64 v10; // rcx
  int v11; // eax
  int inited; // ebx
  const WCHAR *v13; // rdx
  int v15; // eax
  wchar_t *Str; // [rsp+30h] [rbp-10h] BYREF
  PCWSTR SourceString; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+80h] [rbp+40h] BYREF
  GUID *v19; // [rsp+88h] [rbp+48h]

  v19 = (GUID *)InterfaceClassGuid;
  v18 = 0;
  v4 = 0LL;
  v5 = 0LL;
  SourceString = 0LL;
  Str = 0LL;
  *SymbolicLinkName = 0LL;
  if ( !PhysicalDeviceObject
    || (DeviceNode = PhysicalDeviceObject->DeviceObjectExtension->DeviceNode) == 0LL
    || (*((_DWORD *)DeviceNode + 99) & 0x20000) != 0 )
  {
    inited = -1073741808;
LABEL_15:
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    goto LABEL_9;
  }
  if ( !*((_QWORD *)DeviceNode + 6) )
    goto LABEL_13;
  ObQueryNameStringMode((char *)PhysicalDeviceObject, 0LL, 0, &v18, 0);
  if ( v18 <= 0x10 )
    goto LABEL_13;
  if ( ReferenceString && ReferenceString->Length >= 2u )
  {
    v15 = PnpUnicodeStringToWstr((__int16 **)&Str, 0LL, &ReferenceString->Length);
    v5 = Str;
    inited = v15;
    if ( v15 < 0 )
      goto LABEL_9;
    if ( wcspbrk(Str, L"\\/") )
    {
LABEL_13:
      inited = -1073741808;
      goto LABEL_9;
    }
  }
  v10 = *((_QWORD *)DeviceNode + 6);
  LODWORD(Str) = 0;
  v11 = IopRegisterDeviceInterface(v10, (int *)v19, (__int64)v5, 0, (PVOID *)&SourceString, &Str);
  v4 = (WCHAR *)SourceString;
  inited = v11;
  if ( v11 < 0 )
    goto LABEL_15;
  v13 = SourceString;
  PhysicalDeviceObject->Flags |= (unsigned int)Str;
  inited = RtlInitUnicodeStringEx(SymbolicLinkName, v13);
  if ( inited < 0 )
    goto LABEL_15;
LABEL_9:
  PnpUnicodeStringToWstrFree(v5, (__int64)ReferenceString);
  return inited;
}
