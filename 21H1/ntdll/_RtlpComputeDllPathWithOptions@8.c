/*
 * XREFs of _RtlpComputeDllPathWithOptions@8 @ 0x4B2B3600
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpComputePath@16 @ 0x4B2B2EA8 (_RtlpComputePath@16.c)
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

_DWORD *__stdcall RtlpComputeDllPathWithOptions(__int16 a1, wchar_t *a2)
{
  unsigned int v2; // edx
  _DWORD *v3; // esi
  char v5; // [esp+Ch] [ebp-2Ch]
  _DWORD v6[9]; // [esp+10h] [ebp-28h] BYREF

  RtlAcquireSRWLockShared(&LdrpDllDirectoryLock);
  if ( (a1 & 0x100) != 0 )
    v6[0] = 5;
  v2 = (a1 & 0x100) != 0;
  if ( (a1 & 0x200) != 0 )
    v6[v2++] = 1;
  if ( (a1 & 0x400) != 0 )
  {
    v6[v2++] = 6;
    if ( LdrpDllDirectory.Length )
      v6[v2++] = 0;
  }
  if ( (a1 & 0x4800) != 0 )
    v6[v2++] = 7;
  if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x20000000) == 0 || (v5 = 1, (a1 & 0x800) == 0) )
    v5 = 0;
  if ( LdrpAppPackagesPath.Length )
    v6[v2++] = 8;
  v3 = RtlpComputePath((int)v6, v2, a2, v5);
  RtlReleaseSRWLockShared(&LdrpDllDirectoryLock);
  if ( v3 )
    *((_BYTE *)v3 + 72) = 1;
  return v3;
}
