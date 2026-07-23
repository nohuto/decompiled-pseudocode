/*
 * XREFs of _RtlpIsAttributeAceInSacl@16 @ 0x4B34C479
 * Callers:
 *     _RtlpMergeSecurityAttributeInformation@16 @ 0x4B34C610 (_RtlpMergeSecurityAttributeInformation@16.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _RtlStringCbLengthW@12 @ 0x4B3475AA (_RtlStringCbLengthW@12.c)
 */

char __userpurge RtlpIsAttributeAceInSacl@<al>(int a1@<edx>, int a2@<ecx>, int a3@<edi>, char a4, _BYTE *a5)
{
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // ecx
  unsigned int *v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // esi
  unsigned int v15; // ebx
  int v16; // edx
  int v17; // ecx
  unsigned int *v18; // ebx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  char v21; // al
  unsigned int v22; // ecx
  unsigned int v23; // esi
  size_t v24; // [esp-8h] [ebp-34h]
  unsigned int v25; // [esp+8h] [ebp-24h]
  unsigned int v26; // [esp+8h] [ebp-24h]
  unsigned int v27; // [esp+Ch] [ebp-20h]
  unsigned int v28; // [esp+10h] [ebp-1Ch]
  char *Buf1; // [esp+14h] [ebp-18h]
  char *Buf2; // [esp+18h] [ebp-14h]
  int Size; // [esp+1Ch] [ebp-10h]
  int Size_4; // [esp+20h] [ebp-Ch] BYREF
  unsigned int v33; // [esp+24h] [ebp-8h]
  char v34; // [esp+2Bh] [ebp-1h]

  v34 = 0;
  Size_4 = 0;
  *a5 = 0;
  if ( !a1 )
    return 0;
  HIDWORD(v24) = a3;
  v8 = 4 * *(unsigned __int8 *)(a2 + 9) + 8;
  v9 = *(unsigned __int16 *)(a2 + 2) - v8;
  if ( v9 - 8 <= 20 )
    return 1;
  v10 = v9 - 8;
  v11 = (unsigned int *)(v8 + a2 + 8);
  v27 = v10;
  v12 = *v11;
  if ( v10 < *v11 )
    return 1;
  if ( v10 - v12 < 4 )
    return 1;
  Buf2 = (char *)v11 + v12;
  if ( RtlStringCbLengthW((char *)v11 + v12, &Size_4) < 0 )
    return 1;
  v13 = *(unsigned __int16 *)(a1 + 4);
  v14 = a1 + 8;
  v33 = 0;
  Size = Size_4;
  v28 = v13;
  if ( !v13 )
    return v34;
  v15 = v33;
  while ( 1 )
  {
    if ( *(_BYTE *)v14 != 18 || a4 && (*(_BYTE *)(v14 + 1) & 0x10) == 0 )
      goto LABEL_22;
    v16 = 4 * *(unsigned __int8 *)(v14 + 9) + 8;
    v17 = *(unsigned __int16 *)(v14 + 2) - v16;
    if ( v17 - 8 <= 20 )
      goto LABEL_22;
    v18 = (unsigned int *)(v16 + v14 + 8);
    v19 = v17 - 8;
    v25 = v19;
    v20 = *v18;
    if ( v19 >= *v18 && v19 - v20 >= 4 )
    {
      Buf1 = (char *)v18 + v20;
      if ( RtlStringCbLengthW((char *)v18 + v20, &Size_4) >= 0 )
      {
        if ( Size_4 == Size && (LODWORD(v24) = Size, !memcmp(Buf1, Buf2, v24)) )
        {
          v21 = 1;
          v34 = 1;
        }
        else
        {
          v21 = v34;
        }
        if ( v21 )
          break;
      }
    }
    v15 = v33;
LABEL_22:
    ++v15;
    v14 += *(unsigned __int16 *)(v14 + 2);
    v33 = v15;
    if ( v15 >= v28 )
      return v34;
  }
  if ( a4 && v25 == v27 )
  {
    v22 = v18[2];
    v23 = v11[2];
    LODWORD(v24) = v27;
    *((_BYTE *)v11 + 10) = 0;
    v26 = v22;
    *((_BYTE *)v18 + 10) = 0;
    if ( !memcmp(v18, v11, v24) )
      *a5 = 1;
    v11[2] = v23;
    v18[2] = v26;
  }
  return v34;
}
