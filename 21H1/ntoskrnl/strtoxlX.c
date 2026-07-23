/*
 * XREFs of strtoxlX @ 0x1403CCE30
 * Callers:
 *     strtol @ 0x1403CD060 (strtol.c)
 *     strtolX @ 0x1403CD090 (strtolX.c)
 *     strtoul @ 0x1403CD0C0 (strtoul.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403974F0 (xHalTimerWatchdogStop.c)
 *     __pctype_func @ 0x1403D18F8 (__pctype_func.c)
 */

__int64 __fastcall strtoxlX(__int64 a1, unsigned __int8 *a2, unsigned __int8 **a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // r14d
  __int64 v9; // rbp
  unsigned __int8 *v10; // rbx
  unsigned int i; // edi
  int v12; // esi
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  int v15; // ecx
  unsigned __int8 *v16; // rbx
  __int64 result; // rax

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && a4 - 2 > 0x22 )
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
  v9 = *a2;
  v10 = a2 + 1;
  for ( i = 0; (_pctype_func()[v9] & 8) != 0; ++v10 )
    v9 = *v10;
  v12 = a5;
  if ( (_BYTE)v9 == 45 )
  {
    v12 = a5 | 2;
  }
  else if ( (_BYTE)v9 != 43 )
  {
    goto LABEL_12;
  }
  LOBYTE(v9) = *v10++;
LABEL_12:
  if ( v6 )
  {
    if ( v6 - 2 > 0x22 )
    {
      if ( a3 )
        *a3 = a2;
      return 0LL;
    }
    if ( v6 == 16 && (_BYTE)v9 == 48 )
      goto LABEL_24;
  }
  else if ( (_BYTE)v9 == 48 )
  {
    if ( ((*v10 - 88) & 0xDF) == 0 )
    {
      v6 = 16;
LABEL_24:
      if ( ((*v10 - 88) & 0xDF) == 0 )
      {
        LOBYTE(v9) = v10[1];
        v10 += 2;
      }
      goto LABEL_26;
    }
    v6 = 8;
  }
  else
  {
    v6 = 10;
  }
LABEL_26:
  v13 = 0xFFFFFFFF / v6;
  while ( 1 )
  {
    if ( (_pctype_func()[(unsigned __int8)v9] & 4) != 0 )
    {
      v14 = (char)v9 - 48;
    }
    else
    {
      if ( (_pctype_func()[(unsigned __int8)v9] & 0x103) == 0 )
        break;
      v15 = (char)v9 - 32;
      if ( (unsigned __int8)(v9 - 97) > 0x19u )
        v15 = (char)v9;
      v14 = v15 - 55;
    }
    if ( v14 >= v6 )
      break;
    v12 |= 8u;
    if ( a6 || i < v13 || i == v13 && v14 <= 0xFFFFFFFF % v6 )
    {
      i = v14 + v6 * i;
    }
    else
    {
      v12 |= 4u;
      if ( !a3 )
        break;
    }
    LOBYTE(v9) = *v10++;
  }
  v16 = v10 - 1;
  if ( (v12 & 8) == 0 )
  {
    if ( a3 )
      v16 = a2;
    i = 0;
    goto LABEL_55;
  }
  if ( (v12 & 4) != 0 )
    goto LABEL_51;
  if ( (v12 & 1) == 0 )
  {
    if ( (v12 & 2) != 0 )
    {
      if ( i <= 0x80000000 )
        goto LABEL_55;
LABEL_51:
      if ( !a6 )
      {
        gbl_errno = 34;
        if ( (v12 & 1) != 0 )
          i = -1;
        else
          i = ((v12 & 2) != 0) + 0x7FFFFFFF;
      }
      goto LABEL_55;
    }
    if ( i > 0x7FFFFFFF )
      goto LABEL_51;
  }
LABEL_55:
  if ( a3 )
    *a3 = v16;
  result = -i;
  if ( (v12 & 2) == 0 )
    return i;
  return result;
}
