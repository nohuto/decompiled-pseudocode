/*
 * XREFs of _RXactpOpenTargetKey@16 @ 0x4B3454BA
 * Callers:
 *     _RXactpCommit@4 @ 0x4B34539B (_RXactpCommit@4.c)
 * Callees:
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 */

NTSTATUS __fastcall RXactpOpenTargetKey(void *a1, int a2, _UNICODE_STRING *a3, PHANDLE KeyHandle)
{
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+4h] [ebp-1Ch] BYREF
  ULONG Disposition; // [esp+1Ch] [ebp-4h] BYREF

  if ( a2 == 1 )
  {
    ObjectAttributes.ObjectName = a3;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    ObjectAttributes.Length = 24;
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.Attributes = 64;
    return ZwOpenKey(KeyHandle, 0x10000u, &ObjectAttributes);
  }
  else if ( a2 == 2 )
  {
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.ObjectName = a3;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    ObjectAttributes.Length = 24;
    ObjectAttributes.Attributes = 192;
    return ZwCreateKey(KeyHandle, 0x20006u, &ObjectAttributes, 0, 0, 0, &Disposition);
  }
  else
  {
    return -1073741811;
  }
}
