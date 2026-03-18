/*
 * XREFs of AcpiGetFullyQualifiedBiosName @ 0x1C00AF100
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x1C000AC5C (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C0011484 (ACPIAmliBuildObjectPathname.c)
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C001165C (OSConvertDeviceHandleToNSHANDLE.c)
 *     ACPIInitUnicodeString @ 0x1C0099A50 (ACPIInitUnicodeString.c)
 */

__int64 __fastcall AcpiGetFullyQualifiedBiosName(ULONG_PTR a1, __int64 a2, struct _UNICODE_STRING *a3, _DWORD *a4)
{
  __int64 *v7; // rax
  int v8; // ebx
  unsigned __int16 Length; // cx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  SourceString = 0LL;
  P = 0LL;
  *a4 = 0;
  v7 = (__int64 *)OSConvertDeviceHandleToNSHANDLE(a1);
  v8 = AMLIGetNameSpaceObject(*(_BYTE **)(a2 + 8), v7, (unsigned __int64 *)&v13, 0);
  if ( v8 >= 0 )
  {
    v8 = ACPIAmliBuildObjectPathname(v13, (char **)&P, 1);
    if ( v8 >= 0 )
    {
      v8 = ACPIInitUnicodeString(&SourceString, (const char *)P);
      if ( v8 >= 0 )
      {
        Length = SourceString.Length;
        *a4 = SourceString.Length + 2;
        if ( Length <= a3->MaximumLength )
        {
          RtlCopyUnicodeString(a3, &SourceString);
          v8 = 0;
          a3->Buffer[(unsigned __int16)((a3->MaximumLength >> 1) - 1)] = 0;
        }
        else
        {
          v8 = -1073741789;
        }
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  if ( SourceString.Buffer )
    ExFreePoolWithTag(SourceString.Buffer, 0x53706341u);
  if ( v13 )
    AMLIDereferenceHandleEx(v13);
  return (unsigned int)v8;
}
