/*
 * XREFs of InitUserScreen @ 0x1C001F2FC
 * Callers:
 *     InitVideo @ 0x1C0095238 (InitVideo.c)
 * Callees:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C001E6D0 (-UpdateUserScreen@@YAJXZ.c)
 *     CreateEmptyRgnPublic @ 0x1C001FA90 (CreateEmptyRgnPublic.c)
 *     CreateCacheDC @ 0x1C001FB00 (CreateCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C003CF80 (GreUnlockVisRgn.c)
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 *     GreCreateCompatibleDC @ 0x1C004DB90 (GreCreateCompatibleDC.c)
 *     GreCreateDisplayDC @ 0x1C004DC90 (GreCreateDisplayDC.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C005E980 (GreLockVisRgn.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006F2BC (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     xxxODI_ColorInit @ 0x1C008D430 (xxxODI_ColorInit.c)
 *     CreateProfileUserName @ 0x1C008DA20 (CreateProfileUserName.c)
 *     GreGetSystemFont @ 0x1C00BE210 (GreGetSystemFont.c)
 *     ApiSetEditionInitGlobalCursorSizes @ 0x1C00BE5C0 (ApiSetEditionInitGlobalCursorSizes.c)
 *     GreMarkDCUnreadable @ 0x1C00BEAA8 (GreMarkDCUnreadable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 InitUserScreen()
{
  int v0; // edx
  __int64 v1; // rbp
  _DWORD *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  bool v5; // bl
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  void *v10; // rcx
  _WORD *v11; // rbx
  unsigned int v12; // ebx
  bool v13; // di
  char v14; // di
  bool v15; // bl
  char v16; // bl
  bool v17; // di
  char v18; // di
  bool v19; // bl
  char v20; // bl
  bool v21; // di
  char v22; // di
  bool v23; // bl
  char v24; // bl
  bool v25; // di
  char v26; // di
  bool v27; // bl
  char v28; // bl
  bool v29; // si
  char v30; // si
  __int64 v31; // rbx
  int v32; // eax
  __int128 v34; // [rsp+30h] [rbp-38h] BYREF
  __int64 v35; // [rsp+40h] [rbp-28h]
  char v36; // [rsp+70h] [rbp+8h] BYREF

  v34 = 0LL;
  v35 = 0LL;
  v1 = CreateProfileUserName(&v34);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v0,
      14,
      11,
      (__int64)&WPP_e063d8d53cd938d1ca270bacb3957153_Traceguids);
  }
  v2 = gpsi;
  *((_DWORD *)gpsi + 1275) = 1;
  v2[1301] = 1;
  *((_QWORD *)v2 + 640) = GreGetSystemFont(1LL);
  *((_QWORD *)v2 + 653) = GreGetSystemFont(0LL);
  *(_QWORD *)(gpDispInfo + 56) = GreCreateDisplayDC(*(HDEV *)(gpDispInfo + 40), 0);
  v3 = *(_QWORD *)(gpDispInfo + 56);
  if ( !v3 )
    goto LABEL_43;
  if ( qword_1C024F9B8 )
    qword_1C024F9B8(v3, *((_QWORD *)v2 + 640));
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 56), 0LL, 0LL, 0LL);
  *(_QWORD *)(gpDispInfo + 64) = GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v4 = *(_QWORD *)(gpDispInfo + 64);
  if ( !v4 )
    goto LABEL_43;
  if ( qword_1C024F9B8 )
    qword_1C024F9B8(v4, *((_QWORD *)v2 + 640));
  GreSetDCOwnerEx(*(_QWORD *)(gpDispInfo + 64), 0LL, 0LL, 0LL);
  ghdcMem = (HDC)GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v5 = ghdcMem != 0LL;
  ghdcMem2 = (HDC)GreCreateCompatibleDC(*(HDC *)(gpDispInfo + 56));
  v6 = v5 && ghdcMem2 != 0LL;
  if ( v6 )
  {
    GreSetDCOwnerEx(ghdcMem, 0LL, 0LL, 0LL);
    GreSetDCOwnerEx(ghdcMem2, 0LL, 0LL, 0LL);
    if ( CreateCachedMonitor() )
    {
      v10 = gpsi;
      *((_WORD *)gpsi + 3499) = gdmLogPixels;
      ++*((_WORD *)gpsi + 3507);
      v11 = gpsi;
      *(_WORD *)(PsGetCurrentProcessWin32Process(v10, v7, v8, v9) + 284) = v11[3499];
      if ( (unsigned int)ApiSetEditionInitGlobalCursorSizes() )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v36);
        if ( (int)UpdateUserScreen() < 0 )
        {
          v6 = 0;
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v36);
        }
        else
        {
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v36);
          ghrgnInv0 = (HRGN)CreateEmptyRgnPublic();
          v12 = ghrgnInv0 != 0LL ? v6 : 0;
          ghrgnInv1 = (HRGN)CreateEmptyRgnPublic();
          v13 = ghrgnInv1 != 0LL;
          ghrgnInv2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnInv2 )
            v14 = v12 & v13;
          else
            v14 = 0;
          ghrgnSPB1 = (HRGN)CreateEmptyRgnPublic();
          v15 = ghrgnSPB1 != 0LL;
          ghrgnSPB2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnSPB2 )
            v16 = v14 & v15;
          else
            v16 = 0;
          ghrgnSCR = (HRGN)CreateEmptyRgnPublic();
          v17 = ghrgnSCR != 0LL;
          ghrgnSW = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnSW )
            v18 = v16 & v17;
          else
            v18 = 0;
          ghrgnScrl1 = (HRGN)CreateEmptyRgnPublic();
          v19 = ghrgnScrl1 != 0LL;
          ghrgnScrl2 = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrl2 )
            v20 = v18 & v19;
          else
            v20 = 0;
          ghrgnScrlVis = (HRGN)CreateEmptyRgnPublic();
          v21 = ghrgnScrlVis != 0LL;
          ghrgnScrlSrc = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrlSrc )
            v22 = v20 & v21;
          else
            v22 = 0;
          ghrgnScrlDst = (HRGN)CreateEmptyRgnPublic();
          v23 = ghrgnScrlDst != 0LL;
          ghrgnScrlValid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnScrlValid )
            v24 = v22 & v23;
          else
            v24 = 0;
          ghrgnInvalidSum = (HRGN)CreateEmptyRgnPublic();
          v25 = ghrgnInvalidSum != 0LL;
          ghrgnVisNew = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnVisNew )
            v26 = v24 & v25;
          else
            v26 = 0;
          ghrgnSWP1 = (HRGN)CreateEmptyRgnPublic();
          v27 = ghrgnSWP1 != 0LL;
          ghrgnValid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnValid )
            v28 = v26 & v27;
          else
            v28 = 0;
          ghrgnValidSum = (HRGN)CreateEmptyRgnPublic();
          v29 = ghrgnValidSum != 0LL;
          ghrgnInvalid = (HRGN)CreateEmptyRgnPublic();
          if ( ghrgnInvalid )
            v30 = v28 & v29;
          else
            v30 = 0;
          ghrgnGDC = (HRGN)CreateEmptyRgnPublic();
          LOBYTE(v6) = v30 & (ghrgnGDC != 0LL);
          GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
          v31 = 5LL;
          do
          {
            v6 = (CreateCacheDC(0LL, 2050LL, 0LL) != 0) & (unsigned __int8)v6;
            --v31;
          }
          while ( v31 );
          GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
          if ( v6 )
          {
            GreMarkDCUnreadable(*(_QWORD *)(gpDispInfo + 56));
            *((_DWORD *)gpsi + 496) = 0;
            *((_DWORD *)gpsi + 541) = InitSafeBootMode;
            *((_DWORD *)gpsi + 547) = 0;
            xxxODI_ColorInit(v1);
            v32 = qword_1C0250A18 ? qword_1C0250A18() : -1073741637;
            if ( v32 >= 0 && qword_1C0250A20 )
              qword_1C0250A20();
          }
        }
        goto LABEL_39;
      }
    }
LABEL_43:
    v6 = 0;
  }
LABEL_39:
  if ( v1 && qword_1C024FFE8 )
    qword_1C024FFE8(&v34);
  return v6;
}
