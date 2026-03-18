/*
 * XREFs of ?CitAllocZero@@YAPEAX_K@Z @ 0x1C00AD748
 * Callers:
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009CDBC (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C00AD6C8 (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

void *__fastcall CitAllocZero(size_t Size)
{
  void *v2; // rax
  void *v3; // rbx

  v2 = (void *)Win32AllocPool(Size, 0x49637355u);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, Size);
  return v3;
}
