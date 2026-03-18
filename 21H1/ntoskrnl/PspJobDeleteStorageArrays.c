/*
 * XREFs of PspJobDeleteStorageArrays @ 0x14067564C
 * Callers:
 *     PspJobDelete @ 0x1402D96F0 (PspJobDelete.c)
 * Callees:
 *     PspFreeStorage @ 0x14090A748 (PspFreeStorage.c)
 *     PspStorageEmptyArray @ 0x14090A824 (PspStorageEmptyArray.c)
 */

__int64 __fastcall PspJobDeleteStorageArrays(__int64 a1)
{
  __int64 v1; // rdi
  ULONG_PTR v3; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1304);
  if ( v1 )
  {
    PspStorageEmptyArray(*(_QWORD *)(a1 + 1304));
    v3 = *(_QWORD *)(v1 + 512);
    if ( v3 )
      PspStorageEmptyArray(v3);
    result = PspFreeStorage(*(PVOID *)(a1 + 1304));
    *(_QWORD *)(a1 + 1304) = 0LL;
  }
  return result;
}
