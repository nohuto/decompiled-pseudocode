/*
 * XREFs of sub_180026B40 @ 0x180026B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001003C @ 0x18001003C (sub_18001003C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180026B40(__int64 a1, __int64 a2)
{
  __int64 *v4; // r8
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // r9d
  int v8; // edx
  int v9; // eax
  __int64 v10; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  v4 = sub_18001003C(&v13);
  *v4 = 0LL;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v5 = *(_QWORD *)(a1 + 96);
    if ( v5 )
      v6 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v5 + 24LL))(
             v5,
             &xmmword_180050E58,
             v4);
    else
      v6 = 0;
  }
  else
  {
    v6 = -2147467259;
  }
  if ( v6 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 72LL))(v13, a2, v4);
    v6 = v9;
    if ( v9 >= 0 )
      goto LABEL_11;
    v7 = v9;
    v8 = 103;
  }
  else
  {
    v7 = v6;
    v8 = 101;
  }
  sub_180003268(retaddr, v8, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v7);
LABEL_11:
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v6;
}
