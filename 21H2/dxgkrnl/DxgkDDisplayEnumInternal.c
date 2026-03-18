/*
 * XREFs of DxgkDDisplayEnumInternal @ 0x1C01D9A90
 * Callers:
 *     DxgkDDisplayEnum @ 0x1C01D9A70 (DxgkDDisplayEnum.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C01D9E5C (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_TARGET@@I@Z @ 0x1C01D9EE4 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDI.c)
 */

__int64 __fastcall DxgkDDisplayEnumInternal(ULONG64 a1, char a2)
{
  __m128i *v3; // rax
  char *v4; // r15
  unsigned int v5; // esi
  char *v6; // r14
  _BYTE *Pool2; // rcx
  PVOID v8; // r8
  unsigned int v9; // ebx
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r12
  unsigned __int64 *v13; // rbx
  size_t v14; // r8
  const void *v15; // rdx
  const void *v16; // rdx
  char *v17; // r9
  void *Src[2]; // [rsp+50h] [rbp-718h] BYREF
  void *v20[2]; // [rsp+60h] [rbp-708h]
  __m128i v21; // [rsp+70h] [rbp-6F8h]
  __m128i v22; // [rsp+80h] [rbp-6E8h]
  __m128i v23; // [rsp+90h] [rbp-6D8h]
  __m128i v24; // [rsp+A0h] [rbp-6C8h]
  PVOID v25; // [rsp+B0h] [rbp-6B8h]
  _BYTE v26[560]; // [rsp+B8h] [rbp-6B0h] BYREF
  unsigned int v27; // [rsp+2E8h] [rbp-480h]
  PVOID P; // [rsp+2F0h] [rbp-478h] BYREF
  _BYTE v29[1076]; // [rsp+2F8h] [rbp-470h] BYREF
  int v30; // [rsp+72Ch] [rbp-3Ch]

  if ( !a2 )
    return DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM *)a1);
  v3 = (__m128i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = (__m128i *)MmUserProbeAddress;
  v21 = *v3;
  v23 = v21;
  v22 = v3[1];
  v24 = v22;
  v4 = (char *)_mm_srli_si128(v21, 8).m128i_u64[0];
  ProbeForWrite(v4, 560 * HIDWORD(v21.m128i_i64[0]), 4u);
  v5 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 4));
  v6 = (char *)_mm_srli_si128(v22, 8).m128i_u64[0];
  ProbeForWrite(v6, 1076LL * v5, 4u);
  Pool2 = 0LL;
  v25 = 0LL;
  v27 = 0;
  v8 = 0LL;
  P = 0LL;
  v30 = 0;
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(v21, 4));
  if ( v9 )
  {
    if ( v9 > 1 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 0x230 )
        goto LABEL_8;
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 560LL * v9, 1265072196LL, v9);
      v25 = Pool2;
    }
    else
    {
      v25 = v26;
      memset(v26, 0, 560LL * v9);
      Pool2 = v26;
    }
    v27 = v9;
    v8 = P;
  }
LABEL_8:
  if ( v5 )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_TARGET,1>::AllocateElements(&P, v5, v8);
    Pool2 = v25;
    v8 = P;
  }
  if ( v9 && !Pool2 || v5 && !v8 )
  {
    WdLogSingleEntry2(2LL, v9, v5);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate buffers for DispBrokerEnum: 0x%I64x adapter, 0x%I64x targets",
      v9,
      v5,
      0LL,
      0LL,
      0LL);
    if ( P != v29 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v30 = 0;
    if ( v25 != v26 && v25 )
      ExFreePoolWithTag(v25, 0);
    return 3221225495LL;
  }
  else
  {
    Src[0] = (void *)v21.m128i_i64[0];
    v20[0] = (void *)v22.m128i_i64[0];
    Src[1] = Pool2;
    v20[1] = v8;
    v10 = DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM *)Src);
    v11 = LODWORD(Src[0]);
    v23.m128i_i32[0] = (__int32)Src[0];
    v12 = LODWORD(v20[0]);
    v24.m128i_i32[0] = (__int32)v20[0];
    v13 = (unsigned __int64 *)MmUserProbeAddress;
    if ( a1 + 32 > MmUserProbeAddress || a1 + 32 <= a1 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v13 = (unsigned __int64 *)MmUserProbeAddress;
    }
    *(__m128i *)a1 = v23;
    *(__m128i *)(a1 + 16) = v24;
    if ( v10 >= 0 )
    {
      if ( v4 )
      {
        v14 = 560 * v11;
        v15 = Src[1];
        if ( (unsigned __int64)&v4[v14] > *v13 || &v4[v14] <= v4 )
        {
          *(_BYTE *)*v13 = 0;
          v13 = (unsigned __int64 *)MmUserProbeAddress;
        }
        memmove(v4, v15, v14);
      }
      if ( v6 )
      {
        v16 = v20[1];
        v17 = &v6[1076 * v12];
        if ( (unsigned __int64)v17 > *v13 || v17 <= v6 )
          *(_BYTE *)*v13 = 0;
        memmove(v6, v16, 1076 * v12);
      }
    }
    if ( P != v29 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v30 = 0;
    if ( v25 != v26 )
    {
      if ( v25 )
        ExFreePoolWithTag(v25, 0);
    }
    return (unsigned int)v10;
  }
}
