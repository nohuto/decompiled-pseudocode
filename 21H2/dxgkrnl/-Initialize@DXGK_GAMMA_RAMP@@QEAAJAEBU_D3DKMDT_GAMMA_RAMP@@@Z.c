/*
 * XREFs of ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0012DD8
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C006A0E8 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1C01B4978 (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1C01C4724 (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C0012E74 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_GAMMA_RAMP::Initialize(DXGK_GAMMA_RAMP *this, const struct _D3DKMDT_GAMMA_RAMP *a2)
{
  unsigned __int64 SizeFromGammaRampType; // rax
  __int64 v5; // r9
  SIZE_T DataSize; // r8
  void *v7; // rax
  size_t v8; // r8
  int v10; // edx
  D3DDDI_GAMMARAMP_TYPE v11; // ecx
  int v12; // r8d
  const wchar_t *v13; // rax
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 Type; // [rsp+38h] [rbp-30h]
  SIZE_T v20; // [rsp+40h] [rbp-28h]
  __int64 v21; // [rsp+48h] [rbp-20h]

  if ( (unsigned int)(a2->Type - 1) > 4 )
  {
    WdLogSingleEntry1(2LL, a2->Type);
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      return 3221225485LL;
    v21 = 0LL;
    v20 = 0LL;
    Type = a2->Type;
    v13 = L"Caller specified gamma ramp has invalid gamma type 0x%I64x.";
    goto LABEL_11;
  }
  SizeFromGammaRampType = GetSizeFromGammaRampType(a2->Type);
  *((_QWORD *)this + 3) = SizeFromGammaRampType;
  DataSize = a2->DataSize;
  if ( SizeFromGammaRampType != DataSize )
  {
    WdLogSingleEntry3(2LL, a2->Type, DataSize, -1073741811LL);
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      return 3221225485LL;
    v11 = a2->Type;
    v21 = -1073741811LL;
    v20 = a2->DataSize;
    v13 = L"GammaRamp size 0x%I64x does not match the gamma ramp type 0x%I64x, returning 0x%I64x";
    Type = a2->Type;
LABEL_11:
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(v11, v10, v12, 0, 0, -1, (__int64)v13, Type, v20, v21, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( !SizeFromGammaRampType )
  {
LABEL_7:
    *((_DWORD *)this + 4) = a2->Type;
    return 0LL;
  }
  if ( !a2->Data.pRgb256x3x16 )
  {
    WdLogSingleEntry1(2LL, 177LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        (unsigned int)L"Caller specified gamma ramp does not have the gamma table it should have.",
        v14,
        v15,
        0,
        0,
        -1,
        (__int64)L"Caller specified gamma ramp does not have the gamma table it should have.",
        177LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
  v7 = (void *)operator new[](SizeFromGammaRampType, 0x4B677844u, 256LL, v5);
  v8 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = v7;
  if ( v7 )
  {
    memmove(v7, a2->Data.pRgb256x3x16, v8);
    goto LABEL_7;
  }
  WdLogSingleEntry1(6LL, v8);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v17,
        v16,
        v18,
        0,
        1,
        -1,
        (__int64)L"Failed to allocate 0x%I64x byte memory for GAMMA RAMP.",
        *((_QWORD *)this + 3),
        0LL,
        0LL,
        0LL,
        0LL);
  }
  return 3221225495LL;
}
