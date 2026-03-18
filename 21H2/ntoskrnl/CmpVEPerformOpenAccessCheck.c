/*
 * XREFs of CmpVEPerformOpenAccessCheck @ 0x1406B6444
 * Callers:
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 * Callees:
 *     CmpIsSystemEntity @ 0x1406B67A0 (CmpIsSystemEntity.c)
 *     CmpCheckAdminAccess @ 0x1406B6880 (CmpCheckAdminAccess.c)
 *     RtlMapGenericMask @ 0x140728CB0 (RtlMapGenericMask.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F7AD0 (CmpCheckKeyBodyAccess.c)
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
  __int64 v11; // rcx
  unsigned int v12; // ecx
  ACCESS_MASK v14; // eax
  char v15; // al
  __int64 v16[5]; // [rsp+30h] [rbp-28h] BYREF
  ACCESS_MASK AccessMask; // [rsp+60h] [rbp+8h] BYREF

  v6 = Object[1];
  LOBYTE(AccessMask) = 0;
  if ( *(_WORD *)(v6 + 66) )
    return a6;
  if ( (*(_DWORD *)(a5 + 24) & 0x10) != 0 )
    return a6;
  if ( (*(_DWORD *)(v6 + 184) & 0x40) != 0 )
    return a6;
  v11 = *(unsigned int *)(*(_QWORD *)(v6 + 32) + 4112LL);
  if ( (v11 & 0x10) == 0 )
    return a6;
  LOBYTE(v11) = KeGetCurrentThread()->PreviousMode;
  if ( (unsigned __int8)CmpIsSystemEntity(v11, 0LL, a5 + 16) )
    return a6;
  LODWORD(v16[0]) = CmpCheckAdminAccess(
                      AccessState->RemainingDesiredAccess,
                      (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v6 + 88) + 32LL));
  if ( SLODWORD(v16[0]) < 0 )
  {
    return a6;
  }
  else if ( (_BYTE)AccessMask )
  {
    AccessMask = 0x2000000;
    RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76));
    v14 = AccessMask;
    AccessState->RemainingDesiredAccess = AccessMask;
    AccessState->OriginalDesiredAccess = v14;
    v15 = CmpCheckKeyBodyAccess(Object, ObjectCreated, AccessState, AccessMode, (__int64)v16);
    v12 = v16[0];
    if ( v15 )
      return 0;
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v12;
}
