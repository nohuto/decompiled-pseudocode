/*
 * XREFs of ?Delete@CHwndTargetProp@@UEAAXXZ @ 0x1C0050A20
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearSystemVisual@CHwndTargetProp@@QEAAHW4HwndTargetPropVisualType@@@Z @ 0x1C0050A70 (-ClearSystemVisual@CHwndTargetProp@@QEAAHW4HwndTargetPropVisualType@@@Z.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall CHwndTargetProp::Delete(CHwndTargetProp *this)
{
  int i; // edi
  void *v3; // rcx

  for ( i = 0; i < 3; ++i )
    CHwndTargetProp::ClearSystemVisual(this, (unsigned int)i);
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *((_QWORD *)this + 8) = 0LL;
  }
  Win32FreePool(this);
}
