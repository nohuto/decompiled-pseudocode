/*
 * XREFs of _xxxGetWindowSmIcon@8 @ 0x1D0E0
 * Callers:
 *     _SendDwmIconChange@4 @ 0x1D802 (_SendDwmIconChange@4.c)
 *     _xxxDrawCaptionTemp@28 @ 0xBC4CE (_xxxDrawCaptionTemp@28.c)
 *     _xxxRealDrawMenuItem@24 @ 0x1AA53B (_xxxRealDrawMenuItem@24.c)
 * Callees:
 *     _xxxCreateWindowSmIcon@12 @ 0x13138 (_xxxCreateWindowSmIcon@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z.c)
 */

int __fastcall xxxGetWindowSmIcon(ULONG_PTR BugCheckParameter2, int a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // edi
  int v6; // esi
  _BYTE *v8; // eax
  int WindowSmIcon; // eax
  int v10; // edx
  int v11; // [esp+10h] [ebp-10h] BYREF
  int v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h] BYREF

  v12 = a2;
  SmartObjStackRefBase<tagCLS>::Init(*(_DWORD *)(BugCheckParameter2 + 76));
  v4 = *(_DWORD *)(BugCheckParameter2 + 20);
  v5 = *(_DWORD *)(v4 + 168);
  if ( !v5 || (LOBYTE(v3) = 3, (v6 = HMValidateHandleNoSecure(*(_DWORD *)(v4 + 168), v3)) == 0) )
  {
    v6 = *(_DWORD *)(*(_DWORD *)v11 + 64);
    if ( !v6 )
    {
      v8 = *(_BYTE **)(BugCheckParameter2 + 20);
      if ( (v8[13] & 2) != 0 || (v8[12] & 8) != 0 && (v8[16] & 0x40) != 0 )
        goto LABEL_6;
      if ( v12 )
        goto LABEL_6;
      v13 = 0;
      if ( xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 0, 0, 100, (int)&v13, 1, 0) )
        v5 = v13;
      if ( !v5
        || (WindowSmIcon = xxxCreateWindowSmIcon(BugCheckParameter2, v5, 0),
            LOBYTE(v10) = 3,
            (v6 = HMValidateHandleNoSecure(WindowSmIcon, v10)) == 0) )
      {
LABEL_6:
        v6 = dword_26B8CC;
      }
    }
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v11);
  return v6;
}
