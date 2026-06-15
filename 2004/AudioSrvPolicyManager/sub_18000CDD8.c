/*
 * XREFs of sub_18000CDD8 @ 0x18000CDD8
 * Callers:
 *     sub_18000B0FC @ 0x18000B0FC (sub_18000B0FC.c)
 *     sub_180017BB0 @ 0x180017BB0 (sub_180017BB0.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18000CEEC @ 0x18000CEEC (sub_18000CEEC.c)
 *     sub_18000CF70 @ 0x18000CF70 (sub_18000CF70.c)
 *     sub_18000F0C0 @ 0x18000F0C0 (sub_18000F0C0.c)
 *     _o__invalid_parameter_noinfo @ 0x18003A752 (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18003AE1B (memmove.c)
 */

void **__fastcall sub_18000CDD8(void **a1, __int64 a2)
{
  __int64 v4; // rbx
  char *v5; // r10
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  char *v8; // rdx

  if ( !a2 )
    goto LABEL_17;
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(a2 + 2 * v4) );
  if ( (_DWORD)v4 )
  {
    v5 = (char *)*a1;
    v6 = (a2 - (__int64)*a1) >> 1;
    v7 = *((unsigned int *)*a1 - 4);
    if ( (int)((*((_DWORD *)*a1 - 3) - v4) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
    {
      sub_18000CF70(a1, (unsigned int)v4);
      v5 = (char *)*a1;
    }
    if ( v6 > v7 )
    {
      sub_18000F0C0(v5, (int)v4, a2, (unsigned int)v4);
    }
    else
    {
      v8 = &v5[2 * v6];
      if ( 2LL * (int)v4 )
      {
        if ( v5 && v8 )
        {
          memmove(v5, v8, 2LL * (int)v4);
        }
        else
        {
          *(_DWORD *)o__errno((int)v4, v8) = 22;
          o__invalid_parameter_noinfo();
        }
      }
    }
    if ( (int)v4 < 0 || (int)v4 > *((_DWORD *)*a1 - 3) )
      sub_18000A174(-2147024809);
    *((_DWORD *)*a1 - 4) = v4;
    *((_WORD *)*a1 + (int)v4) = 0;
  }
  else
  {
LABEL_17:
    sub_18000CEEC();
  }
  return a1;
}
