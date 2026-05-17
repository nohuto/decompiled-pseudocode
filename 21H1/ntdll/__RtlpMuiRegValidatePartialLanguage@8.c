/*
 * XREFs of __RtlpMuiRegValidatePartialLanguage@8 @ 0x4B36CFBA
 * Callers:
 *     __RtlpMuiRegValidateInstalled@4 @ 0x4B2AC387 (__RtlpMuiRegValidateInstalled@4.c)
 * Callees:
 *     _RtlpMuiRegGetInstalledLangInfoIndex@16 @ 0x4B2AB64D (_RtlpMuiRegGetInstalledLangInfoIndex@16.c)
 */

int __fastcall _RtlpMuiRegValidatePartialLanguage(int a1, int a2)
{
  int v2; // esi
  int v3; // ebx
  _WORD *v4; // edi
  char v5; // al
  unsigned __int8 v6; // al
  __int16 v7; // cx
  int v8; // edx
  __int16 v9; // ax
  int v11; // [esp+Ch] [ebp-10h]
  __int16 v14; // [esp+18h] [ebp-4h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = (_WORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 12) + 28 * a2);
  v5 = 0;
  v11 = 0;
  do
  {
    v6 = (v4[4] >> (2 * v5)) & 3;
    if ( !v6 )
      goto LABEL_13;
    v7 = v4[v3 + 6];
    if ( v6 == 2 )
    {
      if ( v7 == a2 )
      {
        v4[4] &= ~(3 << (v3 * 2));
        goto LABEL_13;
      }
LABEL_12:
      ++v2;
      goto LABEL_13;
    }
    v14 = -1;
    if ( RtlpMuiRegGetInstalledLangInfoIndex(*(_DWORD *)(a1 + 20), v6, v7, &v14) < 0 )
      goto LABEL_12;
    if ( v14 >= 0 )
    {
      v8 = *(_DWORD *)(a1 + 20);
      if ( v14 < (int)*(unsigned __int16 *)(v8 + 6) && v14 != a2 )
      {
        ++v2;
        if ( (*(_BYTE *)(28 * v14 + *(_DWORD *)(v8 + 12)) & 1) != 0 )
        {
          v9 = v14;
          v4[4] = (2 << (v3 * 2)) | v4[4] & ~(3 << (v3 * 2));
          v4[v3 + 6] = v9;
        }
      }
    }
LABEL_13:
    ++v3;
    v5 = ++v11;
  }
  while ( v3 < 4 );
  if ( v2 >= 1 )
    return 0;
  *v4 |= 0x1000u;
  return -1073741823;
}
