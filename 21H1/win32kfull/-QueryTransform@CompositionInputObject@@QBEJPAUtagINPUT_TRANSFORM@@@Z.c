/*
 * XREFs of ?QueryTransform@CompositionInputObject@@QBEJPAUtagINPUT_TRANSFORM@@@Z @ 0x15E6CD
 * Callers:
 *     ?GetTransform@InputTransform@@YGHPBUtagWND@@PAUtagINPUT_TRANSFORM@@@Z @ 0xAEBB6 (-GetTransform@InputTransform@@YGHPBUtagWND@@PAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall CompositionInputObject::QueryTransform(CompositionInputObject *this, struct tagINPUT_TRANSFORM *a2)
{
  int v2; // ebx
  CInputSink *v3; // edx
  const struct CInputSink *v5; // [esp+4h] [ebp-4h] BYREF

  v5 = 0;
  v2 = CompositionInputObject::LockForRead(this, &v5);
  if ( v2 >= 0 )
  {
    v3 = v5;
    qmemcpy(a2, (char *)v5 + 48, 0x40u);
    CInputSink::UnlockAndRelease(v3);
  }
  return v2;
}
