/*
 * XREFs of ?bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z @ 0x96B14
 * Callers:
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 *     ?EngRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z @ 0x961A2 (-EngRealizeBrush@@YGHPAU_BRUSHOBJ@@PAU_SURFOBJ@@11PAU_XLATEOBJ@@K@Z.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QAEHXZ @ 0x1E98A3 (-bCreateHalftoneBrushes@PDEVOBJ@@QAEHXZ.c)
 *     _GreCreateHalftonePalette@4 @ 0x21E27D (_GreCreateHalftonePalette@4.c)
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _HT_CreateDeviceHalftoneInfo@8 @ 0x96E72 (_HT_CreateDeviceHalftoneInfo@8.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QAEHJPAU_GDIINFO@@@Z @ 0x974F8 (-bCreateHTPalette@PALMEMOBJ@@QAEHJPAU_GDIINFO@@@Z.c)
 *     ?SETFLAG@@YGXHACKK@Z @ 0x9DB80 (-SETFLAG@@YGXHACKK@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bEqualEntries@XEPALOBJ@@QAEHV1@@Z @ 0x222E1E (-bEqualEntries@XEPALOBJ@@QAEHV1@@Z.c)
 */

int __thiscall PDEVOBJ::bEnableHalftone(PDEVOBJ *this, struct tagCOLORADJUSTMENT *a2)
{
  int v3; // ecx
  __int16 v4; // si
  struct tagCOLORADJUSTMENT *v5; // esi
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // esi
  int v8; // esi
  PKTHREAD v10; // eax
  _DWORD *v11; // esi
  volatile unsigned int *v12; // [esp+0h] [ebp-BCh]
  volatile unsigned int *v13; // [esp+0h] [ebp-BCh]
  unsigned int v14; // [esp+4h] [ebp-B8h]
  unsigned int v15; // [esp+4h] [ebp-B8h]
  int v16; // [esp+Ch] [ebp-B0h] BYREF
  int v17; // [esp+10h] [ebp-ACh]
  int v18; // [esp+14h] [ebp-A8h]
  int v19; // [esp+18h] [ebp-A4h]
  int v20; // [esp+1Ch] [ebp-A0h]
  struct tagCOLORADJUSTMENT *v21; // [esp+20h] [ebp-9Ch]
  _DWORD *v22; // [esp+24h] [ebp-98h] BYREF
  int v23; // [esp+28h] [ebp-94h]
  _DWORD *v24; // [esp+2Ch] [ebp-90h]
  int Src; // [esp+30h] [ebp-8Ch] BYREF
  __int16 v26; // [esp+34h] [ebp-88h]
  __int16 v27; // [esp+36h] [ebp-86h]
  int v28; // [esp+38h] [ebp-84h]
  int *v29; // [esp+3Ch] [ebp-80h]
  int v30; // [esp+40h] [ebp-7Ch]
  _WORD *v31; // [esp+44h] [ebp-78h]
  _WORD *v32; // [esp+48h] [ebp-74h]
  __int16 v33; // [esp+4Ch] [ebp-70h]
  __int16 v34; // [esp+4Eh] [ebp-6Eh]
  __int16 v35; // [esp+50h] [ebp-6Ch]
  __int16 v36; // [esp+52h] [ebp-6Ah]
  _BYTE v37[24]; // [esp+54h] [ebp-68h] BYREF
  __int16 v38; // [esp+6Ch] [ebp-50h]
  __int16 v39; // [esp+6Eh] [ebp-4Eh]
  __int16 v40; // [esp+70h] [ebp-4Ch]
  char v41; // [esp+72h] [ebp-4Ah]
  char v42; // [esp+73h] [ebp-49h]
  _WORD v43[22]; // [esp+7Ch] [ebp-40h] BYREF
  _WORD v44[6]; // [esp+A8h] [ebp-14h] BYREF

  v23 = 0;
  v22 = 0;
  v21 = a2;
  if ( !PALMEMOBJ::bCreateHTPalette(
          (PALMEMOBJ *)&v22,
          *(_DWORD *)(*(_DWORD *)this + 1660),
          (struct _GDIINFO *)(*(_DWORD *)this + 1420)) )
  {
LABEL_16:
    v8 = 0;
    goto LABEL_14;
  }
  v3 = *(_DWORD *)this;
  Src = 1213491459;
  v27 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v26 = *(_WORD *)(v3 + 1664);
  v41 = *(_BYTE *)(v3 + 1667);
  v42 = 0;
  if ( *(_DWORD *)(v3 + 1656) > 0x12u )
    v4 = 17;
  else
    v4 = *(unsigned __int8 *)(v3 + 1656);
  v27 = v4;
  v33 = (*(_DWORD *)(v3 + 1612) + *(_DWORD *)(v3 + 1620) + *(_DWORD *)(v3 + 1616)) / 3;
  v38 = *(_WORD *)(v3 + 1612);
  v39 = *(_WORD *)(v3 + 1616);
  v40 = *(_WORD *)(v3 + 1620);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  if ( v4 == 18 )
  {
    if ( (unsigned int)(*(_DWORD *)(v3 + 1692) - 4) <= 0xFC
      && (unsigned int)(*(_DWORD *)(v3 + 1696) - 4) <= 0xFC
      && *(_DWORD *)(v3 + 1700)
      && *(_DWORD *)(v3 + 1704)
      && *(_DWORD *)(v3 + 1708) )
    {
      v16 = 20;
      LOWORD(v17) = *(_WORD *)(v3 + 1692);
      HIWORD(v17) = *(_WORD *)(v3 + 1696);
      v18 = *(_DWORD *)(v3 + 1700);
      v19 = *(_DWORD *)(v3 + 1704);
      v20 = *(_DWORD *)(v3 + 1708);
      v29 = &v16;
    }
    else
    {
      v27 = 17;
    }
  }
  v43[0] = *(_WORD *)(v3 + 1528);
  v5 = (struct tagCOLORADJUSTMENT *)&gcaDefault;
  v43[1] = *(_WORD *)(v3 + 1532);
  v43[2] = *(_WORD *)(v3 + 1536);
  v43[3] = *(_WORD *)(v3 + 1540);
  v43[4] = *(_WORD *)(v3 + 1544);
  v43[5] = *(_WORD *)(v3 + 1548);
  v43[6] = *(_WORD *)(v3 + 1552);
  v43[7] = *(_WORD *)(v3 + 1556);
  v43[8] = *(_WORD *)(v3 + 1560);
  v43[9] = *(_WORD *)(v3 + 1564);
  v43[10] = *(_WORD *)(v3 + 1568);
  v43[11] = *(_WORD *)(v3 + 1572);
  v43[12] = *(_WORD *)(v3 + 1576);
  v43[13] = *(_WORD *)(v3 + 1580);
  v43[14] = *(_WORD *)(v3 + 1584);
  v43[15] = *(_WORD *)(v3 + 1588);
  v43[16] = *(_WORD *)(v3 + 1592);
  v43[17] = *(_WORD *)(v3 + 1596);
  v43[18] = *(_WORD *)(v3 + 1600);
  v43[19] = *(_WORD *)(v3 + 1604);
  v43[20] = *(_WORD *)(v3 + 1608);
  v31 = v43;
  v44[0] = *(_WORD *)(v3 + 1624);
  v44[1] = *(_WORD *)(v3 + 1628);
  v44[2] = *(_WORD *)(v3 + 1632);
  v44[3] = *(_WORD *)(v3 + 1636);
  v44[4] = *(_WORD *)(v3 + 1640);
  v44[5] = *(_WORD *)(v3 + 1644);
  v32 = v44;
  v34 = *(_WORD *)(v3 + 1460);
  v35 = *(_WORD *)(v3 + 1464);
  v36 = *(_WORD *)(v3 + 1648);
  if ( v21 )
    v5 = v21;
  qmemcpy(v37, v5, sizeof(v37));
  v24 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  if ( HT_CreateDeviceHalftoneInfo(&Src) <= 0 )
  {
    EngSetLastError(8u);
    v10 = KeGetCurrentThread();
    v11 = (_DWORD *)W32GetThreadWin32Thread(v10);
    if ( v11 && PDEVOBJ::bAllowShareAccess(this) && (v11[13] || v11[14]) )
      v11[40] = 0;
    else
      *(_DWORD *)(*(_DWORD *)this + 936) = 0;
    goto LABEL_16;
  }
  if ( ThreadWin32Thread && PDEVOBJ::bAllowShareAccess(this) && (ThreadWin32Thread[13] || ThreadWin32Thread[14]) )
  {
    ThreadWin32Thread[40] = v24;
    ThreadWin32Thread[41] = gcModeChanges;
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)this + 936) = v24;
  }
  SETFLAG(512, v12, v14);
  v8 = 1;
  if ( (*(_BYTE *)(*(_DWORD *)this + 24) & 1) == 0 && XEPALOBJ::bEqualEntries(&v22, *(_DWORD *)(*(_DWORD *)this + 1112)) )
    SETFLAG(512, v13, v15);
  *v24 = *v22;
  HmgSetOwner(*v22, 0, 8);
  v23 = 1;
LABEL_14:
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v22);
  return v8;
}
