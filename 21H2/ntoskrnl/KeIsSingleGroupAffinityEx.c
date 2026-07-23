/*
 * XREFs of KeIsSingleGroupAffinityEx @ 0x140274C00
 * Callers:
 *     NtQueryInformationJobObject @ 0x1406804E0 (NtQueryInformationJobObject.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeIsSingleGroupAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // r8
  unsigned __int16 v3; // dx
  __int16 v5; // [rsp+8h] [rbp+8h] BYREF

  v2 = (unsigned __int16 *)&v5;
  v5 = 0;
  if ( a2 )
    v2 = a2;
  v3 = 0;
  *v2 = 20;
  if ( !*a1 )
    return 0LL;
  do
  {
    if ( *(_QWORD *)&a1[4 * v3 + 4] )
    {
      if ( *v2 != 20 )
        return 0LL;
      *v2 = v3;
    }
    ++v3;
  }
  while ( v3 < *a1 );
  return *v2 != 20;
}
