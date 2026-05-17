/*
 * XREFs of _RtlpNlsGetNameIndex@4 @ 0x4B2D5C90
 * Callers:
 *     _RtlGetParentLocaleName@16 @ 0x4B2D41A0 (_RtlGetParentLocaleName@16.c)
 *     _RtlpConsoleFallbackNameFromLocaleName@24 @ 0x4B2D61DE (_RtlpConsoleFallbackNameFromLocaleName@24.c)
 *     _RtlIsValidLocaleName@8 @ 0x4B3630F0 (_RtlIsValidLocaleName@8.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlpNlsGetNameIndex(unsigned __int16 *this)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // esi
  int v5; // ecx
  unsigned __int16 *v6; // esi
  unsigned __int16 i; // dx
  unsigned __int16 v8; // ax
  unsigned __int16 *v10; // [esp+10h] [ebp-14h]
  unsigned __int16 v11; // [esp+14h] [ebp-10h]
  int v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = 0;
  v10 = this;
  v3 = *(unsigned __int16 *)(pTblPtrs + 2) - 1;
  v12 = 0;
  if ( v3 >= 0 )
  {
    v4 = *(_DWORD *)(pTblPtrs + 16);
    v11 = *this;
    while ( 1 )
    {
      v5 = (v3 + v2) / 2;
      v13 = v5;
      v6 = (unsigned __int16 *)(*(_DWORD *)(pTblPtrs + 20) + 2 + 2 * *(unsigned __int16 *)(v4 + 8 * v5));
      for ( i = v11; i; ++v6 )
      {
        v8 = *v6;
        if ( !*v6 )
          break;
        if ( (unsigned __int16)(i - 65) <= 0x19u )
          i |= 0x20u;
        if ( (unsigned __int16)(v8 - 65) <= 0x19u )
          v8 |= 0x20u;
        if ( i == 95 )
          i = 45;
        if ( v8 == 95 )
          v8 = 45;
        if ( i != v8 )
        {
          if ( i - v8 >= 0 )
            goto LABEL_22;
          goto LABEL_19;
        }
        i = this[1];
        ++this;
      }
      if ( *this )
      {
LABEL_22:
        v2 = v5 + 1;
        v12 = v13 + 1;
      }
      else
      {
        if ( !*v6 )
          return v5;
LABEL_19:
        v3 = v5 - 1;
        v2 = v12;
      }
      if ( v2 > v3 )
        return -1;
      this = v10;
      v4 = *(_DWORD *)(pTblPtrs + 16);
    }
  }
  return -1;
}
