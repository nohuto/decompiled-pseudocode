/*
 * XREFs of LdrpFreeLoadContext @ 0x1800665D4
 * Callers:
 *     LdrpFreeReplacedModule @ 0x180066508 (LdrpFreeReplacedModule.c)
 *     LdrpFreeLoadContextOfNode @ 0x180066540 (LdrpFreeLoadContextOfNode.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800CCFA8 (LdrpCleanupEnclaveLoadState.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     LdrpFreeReplacedModule @ 0x180066508 (LdrpFreeReplacedModule.c)
 *     LdrpHandlePendingModuleReplaced @ 0x180066674 (LdrpHandlePendingModuleReplaced.c)
 */

__int64 __fastcall LdrpFreeLoadContext(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax

  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 176LL) = 0LL;
  result = LdrpHandlePendingModuleReplaced(a1);
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *(_DWORD *)(a1 + 96) )
    {
      do
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v4);
        if ( v5 )
        {
          v6 = *(_QWORD *)(v5 + 176);
          if ( v6 )
          {
            if ( (*(_DWORD *)(v6 + 32) & 0x80000) == 0 && *(_QWORD *)(v6 + 56) != v5 )
            {
              *(_QWORD *)(v6 + 56) = v5;
              LdrpFreeReplacedModule(v5);
            }
          }
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *(_DWORD *)(a1 + 96) );
      v3 = *(_QWORD *)(a1 + 88);
    }
    result = RtlFreeHeap(LdrpHeap, 0, v3);
  }
  if ( (*(_DWORD *)(a1 + 32) & 0x8000) != 0 )
    return RtlFreeHeap(LdrpHeap, 0, a1);
  return result;
}
