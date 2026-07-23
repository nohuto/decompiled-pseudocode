/*
 * XREFs of PiDmCacheDataDecode @ 0x14062C23C
 * Callers:
 *     PiDmObjectGetCachedObjectPropertyData @ 0x14062BC94 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140735760 (PiDmListUpdateAggregationCountWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x14074A614 (PiDmObjectProcessPropertyChange.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 */

__int64 __fastcall PiDmCacheDataDecode(int *a1, _DWORD *a2, GUID *a3, unsigned int a4, unsigned int *a5)
{
  int v5; // r10d
  unsigned int v6; // ebx
  int v8; // r10d
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // edx
  size_t v15; // r8
  const void *v16; // rdx
  unsigned int v18; // edx
  unsigned int v19; // edx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a1;
  v6 = 0;
  DestinationString = 0LL;
  v8 = v5 - 2;
  if ( !v8 )
    return (unsigned int)-1073741275;
  v9 = v8 - 1;
  if ( !v9 )
  {
    *a2 = a1[2];
    v18 = a1[3];
    *a5 = v18;
    if ( a4 >= v18 )
    {
      v15 = v18;
      v16 = a1 + 4;
      goto LABEL_12;
    }
    return (unsigned int)-1073741789;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *a2 = 13;
    *a5 = 16;
    if ( a4 >= 0x10 )
    {
      *a3 = *(GUID *)(a1 + 2);
      return v6;
    }
    return (unsigned int)-1073741789;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    *a2 = a1[2];
    v19 = a1[3];
    *a5 = v19;
    if ( a4 >= v19 )
    {
      v15 = v19;
      v16 = (const void *)*((_QWORD *)a1 + 2);
      goto LABEL_12;
    }
    return (unsigned int)-1073741789;
  }
  if ( v11 != 1 )
    return (unsigned int)-1073741595;
  v12 = a1[2];
  if ( v12 == 13 )
  {
    *a2 = 13;
    *a5 = 16;
    if ( a4 >= 0x10 )
    {
      RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(*((_QWORD *)a1 + 2) + 16LL));
      return (unsigned int)RtlGUIDFromString(&DestinationString, a3);
    }
    return (unsigned int)-1073741789;
  }
  if ( v12 != 18 )
    return (unsigned int)-1073741595;
  *a2 = 18;
  v13 = -1LL;
  do
    ++v13;
  while ( *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 2 * v13) );
  v14 = 2 * v13 + 2;
  *a5 = v14;
  if ( a4 < v14 )
    return (unsigned int)-1073741789;
  v15 = v14;
  v16 = *(const void **)(*((_QWORD *)a1 + 2) + 16LL);
LABEL_12:
  memmove(a3, v16, v15);
  return v6;
}
