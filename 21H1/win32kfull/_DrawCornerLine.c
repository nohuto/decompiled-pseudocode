/*
 * XREFs of _DrawCornerLine @ 0x1BBE84
 * Callers:
 *     _CreateStandardMonoPattern @ 0x1BBAAF (_CreateStandardMonoPattern.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

__int16 __fastcall DrawCornerLine(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        int a6)
{
  int v6; // eax
  char *v7; // edi
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // edx
  bool v13; // sf
  int v14; // ebx
  char *v15; // eax
  int v16; // edx
  char v17; // cl
  int v19; // [esp+8h] [ebp-30h]
  int v20; // [esp+Ch] [ebp-2Ch]
  int v21; // [esp+10h] [ebp-28h]
  int v22; // [esp+14h] [ebp-24h]
  int v23; // [esp+18h] [ebp-20h]
  int v24; // [esp+1Ch] [ebp-1Ch]
  int v25; // [esp+20h] [ebp-18h]
  int v26; // [esp+24h] [ebp-14h]
  int v27; // [esp+28h] [ebp-10h]
  int v28; // [esp+2Ch] [ebp-Ch]
  int v29; // [esp+30h] [ebp-8h]
  int v30; // [esp+34h] [ebp-4h]
  int v31; // [esp+48h] [ebp+10h]
  int v32; // [esp+48h] [ebp+10h]

  LOWORD(v6) = a5;
  v7 = a1;
  if ( a5 )
  {
    if ( a2 != 1 && a3 != 1 && a5 < a2 )
    {
      v30 = a4;
      if ( !a6 )
      {
        v7 = &a1[a4 * (a3 - 1)];
        LOWORD(v6) = a5;
        v30 = -a4;
      }
      v19 = a2;
      if ( a2 < a3 )
      {
        v26 = a3;
        v31 = a2;
      }
      else
      {
        v26 = a2;
        v31 = a3;
      }
      v25 = a2 < a3;
      v24 = a2 >= a3;
      v23 = 2 * v26;
      v8 = v31;
      v32 = v31 - 2 * v26;
      v9 = (unsigned __int16)v6 - 1;
      v27 = v9;
      v20 = 2 * v8;
      if ( a2 > a3 )
      {
        v27 = v9 - a2 / (unsigned int)a3;
        if ( v27 >= 0 )
        {
          v9 -= a2 / (unsigned int)a3;
        }
        else
        {
          v9 = 0;
          v27 = 0;
        }
      }
      v10 = 0;
      v11 = v9;
      v28 = 0;
      v21 = 0;
      v12 = 0;
LABEL_29:
      v6 = v26;
      v29 = v12;
      do
      {
        if ( !v6 )
          return v6;
        --v6;
        v28 += v24;
        ++v11;
        v10 += v25;
        v13 = v20 + v32 < 0;
        v32 += v20;
        v14 = v30;
        v26 = v6;
        v22 = v10;
        if ( !v13 )
        {
          v28 += v25;
          v10 += v24;
          v32 -= v23;
          v14 = v30;
          v22 = v10;
        }
      }
      while ( v10 == v21 );
      v15 = &v7[v12 >> 3];
      v16 = 128 >> (v12 & 7);
      v17 = 0;
      if ( !v11 )
        goto LABEL_26;
      while ( 1 )
      {
        --v11;
        v17 |= v16;
        if ( ++v29 >= v19 )
          break;
        LOBYTE(v16) = (unsigned __int8)v16 >> 1;
        if ( !(_BYTE)v16 )
        {
          *v15++ = v17;
          v17 = 0;
          goto LABEL_23;
        }
LABEL_24:
        if ( !v11 )
        {
          v14 = v30;
LABEL_26:
          if ( (_BYTE)v16 != 0x80 )
            *v15 = v17;
          v10 = v22;
          v7 += v14;
          v12 = v28;
          v11 = v27;
          v21 = v22;
          goto LABEL_29;
        }
      }
      v29 = 0;
      *v15 = v17;
      v15 = v7;
      v17 = *v7;
LABEL_23:
      LOBYTE(v16) = 0x80;
      goto LABEL_24;
    }
    LOWORD(v6) = (unsigned __int16)memset(a1, 255, a3 * a4);
  }
  return v6;
}
