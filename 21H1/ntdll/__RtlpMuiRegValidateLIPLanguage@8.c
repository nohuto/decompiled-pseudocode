/*
 * XREFs of __RtlpMuiRegValidateLIPLanguage@8 @ 0x4B36CDB5
 * Callers:
 *     __RtlpMuiRegValidateInstalled@4 @ 0x4B2AC387 (__RtlpMuiRegValidateInstalled@4.c)
 * Callees:
 *     _RtlpMuiRegGetInstalledLangInfoIndex@16 @ 0x4B2AB64D (_RtlpMuiRegGetInstalledLangInfoIndex@16.c)
 */

int __fastcall _RtlpMuiRegValidateLIPLanguage(int a1, int a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax
  char v5; // cl
  int v6; // edi
  _WORD *v7; // esi
  unsigned __int16 v8; // bx
  unsigned __int8 v9; // al
  __int16 v10; // cx
  _WORD *v11; // ebx
  __int16 v12; // ax
  __int16 v13; // ax
  int v14; // edx
  __int16 v15; // ax
  __int16 v17; // [esp+Ch] [ebp-1Ch]
  int v18; // [esp+10h] [ebp-18h]
  int v21; // [esp+20h] [ebp-8h]
  __int16 v22; // [esp+24h] [ebp-4h] BYREF

  v2 = 28 * a2;
  v3 = 0;
  v4 = *(_DWORD *)(a1 + 20);
  v5 = 0;
  v21 = 0;
  v6 = 0;
  v18 = 0;
  v7 = (_WORD *)(*(_DWORD *)(v4 + 12) + v2);
  while ( 1 )
  {
    v8 = v7[4];
    v9 = (v8 >> (2 * v5)) & 3;
    if ( v9 )
      break;
LABEL_28:
    v6 += 2;
    v5 = ++v18;
    if ( v6 >= 8 )
      goto LABEL_29;
  }
  v10 = v7[v6 / 2u + 6];
  if ( v9 != 2 )
  {
    v22 = -1;
    if ( RtlpMuiRegGetInstalledLangInfoIndex(*(_DWORD *)(a1 + 20), v9, v10, &v22) < 0
      || v22 < 0
      || (v14 = *(_DWORD *)(a1 + 20), v22 >= (int)*(unsigned __int16 *)(v14 + 6))
      || v22 == a2 )
    {
      v15 = v8 & ~(3 << v6);
LABEL_26:
      v7[4] = v15;
LABEL_27:
      v3 = v21;
      goto LABEL_28;
    }
    v17 = *(_WORD *)(28 * v22 + *(_DWORD *)(v14 + 12));
    v15 = v8 & ~(3 << v6);
    if ( (v17 & 4) != 0 )
      goto LABEL_26;
    if ( (v17 & 0x1820) != 0x820 )
    {
      v7[4] = v15;
      goto LABEL_27;
    }
    v3 = v21;
    v7[4] = v15 | (2 << v6);
    v7[v6 / 2u + 6] = v22;
    goto LABEL_24;
  }
  if ( v10 < 0 || v10 >= (int)*(unsigned __int16 *)(*(_DWORD *)(a1 + 20) + 6) || v10 == a2 )
  {
    v7[4] = v8 & ~(3 << v6);
    v7[v6 / 2u + 6] = 0;
    goto LABEL_28;
  }
  v11 = (_WORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 12) + 28 * v10);
  if ( (*v11 & 4) == 0 )
  {
    if ( (*v11 & 0x1820) != 0x820 )
    {
      if ( v11[2] )
      {
        v7[4] = v7[4] & ~(3 << v6) | (1 << v6);
        v12 = v11[2];
        v3 = v21;
      }
      else
      {
        v3 = v21;
        v13 = v7[4] & ~(3 << v6);
        if ( (__int16)v11[3] <= 0 )
        {
          v7[4] = v13;
          v12 = 0;
        }
        else
        {
          v7[4] = v13 | (3 << v6);
          v12 = v11[3];
        }
      }
      v7[v6 / 2u + 6] = v12;
      goto LABEL_28;
    }
LABEL_24:
    v21 = ++v3;
    goto LABEL_28;
  }
  *v7 |= 0x1000u;
LABEL_29:
  if ( v3 >= 1 )
    return 0;
  *v7 |= 0x1000u;
  return -1073741823;
}
