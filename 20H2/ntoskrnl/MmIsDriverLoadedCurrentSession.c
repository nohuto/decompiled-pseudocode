/*
 * XREFs of MmIsDriverLoadedCurrentSession @ 0x14078A488
 * Callers:
 *     VfThunkApplyMandatoryThunks @ 0x1409DBB7C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1409DBC64 (VfThunkApplyThunks.c)
 * Callees:
 *     MiSessionLookupImage @ 0x14032DA58 (MiSessionLookupImage.c)
 */

_BOOL8 __fastcall MmIsDriverLoadedCurrentSession(unsigned __int64 a1)
{
  return MiSessionLookupImage(a1) != 0LL;
}
