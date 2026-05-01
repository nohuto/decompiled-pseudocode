/*
 * XREFs of sub_180026F60 @ 0x180026F60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001003C @ 0x18001003C (sub_18001003C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180026F60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // r8
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // r9d
  int v10; // edx
  int v11; // eax
  __int64 v12; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = 0LL;
  v6 = sub_18001003C(&v15);
  *v6 = 0LL;
  if ( *(_QWORD *)(a1 + 88) )
  {
    v7 = *(_QWORD *)(a1 + 88);
    if ( v7 )
      v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v7 + 24LL))(
             v7,
             &xmmword_180050B88,
             v6);
    else
      v8 = 0;
  }
  else
  {
    v8 = -2147467259;
  }
  if ( v8 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v15 + 72LL))(v15, a2, a3);
    v8 = v11;
    if ( v11 >= 0 )
      goto LABEL_11;
    v9 = v11;
    v10 = 165;
  }
  else
  {
    v9 = v8;
    v10 = 163;
  }
  sub_180003268(retaddr, v10, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v9);
LABEL_11:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v8;
}
