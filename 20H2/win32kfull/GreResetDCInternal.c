/*
 * XREFs of GreResetDCInternal @ 0x1C014F87C
 * Callers:
 *     NtGdiResetDC @ 0x1C014F730 (NtGdiResetDC.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x1C0016DD8 (_tlgKeywordOn.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C011C2B0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreResetDCInternal(HDC a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  HDC v5; // r14
  int *v6; // r13
  BOOL v7; // esi
  int v8; // r15d
  HDC v9; // r12
  unsigned int v10; // edi
  DC *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  DC *v15; // rcx
  __int64 v16; // rbx
  DC *v17; // rax
  int v18; // r13d
  BOOL v19; // r14d
  HDC v20; // rax
  DC *v21; // rdx
  void (__fastcall *v22)(_QWORD, _QWORD); // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  bool v25; // zf
  int v27; // [rsp+28h] [rbp-51h]
  int v28; // [rsp+58h] [rbp-21h] BYREF
  int v29; // [rsp+5Ch] [rbp-1Dh] BYREF
  __int64 v30; // [rsp+60h] [rbp-19h] BYREF
  DC *v31[2]; // [rsp+68h] [rbp-11h] BYREF
  DC *v32[10]; // [rsp+78h] [rbp-1h] BYREF

  v5 = a1;
  v6 = a3;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v32, a1);
  v11 = v32[0];
  if ( !v32[0] )
  {
LABEL_6:
    EngSetLastError(6u);
LABEL_7:
    v15 = v32[0];
    goto LABEL_8;
  }
  if ( *((_WORD *)v32[0] + 6) > 1u )
  {
    if ( (unsigned int)dword_1C032A3F8 > 5 && tlgKeywordOn((__int64)&dword_1C032A3F8, 0x400000000000LL) )
    {
      v28 = 0;
      v29 = v14;
      v31[0] = (DC *)0x1000000;
      LODWORD(v30) = 67261;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v12,
        (int)&unk_1C02F2AEF,
        v13,
        v14,
        (__int64)&v30,
        (__int64)v31,
        (__int64)&v29,
        (__int64)&v28);
    }
    goto LABEL_6;
  }
  v8 = *((_DWORD *)v32[0] + 9) & 0x800;
  if ( v8 )
  {
    DC::bMakeInfoDC(v32[0], 0);
    v11 = v32[0];
  }
  v16 = *((_QWORD *)v11 + 6);
  v17 = *(DC **)(v16 + 1712);
  *(_QWORD *)(v16 + 1712) = 0LL;
  v15 = v32[0];
  v31[0] = v17;
  if ( (*((_DWORD *)v32[0] + 9) & 0x100) == 0 && *((_DWORD *)v32[0] + 8) != 1 && (*(_DWORD *)(v16 + 40) & 0x80u) != 0 )
  {
    v18 = *((_DWORD *)v32[0] + 27);
    v19 = *((_QWORD *)v32[0] + 62) != 0LL;
    v7 = v19;
    if ( XDCOBJ::bCleanDC((XDCOBJ *)v32, 0) )
    {
      if ( *(_DWORD *)(v16 + 8) == 1 )
      {
        v20 = (HDC)hdcOpenDCW(&word_1C02E436C, a2, 0LL, 0LL, *(_QWORD *)(v16 + 2560), v31[0], a4, a5, 0);
        v9 = v20;
        if ( v20 )
        {
          *(_QWORD *)(v16 + 2560) = 0LL;
          DCOBJ::DCOBJ((DCOBJ *)v31, v20);
          v21 = v31[0];
          if ( v31[0] )
          {
            if ( v18 > 0 )
            {
              *((_DWORD *)v31[0] + 27) = *((_DWORD *)v31[0] + 26);
              v21 = v31[0];
            }
            *((_QWORD *)v21 + 257) = *((_QWORD *)v32[0] + 257);
            *((_QWORD *)v32[0] + 257) = 0LL;
            *((_QWORD *)v31[0] + 258) = *((_QWORD *)v32[0] + 258);
            *((_QWORD *)v32[0] + 258) = 0LL;
            v22 = *(void (__fastcall **)(_QWORD, _QWORD))(v16 + 2744);
            if ( v22 )
              v22(*(_QWORD *)(v16 + 1800), *(_QWORD *)(*((_QWORD *)v31[0] + 6) + 1800LL));
            GreAcquireHmgrSemaphore();
            LOBYTE(v27) = 1;
            HmgSwapLockedHandleContents(a1, 0LL, v9, 0LL, v27);
            GreReleaseHmgrSemaphore();
            v10 = 1;
          }
          else
          {
            EngSetLastError(6u);
          }
          v7 = v19;
          if ( v31[0] )
            XDCOBJ::vUnlockFast((XDCOBJ *)v31);
        }
      }
    }
    v5 = a1;
    v6 = a3;
    goto LABEL_7;
  }
LABEL_8:
  if ( v15 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v32);
  if ( v10 )
  {
    bDeleteDCInternal(v9, 1LL, 0LL);
    DCOBJ::DCOBJ((DCOBJ *)v31, v5);
    if ( !v31[0] )
    {
      EngSetLastError(6u);
LABEL_13:
      v10 = 0;
LABEL_43:
      if ( v31[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v31);
      return v10;
    }
    v30 = *((_QWORD *)v31[0] + 6);
    if ( v7 )
    {
      if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)&v30, 0LL) )
        goto LABEL_13;
      DC::pSurface(v31[0], *(struct SURFACE **)(v30 + 2552));
      v23 = v30;
      v24 = *(_QWORD *)(v30 + 2552);
      v25 = (*(_DWORD *)(v24 + 112) & 0x2000000) == 0;
      *v6 = *(_DWORD *)(v24 + 112) & 0x2000000;
      if ( !v25 )
      {
        *((_QWORD *)v31[0] + 64) = *(_QWORD *)(*(_QWORD *)(v23 + 2552) + 56LL);
        DC::bSetDefaultRegion(v31[0]);
        v23 = v30;
      }
      if ( *(_QWORD *)(v23 + 2968) )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v23 + 2968))(
          (*(_QWORD *)(v23 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v23 + 2552) != 0LL),
          0LL,
          0LL);
      else
        v10 = 0;
    }
    else
    {
      *v6 = 0;
    }
    if ( v10 && v8 )
      DC::bMakeInfoDC(v31[0], 1);
    goto LABEL_43;
  }
  return v10;
}
