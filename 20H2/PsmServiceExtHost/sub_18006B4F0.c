/*
 * XREFs of sub_18006B4F0 @ 0x18006B4F0
 * Callers:
 *     sub_18006B240 @ 0x18006B240 (sub_18006B240.c)
 *     sub_18006B6B4 @ 0x18006B6B4 (sub_18006B6B4.c)
 * Callees:
 *     sub_180007DE4 @ 0x180007DE4 (sub_180007DE4.c)
 *     sub_180007E58 @ 0x180007E58 (sub_180007E58.c)
 *     sub_180063CBC @ 0x180063CBC (sub_180063CBC.c)
 */

__int64 __fastcall sub_18006B4F0(__int64 a1, unsigned __int64 a2, int *a3)
{
  int v5; // ebx
  unsigned int v6; // edi
  unsigned __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[1] = 2LL;
  v5 = 101;
  v6 = 0;
  v13[0] = sub_180007E58(a1, 2, 0);
  while ( 1 )
  {
    v10 = sub_180007DE4(v13);
    v11 = v10;
    if ( !v10 )
      break;
    v8 = *(_QWORD *)(*(_QWORD *)(v10 + 1320) + 1344LL);
    if ( a2 > v8 )
      v9 = *(_DWORD *)(v10 + 1292);
    else
      v9 = *(_DWORD *)(v10 + 1288);
    if ( v5 >= v9 )
    {
      if ( a2 > v8 )
        v5 = *(_DWORD *)(v11 + 1292);
      else
        v5 = *(_DWORD *)(v11 + 1288);
    }
  }
  if ( (*(_BYTE *)(a1 + 836) & 1) != 0 )
  {
    if ( v5 >= 80 )
      v5 = 80;
  }
  else if ( (int)sub_180063CBC(v5, 100) < 0 )
  {
    return (unsigned int)-1073740759;
  }
  *a3 = v5;
  return v6;
}
