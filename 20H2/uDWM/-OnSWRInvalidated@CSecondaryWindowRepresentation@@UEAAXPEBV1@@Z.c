/*
 * XREFs of ?OnSWRInvalidated@CSecondaryWindowRepresentation@@UEAAXPEBV1@@Z @ 0x180009C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSecondaryWindowRepresentation::OnSWRInvalidated(
        CSecondaryWindowRepresentation *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  CSecondaryWindowRepresentation::SetDirtyFlags((CSecondaryWindowRepresentation *)((char *)this - 16), 1u);
}
