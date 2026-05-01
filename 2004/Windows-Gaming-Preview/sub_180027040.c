/*
 * XREFs of sub_180027040 @ 0x180027040
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001003C @ 0x18001003C (sub_18001003C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180027040(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v8; // r8
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // r9d
  int v12; // edx
  int v13; // eax
  __int64 v14; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = 0LL;
  v8 = sub_18001003C(&v17);
  *v8 = 0LL;
  if ( *(_QWORD *)(a1 + 88) )
  {
    v9 = *(_QWORD *)(a1 + 88);
    if ( v9 )
      v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v9 + 24LL))(
              v9,
              &xmmword_180050B88,
              v8);
    else
      v10 = 0;
  }
  else
  {
    v10 = -2147467259;
  }
  if ( v10 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v17 + 80LL))(v17, a2, a3, a4);
    v10 = v13;
    if ( v13 >= 0 )
      goto LABEL_11;
    v11 = v13;
    v12 = 179;
  }
  else
  {
    v11 = v10;
    v12 = 177;
  }
  sub_180003268(retaddr, v12, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v11);
LABEL_11:
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v10;
}
