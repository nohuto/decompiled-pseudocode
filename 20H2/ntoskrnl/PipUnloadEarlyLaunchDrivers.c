/*
 * XREFs of PipUnloadEarlyLaunchDrivers @ 0x140A75928
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ZwUnloadKey2 @ 0x1403FBA90 (ZwUnloadKey2.c)
 *     IopUnloadDriver @ 0x140766018 (IopUnloadDriver.c)
 */

int __fastcall PipUnloadEarlyLaunchDrivers(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int16 *v2; // rdi
  unsigned __int16 *v3; // rbx
  unsigned __int16 *v4; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  v1 = &retaddr;
  *(&TargetKey.Length + 1) = 0;
  v2 = (unsigned __int16 *)(a1 + 64);
  v3 = *(unsigned __int16 **)(a1 + 64);
  *(&TargetKey.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( v3 != (unsigned __int16 *)(a1 + 64) )
  {
    do
    {
      v4 = v3;
      v3 = *(unsigned __int16 **)v3;
      if ( *((int *)v4 + 14) >= 0 )
        IopUnloadDriver(v4 + 16, 1);
    }
    while ( v3 != v2 );
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\ELAM");
    TargetKey.RootDirectory = 0LL;
    TargetKey.ObjectName = &DestinationString;
    TargetKey.Length = 48;
    TargetKey.Attributes = 576;
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    LODWORD(v1) = ZwUnloadKey2(&TargetKey, 1u);
  }
  return (int)v1;
}
