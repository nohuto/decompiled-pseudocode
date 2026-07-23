/*
 * XREFs of _RtlFindAceBySid@12 @ 0x4B34B72A
 * Callers:
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 */

char *__fastcall RtlFindAceBySid(int a1, void *a2, unsigned int *a3)
{
  char *v3; // esi
  unsigned int v4; // edi
  unsigned __int8 v5; // al
  int v6; // ecx
  int v8; // [esp-4h] [ebp-18h]
  unsigned int v9; // [esp+Ch] [ebp-8h]
  void *v10; // [esp+10h] [ebp-4h]

  v10 = a2;
  if ( !a1 )
    return 0;
  v3 = (char *)(a1 + 8);
  v4 = 0;
  v9 = *(unsigned __int16 *)(a1 + 4);
  if ( !*(_WORD *)(a1 + 4) )
    return 0;
  while ( 1 )
  {
    if ( (v5 = *v3, (unsigned __int8)*v3 <= 3u)
      || v5 >= 9u && v5 <= 0xAu
      || v5 >= 0xDu && v5 <= 0xEu
      || v5 == 17
      || v5 == 20
      || v5 == 21
      || v5 == 18
      || v5 == 19 )
    {
      v8 = 8;
    }
    else
    {
      if ( v5 != 4 )
      {
        if ( (v5 < 5u || v5 > 8u) && (v5 < 0xBu || v5 > 0xCu) && (unsigned __int8)(v5 - 15) > 1u )
          goto LABEL_30;
        v6 = 16 * (*((_DWORD *)v3 + 2) & 1) + ((8 * (*((_DWORD *)v3 + 2) & 2)) | 0xC);
        goto LABEL_23;
      }
      v8 = 12;
    }
    v6 = v8;
LABEL_23:
    if ( &v3[v6] )
    {
      if ( !a3 )
      {
        if ( RtlEqualSid(&v3[v6], a2) )
          return v3;
        goto LABEL_29;
      }
      if ( v4 >= *a3 )
        break;
    }
LABEL_30:
    ++v4;
    v3 += *((unsigned __int16 *)v3 + 1);
    if ( v4 >= v9 )
      return 0;
  }
  if ( !RtlEqualSid(&v3[v6], a2) )
  {
LABEL_29:
    a2 = v10;
    goto LABEL_30;
  }
  *a3 = v4;
  return v3;
}
