/*
 * XREFs of ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18004816C
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x180047F08 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z @ 0x1800489AC (-SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z.c)
 *     ?GetThemePercentage@@YAJPEAXHHHPEAM@Z @ 0x180048A18 (-GetThemePercentage@@YAJPEAXHHHPEAM@Z.c)
 *     ?CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z @ 0x180048A6C (-CreateNCButtons@CTopLevelWindow@@CAJQEAXPEAUWindowFrame@1@1@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180048CA8 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800491A0 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x180049704 (-GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800537CC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18005383C (_Init_thread_header.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHelper(
        void *a1,
        const int *a2,
        int *a3,
        struct CTopLevelWindow::WindowFrame *a4,
        struct CTopLevelWindow::WindowFrame *a5)
{
  _QWORD *ThreadLocalStoragePointer; // rax
  void *v6; // rsi
  HRESULT ThemeMargins; // eax
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int v17; // r12d
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // rdx
  int v23; // edx
  struct CBitmapSource *v24; // rax
  CBaseObject **v25; // r12
  int v26; // r8d
  int *v27; // rdx
  _QWORD *v28; // rcx
  int v29; // edx
  __int64 v31; // rsi
  __int64 i; // rbx
  CBaseObject *v33; // rcx
  unsigned int iPropId; // [rsp+20h] [rbp-E0h]
  unsigned int cxLeftWidth; // [rsp+40h] [rbp-C0h]
  int v36; // [rsp+40h] [rbp-C0h]
  struct CBitmapSource *v37; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B0h]
  struct _MARGINS v39; // [rsp+60h] [rbp-A0h]
  struct _MARGINS v40; // [rsp+70h] [rbp-90h]
  struct _MARGINS v41; // [rsp+80h] [rbp-80h]
  struct _MARGINS v42; // [rsp+90h] [rbp-70h]
  void *v43; // [rsp+A0h] [rbp-60h]
  struct _MARGINS v44; // [rsp+B0h] [rbp-50h] BYREF
  struct _MARGINS v45; // [rsp+C0h] [rbp-40h] BYREF
  struct _MARGINS v46; // [rsp+D0h] [rbp-30h] BYREF
  struct _MARGINS v47; // [rsp+E0h] [rbp-20h] BYREF
  struct _MARGINS v48; // [rsp+F0h] [rbp-10h] BYREF
  struct _MARGINS v49; // [rsp+100h] [rbp+0h] BYREF
  struct _MARGINS v50; // [rsp+110h] [rbp+10h] BYREF
  struct _MARGINS v51; // [rsp+120h] [rbp+20h] BYREF
  struct _MARGINS v52; // [rsp+130h] [rbp+30h] BYREF
  struct _MARGINS v53; // [rsp+140h] [rbp+40h] BYREF
  struct _MARGINS v54; // [rsp+150h] [rbp+50h] BYREF
  struct _MARGINS v55; // [rsp+160h] [rbp+60h] BYREF
  struct _MARGINS v56; // [rsp+170h] [rbp+70h] BYREF
  MARGINS pMargins; // [rsp+180h] [rbp+80h] BYREF
  struct _MARGINS v58; // [rsp+190h] [rbp+90h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = a1;
  v43 = a1;
  if ( dword_1800E5DA8 > *(_DWORD *)(ThreadLocalStoragePointer[tls_index] + 4LL) )
  {
    Init_thread_header(&dword_1800E5DA8);
    if ( dword_1800E5DA8 == -1 )
    {
      dword_1800E30F4 = -2147023728;
      Init_thread_footer(&dword_1800E5DA8);
    }
  }
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[1], 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 990;
LABEL_59:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E30F4, 1LL, ThemeMargins, iPropId);
    return v11;
  }
  cxLeftWidth = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, a2[3], 2u, &pMargins, &v37);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1002;
    goto LABEL_59;
  }
  v12 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 193) = v37;
  *((_QWORD *)a5 + 193) = v38;
  v13 = a2[4];
  *(_QWORD *)&v41.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v12);
  *(_QWORD *)&v39.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v12);
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, v13, 2u, &pMargins, &v37);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1011;
    goto LABEL_59;
  }
  v14 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 195) = v37;
  *((_QWORD *)a5 + 195) = v38;
  v15 = *((unsigned int *)a2 + 1);
  *(_QWORD *)&v40.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v14);
  *(_QWORD *)&v42.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v14);
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v6, v15, cxLeftWidth, 0LL, 1, 2, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1029;
    goto LABEL_59;
  }
  ThemeMargins = GetThemePercentage(v6, a2[1], *a3, 2430, (float *)a4 + 466);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1032;
    goto LABEL_59;
  }
  ThemeMargins = GetThemePercentage(v6, a2[1], a3[1], 2430, (float *)a5 + 466);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1033;
    goto LABEL_59;
  }
  ThemeMargins = GetThemePercentage(v6, a2[1], *a3, 2432, (float *)a4 + 470);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1036;
    goto LABEL_59;
  }
  ThemeMargins = GetThemePercentage(v6, a2[1], a3[1], 2432, (float *)a5 + 470);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1037;
    goto LABEL_59;
  }
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[1], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1039;
    goto LABEL_59;
  }
  v44 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 1u, &v44);
  v16 = *((unsigned int *)a2 + 6);
  *(_QWORD *)&v41.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v40.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v6, v16, cxLeftWidth, 5LL, 6, 7, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1056;
    goto LABEL_59;
  }
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[6], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1058;
    goto LABEL_59;
  }
  v45 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 6u, &v45);
  *(_QWORD *)&v39.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v42.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  v46 = v41;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0, &v46);
  v47 = v40;
  CTopLevelWindow::SetSizingMargins(a4, a5, 2u, &v47);
  v48 = v39;
  CTopLevelWindow::SetSizingMargins(a4, a5, 5u, &v48);
  v49 = v42;
  CTopLevelWindow::SetSizingMargins(a4, a5, 7u, &v49);
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[10], 0, 3602, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1072;
    goto LABEL_59;
  }
  v17 = pMargins.cxLeftWidth;
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, a2[12], 2u, &pMargins, &v37);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1078;
    goto LABEL_59;
  }
  v18 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 211) = v37;
  *((_QWORD *)a5 + 211) = v38;
  v19 = a2[13];
  *(_QWORD *)&v41.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v18);
  *(_QWORD *)&v39.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v18);
  ThemeMargins = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, v19, 2u, &pMargins, &v37);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1087;
    goto LABEL_59;
  }
  v20 = pMargins.cxLeftWidth;
  *((_QWORD *)a4 + 213) = v37;
  *((_QWORD *)a5 + 213) = v38;
  v21 = *((unsigned int *)a2 + 10);
  *(_QWORD *)&v40.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v20);
  *(_QWORD *)&v42.cxLeftWidth = __PAIR64__(pMargins.cxRightWidth, v20);
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v6, v21, v17, 9LL, 10, 11, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1105;
    goto LABEL_59;
  }
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[10], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1107;
    goto LABEL_59;
  }
  v50 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xAu, &v50);
  v22 = *((unsigned int *)a2 + 15);
  *(_QWORD *)&v41.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v40.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::GetNCAreaHorizontalStripHelper(v6, v22, v17, 14LL, 15, 16, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1124;
    goto LABEL_59;
  }
  ThemeMargins = GetThemeMargins(v6, 0LL, a2[15], 0, 3601, 0LL, &pMargins);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1126;
    goto LABEL_59;
  }
  v51 = pMargins;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xFu, &v51);
  v23 = a2[17];
  *(_QWORD *)&v39.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  *(_QWORD *)&v42.cyTopHeight = *(_QWORD *)&pMargins.cyTopHeight;
  ThemeMargins = CTopLevelWindow::CreateBitmapFromAtlas(v6, v23, &v58, &v37);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1134;
    goto LABEL_59;
  }
  v24 = v37;
  *((_QWORD *)a4 + 221) = v37;
  *((_QWORD *)a5 + 221) = v24;
  _InterlockedAdd((volatile signed __int32 *)v24 + 2, 1u);
  v52 = v58;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x11u, &v52);
  v53 = v41;
  CTopLevelWindow::SetSizingMargins(a4, a5, 9u, &v53);
  v54 = v40;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xBu, &v54);
  v55 = v39;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0xEu, &v55);
  v56 = v42;
  CTopLevelWindow::SetSizingMargins(a4, a5, 0x10u, &v56);
  v25 = (CBaseObject **)((char *)a5 + 1784);
  v26 = 18;
  v27 = (int *)(a2 + 18);
  *(_QWORD *)&v41.cxLeftWidth = a4 - a5;
  v28 = (_QWORD *)((char *)a5 + 1784);
  v36 = 18;
  *(_QWORD *)&v39.cxLeftWidth = a2 + 18;
  *(_QWORD *)&v40.cxLeftWidth = (char *)a5 + 1784;
  do
  {
    v29 = *v27;
    if ( v29 )
    {
      LOWORD(v11) = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v6, v29, 2u, &pMargins, &v37);
      if ( (unsigned __int16)v11 == 1168 )
        break;
      v28 = *(_QWORD **)&v40.cxLeftWidth;
      v26 = v36;
      *(_QWORD *)(*(_QWORD *)&v41.cxLeftWidth + *(_QWORD *)&v40.cxLeftWidth) = v37;
      *v28 = v38;
    }
    ++v26;
    v27 = (int *)(*(_QWORD *)&v39.cxLeftWidth + 4LL);
    v36 = v26;
    v28 += 2;
    *(_QWORD *)&v39.cxLeftWidth += 4LL;
    *(_QWORD *)&v40.cxLeftWidth = v28;
  }
  while ( v26 <= 21 );
  if ( (_WORD)v11 == 1168 )
  {
    v31 = *(_QWORD *)&v41.cxLeftWidth;
    for ( i = 18LL; i <= 21; ++i )
    {
      if ( a2[i] )
      {
        v33 = *(CBaseObject **)((char *)v25 + v31);
        if ( v33 )
        {
          CBaseObject::Release(v33);
          *(CBaseObject **)((char *)v25 + v31) = 0LL;
        }
        if ( *v25 )
        {
          CBaseObject::Release(*v25);
          *v25 = 0LL;
        }
      }
      v25 += 2;
    }
    v6 = v43;
  }
  ThemeMargins = CTopLevelWindow::CreateNCButtons(v6, a4, a5);
  v11 = ThemeMargins;
  if ( ThemeMargins < 0 )
  {
    iPropId = 1182;
    goto LABEL_59;
  }
  return v11;
}
