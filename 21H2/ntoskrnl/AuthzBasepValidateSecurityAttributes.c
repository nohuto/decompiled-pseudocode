/*
 * XREFs of AuthzBasepValidateSecurityAttributes @ 0x1402F51D4
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402F50F0 (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepValidateSecurityAttributes(__int64 a1, int *a2)
{
  int v3; // r8d
  int v4; // r14d
  unsigned int v5; // esi
  __int64 v6; // r9
  unsigned int v7; // ebp
  bool v8; // zf
  unsigned __int16 v9; // ax
  unsigned int v11; // r11d
  unsigned int v12; // r10d
  __int64 v13; // rdx
  unsigned __int16 v14; // di
  unsigned __int16 v15; // bx
  int v16; // eax
  unsigned int v17; // r11d
  unsigned int v18; // r10d
  unsigned int v19; // r10d
  unsigned int v20; // eax
  __int64 v21; // r11
  unsigned int v22; // r11d
  unsigned int v23; // r10d
  __int64 v24; // rbx
  unsigned __int16 v25; // di
  unsigned __int16 v26; // ax

  v3 = 0;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v4 = *a2;
  if ( *(_WORD *)(a1 + 2) )
    return (unsigned int)-1073741811;
  v5 = *(_DWORD *)(a1 + 4);
  if ( v4 != 1 )
  {
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      if ( v6 )
        goto LABEL_6;
    }
    return (unsigned int)-1073741811;
  }
  if ( !v5 && *(_QWORD *)(a1 + 8) )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 )
  {
    if ( v5 )
      return (unsigned int)-1073741811;
  }
LABEL_6:
  v7 = 0;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !*(_WORD *)(v6 + 40LL * v7)
        || !*(_WORD *)(v6 + 40LL * v7 + 2)
        || !*(_QWORD *)(v6 + 40LL * v7 + 8)
        || *(_WORD *)(v6 + 40LL * v7 + 18)
        || (*(_DWORD *)(v6 + 40LL * v7 + 20) & 0xFF00) != 0 )
      {
        return (unsigned int)-1073741811;
      }
      if ( v7 )
      {
        if ( v4 == 1 )
          goto LABEL_15;
        v16 = a2[v7];
        if ( v16 == 1 )
          return (unsigned int)-1073741811;
        v8 = v16 == 2;
      }
      else
      {
        v8 = v4 == 1;
      }
      if ( v8 && !*(_DWORD *)(v6 + 40LL * v7 + 24) )
        return (unsigned int)-1073741811;
LABEL_15:
      v9 = *(_WORD *)(v6 + 40LL * v7 + 16);
      if ( !v9 )
        goto LABEL_72;
      if ( v9 <= 2u )
      {
        if ( !*(_DWORD *)(v6 + 40LL * v7 + 24) || *(_QWORD *)(v6 + 40LL * v7 + 32) )
          goto LABEL_19;
LABEL_72:
        v3 = -1073741811;
        goto LABEL_19;
      }
      switch ( v9 )
      {
        case 3u:
          v11 = *(_DWORD *)(v6 + 40LL * v7 + 24);
          if ( v11 && !*(_QWORD *)(v6 + 40LL * v7 + 32) )
            return (unsigned int)-1073741811;
          v12 = 0;
          if ( v11 )
          {
            v13 = *(_QWORD *)(v6 + 40LL * v7 + 32);
            while ( 1 )
            {
              v14 = *(_WORD *)(v13 + 16LL * v12);
              if ( !v14 )
                break;
              v15 = *(_WORD *)(v13 + 16LL * v12 + 2);
              if ( !v15 || v14 > v15 || !*(_QWORD *)(v13 + 16LL * v12 + 8) )
                break;
              if ( ++v12 >= v11 )
                goto LABEL_19;
            }
LABEL_45:
            v3 = -1073741811;
          }
          break;
        case 6u:
          v17 = *(_DWORD *)(v6 + 40LL * v7 + 24);
          if ( v17 && !*(_QWORD *)(v6 + 40LL * v7 + 32) )
            return (unsigned int)-1073741811;
          v18 = 0;
          if ( v17 )
          {
            while ( *(_QWORD *)(*(_QWORD *)(v6 + 40LL * v7 + 32) + 8LL * v18) <= 1uLL )
            {
              if ( ++v18 >= v17 )
                goto LABEL_19;
            }
            goto LABEL_45;
          }
          break;
        case 4u:
          v22 = *(_DWORD *)(v6 + 40LL * v7 + 24);
          if ( v22 && !*(_QWORD *)(v6 + 40LL * v7 + 32) )
            return (unsigned int)-1073741811;
          v23 = 0;
          if ( v22 )
          {
            v24 = *(_QWORD *)(v6 + 40LL * v7 + 32);
            while ( 1 )
            {
              v25 = *(_WORD *)(v24 + 24LL * v23 + 8);
              if ( !v25 )
                goto LABEL_45;
              v26 = *(_WORD *)(v24 + 24LL * v23 + 10);
              if ( !v26 || v25 > v26 || !*(_QWORD *)(v24 + 24LL * v23 + 16) )
                goto LABEL_45;
              if ( ++v23 >= v22 )
                goto LABEL_19;
            }
          }
          break;
        case 5u:
        case 0x10u:
          v19 = *(_DWORD *)(v6 + 40LL * v7 + 24);
          if ( v19 && !*(_QWORD *)(v6 + 40LL * v7 + 32) )
            return (unsigned int)-1073741811;
          v20 = 0;
          if ( v19 )
          {
            v21 = *(_QWORD *)(v6 + 40LL * v7 + 32);
            while ( *(_DWORD *)(v21 + 16LL * v20 + 8) && *(_QWORD *)(v21 + 16LL * v20) )
            {
              if ( ++v20 >= v19 )
                goto LABEL_19;
            }
            goto LABEL_45;
          }
          break;
        default:
          goto LABEL_72;
      }
LABEL_19:
      if ( v3 >= 0 && ++v7 < v5 )
        continue;
      return (unsigned int)v3;
    }
  }
  return (unsigned int)v3;
}
