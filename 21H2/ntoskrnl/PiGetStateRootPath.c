/*
 * XREFs of PiGetStateRootPath @ 0x1406DF520
 * Callers:
 *     PiCreateDriverRedirectedStateKey @ 0x1406DF254 (PiCreateDriverRedirectedStateKey.c)
 *     PiOpenDriverRedirectedStateKey @ 0x1406DF440 (PiOpenDriverRedirectedStateKey.c)
 *     IoGetDeviceDirectory @ 0x140943540 (IoGetDeviceDirectory.c)
 *     PiGetDriverMutableStateDirectory @ 0x140944218 (PiGetDriverMutableStateDirectory.c)
 *     PiOpenDriverRedirectedStateRootKey @ 0x140944554 (PiOpenDriverRedirectedStateRootKey.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B286CC (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiGetStateRootPath(PCWSTR SourceString, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  int PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  int v9; // ebx
  void *Pool2; // rdi
  int v11; // eax
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  if ( !a4 )
    return (unsigned int)-1073741811;
  LODWORD(v12) = 0;
  PersistedStateLocation = RtlGetPersistedStateLocation(SourceString, 0LL, 0, (__int64)&v12);
  inited = PersistedStateLocation;
  if ( PersistedStateLocation >= 0 )
    return (unsigned int)-1073741823;
  if ( PersistedStateLocation == -2147483643 )
  {
    v9 = v12;
    Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v12, 1869181008LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v11 = RtlGetPersistedStateLocation(SourceString, Pool2, v9, (__int64)&v12);
    inited = v11;
    if ( v11 == -1073741772 )
    {
      inited = -1073741595;
    }
    else if ( v11 >= 0 )
    {
      inited = RtlInitUnicodeStringEx(a4, (PCWSTR)Pool2);
      if ( inited >= 0 )
        return (unsigned int)inited;
    }
    ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)inited;
}
