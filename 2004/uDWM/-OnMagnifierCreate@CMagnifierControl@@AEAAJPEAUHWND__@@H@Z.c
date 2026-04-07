/*
 * XREFs of ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x18008C9A0
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008C3CC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _Init_thread_footer @ 0x1800537BC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18005382C (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x18008B3A8 (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x18008BFFC (--1MagnifierTableElement@CMagnifierControl@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x18008C078 (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x1800959FC (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierCreate(struct CVisual **this, HWND a2, int a3)
{
  struct _RTL_GENERIC_TABLE *v6; // rsi
  int IsMagnifier; // eax
  unsigned int v8; // edi
  int v9; // r9d
  HWND Ancestor; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  bool v13; // dl
  CVisual *v14; // rcx
  volatile signed __int32 *v15; // rbx
  unsigned int v17; // [rsp+20h] [rbp-20h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-10h] BYREF
  CBaseObject *v19; // [rsp+60h] [rbp+20h] BYREF

  if ( dword_1800E8010 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800E8010);
    if ( dword_1800E8010 == -1 )
    {
      dword_1800E7F44 = -2147023728;
      Init_thread_footer(&dword_1800E8010);
    }
  }
  v19 = 0LL;
  v6 = (struct _RTL_GENERIC_TABLE *)(this + 7);
  if ( CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
         (struct _RTL_GENERIC_TABLE *)(this + 7),
         (__int64)a2) )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E7F44, 1LL, -2147024809, 0x278u);
    return v8;
  }
  IsMagnifier = CMagnifier::Create(a2, a3, this[5], &v19);
  v8 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v17 = 603;
LABEL_7:
    v9 = IsMagnifier;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E7F44, 1LL, v9, v17);
    goto LABEL_21;
  }
  Ancestor = GetAncestor(a2, 2u);
  v11 = (*(__int64 (__fastcall **)(_QWORD, HWND))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 8LL))(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
          Ancestor);
  if ( !v11 || (v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11)) == 0 )
  {
    v8 = -2147023728;
    v17 = 621;
    v9 = -2147023728;
    goto LABEL_20;
  }
  v14 = *(CVisual **)(v12 + 384);
  if ( v14 )
  {
    IsMagnifier = CVisual::SetIsMagnifier(v14, v13);
    v8 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v17 = 614;
      goto LABEL_7;
    }
  }
  else
  {
    *(_BYTE *)(v12 + 611) |= 4u;
  }
  Buffer[0] = a2;
  v15 = (volatile signed __int32 *)v19;
  Buffer[1] = v19;
  if ( v19 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
    v15 = (volatile signed __int32 *)v19;
  }
  if ( !RtlInsertElementGenericTable(v6, Buffer, 0x10u, 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E7F44, 1LL, -2147024882, 0x272u);
    CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
    goto LABEL_22;
  }
  _InterlockedIncrement(v15 + 2);
  CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
LABEL_21:
  v15 = (volatile signed __int32 *)v19;
LABEL_22:
  if ( v15 )
    CBaseObject::Release((CBaseObject *)v15);
  return v8;
}
