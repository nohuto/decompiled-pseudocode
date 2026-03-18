/*
 * XREFs of ?SidebandMessageParser@@YAJPEAEIT_SB_MSG_PARSER_CONFIG@@PEAW4_SBMT_REQUEST_ID@@P6AJPEAX0I@Z3@Z @ 0x1C006D548
 * Callers:
 *     NtDxgkDisplayPortOperation @ 0x1C004E010 (NtDxgkDisplayPortOperation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SidebandMessageParser(unsigned __int8 *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // r10d
  char v7; // r8
  unsigned __int8 *v8; // r11
  unsigned __int8 *v9; // r9
  int v10; // ecx
  unsigned int v11; // r10d
  unsigned int v12; // eax
  unsigned int v13; // r10d
  unsigned __int8 *v14; // r11
  __int16 v15; // cx
  __int16 *v16; // rdi
  unsigned __int8 *v17; // r11
  unsigned int v18; // r10d
  int v19; // eax

  v5 = a2;
  v7 = 0;
  v8 = a1;
  while ( v5 )
  {
    v9 = v8;
    if ( (*v8 & 0xF0u) < 0x10 )
      break;
    v10 = *v8 >> 4;
    if ( v8 == a1 )
    {
      v7 = v10 | v7 & 0xF0;
    }
    else if ( v10 != (v7 & 0xF) )
    {
      return 3221225485LL;
    }
    v11 = v5 - 1;
    v12 = 4 * v10 / 8;
    if ( v12 > v11 )
      break;
    v13 = v11 - v12;
    v14 = &v8[v12];
    if ( v13 < 2 )
      break;
    v15 = *(_WORD *)(v14 + 1);
    v16 = (__int16 *)(v14 + 1);
    v17 = v14 + 3;
    v18 = v13 - 2;
    if ( (v15 & 0x3Fu) > v18 )
      break;
    if ( v15 < 0 )
    {
      if ( v9 != a1 )
        return 3221225485LL;
      v19 = *v17;
      if ( (v19 & 0x80u) != 0 )
        return 3221225485LL;
      if ( *a4 == 127 )
      {
        *a4 = v19;
        v15 = *v16;
      }
      else if ( v19 != *a4 )
      {
        return 3221225485LL;
      }
    }
    v8 = &v17[v15 & 0x3F];
    v5 = v18 - (v15 & 0x3F);
    if ( (v15 & 0x4000) != 0 )
    {
      if ( v5 )
        return 3221225485LL;
      return 0LL;
    }
  }
  return 3221225485LL;
}
