/*
 * XREFs of FsRtlPrivateResetLowestLockOffset @ 0x140364750
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14021CFE4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140363A3C (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlFastUnlockSingleShared @ 0x140363F58 (FsRtlFastUnlockSingleShared.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlPrivateResetLowestLockOffset(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 j; // rcx
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rdx
  __int64 result; // rax
  __int64 i; // rdx

  v2 = 0LL;
  v3 = a1[4];
  if ( !v3 )
  {
    v5 = a1[5];
    if ( !v5 )
    {
      result = -1LL;
      goto LABEL_8;
    }
LABEL_10:
    for ( i = *(_QWORD *)(v5 + 8); i; i = *(_QWORD *)(i + 8) )
      v5 = i;
    v7 = (__int64 *)(v5 + 24);
    if ( !v2 )
      goto LABEL_7;
    v6 = (__int64 *)(v2 + 8);
    if ( *v7 < (unsigned __int64)*v6 )
      goto LABEL_7;
    goto LABEL_6;
  }
  for ( j = *(_QWORD *)(v3 + 8); j; j = *(_QWORD *)(j + 8) )
    v3 = j;
  v2 = *(_QWORD *)(v3 - 24);
  v5 = a1[5];
  if ( v5 )
    goto LABEL_10;
  v6 = (__int64 *)(v2 + 8);
LABEL_6:
  v7 = v6;
LABEL_7:
  result = *v7;
LABEL_8:
  *a1 = result;
  return result;
}
