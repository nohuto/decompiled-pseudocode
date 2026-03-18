/*
 * XREFs of ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C01CC070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CompositionObject::AddRef(CompositionObject *this)
{
  return ObReferenceObjectByPointer(this, 3u, ExCompositionObjectType, 0);
}
