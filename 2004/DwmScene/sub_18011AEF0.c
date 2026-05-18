/*
 * XREFs of sub_18011AEF0 @ 0x18011AEF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18011A458 @ 0x18011A458 (sub_18011A458.c)
 *     sub_18011B0B8 @ 0x18011B0B8 (sub_18011B0B8.c)
 *     sub_18011CB80 @ 0x18011CB80 (sub_18011CB80.c)
 *     sub_18011CCD8 @ 0x18011CCD8 (sub_18011CCD8.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18011AEF0(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  unsigned int v6; // esi
  char *v7; // rax
  __int64 v8; // rbp
  _QWORD *v9; // rdx
  __int64 v10; // rax
  int v11; // eax
  _QWORD v13[5]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14[5]; // [rsp+48h] [rbp-40h] BYREF

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v13[4] = a1 + 64;
  v5 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v5 )
  {
LABEL_10:
    std::_Throw_C_error(v5);
    JUMPOUT(0x18011AFE9LL);
  }
  v6 = 0;
  if ( a2[2] )
  {
    v7 = (char *)(*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v14, a2);
    sub_18011A458((char **)(a1 + 144), (__int64)v13, v7);
    v8 = v13[0];
    unknown_libname_101(v14);
    v9 = a2;
    if ( a2[3] >= 8uLL )
      v9 = (_QWORD *)*a2;
    if ( (unsigned __int8)sub_18011CCD8(v8 + 64, v9) )
    {
      v13[2] = 0LL;
      v13[3] = 0LL;
      sub_18001269C(v13, (__int64)a2);
      v10 = sub_18011CB80(v8 + 64, v13);
      v6 = sub_18011B0B8(a1, v10);
    }
  }
  v11 = Mtx_unlock(v4);
  if ( v11 )
  {
    std::_Throw_C_error(v11);
    goto LABEL_10;
  }
  return v6;
}
