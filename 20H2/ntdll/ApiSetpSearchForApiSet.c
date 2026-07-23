/*
 * XREFs of ApiSetpSearchForApiSet @ 0x18001D6F0
 * Callers:
 *     ApiSetResolveToHost @ 0x18001A728 (ApiSetResolveToHost.c)
 *     ApiSetQuerySchemaInfo @ 0x1800691D4 (ApiSetQuerySchemaInfo.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180015FF0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall ApiSetpSearchForApiSet(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  SIZE_T v4; // rsi
  unsigned int v7; // r10d
  const WCHAR *v8; // rax
  __int64 v9; // r9
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // dx
  int v12; // r9d
  int v13; // r8d
  int v14; // ecx
  __int64 v15; // rdx

  v3 = 0LL;
  v4 = a3;
  v7 = 0;
  v8 = a2;
  if ( a3 )
  {
    v9 = a3;
    do
    {
      v10 = *v8++;
      v11 = v10 + 32;
      if ( (unsigned __int16)(v10 - 65) > 0x19u )
        v11 = v10;
      v7 = v11 + a1[6] * v7;
      --v9;
    }
    while ( v9 );
  }
  v12 = 0;
  v13 = a1[3] - 1;
  if ( v13 < 0 )
    return v3;
  while ( 1 )
  {
    v14 = (v13 + v12) >> 1;
    v15 = (unsigned int)a1[5] + 8LL * v14;
    if ( v7 < *(_DWORD *)((char *)a1 + v15) )
    {
      v13 = v14 - 1;
      goto LABEL_10;
    }
    if ( v7 <= *(_DWORD *)((char *)a1 + v15) )
      break;
    v12 = v14 + 1;
LABEL_10:
    if ( v12 > v13 )
      return v3;
  }
  v3 = (__int64)&a1[6 * *(_DWORD *)((char *)a1 + v15 + 4)] + (unsigned int)a1[4];
  if ( !v3
    || !RtlCompareUnicodeStrings(
          a2,
          v4,
          (PCWCH)((char *)a1 + *(unsigned int *)(v3 + 4)),
          (unsigned __int64)*(unsigned int *)(v3 + 12) >> 1,
          1u) )
  {
    return v3;
  }
  return 0LL;
}
