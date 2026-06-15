/*
 * XREFs of sub_1801272EC @ 0x1801272EC
 * Callers:
 *     sub_180127960 @ 0x180127960 (sub_180127960.c)
 *     sub_1801287D0 @ 0x1801287D0 (sub_1801287D0.c)
 * Callees:
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_1801272EC(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v5 = *a1 - 0x4831B846B53D940CLL;
  if ( *a1 == 0x4831B846B53D940CLL )
    v5 = a1[1] + 0x5FDA4846FD2E8961LL;
  if ( v5 )
  {
    v6 = *a1 - 0x4E35FA3EA289735DLL;
    if ( *a1 == 0x4E35FA3EA289735DLL )
      v6 = a1[1] + 0x184D536907498263LL;
    if ( v6 )
    {
      v7 = *a1 - 0x49BF38751459AC38LL;
      if ( *a1 == 0x49BF38751459AC38LL )
        v7 = a1[1] - 0x5D394D0FE80F59BBLL;
      if ( v7 )
      {
        v8 = *a1 - 0x4AD9C8EF4C81E564LL;
        if ( *a1 == 0x4AD9C8EF4C81E564LL )
          v8 = a1[1] + 0x6FC8AC6A0661D361LL;
        if ( v8 )
        {
          v9 = *a1 - 0x4C2C8DC04444ACB0LL;
          if ( *a1 == 0x4C2C8DC04444ACB0LL )
            v9 = a1[1] + 0x79F0B82489D32760LL;
          if ( v9 )
          {
            v10 = *a1 - 0x404AAC4CADAFD3C6LL;
            if ( *a1 == 0x404AAC4CADAFD3C6LL )
              v10 = a1[1] - 0x640506E915966A83LL;
            if ( v10 )
            {
              v11 = *a1 - 0x4AD4CAFB1304D643LL;
              if ( *a1 == 0x4AD4CAFB1304D643LL )
                v11 = a1[1] + 0x1CA37F27E6527B41LL;
              if ( v11 )
              {
                v12 = *a1;
                if ( !*a1 )
                  v12 = a1[1];
                if ( v12 && (unsigned int)dword_18019C480 > 2 )
                {
                  LODWORD(v14) = -2147418113;
                  v16 = (__int64)"AudioEncoderIdToRenderingMode";
                  LODWORD(v15) = 453;
                  sub_180109778(
                    (__int64)&dword_18019C480,
                    byte_18016C166,
                    a3,
                    a4,
                    (const CHAR **)&v16,
                    (__int64)&v15,
                    (__int64)&v14);
                }
              }
            }
            else
            {
              return 6;
            }
          }
          else
          {
            return 5;
          }
        }
        else
        {
          return 4;
        }
      }
      else
      {
        return 3;
      }
    }
    else
    {
      return 2;
    }
  }
  else
  {
    return 1;
  }
  return v4;
}
