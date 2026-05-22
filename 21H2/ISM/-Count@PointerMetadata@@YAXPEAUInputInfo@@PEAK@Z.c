/*
 * XREFs of ?Count@PointerMetadata@@YAXPEAUInputInfo@@PEAK@Z @ 0x18001E8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PointerMetadata::Count(PointerMetadata *this, struct InputInfo *a2, unsigned int *a3)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 53);
}
