/*
 * XREFs of ?WriteInstruction@CDrawMesh2DInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180087B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawMesh2DInstruction::WriteInstruction(
        CDrawMesh2DInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _QWORD, _QWORD))(*(_QWORD *)a2 + 48LL))(
           a2,
           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 24LL));
}
