/*
 * XREFs of HalpStoreFreeCr3 @ 0x1403A2564
 * Callers:
 *     HalpMapCR3Ex @ 0x14099B2A0 (HalpMapCR3Ex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpStoreFreeCr3(unsigned int a1, __int64 a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  _QWORD *v4; // rax

  v2 = 0;
  v3 = 0;
  v4 = (_QWORD *)(HiberFreeCR3 + ((unsigned __int64)a1 << 7));
  while ( *v4 )
  {
    ++v3;
    ++v4;
    if ( v3 >= 0x10 )
      goto LABEL_6;
  }
  *(_QWORD *)(HiberFreeCR3 + 8 * (v3 + 16LL * a1)) = a2;
LABEL_6:
  if ( v3 == 16 )
    return (unsigned int)-1073741670;
  return v2;
}
