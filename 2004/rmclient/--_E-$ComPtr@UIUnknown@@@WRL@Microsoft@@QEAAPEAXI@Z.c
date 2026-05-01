/*
 * XREFs of ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18000CDC8
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1800030C0 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008C78 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180009D50 (--3@YAXPEAX@Z.c)
 */

void *__fastcall Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'(__int64 a1)
{
  void *v1; // rdi
  __int64 v2; // rbx
  __int64 *i; // rsi

  v1 = (void *)(a1 - 8);
  v2 = *(_QWORD *)(a1 - 8);
  for ( i = (__int64 *)(a1 + 8 * v2); v2; --v2 )
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(--i);
  operator delete(v1);
  return v1;
}
