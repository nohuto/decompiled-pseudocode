/*
 * XREFs of CmpVEPerformOpenAccessCheck @ 0x1406BB850
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x140622420 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1405EA850 (CmpIsSystemEntity.c)
 *     RtlMapGenericMask @ 0x1405FFDA0 (RtlMapGenericMask.c)
 *     CmpCheckKeyBodyAccess @ 0x1406BB974 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckAdminAccess @ 0x1406BBE58 (CmpCheckAdminAccess.c)
 */

__int64 __fastcall CmpVEPerformOpenAccessCheck(
        _QWORD *Object,
        BOOLEAN ObjectCreated,
        PACCESS_STATE AccessState,
        KPROCESSOR_MODE AccessMode,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx

  v6 = Object[1];
  if ( !*(_WORD *)(v6 + 66)
    && (*(_DWORD *)(a5 + 24) & 0x10) == 0
    && (*(_DWORD *)(v6 + 184) & 0x40) == 0
    && (*(_DWORD *)(*(_QWORD *)(v6 + 32) + 4152LL) & 0x10) != 0
    && !CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, 0LL, (int *)(a5 + 16))
    && (int)CmpCheckAdminAccess(
              AccessState->RemainingDesiredAccess,
              (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v6 + 88) + 32LL)) >= 0 )
  {
    return (unsigned int)-1073741790;
  }
  return a6;
}
