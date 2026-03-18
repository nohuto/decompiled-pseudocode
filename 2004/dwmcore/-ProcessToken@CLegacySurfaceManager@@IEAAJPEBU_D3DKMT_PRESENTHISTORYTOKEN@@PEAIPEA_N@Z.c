/*
 * XREFs of ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x180040F7C
 * Callers:
 *     ?ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ @ 0x180040B80 (-ProcessSurfaceUpdates@CGlobalSurfaceManager@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z @ 0x18003F420 (-FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x18003F4BC (-NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18004108C (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x18017A574 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 *     McTemplateU0xxqNR2_EventWriteTransfer @ 0x18017A784 (McTemplateU0xxqNR2_EventWriteTransfer.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x18017A82C (McTemplateU0xxq_EventWriteTransfer.c)
 *     McTemplateU0xxxqNR3_EventWriteTransfer @ 0x18017A8B4 (McTemplateU0xxxqNR3_EventWriteTransfer.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        struct CGdiSpriteBitmap *a3,
        bool *a4)
{
  bool v4; // di
  int v6; // edx
  unsigned int v9; // esi
  int v10; // edx
  PVOID v11; // rax
  CGdiSpriteBitmap *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  unsigned __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  CGdiSpriteBitmap *v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  _QWORD Buffer[4]; // [rsp+40h] [rbp-38h] BYREF
  struct CGdiSpriteBitmap *v28; // [rsp+90h] [rbp+18h] BYREF

  v28 = a3;
  v4 = 0;
  v6 = *(_DWORD *)a2;
  *a4 = 0;
  v9 = 0;
  v10 = v6 - 1;
  if ( !v10 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xxqNR2_EventWriteTransfer(
        (_DWORD)this,
        0,
        *((_QWORD *)a2 + 2),
        *((_QWORD *)a2 + 3),
        *((_DWORD *)a2 + 14));
    Buffer[0] = *((_QWORD *)a2 + 2);
    v11 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    if ( v11 )
    {
      v12 = (CGdiSpriteBitmap *)*((_QWORD *)v11 + 2);
      if ( v12 )
      {
        v13 = CGdiSpriteBitmap::ProcessPresentHistoryToken(v12, a2);
        v9 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x8Bu, 0LL);
          return v9;
        }
      }
    }
    goto LABEL_7;
  }
  v16 = v10 - 1;
  if ( !v16 )
    goto LABEL_19;
  v17 = v16 - 1;
  if ( v17 )
  {
    v18 = v17 - 2;
    if ( !v18 )
    {
      v19 = (_QWORD *)*((_QWORD *)this + 26);
      if ( v19 && v19[7] == *((_QWORD *)a2 + 2) && *((_BYTE *)this + 220) )
      {
        (*(void (__fastcall **)(_QWORD *))(*v19 + 32LL))(v19);
        *((_BYTE *)this + 220) = 0;
        v4 = 1;
      }
      *a4 = v4;
      return v9;
    }
    if ( v18 == 1 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xxq_EventWriteTransfer(
          (_DWORD)this,
          (unsigned int)&EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_GDISYSMEM,
          *((_QWORD *)a2 + 2),
          *((_QWORD *)a2 + 4),
          *((_DWORD *)a2 + 6));
      CLogicalSurfaceHandleMap::FindBitmapNoRef(this, *((void **)a2 + 2), &v28);
      if ( v28 )
        CGdiSpriteBitmap::NotifyDirty(v28, *((_QWORD *)a2 + 4));
LABEL_7:
      *a4 = 1;
      return v9;
    }
LABEL_19:
    *a4 = 1;
    return v9;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xxxqNR3_EventWriteTransfer(
      (_DWORD)this,
      0,
      *((_QWORD *)a2 + 2),
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4),
      *((_DWORD *)a2 + 10));
  v20 = (_QWORD *)*((_QWORD *)this + 11);
  do
  {
    if ( v20 == (_QWORD *)((char *)this + 80) )
    {
      v21 = *((_QWORD *)a2 + 4);
      if ( v21 )
      {
        v22 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(this, v21);
        v9 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xACu, 0LL);
          return v9;
        }
      }
      goto LABEL_7;
    }
    v24 = (CGdiSpriteBitmap *)(v20 - 21);
    v20 = (_QWORD *)v20[1];
  }
  while ( *((_QWORD *)v24 + 56) != *((_QWORD *)a2 + 3) );
  v25 = CGdiSpriteBitmap::ProcessPresentHistoryToken(v24, a2);
  v9 = v25;
  if ( v25 >= 0 )
    goto LABEL_7;
  MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xA1u, 0LL);
  return v9;
}
