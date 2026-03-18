/*
 * XREFs of ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18002AC70
 * Callers:
 *     ?HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18002AC50 (-HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x18002AE94 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18002B370 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18002B3D4 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x18002B65C (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 *     ?CopyInputTransform@@YAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x18002BB54 (-CopyInputTransform@@YAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x1800B1804 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqxq_EventWriteTransfer @ 0x180111866 (McTemplateU0qqxq_EventWriteTransfer.c)
 *     McTemplateU0qqppxffffffffffffffff_EventWriteTransfer @ 0x180181158 (McTemplateU0qqppxffffffffffffffff_EventWriteTransfer.c)
 */

_BOOL8 __fastcall CInputManager::s_HitTestRequest(struct tagDITCALLBACKSTRUCT *a1)
{
  int v2; // edx
  int v3; // eax
  int v4; // edi
  unsigned int v5; // edx
  CHitTestContext *v6; // rsi
  CResource *v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rcx
  CResource *v19; // [rsp+C8h] [rbp-80h] BYREF
  int v20; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-68h]
  int v22; // [rsp+E8h] [rbp-60h]
  __int64 v23; // [rsp+F0h] [rbp-58h]
  __int128 v24; // [rsp+F8h] [rbp-50h]
  __int128 v25; // [rsp+108h] [rbp-40h] BYREF
  __int128 v26; // [rsp+118h] [rbp-30h]
  __int128 v27; // [rsp+128h] [rbp-20h]
  __int128 v28; // [rsp+138h] [rbp-10h]
  int v29; // [rsp+148h] [rbp+0h]
  int v30; // [rsp+14Ch] [rbp+4h]
  char v31; // [rsp+150h] [rbp+8h]
  _QWORD v32[2]; // [rsp+158h] [rbp+10h] BYREF
  int v33; // [rsp+168h] [rbp+20h]
  int v34; // [rsp+16Ch] [rbp+24h]
  int v35; // [rsp+170h] [rbp+28h]
  _BYTE v36[48]; // [rsp+178h] [rbp+30h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v36, "HitTest", 0LL);
  v29 = 0;
  v3 = *((_DWORD *)a1 + 32);
  v4 = 1;
  v22 = 0;
  v23 = 0LL;
  v30 = 0;
  v20 = v3;
  v21 = *((_QWORD *)a1 + 15);
  v24 = 0LL;
  v25 = _xmm;
  v26 = _xmm;
  v31 = 0;
  v27 = _xmm;
  v28 = _xmm;
  LOWORD(v29) = 5973;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
    McTemplateU0qqxq_EventWriteTransfer(
      *((_DWORD *)a1 + 28),
      v2,
      *((_DWORD *)a1 + 1),
      *((_DWORD *)a1 + 2),
      *((_DWORD *)a1 + 28),
      *((_DWORD *)a1 + 27));
  if ( !CInputManager::s_pInputManager )
    goto LABEL_14;
  v5 = *((_DWORD *)a1 + 27);
  v6 = (struct CInputManager *)((char *)CInputManager::s_pInputManager + 80);
  if ( v5 || *((_DWORD *)a1 + 28) == g_luidZero.LowPart && *((_DWORD *)a1 + 29) == g_luidZero.HighPart )
  {
    v19 = (CResource *)(v5 | 0xFFFFFFFE00000000uLL);
    v7 = v19;
  }
  else
  {
    v7 = (CResource *)*((_QWORD *)a1 + 14);
  }
  v8 = (__int64 *)*((_QWORD *)CInputManager::s_pInputManager + 2);
  v9 = *v8;
  v19 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64 *, CResource *, CResource **))(v9 + 56))(v8, v7, &v19);
  v4 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180345778, 2u, v10, 0x125u, 0LL);
  }
  else
  {
    v12 = CDesktopTree::CleanTreeAndLockForRead(v19);
    v4 = v12;
    if ( v12 >= 0 )
    {
      v32[0] = v19;
      v32[1] = *(_QWORD *)((char *)a1 + 4);
      v33 = *(_DWORD *)a1;
      v34 = *((_DWORD *)a1 + 26);
      v35 = *((_DWORD *)a1 + 27);
      v14 = CHitTestContext::HitTestPoint(
              v6,
              (const struct CHitTestContext::HitTestPointRequest *)v32,
              (struct CHitTestContext::HitTestPointResult *)&v20);
      v4 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_180345778, 2u, v14, 0x132u, 0LL);
      ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v19 + 2) + 672LL));
      if ( v19 )
        CResource::InternalRelease(v19);
LABEL_14:
      v16 = v23;
      *((_DWORD *)a1 + 25) &= ~1u;
      v17 = v24;
      *((_QWORD *)a1 + 2) = v16;
      *((_DWORD *)a1 + 24) = v30;
      LODWORD(v16) = v31 & 1;
      *((_QWORD *)a1 + 3) = v17;
      *((_DWORD *)a1 + 25) |= v16;
      *((_DWORD *)a1 + 32) = v22;
      if ( v17 )
        CopyInputTransform((const struct CMILMatrix *)&v25, (struct tagDITCALLBACKSTRUCT *)((char *)a1 + 32));
      goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180345778, 2u, v12, 0x128u, 0LL);
  }
  if ( v19 )
    CResource::InternalRelease(v19);
LABEL_16:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
    McTemplateU0qqppxffffffffffffffff_EventWriteTransfer(
      DWORD2(v24),
      v2,
      *((_DWORD *)a1 + 1),
      *((_DWORD *)a1 + 2),
      *((_QWORD *)a1 + 2),
      *((_QWORD *)a1 + 3),
      SBYTE8(v24),
      v25,
      SBYTE4(v25),
      SBYTE8(v25),
      SBYTE12(v25),
      v26,
      SBYTE4(v26),
      SBYTE8(v26),
      SBYTE12(v26),
      v27,
      SBYTE4(v27),
      SBYTE8(v27),
      SBYTE12(v27),
      v28,
      SBYTE4(v28),
      SBYTE8(v28),
      SBYTE12(v28));
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v36);
  return v4 >= 0;
}
