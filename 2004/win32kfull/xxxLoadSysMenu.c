/*
 * XREFs of xxxLoadSysMenu @ 0x1C005EC0C
 * Callers:
 *     xxxGetSystemMenu @ 0x1C005C324 (xxxGetSystemMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C011EF04 (xxxLoadSysDesktopMenu.c)
 * Callees:
 *     xxxClientLoadMenu @ 0x1C0030C0C (xxxClientLoadMenu.c)
 *     RtlInitUnicodeStringOrId @ 0x1C005CE2C (RtlInitUnicodeStringOrId.c)
 *     xxxSetMenuItemInfo @ 0x1C005F348 (xxxSetMenuItemInfo.c)
 *     xxxSetMenuInfo @ 0x1C0063014 (xxxSetMenuInfo.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

unsigned __int8 *__fastcall xxxLoadSysMenu(int a1)
{
  unsigned __int8 *Menu; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD v8[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v9; // [rsp+48h] [rbp-C0h] BYREF
  __m256i v10; // [rsp+4Ch] [rbp-BCh] BYREF
  int v11; // [rsp+6Ch] [rbp-9Ch]
  _QWORD v12[3]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v13[16]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v14; // [rsp+98h] [rbp-70h]
  _BYTE v15[16]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+B0h] [rbp-58h]
  _BYTE v17[16]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v18; // [rsp+C8h] [rbp-40h]
  _BYTE v19[16]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+E0h] [rbp-28h]
  _BYTE v21[16]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v22; // [rsp+F8h] [rbp-10h]
  _QWORD v23[10]; // [rsp+108h] [rbp+0h] BYREF

  v11 = 0;
  memset(&v10.m256i_u64[1], 0, 24);
  memset(v23, 0, sizeof(v23));
  v12[2] = 0LL;
  *(_OWORD *)&v8[1] = 0LL;
  RtlInitUnicodeStringOrId((struct _UNICODE_STRING *)&v8[1], (WCHAR *)(unsigned __int16)a1);
  Menu = xxxClientLoadMenu(0LL, (void **)&v8[1]);
  if ( !Menu )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v12[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v12;
  v12[1] = Menu;
  HMLockObject(Menu);
  v9 = 40;
  v10.m256i_i64[0] = 0x400000080000010LL;
  SmartObjStackRefBase<tagMENU>::Init(v13, Menu);
  v14 = 0LL;
  xxxSetMenuInfo(v13, &v9);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v13);
  v23[0] = 0x8000000050LL;
  v23[9] = 8LL;
  SmartObjStackRefBase<tagMENU>::Init(v15, Menu);
  v16 = 0LL;
  xxxSetMenuItemInfo((unsigned int)v15, 61536, 0, (unsigned int)v23, 0LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v15);
  if ( a1 != 48 )
  {
    v23[9] = 11LL;
    SmartObjStackRefBase<tagMENU>::Init(v17, Menu);
    v18 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v17, 61472, 0, (unsigned int)v23, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v17);
    v23[9] = 10LL;
    SmartObjStackRefBase<tagMENU>::Init(v19, Menu);
    v20 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v19, 61488, 0, (unsigned int)v23, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v19);
    v23[9] = 9LL;
    SmartObjStackRefBase<tagMENU>::Init(v21, Menu);
    v22 = 0LL;
    xxxSetMenuItemInfo((unsigned int)v21, 61728, 0, (unsigned int)v23, 0LL);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v21);
  }
  if ( ThreadUnlock1(v5, v4, v6) && (*(_BYTE *)(_HMPheFromObject(Menu) + 25) & 1) == 0 )
    return Menu;
  else
    return 0LL;
}
