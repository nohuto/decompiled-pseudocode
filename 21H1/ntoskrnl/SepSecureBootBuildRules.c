/*
 * XREFs of SepSecureBootBuildRules @ 0x140A91548
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x140A6CD1C (SeSecureBootRegisterPolicy.c)
 * Callees:
 *     <none>
 */

__int64 SepSecureBootBuildRules()
{
  unsigned int v0; // edx
  char *v1; // r8
  __int64 v2; // r9
  char *v3; // r8
  int v4; // edx
  char v5; // al

  v0 = *((unsigned __int16 *)qword_140CF4CD8 + 18);
  if ( (_WORD)v0 )
  {
    v1 = (char *)qword_140CF4CD8 + *((unsigned int *)qword_140CF4CD8 + 10) + 60;
    qword_140CF9F90 = (__int64)v1;
    v2 = v0;
    v3 = v1 + 4;
    v4 = dword_140CF9F74;
    do
    {
      v5 = v3[3];
      v3 += 12;
      v4 |= 1 << (v5 & 0xF);
      --v2;
    }
    while ( v2 );
    dword_140CF9F74 = v4;
  }
  if ( *((_WORD *)qword_140CF4CD8 + 19) )
    qword_140CF9F88 = (__int64)qword_140CF4CD8 + *((unsigned int *)qword_140CF4CD8 + 11) + 60;
  return 0LL;
}
