/*
 * XREFs of __handle_exc @ 0x4B2FD8A9
 * Callers:
 *     __except1 @ 0x4B2FD7DF (__except1.c)
 *     __87except @ 0x4B2FEB82 (__87except.c)
 * Callees:
 *     __decomp @ 0x4B2FDE5E (__decomp.c)
 *     __set_statfp @ 0x4B2FDFF6 (__set_statfp.c)
 */

BOOL __cdecl _handle_exc(unsigned int a1, double *a2, __int16 a3)
{
  int v3; // esi
  int v4; // eax
  double *v5; // ecx
  double v6; // st7
  double v7; // st7
  int v8; // edi
  int v9; // edx
  double v10; // st7
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // edx
  double v15; // [esp+18h] [ebp-10h]
  int v16; // [esp+24h] [ebp-4h] BYREF

  v3 = a1 & 0x1F;
  if ( (a1 & 8) != 0 && (a3 & 1) != 0 )
  {
    _set_statfp(1);
    v3 = a1 & 0x17;
    goto LABEL_44;
  }
  if ( ((unsigned __int8)a3 & (unsigned __int8)a1 & 4) != 0 )
  {
    _set_statfp(4);
    v3 = a1 & 0x1B;
    goto LABEL_44;
  }
  if ( (a1 & 1) != 0 && (a3 & 8) != 0 )
  {
    _set_statfp(8);
    v4 = a3 & 0xC00;
    if ( (a3 & 0xC00) != 0 )
    {
      if ( v4 != 1024 )
      {
        if ( v4 != 2048 )
        {
          if ( v4 != 3072 )
          {
LABEL_23:
            v3 = a1 & 0x1E;
            goto LABEL_44;
          }
          v5 = a2;
          v6 = 1.797693134862316e308;
          if ( *a2 <= 0.0 )
            goto LABEL_21;
LABEL_22:
          *v5 = v6;
          goto LABEL_23;
        }
        v5 = a2;
        if ( *a2 <= 0.0 )
        {
          v6 = 1.797693134862316e308;
LABEL_21:
          v6 = -v6;
          goto LABEL_22;
        }
LABEL_19:
        v6 = INFINITY;
        goto LABEL_22;
      }
      v5 = a2;
      if ( *a2 > 0.0 )
      {
        v6 = 1.797693134862316e308;
        goto LABEL_22;
      }
    }
    else
    {
      v5 = a2;
      if ( *a2 > 0.0 )
        goto LABEL_19;
    }
    v6 = INFINITY;
    goto LABEL_21;
  }
  if ( (a1 & 2) != 0 && (a3 & 0x10) != 0 )
  {
    v7 = *a2;
    v8 = (a1 >> 4) & 1;
    if ( 0.0 == v7 )
    {
      v8 = 1;
    }
    else
    {
      _decomp(v7, (int)&v16);
      v9 = v16 - 1536;
      v15 = v7;
      if ( v16 - 1536 >= -1074 )
      {
        v16 = v7 < 0.0;
        HIWORD(v15) = BYTE6(v15) & 0xF | 0x10;
        if ( v9 < -1021 )
        {
          v11 = LODWORD(v15);
          v12 = -1021 - v9;
          v13 = HIDWORD(v15);
          do
          {
            if ( (LOBYTE(v15) & 1) != 0 && !v8 )
              v8 = 1;
            v11 >>= 1;
            LODWORD(v15) = v11;
            if ( (BYTE4(v15) & 1) != 0 )
            {
              v11 |= 0x80000000;
              LODWORD(v15) = v11;
            }
            v13 >>= 1;
            HIDWORD(v15) = v13;
            --v12;
          }
          while ( v12 );
        }
        v10 = v15;
        if ( v16 )
          v10 = -v15;
      }
      else
      {
        v10 = v7 * 0.0;
        v8 = 1;
      }
      *a2 = v10;
    }
    if ( v8 )
      _set_statfp(16);
    v3 = a1 & 0x1D;
  }
LABEL_44:
  if ( (a1 & 0x10) != 0 && (a3 & 0x20) != 0 )
  {
    _set_statfp(32);
    v3 &= ~0x10u;
  }
  return v3 == 0;
}
