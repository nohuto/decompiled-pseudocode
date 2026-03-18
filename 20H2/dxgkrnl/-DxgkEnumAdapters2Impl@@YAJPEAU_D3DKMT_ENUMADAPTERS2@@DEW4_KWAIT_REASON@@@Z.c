/*
 * XREFs of ?DxgkEnumAdapters2Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS2@@DEW4_KWAIT_REASON@@@Z @ 0x1C012E630
 * Callers:
 *     DxgkEnumAdapters2 @ 0x1C012E600 (DxgkEnumAdapters2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00E1F44 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C012F360 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C012F384 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C012FA48 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 */

__int64 __fastcall DxgkEnumAdapters2Impl(
        struct _D3DKMT_ENUMADAPTERS2 *a1,
        __int64 a2,
        unsigned __int8 a3,
        enum _KWAIT_REASON a4)
{
  char v6; // r12
  struct _D3DKMT_ENUMADAPTERS2 *v7; // rsi
  __m128i v8; // xmm6
  char *v9; // r14
  int v10; // edi
  DXGGLOBAL *Global; // rax
  unsigned int MaximumAdapterCount; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  size_t v15; // r8
  const void *v16; // rdx
  PVOID v17; // rcx
  bool v18; // zf
  DXGGLOBAL *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // eax
  __int64 v29; // rax
  DXGGLOBAL *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  struct _KTHREAD **i; // rsi
  int v36; // ecx
  struct _D3DKMT_ENUMADAPTERS2 v37; // [rsp+28h] [rbp-130h]
  __int64 v38; // [rsp+38h] [rbp-120h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-118h]
  __int64 v40; // [rsp+50h] [rbp-108h]
  PVOID P; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v42[160]; // [rsp+68h] [rbp-F0h] BYREF
  int v43; // [rsp+108h] [rbp-50h]

  v6 = a2;
  v7 = a1;
  if ( !a1 )
  {
    v29 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    return 3221225485LL;
  }
  v38 = 0LL;
  *(_OWORD *)Src = 0LL;
  v40 = 2LL;
  P = 0LL;
  v43 = 0;
  if ( (_BYTE)a2 == 1 )
  {
    if ( ++a1 < v7 || (unsigned __int64)a1 > MmUserProbeAddress )
    {
      a1 = (struct _D3DKMT_ENUMADAPTERS2 *)MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v8 = *(__m128i *)v7;
    v37 = *v7;
  }
  else
  {
    v8 = *(__m128i *)a1;
    v37 = *a1;
  }
  v9 = (char *)_mm_srli_si128(v8, 8).m128i_u64[0];
  if ( !v9 )
  {
    v10 = 0;
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
    MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global);
LABEL_9:
    v37.NumAdapters = MaximumAdapterCount;
    goto LABEL_10;
  }
  v20 = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v23 = _mm_cvtsi128_si32(v8);
  if ( DXGGLOBAL::GetMaximumAdapterCount(v20) < v23 )
  {
    v30 = DXGGLOBAL::GetGlobal(v22, v21);
    v23 = DXGGLOBAL::GetMaximumAdapterCount(v30);
  }
  v24 = 1LL;
  if ( v23 > 1 )
    v24 = v23;
  PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(&P, v24);
  if ( !P )
  {
    v31 = WdLogNewEntry5_WdError(v26, v25);
    v10 = -1073741801;
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v31);
    v17 = P;
    v18 = P == v42;
    goto LABEL_23;
  }
  Src[1] = P;
  HIDWORD(v38) = v23;
  v10 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v38, v6, a3, a4);
  if ( (unsigned int)v38 > v23 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v27, v13);
    *(_QWORD *)(v32 + 24) = 1184LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v14 = HIDWORD(v38);
  if ( (unsigned int)v38 > HIDWORD(v38) )
  {
    v33 = WdLogNewEntry5_WdAssertion(HIDWORD(v38), v13);
    *(_QWORD *)(v33 + 24) = 1185LL;
    WdLogEvent5_WdAssertion(v33);
  }
  v28 = (unsigned int)Src[0];
  if ( (unsigned int)v38 > LODWORD(Src[0]) )
  {
    v34 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v34 + 24) = 1186LL;
    WdLogEvent5_WdAssertion(v34);
    v28 = (unsigned int)Src[0];
  }
  if ( v10 < 0 )
    goto LABEL_47;
  if ( HIDWORD(v38) >= v28 )
  {
    MaximumAdapterCount = v38;
    goto LABEL_9;
  }
  v10 = -1073741789;
  v37.NumAdapters = 0;
LABEL_10:
  if ( v10 >= 0 )
  {
    if ( v6 == 1 )
    {
      if ( (unsigned __int64)&v7[1] > MmUserProbeAddress || &v7[1] <= v7 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v7 = v37;
    }
    else
    {
      *v7 = v37;
    }
    if ( v9 )
    {
      if ( v6 == 1 )
      {
        v15 = 20LL * (unsigned int)v38;
        v16 = Src[1];
        if ( (unsigned __int64)&v9[v15] > MmUserProbeAddress || &v9[v15] <= v9 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v9, v16, v15);
      }
      else
      {
        memmove(v9, Src[1], 20LL * (unsigned int)v38);
      }
    }
    goto LABEL_22;
  }
LABEL_47:
  for ( i = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v14, v13);
        ;
        DXGADAPTER::DestroyHandle(i, *((unsigned int *)Src[1] + 5 * (unsigned int)(v36 - 1))) )
  {
    v36 = v38;
    if ( !(_DWORD)v38 )
      break;
    LODWORD(v38) = v38 - 1;
  }
LABEL_22:
  v17 = P;
  v18 = P == v42;
LABEL_23:
  if ( !v18 )
  {
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
  }
  return (unsigned int)v10;
}
