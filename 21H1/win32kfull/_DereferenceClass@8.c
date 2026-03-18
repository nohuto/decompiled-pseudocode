/*
 * XREFs of _DereferenceClass@8 @ 0x48042
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _lambda_b4f389971314f5ad328fcfc46dc01f2a_::operator() @ 0xF42B8 (_lambda_b4f389971314f5ad328fcfc46dc01f2a_--operator().c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z.c)
 */

_DWORD *__stdcall DereferenceClass(int a1, int a2)
{
  int v2; // eax
  _DWORD **v4; // edx
  _DWORD *i; // esi
  int v6; // [esp+8h] [ebp-8h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(*(_DWORD *)(a2 + 76));
  *(_DWORD *)(*(_DWORD *)(a2 + 20) + 88) = 0;
  v2 = v6;
  *(_DWORD *)(a2 + 76) = 0;
  --*(_DWORD *)(*(_DWORD *)v2 + 40);
  if ( *(_DWORD *)v6 != *(_DWORD *)(*(_DWORD *)v6 + 32) )
  {
    --*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v6 + 32) + 40);
    if ( !*(_DWORD *)(*(_DWORD *)v6 + 40) )
    {
      v4 = (_DWORD **)(*(_DWORD *)(*(_DWORD *)v6 + 32) + 36);
      for ( i = *v4; i != *(_DWORD **)v6; i = (_DWORD *)*i )
        v4 = (_DWORD **)i;
      DestroyClass(a1, v4);
    }
  }
  return SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v6);
}
