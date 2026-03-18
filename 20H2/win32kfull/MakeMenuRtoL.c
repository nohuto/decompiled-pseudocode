/*
 * XREFs of MakeMenuRtoL @ 0x1C024E59C
 * Callers:
 *     xxxSetMenuItemInfo @ 0x1C0033E40 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C0035B38 (xxxInsertMenuItem.c)
 *     MakeMenuRtoL @ 0x1C024E59C (MakeMenuRtoL.c)
 * Callees:
 *     MakeMenuRtoL @ 0x1C024E59C (MakeMenuRtoL.c)
 */

__int64 __fastcall MakeMenuRtoL(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  int v5; // eax
  unsigned int v6; // eax
  int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  int *v10; // rdx
  int v11; // eax
  __int64 v12; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  v5 = *(_DWORD *)(v2 + 40);
  if ( a2 )
    v6 = v5 | 0x20;
  else
    v6 = v5 & 0xFFFFFFDF;
  *(_DWORD *)(v2 + 40) = v6;
  v7 = 0;
  if ( *(int *)(*(_QWORD *)(a1 + 40) + 44LL) > 0 )
  {
    v8 = 0LL;
    do
    {
      v9 = *(_QWORD *)(a1 + 88);
      v10 = *(int **)(v8 + v9);
      v11 = *v10;
      if ( a2 )
      {
        *v10 = v11 | 0x4000;
        **(_DWORD **)(v8 + v9) |= 0x2000u;
      }
      else
      {
        *v10 = v11 & 0xFFFFBFFF;
        **(_DWORD **)(v8 + v9) &= ~0x2000u;
      }
      v12 = *(_QWORD *)(v8 + v9 + 16);
      if ( v12 )
        MakeMenuRtoL(v12, a2);
      ++v7;
      v8 += 96LL;
    }
    while ( v7 < *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) );
  }
  return a1;
}
