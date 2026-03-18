/*
 * XREFs of ?bGetNtoWScales@@YGHPAVEPOINTFL@@AAVXDCOBJ@@PAU_FD_XFORM@@AAVPFEOBJ@@PAH@Z @ 0x8A5F8
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@@QAU_POINTL@@KKHHK@Z @ 0x84984 (-bRealizeFont@RFONTOBJ@@QAEHPAVXDCOBJ@@PAVPDEVOBJ@@PAUtagENUMLOGFONTEXDVW@@PAVPFE@@PAU_FD_XFORM@.c)
 * Callees:
 *     ??XEPOINTFL@@QAEXVEFLOAT@@@Z @ 0x22DFC (--XEPOINTFL@@QAEXVEFLOAT@@@Z.c)
 *     ?vSetElementsLToFx@EXFORMOBJ@@QAEXKKKK@Z @ 0x84912 (-vSetElementsLToFx@EXFORMOBJ@@QAEXKKKK@Z.c)
 *     ?bWorldToDeviceIdentity@DC@@QBEHXZ @ 0x88582 (-bWorldToDeviceIdentity@DC@@QBEHXZ.c)
 *     ?pptlBaseline@IFIOBJ@@QAEPAU_POINTL@@XZ @ 0x8A758 (-pptlBaseline@IFIOBJ@@QAEPAU_POINTL@@XZ.c)
 *     ??0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z @ 0x8A776 (--0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bUseMetaPtoD@DC@@QBEHXZ @ 0x1F4EE2 (-bUseMetaPtoD@DC@@QBEHXZ.c)
 */

int __userpurge bGetNtoWScales@<eax>(
        struct XDCOBJ *a1@<edx>,
        int a2@<ecx>,
        struct EPOINTFL *a3,
        struct XDCOBJ *a4,
        struct _FD_XFORM *a5,
        struct PFEOBJ *a6,
        int *a7)
{
  int v7; // esi
  struct _POINTL *v8; // eax
  int x; // edi
  LONG y; // ebx
  struct XDCOBJ *v11; // ebx
  int v12; // edx
  int v13; // edi
  int v15; // edx
  _DWORD v16[3]; // [esp+10h] [ebp-94h] BYREF
  _BYTE v17[4]; // [esp+1Ch] [ebp-88h] BYREF
  int v18; // [esp+20h] [ebp-84h]
  _DWORD v19[3]; // [esp+24h] [ebp-80h] BYREF
  int v20; // [esp+30h] [ebp-74h] BYREF
  _BYTE v21[4]; // [esp+34h] [ebp-70h] BYREF
  struct XDCOBJ *v22; // [esp+38h] [ebp-6Ch]
  struct _FD_XFORM *v23; // [esp+3Ch] [ebp-68h]
  _BYTE v24[60]; // [esp+40h] [ebp-64h] BYREF
  int v25; // [esp+7Ch] [ebp-28h] BYREF
  int v26; // [esp+80h] [ebp-24h]
  int v27; // [esp+84h] [ebp-20h] BYREF
  int v28; // [esp+88h] [ebp-1Ch]
  int v29; // [esp+8Ch] [ebp-18h] BYREF
  int v30; // [esp+90h] [ebp-14h]
  int v31; // [esp+94h] [ebp-10h] BYREF
  int v32; // [esp+98h] [ebp-Ch]

  v23 = a5;
  v7 = 0;
  v22 = a1;
  v18 = a2;
  memset(v24, 0, sizeof(v24));
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v19, (struct MATRIX *)v24, 0);
  EXFORMOBJ::vSetElementsLToFx(
    (EXFORMOBJ *)v19,
    *(_DWORD *)a3,
    *((_DWORD *)a3 + 1),
    *((_DWORD *)a3 + 2),
    *((_DWORD *)a3 + 3));
  EXFORMOBJ::vRemoveTranslation((EXFORMOBJ *)v19);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)v19, 8u);
  v16[0] = *(_DWORD *)(*(_DWORD *)a4 + 20);
  v8 = IFIOBJ::pptlBaseline((IFIOBJ *)v16);
  x = v8->x;
  y = v8->y;
  ltoef_c(v8->x, &v25);
  ltoef_c(y, &v27);
  if ( ((unsigned int)&loc_80000 & *(_DWORD *)(v16[0] + 48)) != 0 )
  {
    ltoef_c(-y, &v29);
  }
  else
  {
    ltoef_c(y, &v29);
    x = -x;
  }
  ltoef_c(x, &v31);
  if ( (*(_BYTE *)(v19[0] + 56) & 2) != 0
    || EXFORMOBJ::bXform((EXFORMOBJ *)v19, (struct VECTORFL *)&v25, (struct VECTORFL *)&v25, 1u)
    && ((*(_BYTE *)(v19[0] + 56) & 2) != 0
     || EXFORMOBJ::bXform((EXFORMOBJ *)v19, (struct VECTORFL *)&v29, (struct VECTORFL *)&v29, 1u)) )
  {
    v11 = v22;
    if ( DC::bWorldToDeviceIdentity(*(DC **)v22) )
    {
      v23->eXX = *(_DWORD *)(v12 + 56) & 2;
      goto LABEL_9;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v20, v11, 0x402u);
    v15 = v20;
    if ( !v20 )
      return v7;
    v23->eXX = 0;
    if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v11 + 1020) + 228) == 1
      && !DC::bUseMetaPtoD(*(DC **)v11)
      && (*(_BYTE *)(v16[0] + 48) & 4) == 0 )
    {
      EPOINTFL::operator*=((char *)&v25, *(_DWORD *)v15, *(_DWORD *)(v15 + 4));
      EPOINTFL::operator*=((char *)&v29, *(_DWORD *)(v20 + 24), *(_DWORD *)(v20 + 28));
      if ( v25 )
        v26 += 4;
      if ( v27 )
        v28 += 4;
      if ( v29 )
        v30 += 4;
      if ( v31 )
        v32 += 4;
      goto LABEL_9;
    }
    if ( (*(_BYTE *)(v15 + 56) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)&v20, (struct VECTORFL *)&v25, (struct VECTORFL *)&v25, 1u)
      && ((*(_BYTE *)(v20 + 56) & 2) != 0
       || EXFORMOBJ::bXform((EXFORMOBJ *)&v20, (struct VECTORFL *)&v29, (struct VECTORFL *)&v29, 1u)) )
    {
LABEL_9:
      v13 = v18;
      EFLOAT::eqLength(v18, v21, &v25);
      EFLOAT::eqLength(v13 + 8, v17, &v29);
      return 1;
    }
  }
  return v7;
}
