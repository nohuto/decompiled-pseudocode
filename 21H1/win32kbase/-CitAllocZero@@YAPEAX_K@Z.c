/*
 * XREFs of ?CitAllocZero@@YAPEAX_K@Z @ 0x1C003FCE4
 * Callers:
 *     ?CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00240B4 (-CitpContextTrackingDataStart@@YAJPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C003FC64 (-CitpInteractionSummaryAllocate@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

void *__fastcall CitAllocZero(size_t Size)
{
  void *v2; // rax
  void *v3; // rbx

  v2 = (void *)Win32AllocPool(Size, 1231254357LL);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, Size);
  return v3;
}
