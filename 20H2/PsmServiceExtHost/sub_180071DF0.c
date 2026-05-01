/*
 * XREFs of sub_180071DF0 @ 0x180071DF0
 * Callers:
 *     sub_180071D9C @ 0x180071D9C (sub_180071D9C.c)
 * Callees:
 *     sub_180041F58 @ 0x180041F58 (sub_180041F58.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180071EC8 @ 0x180071EC8 (sub_180071EC8.c)
 *     sub_180072790 @ 0x180072790 (sub_180072790.c)
 *     sub_18007FB44 @ 0x18007FB44 (sub_18007FB44.c)
 */

_UNKNOWN **__fastcall sub_180071DF0(_QWORD *a1, int a2, unsigned int a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  int v14; // [rsp+60h] [rbp+8h] BYREF

  result = &retaddr;
  v5 = (_QWORD *)*a1;
  v6 = 0LL;
  v12 = 0LL;
  while ( v5 != a1 )
  {
    v11 = v5[2];
    if ( v6 != (_QWORD *)v11 )
    {
      sub_180041F58(&v12, v11);
      v6 = v12;
    }
    result = (_UNKNOWN **)sub_180071EC8(v6, a3, &v14);
    if ( (_DWORD)result )
    {
      if ( (*(_BYTE *)(v6[165] + 836LL) & 1) != 0 )
        result = (_UNKNOWN **)sub_18007FB44(v6[214], v6[219]);
      else
        result = (_UNKNOWN **)sub_180072790((_DWORD)v6, v14, a2, -1, a4);
    }
    v5 = (_QWORD *)*v5;
  }
  if ( v6 )
    return (_UNKNOWN **)(*(__int64 (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  return result;
}
