/*
 * XREFs of ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BEDD0
 * Callers:
 *     NtDxgkEnumAdapters3 @ 0x1C01BEDA0 (NtDxgkEnumAdapters3.c)
 *     DxgkEnumAdapters3Internal @ 0x1C02D1330 (DxgkEnumAdapters3Internal.c)
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

__int64 __fastcall DxgkEnumAdapters3Impl(__m128i *a1, char a2, unsigned __int8 a3, enum _KWAIT_REASON a4)
{
  char *v6; // rcx
  __m128i v7; // xmm6
  __int64 v8; // xmm7_8
  char *v9; // r14
  int v10; // esi
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCountInSession; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128i v17; // xmm6
  size_t v18; // r8
  const void *v19; // rdx
  DXGGLOBAL *v21; // rax
  unsigned int v22; // r15d
  __int64 v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // edi
  PVOID v26; // rcx
  bool v27; // zf
  DXGGLOBAL *v28; // rax
  struct _KTHREAD **i; // rdi
  int v30; // ecx
  __int64 v32; // [rsp+60h] [rbp-148h] BYREF
  void *Src[2]; // [rsp+68h] [rbp-140h]
  __int64 v34; // [rsp+78h] [rbp-130h]
  _BYTE v35[24]; // [rsp+80h] [rbp-128h]
  _KWAIT_REASON v36; // [rsp+98h] [rbp-110h]
  PVOID P; // [rsp+A0h] [rbp-108h] BYREF
  _BYTE v38[160]; // [rsp+A8h] [rbp-100h] BYREF
  int v39; // [rsp+148h] [rbp-60h]

  v36 = a4;
  if ( !a1 )
  {
    v25 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkEnumAdapters3 caller specified NULL D3DKMT_ENUMADAPTERS3, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v25;
  }
  *(_OWORD *)&v35[8] = 0LL;
  v32 = 0LL;
  *(_OWORD *)Src = 0LL;
  P = 0LL;
  v39 = 0;
  if ( a2 == 1 )
  {
    v6 = &a1[1].m128i_i8[8];
    if ( v6 < (char *)a1 || (unsigned __int64)v6 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v7 = *a1;
    *(__m128i *)v35 = *a1;
    v8 = a1[1].m128i_i64[0];
    *(_QWORD *)&v35[16] = v8;
  }
  else
  {
    v7 = *a1;
    *(__m128i *)v35 = *a1;
    v8 = a1[1].m128i_i64[0];
    *(_QWORD *)&v35[16] = v8;
  }
  if ( (v7.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    v25 = -1073741811;
    WdLogSingleEntry2(2LL, v7.m128i_i64[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkEnumAdapters3 caller specified an invalid filter 0x%I64x, returning 0x%I64x",
      v7.m128i_i64[0],
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v26 = P;
    v27 = P == v38;
LABEL_46:
    if ( !v27 && v26 )
      ExFreePoolWithTag(v26, 0);
    return v25;
  }
  v34 = v7.m128i_i64[0];
  v9 = *(char **)&v35[16];
  if ( !*(_QWORD *)&v35[16] )
  {
    v10 = 0;
    Global = DXGGLOBAL_GetGlobal();
    MaximumAdapterCountInSession = DXGGLOBAL::GetMaximumAdapterCountInSession(Global);
LABEL_10:
    *(_DWORD *)&v35[8] = MaximumAdapterCountInSession;
    goto LABEL_11;
  }
  v21 = DXGGLOBAL_GetGlobal();
  v22 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
  *(_DWORD *)&v35[8] = v22;
  if ( DXGGLOBAL::GetMaximumAdapterCountInSession(v21) < v22 )
  {
    v28 = DXGGLOBAL_GetGlobal();
    v22 = DXGGLOBAL::GetMaximumAdapterCountInSession(v28);
    *(_DWORD *)&v35[8] = v22;
  }
  v23 = 1LL;
  if ( v22 > 1 )
    v23 = v22;
  PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(&P, v23);
  if ( !P )
  {
    v25 = -1073741801;
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
    v26 = P;
    v27 = P == v38;
    goto LABEL_46;
  }
  Src[1] = P;
  HIDWORD(v32) = v22;
  v10 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v32, a2, a3, v36);
  if ( (unsigned int)v32 > v22 )
  {
    WdLogSingleEntry1(1LL, 1412LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdapters.NumAdapters",
      1412LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (unsigned int)v32 > HIDWORD(v32) )
  {
    WdLogSingleEntry1(1LL, 1413LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.AdaptersBufferCount",
      1413LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v24 = (unsigned int)Src[0];
  if ( (unsigned int)v32 > LODWORD(Src[0]) )
  {
    WdLogSingleEntry1(1LL, 1414LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"EnumAdaptersInternal.NumAdapters <= EnumAdaptersInternal.RequiredAdaptersBufferCount",
      1414LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v24 = (unsigned int)Src[0];
  }
  if ( v10 < 0 )
    goto LABEL_52;
  if ( HIDWORD(v32) >= v24 )
  {
    MaximumAdapterCountInSession = v32;
    goto LABEL_10;
  }
  v10 = -1073741789;
  *(_DWORD *)&v35[8] = 0;
LABEL_11:
  v17 = *(__m128i *)v35;
  if ( v10 >= 0 )
  {
    if ( a2 == 1 )
    {
      if ( (unsigned __int64)&a1[1].m128i_u64[1] > MmUserProbeAddress || &a1[1].m128i_u64[1] <= (unsigned __int64 *)a1 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a1 = v17;
      a1[1].m128i_i64[0] = v8;
    }
    else
    {
      *a1 = *(__m128i *)v35;
      a1[1].m128i_i64[0] = v8;
    }
    if ( v9 )
    {
      if ( a2 == 1 )
      {
        v18 = 20LL * (unsigned int)v32;
        v19 = Src[1];
        if ( (unsigned __int64)&v9[v18] > MmUserProbeAddress || &v9[v18] <= v9 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v9, v19, v18);
      }
      else
      {
        memmove(v9, Src[1], 20LL * (unsigned int)v32);
      }
    }
    goto LABEL_23;
  }
LABEL_52:
  for ( i = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v14, v13, v15, v16);
        ;
        DXGADAPTER::DestroyHandle(i, *((_DWORD *)Src[1] + 5 * (unsigned int)(v30 - 1))) )
  {
    v30 = v32;
    if ( !(_DWORD)v32 )
      break;
    LODWORD(v32) = v32 - 1;
  }
LABEL_23:
  if ( P != v38 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)v10;
}
