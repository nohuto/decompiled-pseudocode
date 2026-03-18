/*
 * XREFs of InternalVkKeyScanEx @ 0x1C0089730
 * Callers:
 *     NtUserVkKeyScanEx @ 0x1C0089510 (NtUserVkKeyScanEx.c)
 *     xxxInternalToUnicode @ 0x1C0089BE0 (xxxInternalToUnicode.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall InternalVkKeyScanEx(unsigned __int16 a1, _QWORD *a2)
{
  unsigned __int16 v2; // r8
  __int16 v4; // si
  __int16 v5; // di
  __int64 v6; // r11
  unsigned __int16 v7; // ax
  __int16 v8; // bp
  __int16 v9; // r15
  __int64 v10; // rdx
  unsigned __int8 *v11; // r9
  unsigned __int8 v12; // r14
  unsigned __int8 v13; // bl
  unsigned __int8 *v14; // rcx
  unsigned __int8 v16; // al

  v2 = 0;
  v4 = 0;
  v5 = 0;
  if ( !a2 )
    a2 = *(_QWORD **)(*(_QWORD *)(gspklBaseLayout + 48) + 32LL);
  v6 = *a2;
  v7 = *(_WORD *)(*a2 + 8LL);
  v8 = 15;
  if ( v7 < 2u )
    v9 = 15;
  else
    v9 = *(unsigned __int8 *)(v6 + 12);
  if ( v7 >= 3u )
    v8 = *(unsigned __int8 *)(v6 + 13);
  v10 = a2[1];
  if ( !v10 || (v11 = *(unsigned __int8 **)v10) == 0LL )
  {
LABEL_18:
    if ( a1 < 0x20u )
      return (unsigned __int8)(a1 + 64) | 0x200;
    else
      return -1;
  }
  while ( !*v11 )
  {
LABEL_15:
    v10 += 16LL;
    v11 = *(unsigned __int8 **)v10;
    if ( !*(_QWORD *)v10 )
    {
      if ( v4 )
        return v4;
      if ( v5 )
        return v5;
      goto LABEL_18;
    }
  }
  v12 = *(_BYTE *)(v10 + 8);
  while ( 1 )
  {
    v13 = 0;
    if ( v12 )
      break;
LABEL_14:
    v11 += *(unsigned __int8 *)(v10 + 9);
    if ( !*v11 )
      goto LABEL_15;
  }
  while ( 1 )
  {
    v14 = v11;
    if ( *(_WORD *)&v11[2 * v13 + 2] == a1 )
      break;
LABEL_13:
    if ( ++v13 >= v12 )
      goto LABEL_14;
  }
  if ( *v11 == 0xFF )
    v14 = &v11[-*(unsigned __int8 *)(v10 + 9)];
  if ( v13 == v9 )
  {
    if ( !v4 )
      v4 = *v14 | 0x200;
    goto LABEL_13;
  }
  if ( v13 == v8 )
  {
    if ( !v5 )
      v5 = *v14 | 0x300;
    goto LABEL_13;
  }
  while ( *(_BYTE *)(v2 + v6 + 10) != v13 )
  {
    if ( ++v2 > *(_WORD *)(v6 + 8) )
      return -1;
  }
  v16 = *v14;
  if ( *v14 == 0xFF )
    v16 = v14[-*(unsigned __int8 *)(v10 + 9)];
  return ((unsigned __int8)v2 << 8) | v16;
}
