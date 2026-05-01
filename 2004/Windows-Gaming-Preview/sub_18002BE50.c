/*
 * XREFs of sub_18002BE50 @ 0x18002BE50
 * Callers:
 *     sub_18002BE30 @ 0x18002BE30 (sub_18002BE30.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_1800120A0 @ 0x1800120A0 (sub_1800120A0.c)
 *     sub_180031038 @ 0x180031038 (sub_180031038.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180044870 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002BE50(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, __int64 *),
        HSTRING a3,
        __int64 a4)
{
  int v9; // esi
  __int64 (__fastcall **v10)(_QWORD, void *, __int64 *); // rax
  int v11; // eax
  int v12; // r9d
  int v13; // edx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  volatile signed __int64 *v17; // rbx
  signed __int64 v18; // rax
  __int64 v19; // rcx
  signed __int64 v20; // rtt
  volatile signed __int64 *v21; // r14
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  HSTRING v24; // rsi
  HSTRING v25; // r15
  _QWORD *v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // rdi
  volatile signed __int64 **v29; // rax
  HSTRING v30; // rdi
  HSTRING v31; // rdi
  HSTRING string; // [rsp+38h] [rbp-29h] BYREF
  HSTRING newString; // [rsp+40h] [rbp-21h] BYREF
  __int64 v34; // [rsp+48h] [rbp-19h] BYREF
  HSTRING v35; // [rsp+50h] [rbp-11h]
  HSTRING v36; // [rsp+58h] [rbp-9h]
  int v37; // [rsp+60h] [rbp-1h] BYREF
  __int64 v38; // [rsp+64h] [rbp+3h]
  volatile signed __int64 *v39; // [rsp+78h] [rbp+17h] BYREF
  __int64 retaddr; // [rsp+C0h] [rbp+5Fh]
  UINT32 length; // [rsp+C8h] [rbp+67h] BYREF

  if ( *(_QWORD *)(a1 + 240) )
  {
    sub_180003268(
      retaddr,
      1498,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      -2147024891);
    return 2147942405LL;
  }
  if ( WindowsGetStringLen(a3) < 0x104 )
  {
    string = 0LL;
    if ( a2 )
    {
      v10 = *a2;
      v34 = 0LL;
      v11 = (*v10)(a2, &unk_180050DB8, &v34);
      v9 = v11;
      if ( v11 < 0 )
      {
        v12 = v11;
        v13 = 1507;
        goto LABEL_17;
      }
      v14 = v34;
      WindowsDeleteString(string);
      v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v14 + 96LL))(v14, &string);
      v9 = v15;
      if ( v15 < 0 )
      {
        v12 = v15;
        v13 = 1508;
        goto LABEL_17;
      }
      length = 0;
      WindowsGetStringRawBuffer(string, &length);
      if ( !string || !length )
      {
        v9 = -2147024809;
        v13 = 1512;
        v12 = -2147024809;
LABEL_17:
        sub_180003268(retaddr, v13, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v12);
        v19 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
LABEL_40:
        WindowsDeleteString(string);
        return (unsigned int)v9;
      }
      v16 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    v17 = (volatile signed __int64 *)(a1 - 16);
    if ( a1 != 16 )
    {
      v18 = *((_QWORD *)v17 + 17);
      while ( v18 >= 0 )
      {
        v20 = v18;
        v18 = _InterlockedCompareExchange64(v17 + 17, v18 + 1, v18);
        if ( v20 == v18 )
          goto LABEL_22;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v18 + 16));
    }
LABEL_22:
    WindowsDeleteString(0LL);
    newString = 0LL;
    WindowsDuplicateString(a3, &newString);
    v21 = (volatile signed __int64 *)(a1 - 16);
    v35 = string;
    v36 = newString;
    string = 0LL;
    newString = 0LL;
    v39 = (volatile signed __int64 *)(a1 - 16);
    if ( a1 != 16 )
    {
      v22 = *((_QWORD *)v17 + 17);
      while ( v22 >= 0 )
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange64(v17 + 17, v22 + 1, v22);
        if ( v23 == v22 )
          goto LABEL_27;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v22 + 16));
LABEL_27:
      v21 = v39;
    }
    v24 = v35;
    v25 = v36;
    v37 = 3;
    v38 = 128LL;
    v26 = operator new(0x38uLL, (const struct std::nothrow_t *)&unk_18005AF88);
    v28 = v26;
    if ( v26 )
    {
      v26[1] = v17;
      v29 = (volatile signed __int64 **)(v26 + 2);
      *v29 = 0LL;
      if ( v29 != &v39 )
      {
        *v29 = v17;
        v21 = 0LL;
      }
      v28[3] = v24;
      v28[4] = v25;
      *v28 = off_18004D150;
      *((_DWORD *)v28 + 10) = 0;
      `eh vector constructor iterator'(
        v28 + 6,
        8uLL,
        1uLL,
        (void (*)(void *))__crt_deferred_errno_cache::__crt_deferred_errno_cache,
        (void (*)(void *))sub_1800081D0);
      *((_DWORD *)v28 + 10) = 0;
    }
    else
    {
      v28 = 0LL;
    }
    v9 = sub_180031038(&v37, a4, v27, v28);
    if ( v21 )
      sub_1800120A0(v21);
    if ( v9 >= 0 )
    {
      v31 = newString;
      v9 = 0;
    }
    else
    {
      sub_180003268(retaddr, 1554, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v9);
      v30 = v35;
      WindowsDeleteString(string);
      string = v30;
      v31 = v36;
      WindowsDeleteString(newString);
      newString = v31;
    }
    WindowsDeleteString(v31);
    newString = 0LL;
    if ( v17 )
      sub_1800120A0(v17);
    goto LABEL_40;
  }
  v9 = -2147024809;
  sub_180003268(retaddr, 1501, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", -2147024809);
  return (unsigned int)v9;
}
