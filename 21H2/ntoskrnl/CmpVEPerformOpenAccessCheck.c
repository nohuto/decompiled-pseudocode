/*
 * XREFs of CmpVEPerformOpenAccessCheck @ 0x1405EA280
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x1406DBF40 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     CmpCheckKeyBodyAccess @ 0x1405EA3A4 (CmpCheckKeyBodyAccess.c)
 *     CmpCheckAdminAccess @ 0x1405EA888 (CmpCheckAdminAccess.c)
 *     CmpIsSystemEntity @ 0x14064B910 (CmpIsSystemEntity.c)
 *     RtlMapGenericMask @ 0x14071A280 (RtlMapGenericMask.c)
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
  __int64 v8; // rcx

  v6 = Object[1];
  if ( !*(_WORD *)(v6 + 66) && (*(_DWORD *)(a5 + 24) & 0x10) == 0 && (*(_DWORD *)(v6 + 184) & 0x40) == 0 )
  {
    v8 = *(unsigned int *)(*(_QWORD *)(v6 + 32) + 4152LL);
    if ( (v8 & 0x10) != 0 )
    {
      LOBYTE(v8) = KeGetCurrentThread()->PreviousMode;
      if ( !(unsigned __int8)CmpIsSystemEntity(v8)
        && (int)CmpCheckAdminAccess(
                  AccessState->RemainingDesiredAccess,
                  (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v6 + 88) + 32LL)) >= 0 )
      {
        return (unsigned int)-1073741790;
      }
    }
  }
  return a6;
}
