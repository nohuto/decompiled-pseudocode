/*
 * XREFs of ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x18012FF9C
 * Callers:
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x18012FB54 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A0C0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x18012FA68 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::Init(
        __int64 a1,
        const IID *a2,
        __int64 a3,
        const unsigned __int16 *a4,
        int a5,
        __int64 a6,
        __int64 *a7)
{
  const IID *v8; // r14
  char **v10; // r12
  HRESULT Instance; // ebx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r15
  SIZE_T v14; // rcx
  char *v15; // rax

  v8 = a2;
  *(IID *)(a1 + 104) = *a2;
  *(_DWORD *)(a1 + 128) = a5;
  *(_QWORD *)(a1 + 136) = 0LL;
  v10 = (char **)(a1 + 120);
  if ( a3 )
  {
    Instance = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 40LL))(a3, a1 + 120);
  }
  else
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a4[v12] );
    *v10 = 0LL;
    v13 = -1LL;
    if ( v12 + 1 >= v12 )
      v13 = v12 + 1;
    Instance = v12 + 1 < v12 ? 0x80070216 : 0;
    if ( v12 + 1 >= v12 )
    {
      v14 = 2 * v13;
      if ( is_mul_ok(v13, 2uLL) )
      {
        Instance = 0;
      }
      else
      {
        v14 = -1LL;
        Instance = -2147024362;
      }
      if ( Instance >= 0 )
      {
        v15 = (char *)CoTaskMemAlloc(v14);
        *v10 = v15;
        Instance = 0;
        if ( !v15 )
          Instance = -2147024882;
        if ( Instance >= 0 )
          StringCchCopyNExW(v15, v13, a4, v12);
      }
    }
    v8 = a2;
  }
  if ( Instance >= 0 )
  {
    Instance = CoCreateInstance(
                 v8,
                 (LPUNKNOWN)(a1 + 8),
                 1u,
                 &GUID_00000000_0000_0000_c000_000000000046,
                 (LPVOID *)(a1 + 96));
    if ( Instance >= 0 )
      *a7 = (a1 + 8) & -(__int64)(a1 != 0);
  }
  return (unsigned int)Instance;
}
