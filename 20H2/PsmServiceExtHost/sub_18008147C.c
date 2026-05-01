/*
 * XREFs of sub_18008147C @ 0x18008147C
 * Callers:
 *     sub_180080E10 @ 0x180080E10 (sub_180080E10.c)
 * Callees:
 *     sub_180008938 @ 0x180008938 (sub_180008938.c)
 */

__int64 __fastcall sub_18008147C(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v2; // r8d
  __int64 v3; // rax
  unsigned int v4; // r11d
  __int64 v5; // rcx
  int v6; // r10d
  char v8; // dl
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8

  v1 = a1;
  v2 = 1;
  if ( ((*(_QWORD *)(a1 + 40) >> 57) & 7) != 5 )
    return v2;
  v3 = *(_QWORD *)(a1 + 88);
  LOBYTE(v4) = 2;
  if ( !v3
    || (v5 = *(_QWORD *)(v3 + 8), (*(_BYTE *)(v5 + 544) & 1) != 0)
    || (*(_QWORD *)(v3 + 16) != -1LL) == (unsigned __int8)(*(_BYTE *)(v5 + 548) - 2) <= 1u )
  {
    v6 = *(_DWORD *)(v1 + 544);
    if ( (v6 & 3) == 2 )
      return 8LL;
    v8 = *(_BYTE *)(v1 + 548);
    if ( v8 )
    {
      if ( *(_BYTE *)(v1 + 548) != 1 )
      {
        switch ( *(_BYTE *)(v1 + 548) )
        {
          case 2:
            if ( (v6 & 1) == 0 && !*(_QWORD *)(v1 + 520) )
              return 10;
            break;
          case 3:
            if ( (v6 & 4) == 0 )
              return 6;
            break;
          case 4:
            if ( (v6 & 1) == 0
              && (!(unsigned int)sub_180008938((_QWORD *)(v1 + 48)) || !(unsigned int)sub_180008938((_QWORD *)(v9 + 96))) )
            {
              return v4;
            }
            v8 = *(_BYTE *)(v1 + 548);
            break;
          default:
            return 5;
        }
      }
    }
    else
    {
      v2 = 4;
      if ( (v6 & 4) != 0 )
        return v2;
    }
    if ( (v8 == (char)v4) == (*(_BYTE *)(v1 + 549) != 6) )
    {
      if ( v8 == (_BYTE)v4 || !*(_QWORD *)(v1 + 520) )
      {
        v10 = *(_QWORD *)(v1 + 536);
        v11 = *(_QWORD *)(v1 + 528);
        if ( (v11 == 0) != (v10 == 0) || (*(_BYTE *)(v1 + 544) & 0x20) != 0 && (v11 || v10) )
          return 12;
        else
          return 0;
      }
      else
      {
        return 11;
      }
    }
    else
    {
      return 7;
    }
  }
  return 3;
}
