/*
 * XREFs of sub_180025BB0 @ 0x180025BB0
 * Callers:
 *     sub_180005E00 @ 0x180005E00 (sub_180005E00.c)
 *     sub_180025854 @ 0x180025854 (sub_180025854.c)
 *     sub_180027B9C @ 0x180027B9C (sub_180027B9C.c)
 *     sub_1800289C8 @ 0x1800289C8 (sub_1800289C8.c)
 *     sub_180028C94 @ 0x180028C94 (sub_180028C94.c)
 *     sub_1800292E8 @ 0x1800292E8 (sub_1800292E8.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18002AE20 (TS_AudioProtocolNotifyRundown.c)
 *     sub_18002B0D4 @ 0x18002B0D4 (sub_18002B0D4.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180017ABC @ 0x180017ABC (sub_180017ABC.c)
 *     sub_180017F24 @ 0x180017F24 (sub_180017F24.c)
 *     sub_18001A074 @ 0x18001A074 (sub_18001A074.c)
 *     sub_18002B1EC @ 0x18002B1EC (sub_18002B1EC.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800398A0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _o__invalid_parameter_noinfo @ 0x18003A752 (_o__invalid_parameter_noinfo.c)
 *     memmove @ 0x18003AE1B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180025BB0(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  volatile signed __int32 *v6; // rdx
  __int64 v7; // rcx
  size_t v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  size_t v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  void *v17; // rcx
  void *v18; // rdi
  HANDLE ProcessHeap; // rax
  void (__fastcall ***v20)(_QWORD, __int64); // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx

  v2 = *(void **)(a1 + 240);
  if ( v2 )
  {
    PowerSettingUnregisterNotification(v2);
    *(_QWORD *)(a1 + 240) = 0LL;
  }
  v3 = *(void **)(a1 + 248);
  if ( v3 )
  {
    PowerSettingUnregisterNotification(v3);
    *(_QWORD *)(a1 + 248) = 0LL;
  }
  *(_DWORD *)(a1 + 228) = 1;
  v4 = *(void **)(a1 + 40);
  if ( v4 )
    WTSFreeMemory(v4);
  while ( *(int *)(a1 + 168) > 0 )
  {
    v5 = **(struct _RTL_CRITICAL_SECTION ***)(a1 + 160);
    v6 = (volatile signed __int32 *)(**(_QWORD **)(a1 + 152) - 24LL);
    if ( _InterlockedExchangeAdd(v6 + 4, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v6 + 8LL))(*(_QWORD *)v6);
    v7 = *(int *)(a1 + 168);
    if ( (_DWORD)v7 != 1 )
    {
      v8 = 8LL * ((int)v7 - 1);
      v9 = *(_QWORD *)(a1 + 152);
      v10 = 8 * v7;
      if ( v8 )
      {
        if ( !v9 || v9 == -8 )
        {
LABEL_44:
          *(_DWORD *)o__errno(v7, v10) = 22;
LABEL_45:
          o__invalid_parameter_noinfo();
          sub_18000A174(-2147024809);
        }
        if ( v10 < v8 )
          goto LABEL_43;
        memmove(*(void **)(a1 + 152), (const void *)(v9 + 8), v8);
        v7 = *(unsigned int *)(a1 + 168);
      }
      v11 = 8LL * ((int)v7 - 1);
      v12 = *(_QWORD *)(a1 + 160);
      v10 = 8LL * (int)v7;
      if ( v11 )
      {
        if ( !v12 || v12 == -8 )
          goto LABEL_44;
        if ( v10 < v11 )
        {
LABEL_43:
          *(_DWORD *)o__errno(v7, v10) = 34;
          goto LABEL_45;
        }
        memmove(*(void **)(a1 + 160), (const void *)(v12 + 8), v11);
        LODWORD(v7) = *(_DWORD *)(a1 + 168);
      }
    }
    v13 = o__recalloc(*(_QWORD *)(a1 + 152), (int)v7 - 1, 8LL);
    v14 = *(_DWORD *)(a1 + 168);
    if ( v13 || v14 == 1 )
      *(_QWORD *)(a1 + 152) = v13;
    v15 = o__recalloc(*(_QWORD *)(a1 + 160), v14 - 1, 8LL);
    v16 = *(_DWORD *)(a1 + 168);
    if ( v15 || v16 == 1 )
      *(_QWORD *)(a1 + 160) = v15;
    *(_DWORD *)(a1 + 168) = v16 - 1;
    if ( v5 )
    {
      `eh vector destructor iterator'(&v5[5].LockCount, 8uLL, 0x15uLL, sub_18002B9D0);
      `eh vector destructor iterator'(&v5[1], 8uLL, 0x15uLL, sub_18002B9D0);
      DeleteCriticalSection(v5);
      sub_180039D98(v5);
    }
  }
  v17 = *(void **)(a1 + 336);
  if ( v17 )
    CoTaskMemFree(v17);
  v18 = *(void **)(a1 + 328);
  if ( v18 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v18);
  }
  v20 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 312);
  if ( v20 )
    (**v20)(v20, 1LL);
  sub_18002B1EC(a1 + 280);
  v21 = *(_QWORD *)(a1 + 272);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v22 = *(_QWORD *)(a1 + 264);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v23 = *(_QWORD *)(a1 + 256);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  sub_180017F24(a1 + 176);
  sub_180017ABC((__int64 *)(a1 + 152));
  sub_180017F24(a1 + 104);
  sub_180017F24(a1 + 56);
}
