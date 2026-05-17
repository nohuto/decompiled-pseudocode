/*
 * XREFs of sub_4B2FD1F5 @ 0x4B2FD1F5
 * Callers:
 *     __cintrindisp2 @ 0x4B2FD140 (__cintrindisp2.c)
 *     __cintrindisp1 @ 0x4B2FD17E (__cintrindisp1.c)
 * Callees:
 *     __87except @ 0x4B2FEB82 (__87except.c)
 */

double __usercall sub_4B2FD1F5@<st0>(_DWORD *a1@<ebp>, double result@<st0>)
{
  char v2; // fps
  char v6; // al
  int v7; // ebx

  if ( __fastflag )
    return result;
  dbl_4B3A40F0 = result;
  v6 = *((_BYTE *)a1 - 144);
  switch ( v6 )
  {
    case 0:
      goto LABEL_6;
    case -1:
      if ( (HIWORD(dbl_4B3A40F0) & 0x7FF0) != 0x7FF0 )
        goto LABEL_6;
      goto LABEL_17;
    case -2:
      if ( (HIWORD(dbl_4B3A40F0) & 0x7FF0) == 0 )
      {
        *(_DWORD *)((char *)a1 - 142) = 4;
        result = __FSCALE__(result, 1536.0);
        if ( fabs(result) < 2.225073858507201e-308 )
          result = result * 0.0;
        goto LABEL_19;
      }
      if ( (HIWORD(dbl_4B3A40F0) & 0x7FF0) != 0x7FF0 )
      {
LABEL_6:
        if ( (*(_WORD *)(a1 - 41) & 0x20) != 0 || (v2 & 0x20) == 0 )
          return result;
        *(_DWORD *)((char *)a1 - 142) = 8;
        goto LABEL_19;
      }
LABEL_17:
      *(_DWORD *)((char *)a1 - 142) = 3;
      result = __FSCALE__(result, -1536.0);
      if ( fabs(result) > 1.797693134862316e308 )
        result = result * INFINITY;
      goto LABEL_19;
  }
  *(_DWORD *)((char *)a1 - 142) = v6;
LABEL_19:
  v7 = *(a1 - 37) + 1;
  *(_DWORD *)((char *)a1 - 138) = v7;
  if ( !byte_4B3A40F8 )
  {
    *(_DWORD *)((char *)a1 - 134) = a1[2];
    *(_DWORD *)((char *)a1 - 130) = a1[3];
    if ( *(_BYTE *)(v7 + 12) != 1 )
    {
      *(_DWORD *)((char *)a1 - 126) = a1[4];
      *(_DWORD *)((char *)a1 - 122) = a1[5];
    }
  }
  *(double *)((char *)a1 - 118) = result;
  _87except(*(char *)(*(a1 - 37) + 14), (char *)a1 - 142, a1 - 41);
  return *(double *)((char *)a1 - 118);
}
