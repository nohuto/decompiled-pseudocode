/*
 * XREFs of sub_180003F74 @ 0x180003F74
 * Callers:
 *     sub_1800039E0 @ 0x1800039E0 (sub_1800039E0.c)
 * Callees:
 *     sub_180035948 @ 0x180035948 (sub_180035948.c)
 *     sub_18007DC40 @ 0x18007DC40 (sub_18007DC40.c)
 */

__int64 __fastcall sub_180003F74(__int64 a1, int *a2)
{
  int v3; // esi
  __int64 v4; // rbp
  __int64 v7; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  v4 = *(_QWORD *)(a1 + 80);
  if ( (a2[1] & 0xC) != 0 )
  {
    return 7;
  }
  else if ( (a2[1] & 2) != 0 && (*(_BYTE *)(a1 + 116) & 4) != 0 )
  {
    return 1;
  }
  else if ( ((*(_BYTE *)(a1 + 116) & 8) != 0 || (*(_DWORD *)(a1 + 112) & 0x400) != 0)
         && (a2[1] & 1) != 0
         && (unsigned int)sub_18007DC40(*(_QWORD *)(a1 + 80)) )
  {
    return 2;
  }
  else if ( (v3 & 8) != 0 && (*(_BYTE *)(a1 + 116) & 2) != 0 )
  {
    return 3;
  }
  else if ( (v3 & 0x20) != 0 && (*(_BYTE *)(a1 + 116) & 1) != 0 )
  {
    return 4;
  }
  else if ( (v3 & 2) != 0 || (*(_BYTE *)(a1 + 116) & 0x10) == 0 )
  {
    if ( (v3 & 0x10) != 0 && (*(_BYTE *)(a1 + 116) & 0x20) != 0 )
    {
      return 6;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 112) & 0x8000) == 0 )
        return 0;
      v7 = *(_QWORD *)(v4 + 776);
      v8 = 1;
      sub_180035948(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 88) + 88LL) + 160LL), *(_QWORD *)(v7 + 88) + 96LL, &v8);
      if ( v8 )
        return 0;
      else
        return 11;
    }
  }
  else
  {
    return 5;
  }
}
