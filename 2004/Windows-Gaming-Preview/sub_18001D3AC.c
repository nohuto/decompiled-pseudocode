/*
 * XREFs of sub_18001D3AC @ 0x18001D3AC
 * Callers:
 *     sub_18001CC34 @ 0x18001CC34 (sub_18001CC34.c)
 *     sub_18001D640 @ 0x18001D640 (sub_18001D640.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001E990 @ 0x18001E990 (sub_18001E990.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001D3AC(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+38h] [rbp-18h] BYREF
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+68h] [rbp+18h]
  __int64 v17; // [rsp+70h] [rbp+20h] BYREF
  __int64 v18; // [rsp+88h] [rbp+38h] BYREF

  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(a1 + 56) + 56LL))(
         *(_QWORD *)(a1 + 56),
         3LL,
         0LL,
         &v18);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_180003268(retaddr, 609, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v6);
    goto LABEL_10;
  }
  v17 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)(a1 + 56) + 72LL))(
         *(_QWORD *)(a1 + 56),
         a2,
         &v17);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v13 = *(_QWORD *)(a1 + 128);
    v14 = *(_QWORD *)(a1 + 56);
    v15 = v17;
    v8 = sub_18001E990(a3, &v15, &v14, &v13);
    v7 = v8;
    if ( v8 >= 0 )
      goto LABEL_8;
    v9 = 618;
  }
  else
  {
    v9 = 612;
  }
  sub_180003268(retaddr, v9, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v8);
LABEL_8:
  v10 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_10:
  v11 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v7;
}
