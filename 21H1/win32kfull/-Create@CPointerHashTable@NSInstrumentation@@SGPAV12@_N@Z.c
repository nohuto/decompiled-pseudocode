/*
 * XREFs of ?Create@CPointerHashTable@NSInstrumentation@@SGPAV12@_N@Z @ 0xE5FF2
 * Callers:
 *     ?Initialize@UmfdAllocation@@SG_NXZ @ 0xE5FBC (-Initialize@UmfdAllocation@@SG_NXZ.c)
 *     ?InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCPointerHashTable@2@_N@Z @ 0x249E79 (-InitializePointerHashTable@CLeakTrackingAllocator@NSInstrumentation@@AAEXPAPAVCPointerHashTable.c)
 * Callees:
 *     ?Destroy@CPointerHashTable@NSInstrumentation@@SGXPAV12@@Z @ 0xD3A64 (-Destroy@CPointerHashTable@NSInstrumentation@@SGXPAV12@@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

struct NSInstrumentation::CPointerHashTable *__fastcall NSInstrumentation::CPointerHashTable::Create(char a1)
{
  _BYTE *PoolWithTag; // esi
  struct NSInstrumentation::CPointerHashTable *result; // eax
  PVOID v4; // eax
  char v5; // al

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x28u, 0x38497355u);
  result = 0;
  if ( PoolWithTag )
  {
    PoolWithTag[36] &= ~1u;
    *((_DWORD *)PoolWithTag + 5) = 0;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *((_DWORD *)PoolWithTag + 7) = 0;
    *((_DWORD *)PoolWithTag + 8) = 0;
    *((_DWORD *)PoolWithTag + 3) = 0;
    *((_DWORD *)PoolWithTag + 4) = 0;
    *(_DWORD *)PoolWithTag = 0;
    *((_DWORD *)PoolWithTag + 2) = 0;
    v4 = ExAllocatePoolWithTag(PagedPoolSession, 0x1000u, 0x38497355u);
    *((_DWORD *)PoolWithTag + 5) = v4;
    if ( v4 )
    {
      memset(v4, 0, 0x1000u);
      v5 = PoolWithTag[36];
      *((_DWORD *)PoolWithTag + 8) = 0;
      *((_DWORD *)PoolWithTag + 6) = 512;
      PoolWithTag[36] = a1 | v5 & 0xFE;
      result = (struct NSInstrumentation::CPointerHashTable *)PoolWithTag;
      *((_DWORD *)PoolWithTag + 7) = 9;
    }
    else
    {
      NSInstrumentation::CPointerHashTable::Destroy(PoolWithTag);
      return 0;
    }
  }
  return result;
}
