/*
 * XREFs of sub_180028228 @ 0x180028228
 * Callers:
 *     sub_1800273AC @ 0x1800273AC (sub_1800273AC.c)
 *     sub_180027610 @ 0x180027610 (sub_180027610.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180016730 @ 0x180016730 (sub_180016730.c)
 *     sub_18002A4F4 @ 0x18002A4F4 (sub_18002A4F4.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180028228(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  __int64 v3; // rax
  __int128 v4; // xmm0
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // r9d
  int v8; // edx
  int v9; // eax
  int v10; // edx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+58h] [rbp+10h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v18 = v2;
  v3 = *(_QWORD *)(a1 + 280);
  if ( !v3 || !*(_QWORD *)(a1 + 288) )
  {
    if ( !*(_QWORD *)(a1 + 272) )
    {
      v6 = -2147418113;
      v7 = -2147418113;
      v8 = 429;
      goto LABEL_21;
    }
    v17 = 0LL;
    v9 = sub_18002A4F4(a1, &v17);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v11 = v17;
      WindowsDeleteString(*(HSTRING *)(a1 + 152));
      *(_QWORD *)(a1 + 152) = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 64LL))(v11, a1 + 152);
      v6 = v9;
      if ( v9 >= 0 )
      {
        v13 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        goto LABEL_17;
      }
      v10 = 425;
    }
    else
    {
      v10 = 424;
    }
    sub_180003268(retaddr, v10, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v9);
    v12 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    goto LABEL_22;
  }
  if ( *(_QWORD *)(v3 + 88) )
    v4 = *(_OWORD *)(**(_QWORD **)(v3 + 80) + 32LL);
  else
    v4 = xmmword_180052C18;
  v15 = v4;
  WindowsDeleteString(*(HSTRING *)(a1 + 152));
  *(_QWORD *)(a1 + 152) = 0LL;
  v5 = sub_180016730(*(_QWORD *)(a1 + 288), &v15, 15LL, (HSTRING *)(a1 + 152));
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = v5;
    v8 = 419;
LABEL_21:
    sub_180003268(retaddr, v8, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v7);
LABEL_22:
    if ( v2 )
      LeaveCriticalSection(v2);
    return v6;
  }
LABEL_17:
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
