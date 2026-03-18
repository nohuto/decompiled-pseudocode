/*
 * XREFs of UserDeleteAtomFromAtomTable @ 0x1C006B440
 * Callers:
 *     RealInternalRemoveProp @ 0x1C006B000 (RealInternalRemoveProp.c)
 *     UserDeleteAtom @ 0x1C006B420 (UserDeleteAtom.c)
 *     DeleteProperties @ 0x1C006B4A0 (DeleteProperties.c)
 * Callees:
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 */

__int64 __fastcall UserDeleteAtomFromAtomTable(struct _RTL_ATOM_TABLE *a1, RTL_ATOM a2)
{
  int v4; // eax
  ULONG v5; // eax
  __int64 v6; // rdx

  if ( a2 <= (unsigned __int16)gatomLastPinned && a2 >= (unsigned __int16)gatomFirstPinned )
    return 0LL;
  v4 = RtlDeleteAtomFromAtomTable(a1, a2);
  if ( v4 >= 0 )
    return 0LL;
  v5 = RtlNtStatusToDosError(v4);
  UserSetLastError(v5, v6);
  return a2;
}
