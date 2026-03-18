/*
 * XREFs of ?GetTransform@InputTransform@@YGHPBUtagWND@@PAUtagINPUT_TRANSFORM@@@Z @ 0xAEBB6
 * Callers:
 *     ?OnInput@InputTransform@@YGHPAUtagWND@@_K@Z @ 0xAEB5C (-OnInput@InputTransform@@YGHPAUtagWND@@_K@Z.c)
 *     _EditionGetInputTransform@8 @ 0x15E974 (_EditionGetInputTransform@8.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?QueryTransform@CompositionInputObject@@QBEJPAUtagINPUT_TRANSFORM@@@Z @ 0x15E6CD (-QueryTransform@CompositionInputObject@@QBEJPAUtagINPUT_TRANSFORM@@@Z.c)
 */

int __fastcall InputTransform::GetTransform(int a1, void *a2)
{
  int v4; // eax
  PKTHREAD CurrentThread; // eax
  CompositionInputObject *v7; // esi
  _BYTE v8[64]; // [esp+8h] [ebp-40h] BYREF

  if ( !(unsigned __int8)IsInputThread() )
  {
    CurrentThread = KeGetCurrentThread();
    if ( W32GetThreadWin32Thread(CurrentThread) != _gptiManipulationThread )
      return 0;
  }
  v4 = *(_DWORD *)(a1 + 160);
  if ( !v4 )
    return 0;
  v7 = *(CompositionInputObject **)(v4 + 80);
  if ( !v7 )
    return 0;
  memset(v8, 0, sizeof(v8));
  if ( CompositionInputObject::QueryTransform(v7, (struct tagINPUT_TRANSFORM *)v8) < 0 )
    return 0;
  qmemcpy(a2, v8, 0x40u);
  return 1;
}
