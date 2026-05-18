/*
 * XREFs of sub_1800366DC @ 0x1800366DC
 * Callers:
 *     sub_18003CAC0 @ 0x18003CAC0 (sub_18003CAC0.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180010020 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     unknown_libname_105 @ 0x1800136DC (unknown_libname_105.c)
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     ?data@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAPEBDXZ @ 0x18002C704 (-data@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBAPEBDXZ.c)
 *     sub_18002C814 @ 0x18002C814 (sub_18002C814.c)
 *     sub_18002F66C @ 0x18002F66C (sub_18002F66C.c)
 *     unknown_libname_106 @ 0x180031650 (unknown_libname_106.c)
 *     unknown_libname_162 @ 0x1800337A0 (unknown_libname_162.c)
 *     sub_180033AE0 @ 0x180033AE0 (sub_180033AE0.c)
 *     sub_180036BB8 @ 0x180036BB8 (sub_180036BB8.c)
 *     sub_1800A063C @ 0x1800A063C (sub_1800A063C.c)
 *     sub_1800A0690 @ 0x1800A0690 (sub_1800A0690.c)
 *     sub_1800D12B8 @ 0x1800D12B8 (sub_1800D12B8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
_QWORD *__fastcall sub_1800366DC(_QWORD *a1, _QWORD *a2, int a3, int a4)
{
  char v8; // bl
  int v9; // ecx
  int v10; // edx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  volatile signed __int32 *v15; // rdi
  __int64 v16; // rdx
  signed __int32 v17; // eax
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  _QWORD *v22; // rcx
  __int64 v23; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  unsigned int v31; // eax
  __int64 v32[3]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v36[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v38; // [rsp+120h] [rbp+20h] BYREF
  _QWORD *v39; // [rsp+128h] [rbp+28h] BYREF
  _DWORD v40[12]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v41[4]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v42[12]; // [rsp+180h] [rbp+80h] BYREF

  v39 = a2;
  v8 = sub_1800A063C(a1);
  v9 = sub_1800A0690(a1);
  if ( (unsigned int)(v9 - 23) <= 1 )
    v10 = 2;
  else
    v10 = (v8 & 8) != 0;
  v11 = sub_18002F66C(v9, v10);
  v12 = a1[23];
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v12 + 80LL))(v12, v42);
    if ( v42[0] != a3 || v42[1] != a4 || v42[4] != v11 )
    {
      v13 = a1[23];
      if ( v13 )
      {
        a1[23] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  if ( !a1[23] )
  {
    v40[10] = 0;
    v40[0] = a3;
    v40[1] = a4;
    v40[2] = 1;
    v40[7] = 2;
    v40[9] = 0x10000;
    v40[4] = v11;
    v40[5] = 1;
    v40[6] = 0;
    v40[3] = 1;
    v40[8] = 8;
    v14 = 0LL;
    v15 = 0LL;
    v16 = a1[10];
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *(_DWORD *)(v16 + 8);
        if ( !v17 )
          break;
        if ( v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17) )
        {
          v14 = a1[9];
          v15 = (volatile signed __int32 *)a1[10];
          if ( v15 )
            _InterlockedAdd(v15 + 2, 1u);
          break;
        }
      }
    }
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v39 = 0LL;
    sub_180029F64(v14, &v39);
    v38 = 0LL;
    v18 = (*(__int64 (__fastcall **)(_QWORD *, _DWORD *, _QWORD, __int64 *))(*v39 + 40LL))(v39, v40, 0LL, &v38);
    sub_18002BE74(v14, v18);
    if ( v18 < 0 )
    {
      sub_18000FE28(v41);
      v25 = unknown_libname_106(v41, " File=");
      unknown_libname_106(v25, "..\\Source\\TextureD3D11.cpp");
      v26 = unknown_libname_106(v41, " Line=");
      unknown_libname_106(v26, "929");
      v27 = unknown_libname_106(v41, " Message=");
      unknown_libname_106(v27, "\"TextureD3D11::GetOrCreateCPUStagingTexture(): unable to create texture (2D)\"");
      unknown_libname_162(v32);
      sub_180036BB8(v33, v40, v32);
      v28 = unknown_libname_106(v41, " Details=\"");
      v29 = (_QWORD *)unknown_libname_105(v28);
      unknown_libname_106(v29, "\"");
      std::string::_Tidy_deallocate(v33);
      sub_180033AE0(v32);
      sub_18002C814(v34, v18);
      v30 = unknown_libname_106(v41, " HRESULT=");
      unknown_libname_105(v30);
      std::string::_Tidy_deallocate(v34);
      std::string::data(v41);
      sub_18000FE28(v36);
      v31 = (unsigned int)sub_18000FE28(v35);
      sub_1800D12B8((unsigned int)pExceptionObject, v31, 929, v18, (__int64)v36, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    v19 = a1[23];
    v20 = v38;
    if ( v19 != v38 )
    {
      v21 = v38;
      if ( v38 )
      {
        (*(void (**)(void))(*(_QWORD *)v38 + 8LL))();
        v19 = a1[23];
        v20 = v38;
      }
      a1[23] = v21;
      if ( v19 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v20 = v38;
      }
    }
    if ( v20 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v22 = v39;
    if ( v39 )
    {
      v39 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
    }
    if ( v15 )
    {
      if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
  }
  v23 = a1[23];
  *a2 = v23;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  return a2;
}
