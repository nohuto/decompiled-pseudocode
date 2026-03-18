/*
 * XREFs of PopNetConnectivityInStandbyCallback @ 0x1407BED30
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetConnectivityInStandbyCallback(int a1, int *a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( a3 == 4 && (unsigned int)*a2 <= 2 )
  {
    v4 = 0;
    PopAcquirePolicyLock(a1);
    dword_140C23F18 = *a2;
    PopReleasePolicyLock(v6, v5);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
