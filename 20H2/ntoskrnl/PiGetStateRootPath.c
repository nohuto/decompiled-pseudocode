/*
 * XREFs of PiGetStateRootPath @ 0x14077D51C
 * Callers:
 *     PiOpenDriverRedirectedStateKey @ 0x140777BF4 (PiOpenDriverRedirectedStateKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407C0754 (PiCreateDriverRedirectedStateKey.c)
 *     IoGetDeviceDirectory @ 0x1408A1240 (IoGetDeviceDirectory.c)
 *     PiGetDriverMutableStateDirectory @ 0x1408A1EF8 (PiGetDriverMutableStateDirectory.c)
 *     PiOpenDriverRedirectedStateRootKey @ 0x1408A21F0 (PiOpenDriverRedirectedStateRootKey.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140A70F6C (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140267E90 (RtlInitUnicodeStringEx.c)
 *     RtlGetPersistedStateLocation @ 0x140668560 (RtlGetPersistedStateLocation.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiGetStateRootPath(PCWSTR SourceString, _WORD *a2, unsigned int a3, UNICODE_STRING *a4)
{
  int PersistedStateLocation; // eax
  NTSTATUS inited; // ebx
  unsigned int v11; // ebx
  PVOID PoolWithTag; // rdi
  int v13; // eax
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+20h] BYREF

  if ( a4 )
  {
    LODWORD(NumberOfBytes) = 0;
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               SourceString,
                               0LL,
                               a2,
                               a3,
                               0LL,
                               0,
                               (unsigned int *)&NumberOfBytes);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation >= 0 )
    {
      return (unsigned int)-1073741823;
    }
    else if ( PersistedStateLocation == -2147483643 )
    {
      v11 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x6F697050u);
      if ( PoolWithTag )
      {
        v13 = RtlGetPersistedStateLocation(SourceString, 0LL, a2, a3, PoolWithTag, v11, (unsigned int *)&NumberOfBytes);
        inited = v13;
        if ( v13 == -1073741772 )
        {
          inited = -1073741595;
        }
        else if ( v13 >= 0 )
        {
          inited = RtlInitUnicodeStringEx(a4, (PCWSTR)PoolWithTag);
          if ( inited >= 0 )
            PoolWithTag = 0LL;
        }
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)inited;
}
