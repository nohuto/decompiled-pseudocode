/*
 * XREFs of WerpGetRegistryKey @ 0x1C00528D0
 * Callers:
 *     WerKernelSubmitReport @ 0x1C0051E7C (WerKernelSubmitReport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WerpGetRegistryKey(void *a1, __int64 a2, __int64 a3, void **a4)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  struct _UNICODE_STRING v9; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v9 = 0LL;
  if ( a4 )
  {
    RtlInitUnicodeString(&v9, L"Busy");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v9;
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenKey(a4, 0x20000u, &ObjectAttributes);
    v7 = v6;
    if ( v6 >= 0 )
      return 0;
    else
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwOpenKey failed with scode 0x%x\n", 169, v6);
    return v7;
  }
  else
  {
    DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Invalid params\n", 150);
    return 3221225485LL;
  }
}
