/*
 * XREFs of sub_18003BE90 @ 0x18003BE90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180011A50 @ 0x180011A50 (sub_180011A50.c)
 *     sub_18002F9B0 @ 0x18002F9B0 (sub_18002F9B0.c)
 *     sub_18003C590 @ 0x18003C590 (sub_18003C590.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003BE90(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // r14
  _QWORD *v5; // rax
  char *v6; // rdi
  int v7; // ebx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r9d
  int v13; // edx
  int v14; // eax
  __int64 v15; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  v18 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v3 = (_QWORD *)(a1 + 104);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  if ( !*v3 )
  {
    *v3 = 0LL;
    v5 = operator new(0x78uLL, (const struct std::nothrow_t *)&unk_18005AF88);
    v6 = (char *)v5;
    if ( !v5 )
    {
      v7 = -2147024882;
LABEL_14:
      v12 = v7;
      v13 = 107;
LABEL_19:
      sub_180003268(
        retaddr,
        v13,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        v12);
      if ( v2 )
        LeaveCriticalSection(v2);
      v15 = v18;
      goto LABEL_25;
    }
    v8 = v5 + 2;
    sub_180011A50(v5 + 2);
    v9 = qword_18005ADB0;
    *(_QWORD *)v6 = off_18004D7C0;
    *((_QWORD *)v6 + 1) = off_18004D7A0;
    *v8 = off_18004D758;
    *((_QWORD *)v6 + 7) = 1LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    *(_QWORD *)v6 = &off_18004D870;
    *((_QWORD *)v6 + 1) = off_18004D850;
    *v8 = off_18004D808;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v6 + 64), 0, 0);
    *((_QWORD *)v6 + 13) = 0LL;
    *((_QWORD *)v6 + 14) = 0LL;
    v19 = 0LL;
    v10 = CreateGameConfigStoreClient(&v19);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v11 = *((_QWORD *)v6 + 14);
      *((_QWORD *)v6 + 14) = v19;
      if ( v11 )
        FreeGameConfigStoreClient(v11);
      v7 = 0;
    }
    else
    {
      sub_180003268(
        retaddr,
        18,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        v10);
    }
    if ( v7 >= 0 )
      v7 = sub_18003C590(v6, &xmmword_180050978, v3);
    sub_18002F9B0((volatile signed __int64 *)v6);
    if ( v7 < 0 )
      goto LABEL_14;
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v14 = (**(__int64 (__fastcall ***)(_QWORD, __int128 *, __int64 *))*v3)(*v3, &xmmword_180050978, &v18);
  v7 = v14;
  if ( v14 < 0 )
  {
    v12 = v14;
    v13 = 110;
    goto LABEL_19;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  v15 = 0LL;
  *a2 = v18;
  v7 = 0;
LABEL_25:
  if ( v15 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)v7;
}
