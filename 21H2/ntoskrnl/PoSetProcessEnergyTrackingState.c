/*
 * XREFs of PoSetProcessEnergyTrackingState @ 0x1406174C0
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopEtEnergyContextSetState @ 0x1406F4EF8 (PopEtEnergyContextSetState.c)
 */

__int64 __fastcall PoSetProcessEnergyTrackingState(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rdi
  int v6; // ecx
  _WORD *i; // rax
  int v8; // ebx

  v3 = *(_QWORD *)(a1 + 2280);
  v5 = 0LL;
  if ( v3 )
  {
    if ( a2[2] || (*a2 & 0xFFFFFFEF) != 0 || (~*a2 & a2[1]) != 0 )
    {
      v8 = -1073741811;
    }
    else
    {
      if ( (a2[3] & 1) != 0 )
      {
        v6 = 0;
        for ( i = a2 + 4; *i; ++i )
        {
          if ( (unsigned int)++v6 >= 0x40 )
            return (unsigned int)-1073741811;
        }
      }
      v5 = v3;
      PopAcquireRwLockExclusive(v3 + 432);
      v8 = PopEtEnergyContextSetState(a1, a2);
      if ( v8 >= 0 )
        v8 = 0;
    }
    if ( v5 )
      PopReleaseRwLock(v5 + 432);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v8;
}
