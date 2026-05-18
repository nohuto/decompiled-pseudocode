/*
 * XREFs of sub_180111DB8 @ 0x180111DB8
 * Callers:
 *     sub_18010EF1C @ 0x18010EF1C (sub_18010EF1C.c)
 * Callees:
 *     sub_180002940 @ 0x180002940 (sub_180002940.c)
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800915B4 @ 0x1800915B4 (sub_1800915B4.c)
 *     sub_180111D30 @ 0x180111D30 (sub_180111D30.c)
 *     sub_1801120C0 @ 0x1801120C0 (sub_1801120C0.c)
 *     sub_180112870 @ 0x180112870 (sub_180112870.c)
 *     sub_1801147FC @ 0x1801147FC (sub_1801147FC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180111DB8(__int64 a1)
{
  _BYTE **v2; // rdi
  __int64 *v3; // r14
  size_t v4; // rdx
  _BYTE *v5; // rbx
  const char *v6; // r9
  _BYTE *v7; // rbx
  const char *v8; // rdx
  _BYTE *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 *v15; // rax
  volatile signed __int32 *v16; // rbx
  _QWORD v18[2]; // [rsp+20h] [rbp-98h] BYREF
  char v19[8]; // [rsp+30h] [rbp-88h] BYREF
  volatile signed __int32 *v20; // [rsp+38h] [rbp-80h]
  _QWORD pExceptionObject[3]; // [rsp+40h] [rbp-78h] BYREF
  _SYSTEM_INFO SystemInfo; // [rsp+58h] [rbp-60h] BYREF

  v18[1] = a1;
  *(_QWORD *)a1 = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  sub_180112870(a1 + 8);
  sub_180112870(a1 + 16);
  sub_180112870(a1 + 24);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v2 = (_BYTE **)(a1 + 48);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 15LL;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 104) = 15LL;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 96) = 13LL;
  memmove((void *)(a1 + 80), "CanvasDefault", 0xDuLL);
  *(_BYTE *)(a1 + 93) = 0;
  v3 = (__int64 *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  GetSystemInfo(&SystemInfo);
  v4 = 5LL;
  if ( SystemInfo.wProcessorArchitecture )
  {
    if ( SystemInfo.wProcessorArchitecture == 5 )
    {
      v4 = 3LL;
      if ( *(_QWORD *)(a1 + 72) < 3uLL )
      {
        v6 = "ARM";
        goto LABEL_25;
      }
      v7 = (_BYTE *)(a1 + 48);
      if ( *(_QWORD *)(a1 + 72) >= 0x10uLL )
        v7 = *v2;
      *(_QWORD *)(a1 + 64) = 3LL;
      v8 = "ARM";
    }
    else
    {
      if ( SystemInfo.wProcessorArchitecture != 9 )
      {
        v4 = 7LL;
        if ( *(_QWORD *)(a1 + 72) >= 7uLL )
        {
          v5 = (_BYTE *)(a1 + 48);
          if ( *(_QWORD *)(a1 + 72) >= 0x10uLL )
            v5 = *v2;
          *(_QWORD *)(a1 + 64) = 7LL;
          memmove(v5, "UNKNOWN", 7uLL);
          v5[7] = 0;
          goto LABEL_26;
        }
        v6 = "UNKNOWN";
LABEL_25:
        sub_18000FB34((__int64 *)(a1 + 48), v4, 0LL, v6);
        goto LABEL_26;
      }
      v4 = 3LL;
      if ( *(_QWORD *)(a1 + 72) < 3uLL )
      {
        v6 = "x64";
        goto LABEL_25;
      }
      v7 = (_BYTE *)(a1 + 48);
      if ( *(_QWORD *)(a1 + 72) >= 0x10uLL )
        v7 = *v2;
      *(_QWORD *)(a1 + 64) = 3LL;
      v8 = "x64";
    }
    memmove(v7, v8, 3uLL);
    v7[3] = 0;
    goto LABEL_26;
  }
  if ( *(_QWORD *)(a1 + 72) < 5uLL )
  {
    v6 = "WIN32";
    goto LABEL_25;
  }
  v9 = (_BYTE *)(a1 + 48);
  if ( *(_QWORD *)(a1 + 72) >= 0x10uLL )
    v9 = *v2;
  *(_QWORD *)(a1 + 64) = 5LL;
  memmove(v9, "WIN32", 5uLL);
  v9[5] = 0;
LABEL_26:
  v10 = o__aligned_malloc(160LL, 8LL);
  if ( !v10 )
  {
    sub_1800915B4(pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  v11 = sub_1801120C0(v10);
  v12 = v11;
  v18[0] = v11;
  if ( v3 != v18 )
  {
    v12 = 0LL;
    v18[0] = 0LL;
    v13 = *v3;
    *v3 = v11;
    if ( !v13 )
      goto LABEL_32;
    o__aligned_free(v13);
    v11 = 0LL;
  }
  if ( v11 )
    o__aligned_free(v12);
LABEL_32:
  v14 = (void *)*v3;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*v3 + 144), 0LL);
  sub_1801147FC(v14);
  if ( !_InterlockedExchangeAdd64(&qword_18021AB30, 1uLL) )
    sub_180002940((ULONGLONG *)&dword_18020DB20, 0LL, 0LL);
  v15 = (__int64 *)sub_180111D30((__int64)v19, a1 + 8, a1 + 16, a1 + 48);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 32), v15);
  v16 = v20;
  if ( v20 )
  {
    if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return a1;
}
