/*
 * XREFs of ?ValidateParents@@YGHPAUtagWND@@H@Z @ 0x7D624
 * Callers:
 *     ?xxxUpdateWindow2@@YGXPAUtagWND@@K@Z @ 0x7D46A (-xxxUpdateWindow2@@YGXPAUtagWND@@K@Z.c)
 * Callees:
 *     _IntersectWithParents@8 @ 0x35AFC (_IntersectWithParents@8.c)
 *     ?InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z @ 0x36A50 (-InternalInvalidate2@@YGHPAUtagWND@@PAUHRGN__@@1PAUtagRECT@@K@Z.c)
 *     _LogicalToPhysicalInPlaceRgnWorker@12 @ 0xA1A12 (_LogicalToPhysicalInPlaceRgnWorker@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall ValidateParents(int a1, int a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  int *v9; // esi
  int v10; // ecx
  int *v11; // esi
  int v12; // esi
  struct tagRECT *v13; // [esp+0h] [ebp-40h]
  unsigned int v14; // [esp+4h] [ebp-3Ch]
  int v15; // [esp+Ch] [ebp-34h]
  int v16; // [esp+10h] [ebp-30h]
  int v17; // [esp+14h] [ebp-2Ch]
  struct tagWND *v18; // [esp+18h] [ebp-28h] BYREF
  struct HRGN__ v19; // [esp+1Ch] [ebp-24h] BYREF
  int v20; // [esp+20h] [ebp-20h]
  int v21; // [esp+24h] [ebp-1Ch]
  int v22; // [esp+28h] [ebp-18h]
  int v23; // [esp+2Ch] [ebp-14h] BYREF
  int v24; // [esp+30h] [ebp-10h]
  int v25; // [esp+34h] [ebp-Ch]
  int v26; // [esp+38h] [ebp-8h]

  v15 = a2;
  v2 = a2;
  v19.unused = 0;
  v3 = a1;
  v17 = a1;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v4 = *(_DWORD *)(a1 + 20);
  v5 = 0;
  v16 = 0;
  while ( (*(_BYTE *)(v4 + 23) & 0x40) != 0 )
  {
    a1 = *(_DWORD *)(a1 + 56);
    v4 = *(_DWORD *)(a1 + 20);
  }
  if ( *(char *)(*(_DWORD *)(a1 + 20) + 10) >= 0 )
  {
    v2 = 0;
    v15 = 0;
  }
  v6 = *(_DWORD *)(v3 + 56);
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = *(_DWORD *)(v6 + 20);
      if ( (*(_BYTE *)(v7 + 23) & 2) != 0 )
        break;
      if ( *(_DWORD *)(v7 + 92) )
      {
        if ( v2 )
          return 0;
        if ( !v5 )
        {
          v9 = (int *)(*(_DWORD *)(v3 + 20) + 52);
          v16 = 1;
          v23 = *v9++;
          v24 = *v9++;
          v25 = *v9;
          v26 = v9[1];
          if ( !IntersectWithParents(v17, (int)&v23) )
            return 1;
          SetRectRgnIndirect(_ghrgnInv1, &v23);
          v10 = *(_DWORD *)(*(_DWORD *)(v17 + 20) + 108);
          if ( v10 )
          {
            if ( !GreCombineRgn(_ghrgnInv1, _ghrgnInv1, v10, 1) )
              return 1;
          }
        }
        v11 = (int *)(*(_DWORD *)(v6 + 20) + 52);
        v19.unused = *v11++;
        v20 = *v11++;
        v21 = *v11;
        v22 = v11[1];
        if ( !IntersectWithParents(v6, (int)&v19) )
          return 1;
        v18 = (struct tagWND *)_ghrgnInv1;
        v12 = LogicalToPhysicalInPlaceRgnWorker(v17, &v18, 0);
        InternalInvalidate2((unsigned int)v18, v6, v18, &v19, 0x8048u, v13, v14);
        if ( v12 )
          GreDeleteObject(v18);
        v5 = v16;
        v3 = v17;
      }
      v6 = *(_DWORD *)(v6 + 56);
      if ( !v6 )
        return 1;
      v2 = v15;
    }
  }
  return 1;
}
