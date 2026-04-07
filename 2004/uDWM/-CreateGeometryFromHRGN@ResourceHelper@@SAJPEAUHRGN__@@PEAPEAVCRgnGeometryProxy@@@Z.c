/*
 * XREFs of ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18001CA40
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18001C460 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001CE70 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x18008472C (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x180014100 (--$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     memset_0 @ 0x180056082 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceHelper::CreateGeometryFromHRGN(HRGN hrgn, struct CRgnGeometryProxy **a2)
{
  struct _RGNDATA *v2; // rbx
  volatile signed __int32 *v3; // rax
  DWORD RegionData; // eax
  DWORD v7; // ebp
  struct _RGNDATA *v8; // rax
  int v9; // eax
  signed int v10; // ebp
  volatile signed __int32 *v11; // rcx
  volatile signed __int32 *v12; // rax
  int v14; // eax
  signed int LastError; // eax
  int v16; // r9d
  signed int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-78h]
  volatile signed __int32 *v19; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v20[2]; // [rsp+40h] [rbp-58h] BYREF
  int v21; // [rsp+60h] [rbp-38h]

  v2 = 0LL;
  v21 = 0;
  v3 = (volatile signed __int32 *)*a2;
  v19 = v3;
  memset(v20, 0, sizeof(v20));
  if ( v3 )
  {
    _InterlockedIncrement(v3 + 2);
  }
  else
  {
    v14 = CCompositor::CreateProxy<CRgnGeometryProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), &v19);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x69u);
      goto LABEL_12;
    }
  }
  if ( hrgn )
  {
    SetLastError(0);
    RegionData = GetRegionData(hrgn, 0, 0LL);
    v7 = RegionData;
    if ( !RegionData )
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      v18 = 110;
      if ( v10 >= 0 )
        v10 = -2003304445;
      v16 = v10;
      goto LABEL_34;
    }
    v8 = (struct _RGNDATA *)(*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                              WPF::g_pProcessHeap,
                              RegionData);
    v2 = v8;
    if ( !v8 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x71u);
      goto LABEL_12;
    }
    memset_0(v8, 0, v7);
    SetLastError(0);
    if ( !GetRegionData(hrgn, v7, v2) )
    {
      v17 = GetLastError();
      v10 = v17;
      if ( v17 > 0 )
        v10 = (unsigned __int16)v17 | 0x80070000;
      v18 = 121;
      if ( v10 >= 0 )
        v10 = -2003304445;
      v16 = v10;
      goto LABEL_34;
    }
  }
  else
  {
    v2 = (struct _RGNDATA *)v20;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, _QWORD))(**(_QWORD **)(*((_QWORD *)v19 + 2) + 16LL) + 1008LL))(
         *(_QWORD *)(*((_QWORD *)v19 + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)v19 + 2) + 24LL),
         v2->Buffer,
         v2->rdh.nCount);
  v10 = v9;
  if ( v9 < 0 )
  {
    v18 = 130;
    v16 = v9;
LABEL_34:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, v18);
    goto LABEL_12;
  }
  v11 = (volatile signed __int32 *)*a2;
  if ( *a2 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v11)(v11, 1LL);
  v12 = v19;
  *a2 = (struct CRgnGeometryProxy *)v19;
  _InterlockedIncrement(v12 + 2);
LABEL_12:
  if ( v19 && _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v19)(v19, 1LL);
  if ( v2 && v2 != (struct _RGNDATA *)v20 )
    (*(void (__fastcall **)(WPF::HeapBase *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v2);
  return (unsigned int)v10;
}
