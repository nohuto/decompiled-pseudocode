/*
 * XREFs of ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C0036B18
 * Callers:
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00356B4 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 * Callees:
 *     MNInitUAHMenuItem @ 0x1C0033C10 (MNInitUAHMenuItem.c)
 *     MNInitUAHMenu @ 0x1C0033C68 (MNInitUAHMenu.c)
 *     MNGetpItemIndex @ 0x1C00364B0 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0036944 (MNIsUAHMenu.c)
 *     GetDPIServerInfoForDpi @ 0x1C0037DEC (GetDPIServerInfoForDpi.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     MNUpdateUAHMaxPopupWidths @ 0x1C01226F8 (MNUpdateUAHMaxPopupWidths.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall xxxMNGetBitmapSize(__int64 **a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int128 v16; // xmm1
  int v17; // edx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  int v20; // eax
  _QWORD v21[14]; // [rsp+20h] [rbp-51h] BYREF

  memset(v21, 0, sizeof(v21));
  v9 = *(_QWORD *)a2;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 104LL) != -1 )
    return 0LL;
  v21[0] = 1LL;
  v21[1] = *(unsigned int *)(v9 + 8);
  LODWORD(v21[2]) = *(_DWORD *)(GetDPIServerInfoForDpi(a4) + 36);
  v11 = *(_QWORD *)a2;
  v21[3] = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
  if ( (*(_DWORD *)v11 & 0x100) != 0 || *(_QWORD *)(v11 + 96) == -1LL && a3 )
  {
    xxxSendMessage(a3, 44LL, 0LL, v21);
    v18 = (__int64)a1[2];
    if ( !v18 )
      v18 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v18, a2) == -1 )
      return 0LL;
  }
  v12 = (__int64)a1[2];
  if ( !v12 )
    v12 = **a1;
  if ( !(unsigned int)MNIsUAHMenu(v12) || !a3 )
    goto LABEL_17;
  v13 = a1[2];
  if ( !v13 )
    v13 = (__int64 *)**a1;
  MNInitUAHMenu(v13, a5, (__int64)&v21[4]);
  v14 = (__int64)a1[2];
  if ( !v14 )
    v14 = **a1;
  MNInitUAHMenuItem(v14, a2, (__int64)&v21[7]);
  xxxSendMessage(a3, 148LL, 0LL, v21);
  v15 = (__int64)a1[2];
  if ( !v15 )
    v15 = **a1;
  if ( (unsigned int)MNGetpItemIndex(v15, a2) == -1 )
    return 0LL;
  v16 = *(_OWORD *)((char *)&v21[9] + 4);
  *(_OWORD *)(a2 + 52) = *(_OWORD *)((char *)&v21[7] + 4);
  *(_OWORD *)(a2 + 68) = v16;
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 1) != 0 )
  {
    v19 = a1[2];
    if ( !v19 )
      v19 = (__int64 *)**a1;
    v20 = MNUpdateUAHMaxPopupWidths(v19, a2);
    v17 = v20 + HIDWORD(v21[1]);
    goto LABEL_18;
  }
LABEL_17:
  v17 = HIDWORD(v21[1]);
LABEL_18:
  result = 1LL;
  *(_DWORD *)(*(_QWORD *)a2 + 104LL) = v17;
  *(_DWORD *)(*(_QWORD *)a2 + 108LL) = v21[2];
  return result;
}
