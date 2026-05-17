/*
 * XREFs of _RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId@20 @ 0x4B36B1EE
 * Callers:
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpMuiRegGetFallbackInstalledLanguageInfoByLangId(
        int a1,
        int a2,
        unsigned __int16 a3,
        void *a4,
        _WORD *a5)
{
  void *v6; // edi
  __int16 i; // dx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  _WORD v12[14]; // [esp+Ch] [ebp-28h] BYREF
  int v13; // [esp+28h] [ebp-Ch]
  int v14; // [esp+2Ch] [ebp-8h]
  int v15; // [esp+30h] [ebp-4h]

  v14 = a1;
  memset(v12, 0, sizeof(v12));
  if ( !a1 )
    return -1073741811;
  v6 = a4;
  if ( !a4 )
    return -1073741811;
  for ( i = 0; i < 4; ++i )
  {
    v8 = (*(unsigned __int16 *)(a2 + 8) >> (2 * i)) & 3;
    if ( v8 )
    {
      if ( v8 == 2 )
      {
        v13 = i;
        v9 = *(__int16 *)(a2 + 2 * i + 12);
        v15 = *(_DWORD *)(*(_DWORD *)(v14 + 20) + 12);
        v6 = a4;
        if ( *(_WORD *)(28 * v9 + v15 + 4) == a3 )
        {
          v10 = v13;
          qmemcpy(a4, (const void *)(v15 + 28 * v9), 0x1Cu);
          *a5 = *(_WORD *)(a2 + 2 * v10 + 12);
          return 0;
        }
      }
      else if ( v8 == 1 && *(__int16 *)(a2 + 2 * i + 12) == a3 )
      {
        v12[2] = a3;
        v12[0] |= 1u;
        *a5 = -1;
        qmemcpy(v6, v12, 0x1Cu);
        return 0;
      }
    }
  }
  return -1073741772;
}
