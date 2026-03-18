/*
 * XREFs of Amd64GetGenericPerfEvent @ 0x14052BC28
 * Callers:
 *     Amd64InitializeProfiling @ 0x140A63680 (Amd64InitializeProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Amd64GetGenericPerfEvent(int a1)
{
  char CpuType; // dl
  __int64 *v3; // rcx
  __int64 v4; // rax
  __int64 *i; // rdx

  CpuType = KeGetCurrentPrcb()->CpuType;
  if ( (unsigned __int8)CpuType < 0xFu )
    return 0LL;
  if ( (unsigned __int8)CpuType > 0x12u )
  {
    if ( CpuType == 20 )
    {
      v3 = Amd64F14Events;
      goto LABEL_11;
    }
    if ( CpuType == 21 )
    {
      v3 = Amd64F15Events;
      goto LABEL_11;
    }
    if ( CpuType != 22 )
    {
      if ( CpuType == 23 )
      {
        v3 = Amd64F17Events;
        goto LABEL_11;
      }
      return 0LL;
    }
  }
  v3 = (__int64 *)"\n";
LABEL_11:
  v4 = 0LL;
  for ( i = v3; *(_DWORD *)i != a1; i += 2 )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 2 )
      return 0LL;
  }
  return v3[2 * v4 + 1];
}
