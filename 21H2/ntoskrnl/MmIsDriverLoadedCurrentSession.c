/*
 * XREFs of MmIsDriverLoadedCurrentSession @ 0x140761DD8
 * Callers:
 *     MiAttachToSessionForBaseImage @ 0x1405A2D30 (MiAttachToSessionForBaseImage.c)
 *     VfThunkApplyPristineToAllSession @ 0x140A93644 (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140A937C4 (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     MiSessionLookupImage @ 0x1402DBF3C (MiSessionLookupImage.c)
 */

_BOOL8 __fastcall MmIsDriverLoadedCurrentSession(unsigned __int64 a1)
{
  return MiSessionLookupImage(a1) != 0LL;
}
