/*
 * XREFs of ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BFB40
 * Callers:
 *     DxgkEnumAdapters2 @ 0x1C01BFB10 (DxgkEnumAdapters2.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C016D80C (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ @ 0x1C01BFEEC (-GetMaximumAdapterCountInSession@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BFF20 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C01C0250 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 */

__int64 __fastcall DxgkEnumAdapters2Impl(
        struct _D3DKMT_ENUMADAPTERS2 *a1,
        char a2,
        unsigned __int8 a3,
        enum _KWAIT_REASON a4)
{
  __m128i v7; // xmm6
  char *v8; // r14
  int v9; // edi
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCountInSession; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  size_t v16; // r8
  const void *v17; // rdx
  DXGGLOBAL *v19; // rax
  unsigned int v20; // r15d
  __int64 v21; // rdx
  unsigned int v22; // eax
  DXGGLOBAL *v23; // rax
  struct _KTHREAD **i; // rsi
  int v25; // ecx
  struct _D3DKMT_ENUMADAPTERS2 v26; // [rsp+58h] [rbp-230h]
  __int64 v27; // [rsp+68h] [rbp-220h] BYREF
  void *Src[2]; // [rsp+70h] [rbp-218h]
  __int64 v29; // [rsp+80h] [rbp-208h]
  enum _KWAIT_REASON v30; // [rsp+88h] [rbp-200h]
  _BYTE v31[256]; // [rsp+90h] [rbp-1F8h] BYREF
  PVOID P; // [rsp+190h] [rbp-F8h] BYREF
  char v33; // [rsp+198h] [rbp-F0h] BYREF
  int v34; // [rsp+238h] [rbp-50h]

  v30 = a4;
  WatchdogTimeoutReport::WatchdogTimeoutReport(v31, 403LL, 2069LL, 2LL, KeGetCurrentThread(), 0LL, 7, 0LL, 10000);
  if ( !a1 )
  {
    v9 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkEnumAdapters2 caller specified NULL D3DKMT_ENUMADAPTERS2, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_26;
  }
  v27 = 0LL;
  *(_OWORD *)Src = 0LL;
  v29 = 2LL;
  P = 0LL;
  v34 = 0;
  if ( a2 == 1 )
  {
    if ( &a1[1] < a1 || (unsigned __int64)&a1[1] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v7 = *(__m128i *)a1;
    v26 = *a1;
  }
  else
  {
    v7 = *(__m128i *)a1;
    v26 = *a1;
  }
  v8 = (char *)_mm_srli_si128(v7, 8).m128i_u64[0];
  if ( !v8 )
  {
    v9 = 0;
    Global = DXGGLOBAL_GetGlobal();
    MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
    goto LABEL_9;
  }
  v19 = DXGGLOBAL_GetGlobal();
  v20 = _mm_cvtsi128_si32(v7);
  if ( DXGGLOBAL::GetMaximumAdapterCountInSession(v19) < v20 )
  {
    v23 = DXGGLOBAL_GetGlobal();
    v20 = DXGGLOBAL::GetMaximumAdapterCountInSession(v23);
  }
  v21 = 1LL;
  if ( v20 > 1 )
    v21 = v20;
  PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(&P, v21);
  if ( P )
  {
    Src[1] = P;
    HIDWORD(v27) = v20;
    v9 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v27, a2, a3, v30);
    if ( (unsigned int)v27 > v20 )
    {
      WdLogSingleEntry1(1LL, 1197LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdapters.NumAdapters",
        1197LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (unsigned int)v27 > HIDWORD(v27) )
    {
      WdLogSingleEntry1(1LL, 1198LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.AdaptersBufferCount",
        1198LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v22 = (unsigned int)Src[0];
    if ( (unsigned int)v27 > LODWORD(Src[0]) )
    {
      WdLogSingleEntry1(1LL, 1199LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.RequiredAdaptersBufferCount",
        1199LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v22 = (unsigned int)Src[0];
    }
    if ( v9 < 0 )
    {
LABEL_47:
      for ( i = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v13, v12, v14, v15);
            ;
            DXGADAPTER::DestroyHandle(i, *((_DWORD *)Src[1] + 5 * (unsigned int)(v25 - 1))) )
      {
        v25 = v27;
        if ( !(_DWORD)v27 )
          break;
        LODWORD(v27) = v27 - 1;
      }
      goto LABEL_22;
    }
    if ( HIDWORD(v27) < v22 )
    {
      v9 = -1073741789;
      v26.NumAdapters = 0;
LABEL_10:
      if ( v9 >= 0 )
      {
        if ( a2 == 1 )
        {
          if ( (unsigned __int64)&a1[1] > MmUserProbeAddress || &a1[1] <= a1 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a1 = v26;
        }
        else
        {
          *a1 = v26;
        }
        if ( v8 )
        {
          if ( a2 == 1 )
          {
            v16 = 20LL * (unsigned int)v27;
            v17 = Src[1];
            if ( (unsigned __int64)&v8[v16] > MmUserProbeAddress || &v8[v16] <= v8 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v8, v17, v16);
          }
          else
          {
            memmove(v8, Src[1], 20LL * (unsigned int)v27);
          }
        }
        goto LABEL_22;
      }
      goto LABEL_47;
    }
    MaximumAdapterCountInSession = v27;
LABEL_9:
    v26.NumAdapters = MaximumAdapterCountInSession;
    goto LABEL_10;
  }
  v9 = -1073741801;
  WdLogSingleEntry1(2LL, -1073741801LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to allocate memory for D3DKMT_ADAPTERINFO buffer, returning 0x%I64x",
    -1073741801LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_22:
  if ( P != &v33 && P )
    ExFreePoolWithTag(P, 0);
  v34 = 0;
  P = 0LL;
LABEL_26:
  WatchdogTimeoutReport::~WatchdogTimeoutReport((WatchdogTimeoutReport *)v31);
  return (unsigned int)v9;
}
