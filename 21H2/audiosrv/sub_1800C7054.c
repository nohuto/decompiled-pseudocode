/*
 * XREFs of sub_1800C7054 @ 0x1800C7054
 * Callers:
 *     sub_1800C6C50 @ 0x1800C6C50 (sub_1800C6C50.c)
 *     sub_1800C7330 @ 0x1800C7330 (sub_1800C7330.c)
 * Callees:
 *     sub_18002E440 @ 0x18002E440 (sub_18002E440.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C28E0 @ 0x1800C28E0 (sub_1800C28E0.c)
 *     sub_1800C6158 @ 0x1800C6158 (sub_1800C6158.c)
 *     sub_1800C66A4 @ 0x1800C66A4 (sub_1800C66A4.c)
 *     sub_1800CA560 @ 0x1800CA560 (sub_1800CA560.c)
 *     sub_18013CB58 @ 0x18013CB58 (sub_18013CB58.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C7054(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r14d
  __int64 v3; // r15
  struct _RTL_CRITICAL_SECTION *v4; // r12
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned __int64 i; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  void (*v9)(void); // rax
  void (__fastcall ***v10)(_QWORD, __int64 *); // rax
  ATL::CAtlException *v12; // rbx
  ATL::CAtlException *v13; // rbx
  __int64 v14; // rcx
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+30h] [rbp-98h]
  ATL::CAtlException *v16; // [rsp+38h] [rbp-90h] BYREF
  ATL::CAtlException *v17; // [rsp+40h] [rbp-88h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-80h] BYREF
  __int64 v19; // [rsp+50h] [rbp-78h]
  __int64 v20; // [rsp+58h] [rbp-70h]
  int v21; // [rsp+60h] [rbp-68h]
  char v22[96]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v24; // [rsp+E0h] [rbp+18h]
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+E8h] [rbp+20h]

  v1 = a1;
  v2 = 0;
  v18 = 0LL;
  v3 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
  v15 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  v5 = v4;
  v25 = v4;
  for ( i = 0LL; i < *(_QWORD *)(v1 + 176); ++i )
  {
    try
    {
      v2 = 0;
      if ( i >= *(_QWORD *)(v1 + 176) )
        sub_1800B8610(-2147024809);
      sub_1800C66A4(&v18, (_QWORD *)(*(_QWORD *)(v1 + 168) + 8 * i));
    }
    catch ( ATL::CAtlException *v16 )
    {
      v12 = v16;
      if ( *(_DWORD *)v16 == -1073741571 )
        o__resetstkoflw();
      v1 = a1;
      v2 = *(_DWORD *)v12;
      v5 = v25;
      v4 = v15;
    }
    if ( i >= *(_QWORD *)(v1 + 176) )
      sub_1800B8610(-2147024809);
    v7 = *(_QWORD *)(*(_QWORD *)(v1 + 168) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
    v3 = v19;
  }
  if ( v4 )
    LeaveCriticalSection(v5);
  while ( v3 )
  {
    try
    {
      v8 = *v18;
      v24 = *v18;
      v2 = 0;
      sub_1800CA560(&v18, 0LL);
    }
    catch ( ATL::CAtlException *v17 )
    {
      v13 = v17;
      if ( *(_DWORD *)v17 == -1073741571 )
        o__resetstkoflw();
      v1 = a1;
      v2 = *(_DWORD *)v13;
      v8 = v24;
    }
    if ( *(_BYTE *)(v8 + 128) )
    {
      if ( *(_BYTE *)(v8 + 224) )
      {
        sub_18013CB58(v14, 0LL, 0LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
        v10 = (void (__fastcall ***)(_QWORD, __int64 *))sub_1800C6158(
                                                          (__int64)v22,
                                                          v1,
                                                          1,
                                                          0,
                                                          v8,
                                                          (__int64)L"CAudioSession::DisconnectStreamList");
        sub_18002E440((LPCRITICAL_SECTION)(v1 + 496), v10);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
      }
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v1 + 312LL))(v1, v8, 0LL);
      v9 = *(void (**)(void))(*(_QWORD *)(v8 + 8) + 176LL);
    }
    else
    {
      v9 = *(void (**)(void))(*(_QWORD *)(v8 + 8) + 184LL);
    }
    v9();
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 64LL))(v8);
    v3 = v19;
  }
  sub_1800C28E0((__int64 *)&v18);
  return v2;
}
