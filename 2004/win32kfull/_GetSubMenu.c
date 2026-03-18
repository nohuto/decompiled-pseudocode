/*
 * XREFs of _GetSubMenu @ 0x1C005CCA8
 * Callers:
 *     xxxGetSystemMenu @ 0x1C005C324 (xxxGetSystemMenu.c)
 *     xxxGetSysMenu @ 0x1C005C55C (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C005C610 (xxxSetSysMenu.c)
 *     xxxMNKeyDown @ 0x1C0239468 (xxxMNKeyDown.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0245AF8 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FC8C0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall GetSubMenu(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rbx
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v5, 0LL);
  v6 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v7, a1);
  v7[2] = 0LL;
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7[0] + 40LL) + 44LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v7);
  if ( v2 && *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL) )
    SmartObjStackRefBase<tagMENU>::operator=(v5);
  v3 = v6;
  if ( !v6 )
    v3 = *(_QWORD *)v5[0];
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v5);
  return v3;
}
