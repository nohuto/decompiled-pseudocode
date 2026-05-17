/*
 * XREFs of _LdrpBuildForwarderLink@8 @ 0x4B2E7CE3
 * Callers:
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _LdrpRecordModuleDependency@16 @ 0x4B2CF113 (_LdrpRecordModuleDependency@16.c)
 */

int __fastcall LdrpBuildForwarderLink(int a1, int a2)
{
  int v3; // esi
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  v6 = 0;
  if ( a1 )
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 80) + 12) || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      LdrpRecordModuleDependency(a1, a2, 0, &v6);
      v3 = v6;
    }
    else
    {
      v3 = -1073741515;
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  }
  return v3;
}
