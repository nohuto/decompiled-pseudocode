/*
 * XREFs of EtwpQueryPersistedMemory @ 0x140948D70
 * Callers:
 *     EtwpSavePersistedLogger @ 0x140948E5C (EtwpSavePersistedLogger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
