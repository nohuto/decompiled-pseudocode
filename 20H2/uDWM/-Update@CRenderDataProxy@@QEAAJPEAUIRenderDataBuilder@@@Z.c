/*
 * XREFs of ?Update@CRenderDataProxy@@QEAAJPEAUIRenderDataBuilder@@@Z @ 0x18002AB50
 * Callers:
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180029790 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderDataProxy::Update(CRenderDataProxy *this, struct IRenderDataBuilder *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IRenderDataBuilder *))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                              + 16LL)
                                                                                + 328LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}
