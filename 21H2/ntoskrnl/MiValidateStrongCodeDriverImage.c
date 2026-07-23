/*
 * XREFs of MiValidateStrongCodeDriverImage @ 0x140535A64
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateStrongCodeDriverImage(__int64 a1, char a2)
{
  int v3; // r9d
  int *i; // r8
  int v5; // edx
  __int64 v6; // r10

  v3 = *(unsigned __int16 *)(a1 + 6);
  if ( !*(_WORD *)(a1 + 6) )
    return 0LL;
  for ( i = (int *)(a1 + *(unsigned __int16 *)(a1 + 20) + 60LL); ; i += 10 )
  {
    v5 = *i;
    if ( (*i & 0x20000000) == 0 )
      goto LABEL_9;
    if ( (v5 & 0x82000000) == 0x80000000 )
      break;
    v6 = (unsigned int)*(i - 5);
    if ( ((v6 + 4095) & 0xFFFFFFFFFFFFF000uLL) < (((unsigned int)*(i - 7) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
    {
      if ( (a2 & 1) != 0 )
      {
        dword_140C4CC58 = 195;
        return 3221225595LL;
      }
      if ( (_DWORD)v6 || (v5 & 0x2000000) == 0 )
      {
        dword_140C4CC58 = 196;
        return 3221225595LL;
      }
    }
LABEL_9:
    if ( !--v3 )
      return 0LL;
  }
  dword_140C4CC58 = 194;
  return 3221225595LL;
}
