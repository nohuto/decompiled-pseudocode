/*
 * XREFs of ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C0037EF8
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00364FC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C0037EF8 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 * Callees:
 *     ?GetMenuDepth@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C0037EF8 (-GetMenuDepth@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall GetMenuDepth(__int64 a1, int a2)
{
  unsigned int v2; // esi
  int v4; // edi
  _QWORD *v5; // rbx
  unsigned int MenuDepth; // ebp
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( !a2 )
    return 25LL;
  v4 = *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 40LL) + 44LL);
  if ( v4 )
  {
    v5 = (_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 88LL) + 16LL);
    do
    {
      --v4;
      if ( *v5 )
      {
        SmartObjStackRefBase<tagMENU>::Init(v8, *v5);
        v9 = 0LL;
        MenuDepth = GetMenuDepth(v8, (unsigned int)(a2 - 1));
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v8);
        if ( MenuDepth > v2 )
        {
          if ( MenuDepth >= 0x19 )
            return 25LL;
          v2 = MenuDepth;
        }
      }
      v5 += 12;
    }
    while ( v4 );
  }
  return v2 + 1;
}
