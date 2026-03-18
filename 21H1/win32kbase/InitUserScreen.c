/*
 * XREFs of InitUserScreen @ 0x1C00A7A88
 * Callers:
 *     InitVideo @ 0x1C00552E4 (InitVideo.c)
 * Callees:
 *     CreateProfileUserName @ 0x1C0012C40 (CreateProfileUserName.c)
 *     xxxODI_ColorInit @ 0x1C0013A50 (xxxODI_ColorInit.c)
 *     GreGetSystemFont @ 0x1C0050160 (GreGetSystemFont.c)
 *     ApiSetEditionInitGlobalCursorSizes @ 0x1C00506E0 (ApiSetEditionInitGlobalCursorSizes.c)
 *     GreMarkDCUnreadable @ 0x1C0050C48 (GreMarkDCUnreadable.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0054278 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0071A08 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C007A540 (GreUnlockVisRgn.c)
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
 *     GreCreateCompatibleDC @ 0x1C008AFD0 (GreCreateCompatibleDC.c)
 *     CreateEmptyRgnPublic @ 0x1C00A8220 (CreateEmptyRgnPublic.c)
 *     CreateCacheDC @ 0x1C00A8290 (CreateCacheDC.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C00A9FC8 (-UpdateUserScreen@@YAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 InitUserScreen()
{
  int v0; // edx
  __int64 ProfileUserName; // rbp
  _DWORD *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  bool v5; // bl
  unsigned int v6; // edi
  void *v7; // rcx
  _WORD *v8; // rbx
  unsigned int v9; // ebx
  bool v10; // di
  char v11; // di
  bool v12; // bl
  char v13; // bl
  bool v14; // di
  char v15; // di
  bool v16; // bl
  char v17; // bl
  bool v18; // di
  char v19; // di
  bool v20; // bl
  char v21; // bl
  bool v22; // di
  char v23; // di
  bool v24; // bl
  char v25; // bl
  bool v26; // si
  char v27; // si
  int v28; // edx
  int v29; // r8d
  __int64 v30; // rbx
  __int64 v31; // rdx
  int v32; // r8d
  __int64 v33; // rdx
  int v34; // eax
  __int128 v36; // [rsp+30h] [rbp-38h] BYREF
  __int64 v37; // [rsp+40h] [rbp-28h]
  char v38; // [rsp+70h] [rbp+8h] BYREF

  v36 = 0LL;
  v37 = 0LL;
  ProfileUserName = CreateProfileUserName((__int64)&v36);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v0,
      14,
      11,
      (__int64)&WPP_936c58a6bc9b3a9fabf3d0d63cd6ac34_Traceguids);
  }
  v2 = gpsi;
  *((_DWORD *)gpsi + 1275) = 1;
  v2[1301] = 1;
  *((_QWORD *)v2 + 640) = GreGetSystemFont(1);
  *((_QWORD *)v2 + 653) = GreGetSystemFont(0);
  *(_QWORD *)(gpDispInfo + 56) = GreCreateDisplayDC(*(_QWORD *)(gpDispInfo + 40), 0, 0);
  v3 = *(_QWORD *)(gpDispInfo + 56);
  if ( !v3 )
    goto LABEL_43;
  if ( qword_1C0257978 )
    qword_1C0257978(v3, *((_QWORD *)v2 + 640));
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 56), 0, 0, 0);
  *(_QWORD *)(gpDispInfo + 64) = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v4 = *(_QWORD *)(gpDispInfo + 64);
  if ( !v4 )
    goto LABEL_43;
  if ( qword_1C0257978 )
    qword_1C0257978(v4, *((_QWORD *)v2 + 640));
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 64), 0, 0, 0);
  ghdcMem = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v5 = ghdcMem != 0LL;
  ghdcMem2 = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v6 = v5 && ghdcMem2 != 0LL;
  if ( v6 )
  {
    GreSetDCOwnerEx((__int64)ghdcMem, 0, 0, 0);
    GreSetDCOwnerEx((__int64)ghdcMem2, 0, 0, 0);
    if ( CreateCachedMonitor() )
    {
      v7 = gpsi;
      *((_WORD *)gpsi + 3499) = gdmLogPixels;
      ++*((_WORD *)gpsi + 3507);
      v8 = gpsi;
      *(_WORD *)(PsGetCurrentProcessWin32Process(v7) + 284) = v8[3499];
      if ( (unsigned int)ApiSetEditionInitGlobalCursorSizes() )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v38);
        if ( (int)UpdateUserScreen() < 0 )
        {
          v6 = 0;
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v38);
        }
        else
        {
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v38);
          ghrgnInv0 = (HRGN)CreateEmptyRgnPublic();
          v9 = ghrgnInv0 != 0LL ? v6 : 0;
          ghrgnInv1 = (HRGN)CreateEmptyRgnPublic();
          v10 = ghrgnInv1 != 0LL;
          ghrgnInv2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnInv2 )
            v11 = v9 & v10;
          else
            v11 = 0;
          ghrgnSPB1 = (HRGN)CreateEmptyRgnPublic();
          v12 = ghrgnSPB1 != 0LL;
          ghrgnSPB2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnSPB2 )
            v13 = v11 & v12;
          else
            v13 = 0;
          ghrgnSCR = (HRGN)CreateEmptyRgnPublic();
          v14 = ghrgnSCR != 0LL;
          ghrgnSW = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnSW )
            v15 = v13 & v14;
          else
            v15 = 0;
          ghrgnScrl1 = (HRGN)CreateEmptyRgnPublic();
          v16 = ghrgnScrl1 != 0LL;
          ghrgnScrl2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrl2 )
            v17 = v15 & v16;
          else
            v17 = 0;
          ghrgnScrlVis = (HRGN)CreateEmptyRgnPublic();
          v18 = ghrgnScrlVis != 0LL;
          ghrgnScrlSrc = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrlSrc )
            v19 = v17 & v18;
          else
            v19 = 0;
          ghrgnScrlDst = (HRGN)CreateEmptyRgnPublic();
          v20 = ghrgnScrlDst != 0LL;
          ghrgnScrlValid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrlValid )
            v21 = v19 & v20;
          else
            v21 = 0;
          ghrgnInvalidSum = (HRGN)CreateEmptyRgnPublic();
          v22 = ghrgnInvalidSum != 0LL;
          ghrgnVisNew = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnVisNew )
            v23 = v21 & v22;
          else
            v23 = 0;
          ghrgnSWP1 = (HRGN)CreateEmptyRgnPublic();
          v24 = ghrgnSWP1 != 0LL;
          ghrgnValid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnValid )
            v25 = v23 & v24;
          else
            v25 = 0;
          ghrgnValidSum = (HRGN)CreateEmptyRgnPublic();
          v26 = ghrgnValidSum != 0LL;
          ghrgnInvalid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnInvalid )
            v27 = v25 & v26;
          else
            v27 = 0;
          ghrgnGDC = (HRGN)CreateEmptyRgnPublic();
          LOBYTE(v6) = v27 & (ghrgnGDC != 0LL);
          GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), v28, v29);
          v30 = 5LL;
          do
          {
            v6 = (CreateCacheDC(0LL, 2050LL, 0LL) != 0) & (unsigned __int8)v6;
            --v30;
          }
          while ( v30 );
          GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v31, v32);
          if ( v6 )
          {
            GreMarkDCUnreadable(*(_QWORD *)(gpDispInfo + 56), v33);
            *((_DWORD *)gpsi + 496) = 0;
            *((_DWORD *)gpsi + 541) = InitSafeBootMode;
            *((_DWORD *)gpsi + 547) = 0;
            xxxODI_ColorInit(ProfileUserName);
            v34 = qword_1C02589D8 ? qword_1C02589D8() : -1073741637;
            if ( v34 >= 0 && qword_1C02589E0 )
              qword_1C02589E0();
          }
        }
        goto LABEL_39;
      }
    }
LABEL_43:
    v6 = 0;
  }
LABEL_39:
  if ( ProfileUserName && qword_1C0257FA8 )
    qword_1C0257FA8(&v36);
  return v6;
}
