/*
 * XREFs of MUIInitializeResourceLock @ 0x1407CB8AC
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1406C1890 (NtGetMUIRegistryInfo.c)
 *     NtFlushInstallUILanguage @ 0x1407CB7D0 (NtFlushInstallUILanguage.c)
 *     NtMapCMFModule @ 0x14095C2A0 (NtMapCMFModule.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14027F200 (ExInitializeResourceLite.c)
 *     ExDeleteResourceLite @ 0x14029DAD0 (ExDeleteResourceLite.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MUIInitializeResourceLock(volatile signed __int64 *a1)
{
  struct _ERESOURCE *PoolWithTag; // rax
  struct _ERESOURCE *v3; // rdi
  unsigned int v4; // ebx

  if ( a1 )
  {
    if ( *a1 )
    {
      return 0;
    }
    else
    {
      PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6D756950u);
      v3 = PoolWithTag;
      if ( PoolWithTag )
      {
        v4 = ExInitializeResourceLite(PoolWithTag);
        if ( (v4 & 0xC0000000) != 0xC0000000 )
        {
          if ( _InterlockedCompareExchange64(a1, (signed __int64)v3, 0LL) )
            ExDeleteResourceLite(v3);
          else
            v3 = 0LL;
          v4 = 0;
        }
        if ( v3 )
          ExFreePoolWithTag(v3, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
