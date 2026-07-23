/*
 * XREFs of _ApiSetpSearchForApiSetHost@16 @ 0x4B2CD9A9
 * Callers:
 *     _ApiSetResolveToHost@20 @ 0x4B2D012C (_ApiSetResolveToHost@20.c)
 * Callees:
 *     _RtlCompareUnicodeStrings@20 @ 0x4B2D04C0 (_RtlCompareUnicodeStrings@20.c)
 */

int __userpurge ApiSetpSearchForApiSetHost@<eax>(
        const WCHAR *a1@<edx>,
        int a2@<ecx>,
        int a3@<edi>,
        unsigned __int16 a4,
        int a5)
{
  int v5; // edx
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  int v9; // ecx
  int v10; // edi
  LONG v11; // eax
  SIZE_T v13; // [esp-14h] [ebp-2Ch]
  SIZE_T v14; // [esp-8h] [ebp-20h]
  BOOLEAN v15; // [esp+0h] [ebp-18h]
  int v17; // [esp+Ch] [ebp-Ch]
  int v18; // [esp+10h] [ebp-8h]
  int v19; // [esp+14h] [ebp-4h]

  v5 = a5;
  v17 = *(_DWORD *)(a2 + 16);
  v6 = v17 + a5;
  v7 = 1;
  v8 = *(_DWORD *)(a2 + 20) - 1;
  v18 = 1;
  if ( v8 >= 1 )
  {
    v9 = a4;
    HIDWORD(v14) = a3;
    do
    {
      v19 = (v8 + v7) >> 1;
      LODWORD(v14) = 1;
      v10 = v5 + v17 + 20 * v19;
      HIDWORD(v13) = v5 + *(_DWORD *)(v10 + 4);
      LODWORD(v13) = v9;
      v11 = RtlCompareUnicodeStrings(a1, v13, (PCWCH)(*(_DWORD *)(v10 + 8) >> 1), v14, v15);
      if ( v11 < 0 )
      {
        v7 = v18;
        v8 = v19 - 1;
      }
      else
      {
        if ( v11 <= 0 )
          return v10;
        v7 = v19 + 1;
        v18 = v19 + 1;
      }
      v5 = a5;
      v9 = a4;
    }
    while ( v7 <= v8 );
  }
  return v6;
}
