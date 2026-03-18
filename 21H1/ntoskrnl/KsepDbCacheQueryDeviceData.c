/*
 * XREFs of KsepDbCacheQueryDeviceData @ 0x1407B1F64
 * Callers:
 *     KseQueryDeviceData @ 0x140747E00 (KseQueryDeviceData.c)
 *     KsepDbCacheQueryDevice @ 0x140747F88 (KsepDbCacheQueryDevice.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 *     KsepCacheDeviceQueryData @ 0x1407B1FD8 (KsepCacheDeviceQueryData.c)
 */

__int64 __fastcall KsepDbCacheQueryDeviceData(__int64 a1, __int64 a2, _DWORD *a3, unsigned int *a4, void *a5)
{
  unsigned int v7; // ebx
  __int64 Data; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // eax

  v7 = -1073741275;
  if ( a1 )
  {
    v7 = 0;
    Data = KsepCacheDeviceQueryData();
    v9 = Data;
    if ( Data )
    {
      *a3 = *(_DWORD *)(Data + 36);
      v10 = *a4;
      v11 = *(_DWORD *)(Data + 32);
      *a4 = v11;
      if ( v10 < v11 )
        return (unsigned int)-1073741789;
      else
        memmove(a5, *(const void **)(v9 + 40), *(unsigned int *)(v9 + 32));
    }
    else
    {
      *a4 = 0;
    }
  }
  return v7;
}
