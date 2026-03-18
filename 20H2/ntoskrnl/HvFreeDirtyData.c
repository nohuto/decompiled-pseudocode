/*
 * XREFs of HvFreeDirtyData @ 0x1406A3430
 * Callers:
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     CmpDeleteHive @ 0x1406A3308 (CmpDeleteHive.c)
 *     HvFoldBackDirtyData @ 0x140878FE4 (HvFoldBackDirtyData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall HvFreeDirtyData(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx

  v2 = *(void **)(a1 + 1688);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_DWORD *)(a1 + 1680) = 0;
    v3 = 0LL;
    for ( *(_QWORD *)(a1 + 1688) = 0LL; (unsigned int)v3 < *(_DWORD *)(a1 + 1712); v3 = (unsigned int)(v3 + 1) )
    {
      v4 = *(void **)(*(_QWORD *)(a1 + 1704) + 24 * v3 + 8);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 1704) + 24 * v3 + 8) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1704), 0);
    *(_QWORD *)(a1 + 1704) = 0LL;
    *(_DWORD *)(a1 + 1712) = 0;
    *(_DWORD *)(a1 + 1716) = 0;
  }
}
