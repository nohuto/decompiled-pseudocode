/*
 * XREFs of ?ClassFree@@YGXPAUtagDESKTOP@@PAD@Z @ 0x479F2
 * Callers:
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 *     _ReferenceClass@8 @ 0x9D9BA (_ReferenceClass@8.c)
 * Callees:
 *     <none>
 */

void __fastcall ClassFree(int a1, void *a2)
{
  if ( a1 )
    RtlFreeHeap(*(PVOID *)(a1 + 64), 0, a2);
  else
    Win32FreePool(a2);
}
