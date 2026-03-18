/*
 * XREFs of EtwpQueryPersistedMemory @ 0x14094B3D4
 * Callers:
 *     EtwpSavePersistedLogger @ 0x14094B4C0 (EtwpSavePersistedLogger.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpQueryPersistedMemory(__int64 a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  int v7; // eax
  int v8; // ebx
  PVOID PoolWithTag; // rdi
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  int v12; // [rsp+54h] [rbp+Ch]

  v12 = HIDWORD(a1);
  v11 = 0;
  v7 = KsrClaimPersistedMemory(EtwpKsrGuid, a2, 0LL, 0LL, 0, &v11);
  v8 = v7;
  if ( v7 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v11, 0x4B777445u);
    if ( PoolWithTag )
    {
      v8 = KsrClaimPersistedMemory(EtwpKsrGuid, a2, PoolWithTag, v11, 0, &v11);
      if ( v8 < 0 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        *a4 = v11;
        *a3 = PoolWithTag;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( v7 >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
