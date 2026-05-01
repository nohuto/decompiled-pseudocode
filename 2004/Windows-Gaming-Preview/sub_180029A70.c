/*
 * XREFs of sub_180029A70 @ 0x180029A70
 * Callers:
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180011B00 @ 0x180011B00 (sub_180011B00.c)
 *     sub_1800280C8 @ 0x1800280C8 (sub_1800280C8.c)
 *     sub_180028818 @ 0x180028818 (sub_180028818.c)
 *     sub_18003AD24 @ 0x18003AD24 (sub_18003AD24.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180029A70(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  _QWORD *v7; // r14
  unsigned int v8; // ebx
  int v9; // edx
  __int64 *v10; // rdi
  __int64 *j; // rbx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 **v14; // rax
  __int64 *i; // rax
  __int64 *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int64 *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v7 = *(_QWORD **)(a1 + 256);
  if ( !v7 || !*(_QWORD *)(a1 + 264) )
  {
    v8 = -2147467259;
    v9 = 917;
    goto LABEL_32;
  }
  if ( *(_QWORD *)(a1 + 136) )
  {
    v8 = -2147024891;
    v9 = 920;
LABEL_32:
    sub_180003268(retaddr, v9, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v8);
    if ( v3 )
      LeaveCriticalSection(v3);
    return v8;
  }
  if ( !v7[11] )
  {
    v8 = -2147467259;
    sub_180003268(
      retaddr,
      127,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      -2147467259);
    v9 = 924;
    goto LABEL_32;
  }
  v10 = (__int64 *)v7[10];
  j = (__int64 *)*v10;
  while ( j != v10 )
  {
    v12 = (__int64 *)v7[8];
    v13 = *v12;
    v24 = *((_OWORD *)j + 2);
    (*(void (__fastcall **)(__int64 *, __int128 *, __int64, const WCHAR *, int))(v13 + 72))(
      v12,
      &v24,
      24LL,
      &word_180051520,
      2);
    v14 = (__int64 **)j[2];
    if ( *((_BYTE *)v14 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v16 = *v14;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v16 + 25); v16 = (__int64 *)*v16 )
        j = v16;
    }
  }
  sub_18003AD24(a2, v7 + 10);
  v17 = v7[9];
  v18 = v7[8];
  v7[8] = 0LL;
  v7[9] = 0LL;
  v19 = (volatile signed __int32 *)a3[1];
  *a3 = v18;
  a3[1] = v17;
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  v20 = *(volatile signed __int64 **)(a1 + 256);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 256) = 0LL;
    sub_180011B00(v20);
  }
  v21 = *(_QWORD *)(a1 + 192);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 192) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( *(_QWORD *)(a1 + 232) && *(_QWORD *)(a1 + 216) )
  {
    sub_1800280C8(a1 - 24);
    sub_180028818((_QWORD *)(a1 - 24), v22);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
