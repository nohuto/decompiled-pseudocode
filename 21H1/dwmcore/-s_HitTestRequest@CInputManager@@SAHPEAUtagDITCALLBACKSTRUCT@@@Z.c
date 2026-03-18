/*
 * XREFs of ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180034B70
 * Callers:
 *     ?HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180034B50 (-HitTestRequest@CInputProxy@@UEAA_NPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180034D74 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1800352B8 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18003531C (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x180035590 (-CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ.c)
 *     ?CopyInputTransform@@YAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1800C4684 (-CopyInputTransform@@YAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqppxffffffffffffffff_EventWriteTransfer @ 0x180223778 (McTemplateU0qqppxffffffffffffffff_EventWriteTransfer.c)
 *     McTemplateU0qqxq_EventWriteTransfer @ 0x180223984 (McTemplateU0qqxq_EventWriteTransfer.c)
 */

_BOOL8 __fastcall CInputManager::s_HitTestRequest(struct tagDITCALLBACKSTRUCT *a1)
{
  int v2; // edx
  int v3; // eax
  int v4; // edi
  __int64 v5; // rax
  unsigned int v6; // eax
  CHitTestContext *v7; // rsi
  CRenderTargetBitmap *v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  CRenderTargetBitmap *v20; // [rsp+C8h] [rbp-80h] BYREF
  int v21; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v22; // [rsp+E0h] [rbp-68h]
  int v23; // [rsp+E8h] [rbp-60h]
  __int64 v24; // [rsp+F0h] [rbp-58h]
  __int128 v25; // [rsp+F8h] [rbp-50h]
  __int128 v26; // [rsp+108h] [rbp-40h] BYREF
  __int128 v27; // [rsp+118h] [rbp-30h]
  __int128 v28; // [rsp+128h] [rbp-20h]
  __int128 v29; // [rsp+138h] [rbp-10h]
  int v30; // [rsp+148h] [rbp+0h]
  int v31; // [rsp+14Ch] [rbp+4h]
  char v32; // [rsp+150h] [rbp+8h]
  _QWORD v33[2]; // [rsp+158h] [rbp+10h] BYREF
  int v34; // [rsp+168h] [rbp+20h]
  int v35; // [rsp+16Ch] [rbp+24h]
  int v36; // [rsp+170h] [rbp+28h]
  _BYTE v37[48]; // [rsp+178h] [rbp+30h] BYREF

  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v37, "HitTest", 0LL);
  v3 = *((_DWORD *)a1 + 10);
  v4 = 1;
  v30 = 0;
  v23 = 0;
  v24 = 0LL;
  v31 = 0;
  v25 = 0LL;
  v26 = _xmm;
  v21 = v3;
  v5 = *((_QWORD *)a1 + 4);
  v27 = _xmm;
  v28 = _xmm;
  v22 = v5;
  v32 = 0;
  v29 = _xmm;
  LOWORD(v30) = 32085;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    McTemplateU0qqxq_EventWriteTransfer(
      *((_DWORD *)a1 + 31),
      v2,
      *((_DWORD *)a1 + 1),
      *((_DWORD *)a1 + 2),
      *((_DWORD *)a1 + 31),
      *((_DWORD *)a1 + 30));
  if ( !CInputManager::s_pInputManager )
    goto LABEL_14;
  v6 = *((_DWORD *)a1 + 30);
  v7 = (struct CInputManager *)((char *)CInputManager::s_pInputManager + 80);
  if ( !v6 && (*((_DWORD *)a1 + 31) || *((_DWORD *)a1 + 32)) )
  {
    v8 = *(CRenderTargetBitmap **)((char *)a1 + 124);
  }
  else
  {
    v20 = (CRenderTargetBitmap *)(v6 | 0xFFFFFFFE00000000uLL);
    v8 = v20;
  }
  v9 = (__int64 *)*((_QWORD *)CInputManager::s_pInputManager + 2);
  v10 = *v9;
  v20 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, CRenderTargetBitmap *, CRenderTargetBitmap **))(v10 + 32))(v9, v8, &v20);
  v4 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, &dword_1802DDBB0, 2u, v11, 0x125u, 0LL);
  }
  else
  {
    v13 = CDesktopTree::CleanTreeAndLockForRead(v20);
    v4 = v13;
    if ( v13 >= 0 )
    {
      v33[0] = v20;
      v33[1] = *(_QWORD *)((char *)a1 + 4);
      v34 = *(_DWORD *)a1;
      v35 = *((_DWORD *)a1 + 29);
      v36 = *((_DWORD *)a1 + 30);
      v15 = CHitTestContext::HitTestPoint(
              v7,
              (const struct CHitTestContext::HitTestPointRequest *)v33,
              (struct CHitTestContext::HitTestPointResult *)&v21);
      v4 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, &dword_1802DDBB0, 2u, v15, 0x132u, 0LL);
      ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)v20 + 2) + 520LL));
      if ( v20 )
        CRenderTargetBitmap::Release(v20);
LABEL_14:
      v17 = v24;
      *((_DWORD *)a1 + 28) &= ~1u;
      v18 = v25;
      *((_QWORD *)a1 + 2) = v17;
      *((_DWORD *)a1 + 27) = v31;
      LODWORD(v17) = v32 & 1;
      *((_QWORD *)a1 + 3) = v18;
      *((_DWORD *)a1 + 28) |= v17;
      *((_DWORD *)a1 + 10) = v23;
      if ( v18 )
        CopyInputTransform((const struct CMILMatrix *)&v26, (struct tagDITCALLBACKSTRUCT *)((char *)a1 + 44));
      goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802DDBB0, 2u, v13, 0x128u, 0LL);
  }
  if ( v20 )
    CRenderTargetBitmap::Release(v20);
LABEL_16:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    McTemplateU0qqppxffffffffffffffff_EventWriteTransfer(
      DWORD2(v25),
      v2,
      *((_DWORD *)a1 + 1),
      *((_DWORD *)a1 + 2),
      *((_QWORD *)a1 + 2),
      *((_QWORD *)a1 + 3),
      SBYTE8(v25),
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
      SBYTE12(v28),
      v29,
      SBYTE4(v29),
      SBYTE8(v29),
      SBYTE12(v29));
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v37);
  return v4 >= 0;
}
