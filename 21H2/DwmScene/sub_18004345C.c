/*
 * XREFs of sub_18004345C @ 0x18004345C
 * Callers:
 *     sub_180043180 @ 0x180043180 (sub_180043180.c)
 * Callees:
 *     memset @ 0x18012396A (memset.c)
 */

_DWORD *__fastcall sub_18004345C(__int64 a1, _DWORD *a2)
{
  _DWORD *result; // rax
  _DWORD *v5; // rcx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx

  result = memset(a2 + 2, 0, 0x100uLL);
  *a2 = 0;
  a2[1] = 0;
  if ( a2 + 2 != a2 + 66 )
  {
    v5 = a2 + 3;
    do
    {
      v5[2] = 1;
      v5[5] = 1;
      *((_BYTE *)v5 + 24) = 15;
      v5[3] = 2;
      v5[4] = 1;
      v6 = *(_DWORD *)(a1 + 8);
      if ( v6 > 16 )
      {
        if ( v6 > 24 )
        {
          v25 = v6 - 25;
          if ( !v25 )
            goto LABEL_78;
          v26 = v25 - 1;
          if ( !v26 )
          {
            *v5 = 2;
            v5[1] = 6;
LABEL_19:
            v5[4] = 2;
            goto LABEL_81;
          }
          v27 = v26 - 1;
          if ( !v27 )
          {
LABEL_78:
            v5[4] = 2;
LABEL_79:
            v5[1] = 6;
            goto LABEL_80;
          }
          v28 = v27 - 1;
          if ( !v28 )
          {
            *v5 = 2;
LABEL_17:
            v5[3] = 1;
LABEL_18:
            v5[1] = 2;
            goto LABEL_19;
          }
          v29 = v28 - 1;
          if ( !v29 )
          {
            v5[3] = 1;
            goto LABEL_44;
          }
          v30 = v29 - 1;
          if ( !v30 )
          {
            *v5 = 1;
            v5[1] = 4;
            goto LABEL_19;
          }
          if ( v30 == 1 )
          {
            *v5 = 9;
            goto LABEL_62;
          }
        }
        else
        {
          if ( v6 == 24 )
          {
            *v5 = 2;
            v5[1] = 17;
            goto LABEL_81;
          }
          v19 = v6 - 17;
          if ( !v19 )
          {
            v5[1] = 1;
LABEL_46:
            *v5 = 2;
            v5[4] = 2;
            v5[5] = 5;
LABEL_81:
            *(v5 - 1) = 1;
            goto LABEL_82;
          }
          v20 = v19 - 1;
          if ( !v20 )
          {
            *v5 = 2;
LABEL_62:
            v5[1] = 1;
            goto LABEL_19;
          }
          v21 = v20 - 1;
          if ( !v21 )
          {
            *v5 = 1;
            v5[1] = 1;
            goto LABEL_81;
          }
          v22 = v21 - 1;
          if ( !v22 )
            goto LABEL_21;
          v23 = v22 - 1;
          if ( !v23 )
          {
            *v5 = 1;
LABEL_27:
            v5[3] = 8;
            goto LABEL_18;
          }
          v24 = v23 - 1;
          if ( !v24 )
          {
            *v5 = 1;
LABEL_25:
            v5[3] = 7;
LABEL_22:
            v5[1] = 6;
            goto LABEL_23;
          }
          if ( v24 == 1 )
          {
            *a2 = 1;
            v5[3] = 2;
LABEL_57:
            v5[4] = 6;
            goto LABEL_79;
          }
        }
      }
      else
      {
        if ( v6 == 16 )
        {
          v5[1] = 2;
          v5[2] = 5;
          goto LABEL_46;
        }
        if ( v6 > 8 )
        {
          v13 = v6 - 9;
          if ( !v13 )
          {
            v5[3] = 5;
LABEL_44:
            v5[1] = 2;
            v5[4] = 2;
            goto LABEL_80;
          }
          v14 = v13 - 1;
          if ( !v14 )
          {
            *v5 = 2;
            goto LABEL_18;
          }
          v15 = v14 - 1;
          if ( !v15 )
          {
            *v5 = 2;
            v5[1] = 4;
LABEL_23:
            v5[4] = 6;
            goto LABEL_81;
          }
          v16 = v15 - 1;
          if ( !v16 )
          {
            *v5 = 1;
            v5[3] = 1;
            goto LABEL_39;
          }
          v17 = v16 - 1;
          if ( !v17 )
          {
            *v5 = 9;
            v5[3] = 7;
LABEL_39:
            v5[1] = 3;
            v5[4] = 5;
            goto LABEL_81;
          }
          v18 = v17 - 1;
          if ( !v18 )
          {
            v5[1] = 15;
            *v5 = 14;
            v5[3] = 14;
            v5[4] = 15;
            goto LABEL_81;
          }
          if ( v18 == 1 )
          {
            *v5 = 2;
            v5[1] = 2;
            v5[2] = 4;
            v5[4] = 2;
            v5[5] = 4;
            goto LABEL_81;
          }
        }
        else
        {
          if ( v6 == 8 )
            goto LABEL_57;
          v7 = v6 - 1;
          if ( !v7 )
          {
            *v5 = 2;
            goto LABEL_22;
          }
          v8 = v7 - 1;
          if ( !v8 )
          {
            *v5 = 8;
            goto LABEL_27;
          }
          v9 = v8 - 1;
          if ( !v9 )
          {
            *v5 = 7;
            goto LABEL_25;
          }
          v10 = v9 - 1;
          if ( !v10 )
          {
            v5[3] = 1;
LABEL_21:
            *v5 = 1;
            goto LABEL_22;
          }
          v11 = v10 - 1;
          if ( !v11 )
          {
            *v5 = 1;
            goto LABEL_17;
          }
          v12 = v11 - 1;
          if ( !v12 )
          {
            *v5 = 1;
            v5[1] = 1;
            v5[3] = 1;
            goto LABEL_81;
          }
          if ( v12 == 1 )
          {
            v5[1] = 1;
LABEL_80:
            *v5 = 5;
            goto LABEL_81;
          }
        }
      }
      *(v5 - 1) = 0;
      *v5 = 2;
      v5[1] = 1;
LABEL_82:
      v5 += 8;
      result = v5 - 1;
    }
    while ( v5 - 1 != a2 + 66 );
  }
  return result;
}
