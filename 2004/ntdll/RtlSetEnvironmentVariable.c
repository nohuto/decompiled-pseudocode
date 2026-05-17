/*
 * XREFs of RtlSetEnvironmentVariable @ 0x18004DEB0
 * Callers:
 *     RtlpResetDriveEnvironment @ 0x18004D384 (RtlpResetDriveEnvironment.c)
 *     RtlpWow64ThunkEnvironment32To64 @ 0x18004DD4C (RtlpWow64ThunkEnvironment32To64.c)
 * Callees:
 *     RtlSetEnvironmentVar @ 0x18004E110 (RtlSetEnvironmentVar.c)
 */

__int64 __fastcall RtlSetEnvironmentVariable(__int64 a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rax

  v3 = 0LL;
  if ( a3 )
    v4 = (unsigned __int64)*a3 >> 1;
  else
    v4 = 0LL;
  if ( a3 )
    v3 = *((_QWORD *)a3 + 1);
  return RtlSetEnvironmentVar(a1, *((_QWORD *)a2 + 1), (unsigned __int64)*a2 >> 1, v3, v4);
}
