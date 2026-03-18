/*
 * XREFs of ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180081B1C
 * Callers:
 *     ?ProcessUnclaimedTokens@CLegacySurfaceManager@@IEAAJPEAI@Z @ 0x18008184C (-ProcessUnclaimedTokens@CLegacySurfaceManager@@IEAAJPEAI@Z.c)
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x1800819E0 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x18000E810 (-NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180081D5C (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180082730 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z @ 0x1800E6AD4 (-FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x1801B948C (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 *     McTemplateU0xxqNR2_EventWriteTransfer @ 0x1801B9600 (McTemplateU0xxqNR2_EventWriteTransfer.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x1801B96A8 (McTemplateU0xxq_EventWriteTransfer.c)
 *     McTemplateU0xxxqNR3_EventWriteTransfer @ 0x1801B9730 (McTemplateU0xxxqNR3_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        unsigned int *a3,
        bool *a4)
{
  bool v4; // di
  unsigned int v8; // r12d
  const struct tagRECT *v9; // r15
  PVOID v10; // rax
  CGdiSpriteBitmap *v11; // rsi
  unsigned int v12; // r8d
  int v13; // eax
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  CGdiSpriteBitmap *v17; // r15
  unsigned int v18; // r8d
  int v19; // eax
  unsigned __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rcx
  struct CGdiSpriteBitmap *v23; // [rsp+40h] [rbp-59h] BYREF
  _QWORD Buffer[3]; // [rsp+48h] [rbp-51h] BYREF
  _DWORD *v25; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v26[18]; // [rsp+68h] [rbp-31h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  v4 = 0;
  *a4 = 0;
  v8 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v9 = (const struct tagRECT *)((char *)a2 + 60);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xxqNR2_EventWriteTransfer(
          *(_DWORD *)a2 - 1,
          (_DWORD)a2,
          *((_QWORD *)a2 + 2),
          *((_QWORD *)a2 + 3),
          *((_DWORD *)a2 + 14));
      Buffer[0] = *((_QWORD *)a2 + 2);
      v10 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
      if ( v10 )
      {
        v11 = (CGdiSpriteBitmap *)*((_QWORD *)v10 + 2);
        if ( v11 )
        {
          v12 = *((_DWORD *)a2 + 14);
          v25 = v26;
          v26[0] = 0;
          v13 = CRegion::TryAddRectangles((CRegion *)&v25, v9, v12);
          if ( v13 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v13, retaddr);
          CGdiSpriteBitmap::AddDirtyRegion(v11, (struct CRegion *)&v25, 1);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v25);
        }
      }
LABEL_8:
      *a4 = 1;
      return v8;
    case 2:
LABEL_20:
      *a4 = 1;
      return v8;
    case 3:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xxxqNR3_EventWriteTransfer(
          0,
          (_DWORD)a2,
          *((_QWORD *)a2 + 2),
          *((_QWORD *)a2 + 3),
          *((_QWORD *)a2 + 4),
          *((_DWORD *)a2 + 10));
      v16 = (_QWORD *)*((_QWORD *)this + 11);
      while ( v16 != (_QWORD *)((char *)this + 80) )
      {
        v17 = (CGdiSpriteBitmap *)(v16 - 19);
        v16 = (_QWORD *)v16[1];
        if ( *((_QWORD *)v17 + 49) == *((_QWORD *)a2 + 3) )
        {
          v18 = *((_DWORD *)a2 + 10);
          v25 = v26;
          v26[0] = 0;
          v19 = CRegion::TryAddRectangles((CRegion *)&v25, (const struct tagRECT *)((char *)a2 + 44), v18);
          if ( v19 < 0 )
            ModuleFailFastForHRESULT((unsigned int)v19, retaddr);
          CGdiSpriteBitmap::AddDirtyRegion(v17, (struct CRegion *)&v25, 1);
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v25);
          break;
        }
      }
      v20 = *((_QWORD *)a2 + 4);
      if ( v20 )
      {
        v21 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(this, v20);
        v8 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0xB5u);
          return v8;
        }
      }
      goto LABEL_8;
  }
  if ( *(_DWORD *)a2 != 5 )
  {
    if ( *(_DWORD *)a2 == 6 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xxq_EventWriteTransfer(
          1,
          (unsigned int)&EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_GDISYSMEM,
          *((_QWORD *)a2 + 2),
          *((_QWORD *)a2 + 4),
          *((_DWORD *)a2 + 6));
      CLogicalSurfaceHandleMap::FindBitmapNoRef(this, *((void **)a2 + 2), &v23);
      if ( v23 )
        CGdiSpriteBitmap::NotifyDirty(v23, *((_QWORD *)a2 + 4));
      goto LABEL_8;
    }
    goto LABEL_20;
  }
  v15 = (_QWORD *)*((_QWORD *)this + 26);
  if ( v15 && v15[7] == *((_QWORD *)a2 + 2) && *((_BYTE *)this + 220) )
  {
    (*(void (__fastcall **)(_QWORD *, const struct _D3DKMT_PRESENTHISTORYTOKEN *, unsigned int *))(*v15 + 40LL))(
      v15,
      a2,
      a3);
    *((_BYTE *)this + 220) = 0;
    v4 = 1;
  }
  *a4 = v4;
  return v8;
}
