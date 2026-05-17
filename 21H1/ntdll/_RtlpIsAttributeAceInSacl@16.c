/*
 * XREFs of _RtlpIsAttributeAceInSacl@16 @ 0x4B34C479
 * Callers:
 *     _RtlpMergeSecurityAttributeInformation@16 @ 0x4B34C610 (_RtlpMergeSecurityAttributeInformation@16.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _RtlStringCbLengthW@12 @ 0x4B3475AA (_RtlStringCbLengthW@12.c)
 */

char __fastcall RtlpIsAttributeAceInSacl(int a1, int a2, char a3, _BYTE *a4)
{
  int v7; // edx
  int v8; // ecx
  size_t v9; // ecx
  size_t *v10; // edi
  size_t v11; // eax
  unsigned int v12; // eax
  int v13; // esi
  unsigned int v14; // ebx
  int v15; // edx
  int v16; // ecx
  unsigned int *v17; // ebx
  unsigned int v18; // eax
  unsigned int v19; // ecx
  char v20; // al
  unsigned int v21; // ecx
  size_t v22; // esi
  unsigned int v23; // [esp+8h] [ebp-24h]
  unsigned int v24; // [esp+8h] [ebp-24h]
  size_t v25; // [esp+Ch] [ebp-20h]
  unsigned int v26; // [esp+10h] [ebp-1Ch]
  char *Buf1; // [esp+14h] [ebp-18h]
  char *Buf2; // [esp+18h] [ebp-14h]
  size_t Size; // [esp+1Ch] [ebp-10h]
  size_t v30; // [esp+20h] [ebp-Ch] BYREF
  unsigned int v31; // [esp+24h] [ebp-8h]
  char v32; // [esp+2Bh] [ebp-1h]

  v32 = 0;
  v30 = 0;
  *a4 = 0;
  if ( !a2 )
    return 0;
  v7 = 4 * *(unsigned __int8 *)(a1 + 9) + 8;
  v8 = *(unsigned __int16 *)(a1 + 2) - v7;
  if ( v8 - 8 <= 20 )
    return 1;
  v9 = v8 - 8;
  v10 = (size_t *)(v7 + a1 + 8);
  v25 = v9;
  v11 = *v10;
  if ( v9 < *v10 )
    return 1;
  if ( v9 - v11 < 4 )
    return 1;
  Buf2 = (char *)v10 + v11;
  if ( RtlStringCbLengthW((char *)v10 + v11, &v30) < 0 )
    return 1;
  v12 = *(unsigned __int16 *)(a2 + 4);
  v13 = a2 + 8;
  v31 = 0;
  Size = v30;
  v26 = v12;
  if ( !v12 )
    return v32;
  v14 = v31;
  while ( 1 )
  {
    if ( *(_BYTE *)v13 != 18 || a3 && (*(_BYTE *)(v13 + 1) & 0x10) == 0 )
      goto LABEL_22;
    v15 = 4 * *(unsigned __int8 *)(v13 + 9) + 8;
    v16 = *(unsigned __int16 *)(v13 + 2) - v15;
    if ( v16 - 8 <= 20 )
      goto LABEL_22;
    v17 = (unsigned int *)(v15 + v13 + 8);
    v18 = v16 - 8;
    v23 = v18;
    v19 = *v17;
    if ( v18 >= *v17 && v18 - v19 >= 4 )
    {
      Buf1 = (char *)v17 + v19;
      if ( RtlStringCbLengthW((char *)v17 + v19, &v30) >= 0 )
      {
        if ( v30 == Size && !memcmp(Buf1, Buf2, Size) )
        {
          v20 = 1;
          v32 = 1;
        }
        else
        {
          v20 = v32;
        }
        if ( v20 )
          break;
      }
    }
    v14 = v31;
LABEL_22:
    ++v14;
    v13 += *(unsigned __int16 *)(v13 + 2);
    v31 = v14;
    if ( v14 >= v26 )
      return v32;
  }
  if ( a3 && v23 == v25 )
  {
    v21 = v17[2];
    v22 = v10[2];
    *((_BYTE *)v10 + 10) = 0;
    v24 = v21;
    *((_BYTE *)v17 + 10) = 0;
    if ( !memcmp(v17, v10, v25) )
      *a4 = 1;
    v10[2] = v22;
    v17[2] = v24;
  }
  return v32;
}
