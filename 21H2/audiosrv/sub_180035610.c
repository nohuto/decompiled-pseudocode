/*
 * XREFs of sub_180035610 @ 0x180035610
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001BE70 @ 0x18001BE70 (sub_18001BE70.c)
 *     sub_1800356E8 @ 0x1800356E8 (sub_1800356E8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800B9818 @ 0x1800B9818 (sub_1800B9818.c)
 */

__int64 __fastcall sub_180035610(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 *v4; // r8
  __int64 v5; // rax
  __int64 v6; // rbx
  bool v7; // zf
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rcx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int128 v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+40h] [rbp-18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a2 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 112));
  v4 = *(__int64 **)(a2 + 152);
  if ( !v4 )
    sub_1800B8610(2147500037LL);
  v5 = *v4;
  v6 = v4[2];
  *(_QWORD *)(a2 + 152) = *v4;
  if ( v5 )
    *(_QWORD *)(v5 + 8) = 0LL;
  else
    *(_QWORD *)(a2 + 160) = 0LL;
  *v4 = *(_QWORD *)(a2 + 184);
  v7 = (*(_QWORD *)(a2 + 168))-- == 1LL;
  *(_QWORD *)(a2 + 184) = v4;
  if ( v7 )
    sub_1800356E8();
  if ( v2 )
    LeaveCriticalSection(v2);
  v8 = *(_DWORD *)(v6 + 16);
  if ( v8 == 4 )
  {
    v9 = *(_DWORD *)(v6 + 48);
    v10 = *(_QWORD *)(v6 + 8);
    v15 = *(_OWORD *)(v6 + 32);
    v16 = v9;
    sub_18001BE70(v10, (__int64)&v15);
  }
  else
  {
    v12 = v8 - 1;
    if ( v12 && (v13 = v12 - 1) != 0 && (v14 = v13 - 1) != 0 )
    {
      if ( v14 == 2 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)qword_18019E618 + 368LL))(
          qword_18019E618,
          *(_QWORD *)(v6 + 8),
          *(unsigned int *)(v6 + 20),
          *(unsigned int *)(v6 + 24));
    }
    else
    {
      sub_1800B9818(a2, *(_QWORD *)(v6 + 8));
    }
  }
  return (**(__int64 (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
}
