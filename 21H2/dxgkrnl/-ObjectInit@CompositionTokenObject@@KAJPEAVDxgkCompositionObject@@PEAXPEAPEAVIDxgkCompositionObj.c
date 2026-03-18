/*
 * XREFs of ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C0005D30
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C0005D98 (-Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 */

__int64 __fastcall CompositionTokenObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        const struct CompositionTokenInitInfo *a2,
        struct IDxgkCompositionObject **a3)
{
  __int64 v3; // rcx

  if ( a1 )
  {
    *(_QWORD *)a1 = &SetElement::`vftable';
    v3 = (__int64)a1 + 32;
    *(_QWORD *)v3 = &CCompositionToken::`vftable'{for `IDxgkCompositionObject'};
    *(_QWORD *)(v3 + 8) = &CCompositionToken::`vftable'{for `CTokenBase'};
    *(_QWORD *)(v3 + 32) = 6LL;
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_QWORD *)(v3 + 56) = 0LL;
    *(_DWORD *)(v3 + 64) = 0;
    *(_QWORD *)(v3 + 72) = 0LL;
    *(_DWORD *)(v3 + 80) = 0;
  }
  else
  {
    v3 = 32LL;
  }
  *a3 = (struct IDxgkCompositionObject *)v3;
  return CCompositionToken::Initialize((CCompositionToken *)v3, a2);
}
