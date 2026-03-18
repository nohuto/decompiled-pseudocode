/*
 * XREFs of ?QueryInterface@CHolographicExclusivePresentData@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18025B3F0
 * Callers:
 *     ?QueryInterface@CHolographicExclusivePresentData@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F2BB0 (-QueryInterface@CHolographicExclusivePresentData@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
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
