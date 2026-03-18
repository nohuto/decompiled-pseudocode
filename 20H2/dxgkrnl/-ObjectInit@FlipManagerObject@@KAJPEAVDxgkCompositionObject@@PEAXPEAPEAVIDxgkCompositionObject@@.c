/*
 * XREFs of ?ObjectInit@FlipManagerObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C0069820
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFlipManager@@IEAAJXZ @ 0x1C006A624 (-Initialize@CFlipManager@@IEAAJXZ.c)
 */

__int64 __fastcall FlipManagerObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        void *a2,
        struct IDxgkCompositionObject **a3)
{
  __int64 v3; // rcx

  if ( a1 )
  {
    *(_QWORD *)a1 = &SetElement::`vftable';
    v3 = (__int64)a1 + 32;
    *(_QWORD *)(v3 + 16) = 0LL;
    *(_QWORD *)(v3 + 24) = 0LL;
    *(_QWORD *)v3 = &CFlipManager::`vftable'{for `IDxgkCompositionObject'};
    *(_QWORD *)(v3 + 8) = &CFlipManager::`vftable'{for `CPushLock'};
    *(_QWORD *)(v3 + 64) = v3 + 56;
    *(_QWORD *)(v3 + 56) = v3 + 56;
    *(_QWORD *)(v3 + 80) = v3 + 72;
    *(_QWORD *)(v3 + 72) = v3 + 72;
    *(_QWORD *)(v3 + 96) = v3 + 88;
    *(_QWORD *)(v3 + 88) = v3 + 88;
    *(_QWORD *)(v3 + 112) = v3 + 104;
    *(_QWORD *)(v3 + 104) = v3 + 104;
    *(_QWORD *)(v3 + 128) = v3 + 120;
    *(_QWORD *)(v3 + 120) = v3 + 120;
    *(_QWORD *)(v3 + 144) = v3 + 136;
    *(_QWORD *)(v3 + 136) = v3 + 136;
    *(_QWORD *)(v3 + 160) = v3 + 152;
    *(_QWORD *)(v3 + 152) = v3 + 152;
  }
  else
  {
    v3 = 32LL;
  }
  *a3 = (struct IDxgkCompositionObject *)v3;
  return CFlipManager::Initialize((CFlipManager *)v3);
}
