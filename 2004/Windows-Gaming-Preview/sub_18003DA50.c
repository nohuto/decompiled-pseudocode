/*
 * XREFs of sub_18003DA50 @ 0x18003DA50
 * Callers:
 *     sub_18003D9C0 @ 0x18003D9C0 (sub_18003D9C0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 *     sub_180012300 @ 0x180012300 (sub_180012300.c)
 *     sub_1800177BC @ 0x1800177BC (sub_1800177BC.c)
 *     sub_18003DDD8 @ 0x18003DDD8 (sub_18003DDD8.c)
 *     sub_18003DFA0 @ 0x18003DFA0 (sub_18003DFA0.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003DA50(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // edi
  int v5; // edx
  __m128i v6; // xmm6
  DWORD ActiveProcessorCount; // r14d
  unsigned __int64 v8; // xmm1_8
  int *v9; // rdi
  int *v10; // r12
  int v11; // eax
  int LargestValidResourceRequest; // r14d
  HRESULT v13; // eax
  HSTRING v14; // rdi
  __int64 v15; // rcx
  int ActivationFactory; // eax
  int v17; // edx
  __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  _BYTE v23[16]; // [rsp+58h] [rbp-79h] BYREF
  __int64 v24; // [rsp+68h] [rbp-69h] BYREF
  __int64 v25; // [rsp+70h] [rbp-61h] BYREF
  __m128i v26; // [rsp+78h] [rbp-59h] BYREF
  __m128i v27; // [rsp+88h] [rbp-49h]
  __m128i v28; // [rsp+98h] [rbp-39h] BYREF
  _OWORD v29[2]; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v30; // [rsp+C8h] [rbp-9h]
  HSTRING_HEADER hstringHeader; // [rsp+D0h] [rbp-1h] BYREF
  HSTRING string; // [rsp+E8h] [rbp+17h] BYREF
  __int64 retaddr; // [rsp+130h] [rbp+5Fh]

  v25 = 0LL;
  v27 = 0LL;
  v2 = CreateGameConfigStoreClient(&v25);
  v4 = v2;
  if ( v2 < 0 )
  {
    v5 = 137;
LABEL_17:
    sub_180003268(retaddr, v5, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp", v2);
    goto LABEL_31;
  }
  v23[8] = 0;
  v28 = 0LL;
  LOBYTE(v3) = 0;
  sub_18003DFA0(&v28, v25, v3);
  v6 = _mm_load_si128(&v28);
  v27 = v6;
  ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
  v23[0] = 0;
  v26 = 0LL;
  v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v6 = _mm_load_si128(&v28);
  }
  v26 = v6;
  v9 = (int *)(a1 + 24);
  v10 = (int *)(a1 + 8);
  v11 = sub_18003DDD8((unsigned int)v23, (unsigned int)&v26, (int)a1 + 8, (int)a1 + 16, a1 + 24, a1 + 28, (__int64)v23);
  if ( v11 >= 0 )
  {
    if ( v23[0] )
      goto LABEL_15;
  }
  else
  {
    sub_180012300(retaddr, 146, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp", v11);
  }
  *v10 = 36838932;
  if ( ActiveProcessorCount == 2 )
  {
    *v9 = 0;
  }
  else
  {
    *(_BYTE *)(a1 + 28) = 1;
    if ( ActiveProcessorCount == 4 )
    {
      *v9 = 2;
    }
    else
    {
      memset(v29, 0, sizeof(v29));
      v30 = 0LL;
      RmGameModeInitializeResourceRequest(v29);
      LargestValidResourceRequest = RmGameModeGetLargestValidResourceRequest(v29);
      if ( LargestValidResourceRequest >= 0 )
        *v9 = DWORD1(v29[0]);
      else
        sub_180012300(
          retaddr,
          179,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
          LargestValidResourceRequest | 0x10000000);
    }
  }
LABEL_15:
  WindowsDeleteString(*(HSTRING *)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0LL;
  v2 = sub_1800177BC(*v10, *(HSTRING *)(a1 + 16), *v9, 1, *(_BYTE *)(a1 + 28), 0, 0, 0LL, a1 + 32);
  v4 = v2;
  if ( v2 < 0 )
  {
    v5 = 198;
    goto LABEL_17;
  }
  v24 = 0LL;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    sub_180011F90(v13);
    JUMPOUT(0x18003DDD0LL);
  }
  v14 = string;
  v15 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  ActivationFactory = RoGetActivationFactory(v14, &unk_180051010, &v24);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v17 = 203;
LABEL_27:
    sub_180003268(
      retaddr,
      v17,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      ActivationFactory);
    goto LABEL_29;
  }
  v18 = v24;
  v19 = *(_QWORD *)(a1 + 40);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  ActivationFactory = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v18 + 144LL))(
                        v18,
                        *(_QWORD *)(a1 + 32),
                        a1 + 40);
  v4 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    v17 = 205;
    goto LABEL_27;
  }
  v4 = 0;
LABEL_29:
  v20 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
LABEL_31:
  if ( v27.m128i_i64[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27.m128i_i64[1] + 8), 0xFFFFFFFF) == 1 )
    {
      v21 = v27.m128i_i64[1];
      (**(void (__fastcall ***)(__int64))v27.m128i_i64[1])(v27.m128i_i64[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27.m128i_i64[1] + 8LL))(v27.m128i_i64[1]);
    }
  }
  return v4;
}
