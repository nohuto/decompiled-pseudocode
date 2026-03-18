/*
 * XREFs of ?ClassFree@@YGXPAUtagDESKTOP@@PAUtagCLS@@@Z @ 0x479A8
 * Callers:
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 *     ?CLSAllocAndInitStackRef@@YGPAUtagCLS@@PAUtagDESKTOP@@KK@Z @ 0x4750A (-CLSAllocAndInitStackRef@@YGPAUtagCLS@@PAUtagDESKTOP@@KK@Z.c)
 *     _ReferenceClass@8 @ 0x9D9BA (_ReferenceClass@8.c)
 * Callees:
 *     <none>
 */

void __fastcall ClassFree(int a1, int a2)
{
  int v3; // eax
  bool v4; // zf
  void *v5; // [esp-4h] [ebp-8h]

  v5 = *(void **)(a2 + 4);
  if ( a1 )
    RtlFreeHeap(*(PVOID *)(a1 + 64), 0, v5);
  else
    Win32FreePool(v5);
  v3 = *(_DWORD *)(a2 + 72);
  if ( v3 )
  {
    *(_DWORD *)v3 = 0;
    v4 = *(_DWORD *)(v3 + 4) == 0;
    *(_BYTE *)(v3 + 8) = 1;
    if ( v4 )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v3);
  }
  UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<20480,80>>(a2);
}
