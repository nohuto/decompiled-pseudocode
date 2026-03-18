/*
 * XREFs of UnlockPopupMenu @ 0x1C0236B20
 * Callers:
 *     MNFreePopup @ 0x1C02218F8 (MNFreePopup.c)
 *     xxxMNKeyDown @ 0x1C02385D8 (xxxMNKeyDown.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00B2D8C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F3CF0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?UnlockPopupMenuWindow@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z @ 0x1C023565C (-UnlockPopupMenuWindow@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall UnlockPopupMenu(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *a2;
  if ( !v3 )
    return 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v5, v3);
  v5[2] = 0LL;
  UnlockPopupMenuWindow((__int64)v5);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v5);
  return HMAssignmentUnlock(a2);
}
