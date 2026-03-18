/*
 * XREFs of ?IsClassAtomRegistered@@YG_NPAUtagPROCESSINFO@@G@Z @ 0x47148
 * Callers:
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 *     ?ValidateClassAtomForRegisterClass@@YGGPAUtagPROCESSINFO@@G@Z @ 0xA6982 (-ValidateClassAtomForRegisterClass@@YGGPAUtagPROCESSINFO@@G@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z @ 0x983B8 (--4-$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z.c)
 */

char __fastcall IsClassAtomRegistered(int a1, __int16 a2)
{
  char v3; // bl
  int *v4; // esi
  int *v5; // esi
  int **v8; // [esp+10h] [ebp-8h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(*(_DWORD *)(a1 + 192));
  v3 = 0;
  while ( *v8 )
  {
    if ( *(_WORD *)(*v8)[1] == a2 || *(_WORD *)((*v8)[1] + 2) == a2 )
    {
LABEL_23:
      v3 = 1;
      goto LABEL_24;
    }
    v4 = (int *)**v8;
    if ( v4 != *v8 )
    {
      if ( v8 != (int **)gSmartObjNullRef )
      {
        v8[1] = (int *)((char *)v8[1] - 1);
        if ( !v8[1] )
        {
          if ( *((_BYTE *)v8 + 8) )
            Win32FreeToPagedLookasideList(gpStackRefLookAside, v8);
        }
      }
      if ( v4 )
      {
        v8 = (int **)v4[18];
        v8[1] = (int *)((char *)v8[1] + 1);
      }
      else
      {
        v8 = (int **)gSmartObjNullRef;
      }
    }
  }
  SmartObjStackRefBase<tagCLS>::operator=(*(_DWORD *)(a1 + 196));
  while ( *v8 )
  {
    if ( *(_WORD *)(*v8)[1] == a2 || *(_WORD *)((*v8)[1] + 2) == a2 )
      goto LABEL_23;
    v5 = (int *)**v8;
    if ( v5 != *v8 )
    {
      if ( v8 != (int **)gSmartObjNullRef )
      {
        v8[1] = (int *)((char *)v8[1] - 1);
        if ( !v8[1] )
        {
          if ( *((_BYTE *)v8 + 8) )
            Win32FreeToPagedLookasideList(gpStackRefLookAside, v8);
        }
      }
      if ( v5 )
      {
        v8 = (int **)v5[18];
        v8[1] = (int *)((char *)v8[1] + 1);
      }
      else
      {
        v8 = (int **)gSmartObjNullRef;
      }
    }
  }
LABEL_24:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v8);
  return v3;
}
