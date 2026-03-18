/*
 * XREFs of PiLookupInDDB @ 0x14075E908
 * Callers:
 *     PpCheckInDriverDatabase @ 0x14075EA10 (PpCheckInDriverDatabase.c)
 * Callees:
 *     PiReleaseDDB @ 0x1406E09A4 (PiReleaseDDB.c)
 *     PiIsDriverBlocked @ 0x14075E568 (PiIsDriverBlocked.c)
 *     PiInitializeDDB @ 0x1407EC34C (PiInitializeDDB.c)
 */

__int64 __fastcall PiLookupInDDB(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  PVOID v4; // rdi
  PVOID v6; // rcx
  int IsDriverBlocked; // ebx
  _OWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v13[2]; // [rsp+50h] [rbp-20h] BYREF

  v4 = PpDDBPatchHandle;
  v6 = PpDDBHandle;
  memset(v12, 0, sizeof(v12));
  memset(v13, 0, sizeof(v13));
  if ( !PpDDBHandle )
  {
    IsDriverBlocked = PiInitializeDDB(L"\\SystemRoot\\AppPatch\\drvmain.sdb");
    if ( IsDriverBlocked < 0 )
      goto LABEL_6;
    v6 = *(PVOID *)&v12[0];
  }
  IsDriverBlocked = PiIsDriverBlocked((__int64)v6, a1, a2, a3, a4);
  if ( IsDriverBlocked < 0 )
    goto LABEL_6;
  if ( !PpDDBHandle )
  {
    IsDriverBlocked = PiInitializeDDB(L"\\SystemRoot\\AppPatch\\drvpatch.sdb");
    if ( IsDriverBlocked < 0 )
    {
      IsDriverBlocked = 0;
      goto LABEL_6;
    }
    v4 = *(PVOID *)&v13[0];
  }
  if ( v4 )
    IsDriverBlocked = PiIsDriverBlocked((__int64)v4, a1, a2, a3, a4);
LABEL_6:
  if ( *(_QWORD *)&v12[0] )
    PiReleaseDDB((__int64)v12);
  if ( *(_QWORD *)&v13[0] )
    PiReleaseDDB((__int64)v13);
  return (unsigned int)IsDriverBlocked;
}
