/*
 * XREFs of ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0141AB8
 * Callers:
 *     NtGdiStartDoc @ 0x1C01413D0 (NtGdiStartDoc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x1C0016DD8 (_tlgKeywordOn.c)
 *     GreExtEscape @ 0x1C008BEF0 (GreExtEscape.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00A4750 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C00A5340 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011C2B0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0141F4C (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0141F8C (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0141FB4 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?Feature_MSRC74780_RejectRecursiveNtGdiStarDoc__private_IsEnabled@@YAHXZ @ 0x1C015D5CC (-Feature_MSRC74780_RejectRecursiveNtGdiStarDoc__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0287DA0 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreStartDocInternal(HDC a1, struct _DOCINFOW *a2, int *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  __int16 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // r9
  __int64 v15; // r10
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 (__fastcall *v21)(__int64, LPCWSTR, _QWORD); // rdi
  struct _EPROCESS *CurrentProcess; // rax
  int v23; // edi
  DC *v24; // rcx
  char v26[8]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h] BYREF
  int v28; // [rsp+50h] [rbp-20h] BYREF
  XDCOBJ *v29; // [rsp+58h] [rbp-18h] BYREF
  DC *v30[2]; // [rsp+60h] [rbp-10h] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v30, a1);
  if ( (unsigned int)Feature_MSRC74780_RejectRecursiveNtGdiStarDoc__private_IsEnabled()
    && SURFREF::bValid((SURFREF *)v30)
    && *(_WORD *)(v10 + 12) != v9 )
  {
    if ( (unsigned int)dword_1C032A3F8 > 5 && tlgKeywordOn((__int64)&dword_1C032A3F8, 0x400000000000LL) )
    {
      *(_DWORD *)v26 = 0;
      LODWORD(v27) = v13;
      v29 = (XDCOBJ *)0x1000000;
      v28 = 74780;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v11,
        (int)&unk_1C02F2AEF,
        v12,
        v13,
        (__int64)&v28,
        (__int64)&v29,
        (__int64)&v27,
        (__int64)v26);
    }
    goto LABEL_15;
  }
  if ( SURFREF::bValid((SURFREF *)v30)
    && ((unsigned int)a1 & 0x7F0000) != 0x10000
    && ((unsigned int)a1 & 0x7F0000) != 0x660000 )
  {
    v16 = *(_QWORD *)(v15 + 48);
    v27 = v16;
    v17 = *(_DWORD *)(v16 + 40);
    if ( ((unsigned __int8)v17 & v14) == 0
      && *(_QWORD *)(v16 + 2560)
      && !*(_DWORD *)(v15 + 32)
      && !*(_QWORD *)(v15 + 496) )
    {
      if ( (v17 & 0x8000) == 0 )
      {
LABEL_15:
        v8 = -1;
        goto LABEL_38;
      }
      if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v27, 0LL) )
      {
        v18 = v27;
        *a3 = *(_DWORD *)(*(_QWORD *)(v27 + 2552) + 112LL) & 0x2000000;
        DC::pSurface(v30[0], *(struct SURFACE **)(v18 + 2552));
        if ( *a3 )
        {
          *((_QWORD *)v30[0] + 64) = *(_QWORD *)(*(_QWORD *)(v27 + 2552) + 56LL);
          DC::bSetDefaultRegion(v30[0]);
        }
        v29 = 0LL;
        v21 = *(__int64 (__fastcall **)(__int64, LPCWSTR, _QWORD))(v27 + 2968);
        if ( (*(_DWORD *)(v27 + 40) & 0x8000) != 0 )
        {
          v29 = (XDCOBJ *)v30;
          if ( (*((_DWORD *)v30[0] + 11) & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v30);
            *((_DWORD *)v30[0] + 11) &= ~2u;
          }
        }
        if ( gUMPDSecurityLevel == 2
          || gUMPDSecurityLevel
          && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v19, v20),
              (unsigned int)bIsProcessLocalSystem(CurrentProcess))
          || v21 )
        {
          v23 = v21((*(_QWORD *)(v27 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v27 + 2552) != 0LL), a2->lpszDocName, a4);
        }
        else
        {
          if ( gfUMPDDebug )
            DbgPrint(
              "clientcore\\windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreStartDocInternal:!pfnDrvstartDoc\n",
              1733);
          v23 = 0;
        }
        RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v29);
        v24 = v30[0];
        if ( *((_DWORD *)v30[0] + 519) != -1 )
        {
          v28 = *((_DWORD *)v30[0] + 519);
          GreExtEscape(a1, 17, 4, (char *)&v28, 0, 0LL);
          *((_DWORD *)v30[0] + 519) = -1;
          v24 = v30[0];
        }
        if ( (*((_DWORD *)v24 + 9) & 0x400) != 0 )
        {
          *(_WORD *)v26 = 1;
          GreExtEscape(a1, 33, 2, v26, 0, 0LL);
          *((_DWORD *)v30[0] + 9) &= ~0x400u;
          v24 = v30[0];
        }
        if ( v23 )
        {
          v8 = a4;
          *((_DWORD *)v24 + 27) = *((_DWORD *)v24 + 26);
        }
        if ( v29 )
          XDCOBJ::vSaveAttributesAlways(v29);
      }
    }
  }
LABEL_38:
  DCOBJ::~DCOBJ((DCOBJ *)v30);
  return v8;
}
