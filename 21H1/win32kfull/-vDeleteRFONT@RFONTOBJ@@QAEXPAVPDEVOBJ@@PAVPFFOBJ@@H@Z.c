/*
 * XREFs of ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924
 * Callers:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z @ 0x8D4E8 (-bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z.c)
 *     vKillEudcRFONTs @ 0xCDC40 (vKillEudcRFONTs.c)
 *     _RFONTOBJ_vDeleteRFONTWrap@16 @ 0xD090A (_RFONTOBJ_vDeleteRFONTWrap@16.c)
 *     vKillRFONTList @ 0x1D0F5D (vKillRFONTList.c)
 *     ?vRestartKillEudcRFONTs@@YGXPAVRFONT@@@Z @ 0x1D0FC5 (-vRestartKillEudcRFONTs@@YGXPAVRFONT@@@Z.c)
 *     ?RestartInactiveHelper@@YGXPAVRFONT@@@Z @ 0x208EC3 (-RestartInactiveHelper@@YGXPAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YGXPAPAVRFONT@@@Z @ 0x209D83 (-vRestartRemoveAllInactiveRFONTs@@YGXPAPAVRFONT@@@Z.c)
 *     _vRemoveAllInactiveRFONTs@4 @ 0x209F01 (_vRemoveAllInactiveRFONTs@4.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QAEXXZ @ 0x8404C (-vFreepfdg@PFEOBJ@@QAEXXZ.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x96A1A (--1NEEDDYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QAE@H@Z @ 0x96A40 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QAE@H@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z @ 0xA3954 (-vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QAEXXZ @ 0xACDB4 (-vDeleteRFONTRef@PFFOBJ@@QAEXXZ.c)
 *     ?vDeleteCache@RFONTOBJ@@QAEXXZ @ 0xD0ABC (-vDeleteCache@RFONTOBJ@@QAEXXZ.c)
 *     ?cInactive@PDEVOBJ@@QAEII@Z @ 0xD0B3A (-cInactive@PDEVOBJ@@QAEII@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0xD0B62 (-prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z.c)
 *     ?DestroyFont@PDEVOBJ@@QAEXPAU_FONTOBJ@@@Z @ 0xD0B8E (-DestroyFont@PDEVOBJ@@QAEXPAU_FONTOBJ@@@Z.c)
 *     ?Free@?$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z @ 0xD1070 (-Free@-$CTypeIsolation@$0DFAAA@$0DEI@@NSInstrumentation@@IAEXPAX@Z.c)
 */

void __thiscall RFONTOBJ::vDeleteRFONT(struct _FONTOBJ **this, struct PDEVOBJ *a2, struct PFFOBJ *a3, struct RFONT *a4)
{
  struct RFONT *v5; // edi
  struct _FONTOBJ *v6; // ecx
  struct _FONTOBJ *v7; // edx
  LONG cy; // eax
  bool v9; // bl
  struct RFONT *v10; // eax
  int v11; // eax
  int v12; // eax
  struct _FONTOBJ *v13; // eax
  int *pvConsumer; // [esp+10h] [ebp-Ch] BYREF
  int v15; // [esp+14h] [ebp-8h] BYREF
  LONG cx; // [esp+18h] [ebp-4h] BYREF

  v5 = a4;
  v6 = *this;
  v7 = v6;
  pvConsumer = (int *)v6[1].pvConsumer;
  cx = v6[1].sizLogResPpi.cx;
  if ( *(_DWORD *)(cx + 2072) && a4 )
  {
    PDEVOBJ::DestroyFont((PDEVOBJ *)&cx, v6);
    v7 = *this;
  }
  cy = v7[1].sizLogResPpi.cy;
  if ( cy )
  {
    a4 = (struct RFONT *)v7[1].sizLogResPpi.cy;
    v9 = (*(_DWORD *)(cy + 24) & 1) != 0 && *(_DWORD *)(cy + 4);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&v15,
      *(_DWORD *)(cy + 24) & 1);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&cx, (struct PDEVOBJ *)&a4);
    if ( v9 )
    {
      GreAcquireSemaphore(*((_DWORD *)a4 + 8));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoCon.hsemDevLock()", *((_DWORD *)a4 + 8), 11);
    }
    v10 = a4;
    if ( *((_DWORD *)a4 + 518) && v5 )
    {
      PDEVOBJ::DestroyFont((PDEVOBJ *)&a4, *this);
      v10 = a4;
    }
    if ( v9 )
    {
      EtwTraceGreLockReleaseSemaphore(L"pdoCon.hsemDevLock()", *((_DWORD *)v10 + 8));
      GreReleaseSemaphoreInternal(*((_DWORD *)a4 + 8));
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&cx);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&v15);
  }
  v15 = _ghsemRFONTList;
  GreAcquireSemaphore(_ghsemRFONTList);
  if ( a2 )
  {
    v11 = *(_DWORD *)a2;
    if ( (*(_DWORD *)(*(_DWORD *)a2 + 24) & 0x800000) != 0 )
      v11 = *(_DWORD *)(v11 + 2316);
    a4 = *(struct RFONT **)(v11 + 944);
    RFONTOBJ::vRemove(this, &a4, 1);
    PDEVOBJ::prfntInactive(a2, a4);
    v12 = *(_DWORD *)a2;
    if ( (*(_DWORD *)(*(_DWORD *)a2 + 24) & 0x800000) != 0 )
      v12 = *(_DWORD *)(v12 + 2316);
    PDEVOBJ::cInactive(a2, *(_DWORD *)(v12 + 948) - 1);
  }
  if ( a3 )
  {
    a4 = *(struct RFONT **)(*(_DWORD *)a3 + 52);
    RFONTOBJ::vRemove(this, &a4, 0);
    *(_DWORD *)(*(_DWORD *)a3 + 52) = a4;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  PFEOBJ::vFreepfdg(&pvConsumer);
  if ( a3 )
    PFFOBJ::vDeleteRFONTRef(a3);
  RFONTOBJ::vDeleteCache((RFONTOBJ *)this);
  v13 = *this;
  if ( (*this)[15].sizLogResPpi.cy )
  {
    Win32FreePool((*this)[15].sizLogResPpi.cy);
    v13 = *this;
  }
  if ( v13[17].pvProducer )
  {
    GreDeleteSemaphore(v13[17].pvProducer);
    v13 = *this;
  }
  GreDeleteSemaphore(v13[12].iFile);
  if ( gpTypeIsolation[5] )
    NSInstrumentation::CTypeIsolation<217088,840>::Free(*this);
  *this = 0;
}
