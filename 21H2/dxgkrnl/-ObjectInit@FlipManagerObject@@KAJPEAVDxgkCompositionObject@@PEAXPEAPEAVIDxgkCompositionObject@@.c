/*
 * XREFs of ?ObjectInit@FlipManagerObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C007C030
 * Callers:
 *     <none>
 * Callees:
 *     ??0FlipManagerObject@@IEAA@XZ @ 0x1C007BF98 (--0FlipManagerObject@@IEAA@XZ.c)
 *     ?Initialize@CFlipManager@@IEAAJPEAX@Z @ 0x1C007D9C0 (-Initialize@CFlipManager@@IEAAJPEAX@Z.c)
 */

__int64 __fastcall FlipManagerObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        void *a2,
        struct IDxgkCompositionObject **a3)
{
  struct IDxgkCompositionObject **v3; // r9
  void *v4; // r10
  CFlipManager *v5; // rcx

  v3 = a3;
  v4 = a2;
  if ( a1 )
    FlipManagerObject::FlipManagerObject(a1);
  v5 = (struct DxgkCompositionObject *)((char *)a1 + 32);
  *v3 = v5;
  return CFlipManager::Initialize(v5, v4);
}
