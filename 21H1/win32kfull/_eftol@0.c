/*
 * XREFs of _eftol@0 @ 0xEEEF0
 * Callers:
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _eftofx_c@8 @ 0xEEF3A (_eftofx_c@8.c)
 * Callees:
 *     <none>
 */

int __usercall eftol@<eax>(int result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // eax
  bool v4; // of
  int v5; // eax

  if ( a3 < 1 )
    return 0;
  if ( a3 < 32 )
  {
    v3 = result >> (a3 ^ 0x1F);
    v4 = __OFADD__(a2, v3);
    v5 = a2 + v3;
    if ( v4 )
      return (unsigned int)v5 >> 1;
    else
      return v5 >> 1;
  }
  return result;
}
