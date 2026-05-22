/*
 * XREFs of ?SetConstant@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@W4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTProxy@@@Z @ 0x1800701B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x18006E4B4 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 */

__int64 __fastcall MPCConstantManager::SetConstant(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        PROPVARIANT *propvarIn,
        __int64 a6)
{
  HRESULT v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, __int64); // rsi
  __int64 v13; // rdx
  HRESULT v15; // eax
  HRESULT v16; // eax
  __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-30h]
  ULONGLONG pullRet; // [rsp+28h] [rbp-28h] BYREF
  DOUBLE pdblRet[2]; // [rsp+30h] [rbp-20h] BYREF
  __m128i v21; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  if ( *(_WORD *)propvarIn >= 4u )
  {
    if ( *(_WORD *)propvarIn <= 5u )
    {
      v16 = PropVariantToDouble(propvarIn, pdblRet);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          259LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      v10 = a6;
      v11 = -1LL;
      BYTE4(v18) = 2;
      v17 = *(_QWORD *)(a6 + 8);
      v21.m128i_i64[0] = a4;
      v12 = *(__int64 (__fastcall **)(__int64, __int64))(v17 + 24);
      *(float *)&v18 = pdblRet[0];
      do
        ++v11;
      while ( *(_WORD *)(a4 + 2 * v11) );
      goto LABEL_9;
    }
    if ( *(_WORD *)propvarIn == 11 )
    {
      v15 = PropVariantToBoolean(propvarIn, (BOOL *)&propvarIn);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          254LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
      v10 = a6;
      LOBYTE(v18) = (_DWORD)propvarIn != 0;
      BYTE4(v18) = 1;
      v21.m128i_i64[0] = a4;
      v11 = -1LL;
      v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL);
      do
        ++v11;
      while ( *(_WORD *)(a4 + 2 * v11) );
      goto LABEL_9;
    }
    if ( *(_WORD *)propvarIn == 21 )
    {
      v9 = PropVariantToUInt64(propvarIn, &pullRet);
      if ( v9 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          250LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          (const char *)(unsigned int)v9);
        __debugbreak();
      }
      v10 = a6;
      v11 = -1LL;
      BYTE4(v18) = 0;
      v21.m128i_i64[0] = a4;
      v12 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL);
      LODWORD(v18) = pullRet;
      do
        ++v11;
      while ( *(_WORD *)(a4 + 2 * v11) );
LABEL_9:
      v21.m128i_i64[1] = v11;
      v13 = (unsigned int)MPCConstantManager::ChangeConstant(a1, a3, &v21, v18);
      return v12(v10 + 8, v13);
    }
  }
  return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a6 + 8) + 24LL))(a6 + 8, 2147942487LL);
}
