/*
 * XREFs of _lambda_9956bef0b3c0130b24ee88b606a5fd75_::operator() @ 0xE03BA
 * Callers:
 *     ?ValidateIFIMETRICS@@YG_NPAU_IFIMETRICS@@@Z @ 0xE01BE (-ValidateIFIMETRICS@@YG_NPAU_IFIMETRICS@@@Z.c)
 * Callees:
 *     <none>
 */

char __thiscall lambda_9956bef0b3c0130b24ee88b606a5fd75_::operator()(_DWORD **this, unsigned int a2)
{
  _DWORD *v2; // ecx
  _WORD *v3; // eax
  unsigned int v4; // ecx

  if ( a2 < 0xB8 )
    return 0;
  if ( (a2 & 1) != 0 )
    return 0;
  v2 = (_DWORD *)**this;
  if ( a2 > *v2 - 2 )
    return 0;
  v3 = (_WORD *)((char *)v2 + a2);
  v4 = (unsigned int)v2 + *v2 - 2;
  while ( *v3 )
  {
    if ( (unsigned int)++v3 > v4 )
      return 0;
  }
  return 1;
}
