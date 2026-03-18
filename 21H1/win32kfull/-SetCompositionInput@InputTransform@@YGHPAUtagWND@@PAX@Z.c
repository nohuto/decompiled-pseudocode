/*
 * XREFs of ?SetCompositionInput@InputTransform@@YGHPAUtagWND@@PAX@Z @ 0x15E709
 * Callers:
 *     _EditionUpdateInputTransformFromHitTest@24 @ 0x11A3E (_EditionUpdateInputTransformFromHitTest@24.c)
 *     _SetManipulationInputTargetTransform@124 @ 0xF2056 (_SetManipulationInputTargetTransform@124.c)
 * Callees:
 *     ?InitInputTransformList@@YGPAUtagINPUTTRANSFORMLIST@@PAUtagWND@@@Z @ 0x15E64D (-InitInputTransformList@@YGPAUtagINPUTTRANSFORMLIST@@PAUtagWND@@@Z.c)
 */

int __fastcall InputTransform::SetCompositionInput(_DWORD *a1, void *a2)
{
  int v4; // ecx
  _DWORD *v5; // esi
  struct tagINPUTTRANSFORMLIST *inited; // eax
  struct CompositionInputObject **v7; // esi
  CompositionObject *v8; // ecx
  int v9; // esi
  struct CompositionInputObject **v11; // [esp-4h] [ebp-10h]

  v4 = 3;
  v5 = a1 + 7;
  while ( v4 )
  {
    ++v5;
    --v4;
  }
  inited = InitInputTransformList(a1);
  if ( !inited )
    return 0;
  v7 = (struct CompositionInputObject **)((char *)inited + 80);
  v8 = (CompositionObject *)*((_DWORD *)inited + 20);
  if ( v8 )
  {
    CompositionObject::Release(v8);
    *v7 = 0;
  }
  v11 = v7;
  v9 = 1;
  if ( (int)CompositionInputObject::ResolveHandle(a2, 1u, 1, v11) < 0 )
    return 0;
  return v9;
}
