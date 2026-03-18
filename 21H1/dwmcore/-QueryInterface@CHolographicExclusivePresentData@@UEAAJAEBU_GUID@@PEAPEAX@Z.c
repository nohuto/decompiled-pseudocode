/*
 * XREFs of ?QueryInterface@CHolographicExclusivePresentData@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18025DE60
 * Callers:
 *     ?QueryInterface@CHolographicExclusivePresentData@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EFC20 (-QueryInterface@CHolographicExclusivePresentData@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusivePresentData::QueryInterface(
        CHolographicExclusivePresentData *this,
        const struct _GUID *a2,
        void **a3)
{
  return CMILCOMBase::InternalQueryInterface((CHolographicExclusivePresentData *)((char *)this + 8), a2, a3);
}
