/*
 * XREFs of ?DxgkEnumAdapters3Impl@@YAJPEAU_D3DKMT_ENUMADAPTERS3@@DEW4_KWAIT_REASON@@@Z @ 0x1C0160B10
 * Callers:
 *     NtDxgkEnumAdapters3 @ 0x1C0160AE0 (NtDxgkEnumAdapters3.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00DAB60 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C0132710 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C0132734 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@@I@Z @ 0x1C0132A88 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_ADAPTERINFO@@$07@@QEAAPEAU_D3DKMT_ADAPTERINFO@.c)
 */

__int64 __fastcall DxgkEnumAdapters3Impl(struct _D3DKMT_ENUMADAPTERS3 *a1, __int64 a2, char a3, enum _KWAIT_REASON a4)
{
  char v5; // r12
  struct _D3DKMT_ENUMADAPTERS3 *v6; // rdi
  __m128i v7; // xmm6
  __int64 v8; // xmm7_8
  char *v9; // r14
  int v10; // esi
  DXGGLOBAL *Global; // rax
  __int64 v12; // rdx
  int MaximumAdapterCount; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // xmm6
  size_t v17; // r8
  const void *v18; // rdx
  DXGGLOBAL *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r15d
  unsigned int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // edi
  __int64 v33; // rax
  PVOID v34; // rcx
  bool v35; // zf
  __int64 v36; // rax
  DXGGLOBAL *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  struct _KTHREAD **i; // rdi
  int v43; // ecx
  __int64 v44; // [rsp+28h] [rbp-150h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-148h]
  __int64 v46; // [rsp+40h] [rbp-138h]
  _BYTE v47[24]; // [rsp+48h] [rbp-130h]
  _KWAIT_REASON v48; // [rsp+60h] [rbp-118h]
  PVOID P; // [rsp+70h] [rbp-108h] BYREF
  _BYTE v50[160]; // [rsp+78h] [rbp-100h] BYREF
  int v51; // [rsp+118h] [rbp-60h]

  v48 = a4;
  v5 = a2;
  v6 = a1;
  if ( !a1 )
  {
    v31 = WdLogNewEntry5_WdError(0LL, a2);
    v32 = -1073741811;
    *(_QWORD *)(v31 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    return v32;
  }
  *(_OWORD *)&v47[8] = 0LL;
  v44 = 0LL;
  *(_OWORD *)Src = 0LL;
  P = 0LL;
  v51 = 0;
  if ( (_BYTE)a2 == 1 )
  {
    a1 = (struct _D3DKMT_ENUMADAPTERS3 *)((char *)a1 + 24);
    if ( a1 < v6 || (unsigned __int64)a1 > MmUserProbeAddress )
    {
      a1 = (struct _D3DKMT_ENUMADAPTERS3 *)MmUserProbeAddress;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v7 = *(__m128i *)v6;
    *(_OWORD *)v47 = *(_OWORD *)v6;
    v8 = *((_QWORD *)v6 + 2);
    *(_QWORD *)&v47[16] = v8;
  }
  else
  {
    v7 = *(__m128i *)a1;
    *(_OWORD *)v47 = *(_OWORD *)a1;
    v8 = *((_QWORD *)a1 + 2);
    *(_QWORD *)&v47[16] = v8;
  }
  if ( (v7.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    v33 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v33 + 24) = v7.m128i_i64[0];
    v32 = -1073741811;
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    v34 = P;
    v35 = P == v50;
LABEL_46:
    if ( !v35 && v34 )
      ExFreePoolWithTag(v34, 0);
    return v32;
  }
  v46 = v7.m128i_i64[0];
  v9 = *(char **)&v47[16];
  if ( !*(_QWORD *)&v47[16] )
  {
    v10 = 0;
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
    MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(Global, v12);
LABEL_10:
    *(_DWORD *)&v47[8] = MaximumAdapterCount;
    goto LABEL_11;
  }
  v20 = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v24 = _mm_cvtsi128_si32(_mm_srli_si128(v7, 8));
  *(_DWORD *)&v47[8] = v24;
  if ( (unsigned int)DXGGLOBAL::GetMaximumAdapterCount(v20, v21) < v24 )
  {
    v37 = DXGGLOBAL::GetGlobal(v23, v22);
    v24 = DXGGLOBAL::GetMaximumAdapterCount(v37, v38);
    *(_DWORD *)&v47[8] = v24;
  }
  v25 = 1;
  if ( v24 > 1 )
    v25 = v24;
  PagedPoolZeroedArray<_D3DKMT_ADAPTERINFO,8>::AllocateElements(&P, v25);
  if ( !P )
  {
    v36 = WdLogNewEntry5_WdError(v27, v26);
    v32 = -1073741801;
    *(_QWORD *)(v36 + 24) = -1073741801LL;
    WdLogEvent5_WdError(v36);
    v34 = P;
    v35 = P == v50;
    goto LABEL_46;
  }
  Src[1] = P;
  HIDWORD(v44) = v24;
  LOBYTE(v28) = a3;
  v10 = DxgkEnumAdaptersInternal((struct ENUMADAPTERSINTERNAL *)&v44, v5, v28, v48);
  if ( (unsigned int)v44 > v24 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v29, v14);
    *(_QWORD *)(v39 + 24) = 1399LL;
    WdLogEvent5_WdAssertion(v39);
  }
  v15 = HIDWORD(v44);
  if ( (unsigned int)v44 > HIDWORD(v44) )
  {
    v40 = WdLogNewEntry5_WdAssertion(HIDWORD(v44), v14);
    *(_QWORD *)(v40 + 24) = 1400LL;
    WdLogEvent5_WdAssertion(v40);
  }
  v30 = (unsigned int)Src[0];
  if ( (unsigned int)v44 > LODWORD(Src[0]) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v41 + 24) = 1401LL;
    WdLogEvent5_WdAssertion(v41);
    v30 = (unsigned int)Src[0];
  }
  if ( v10 < 0 )
    goto LABEL_52;
  if ( HIDWORD(v44) >= v30 )
  {
    MaximumAdapterCount = v44;
    goto LABEL_10;
  }
  v10 = -1073741789;
  *(_DWORD *)&v47[8] = 0;
LABEL_11:
  v16 = *(_OWORD *)v47;
  if ( v10 >= 0 )
  {
    if ( v5 == 1 )
    {
      if ( (unsigned __int64)v6 + 24 > MmUserProbeAddress || (struct _D3DKMT_ENUMADAPTERS3 *)((char *)v6 + 24) <= v6 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)v6 = v16;
      *((_QWORD *)v6 + 2) = v8;
    }
    else
    {
      *(_OWORD *)v6 = *(_OWORD *)v47;
      *((_QWORD *)v6 + 2) = v8;
    }
    if ( v9 )
    {
      if ( v5 == 1 )
      {
        v17 = 20LL * (unsigned int)v44;
        v18 = Src[1];
        if ( (unsigned __int64)&v9[v17] > MmUserProbeAddress || &v9[v17] <= v9 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v9, v18, v17);
      }
      else
      {
        memmove(v9, Src[1], 20LL * (unsigned int)v44);
      }
    }
    goto LABEL_23;
  }
LABEL_52:
  for ( i = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v15, v14);
        ;
        DXGADAPTER::DestroyHandle(i, *((unsigned int *)Src[1] + 5 * (unsigned int)(v43 - 1))) )
  {
    v43 = v44;
    if ( !(_DWORD)v44 )
      break;
    LODWORD(v44) = v44 - 1;
  }
LABEL_23:
  if ( P != v50 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)v10;
}
