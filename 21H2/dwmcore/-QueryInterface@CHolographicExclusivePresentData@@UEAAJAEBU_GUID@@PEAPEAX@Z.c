/*
 * XREFs of ?QueryInterface@CHolographicExclusivePresentData@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18029FEB0
 * Callers:
 *     ?QueryInterface@CHolographicExclusivePresentData@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010AED0 (-QueryInterface@CHolographicExclusivePresentData@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicExclusivePresentData::QueryInterface(
        CHolographicExclusivePresentData *this,
        struct _GUID *a2,
        void **a3)
{
  return CMILCOMBaseT<IUnknown>::InternalQueryInterface(
           (volatile signed __int32 *)this + 2,
           a2,
           (volatile signed __int32 **)a3);
}
