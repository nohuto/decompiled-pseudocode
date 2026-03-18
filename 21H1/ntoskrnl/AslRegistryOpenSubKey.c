/*
 * XREFs of AslRegistryOpenSubKey @ 0x1409634D8
 * Callers:
 *     AslpProcessMatchRegNode @ 0x14096577C (AslpProcessMatchRegNode.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     ZwOpenKey @ 0x1403F2570 (ZwOpenKey.c)
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 */

NTSTATUS __fastcall AslRegistryOpenSubKey(PHANDLE KeyHandle, void *a2, const WCHAR *a3)
{
  NTSTATUS inited; // ebx
  UNICODE_STRING v7; // [rsp+30h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF

  *KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v7 = 0LL;
  inited = RtlInitUnicodeStringEx(&v7, a3);
  if ( inited >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v7;
    ObjectAttributes.RootDirectory = a2;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return ZwOpenKey(KeyHandle, 0x20019u, &ObjectAttributes);
  }
  else
  {
    AslLogCallPrintf(1LL);
    return inited;
  }
}
