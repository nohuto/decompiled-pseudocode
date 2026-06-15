/*
 * XREFs of sub_18001B5C0 @ 0x18001B5C0
 * Callers:
 *     sub_180002E28 @ 0x180002E28 (sub_180002E28.c)
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_1800D31A8 @ 0x1800D31A8 (sub_1800D31A8.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BABDC @ 0x1800BABDC (sub_1800BABDC.c)
 */

__int64 __fastcall sub_18001B5C0(const void **a1, unsigned int a2)
{
  const void *v2; // r14
  int v5; // ebp
  __int64 (__fastcall ***v6)(_QWORD, _QWORD, __int64); // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  void *v10; // rbx
  size_t v11; // r8
  signed __int32 v12; // eax
  bool v13; // cc
  __int64 result; // rax
  __int64 v15; // rcx

  v2 = *a1;
  v5 = *((_DWORD *)*a1 - 4);
  v6 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)*a1 - 3)
                                                                                            + 32LL))(*((_QWORD *)*a1 - 3));
  v7 = (**v6)(v6, a2, 2LL);
  v9 = v7;
  if ( !v7 )
    sub_1800BABDC();
  v10 = (void *)(v7 + 24);
  if ( v5 < (int)a2 )
    a2 = v5;
  v11 = 2LL * (int)(a2 + 1);
  if ( v11 )
  {
    if ( v7 != -24 )
    {
      if ( v2 )
      {
        memcpy(v10, v2, v11);
        goto LABEL_8;
      }
      memset(v10, 0, v11);
    }
    *(_DWORD *)o__errno(v8) = 22;
    o__invalid_parameter_noinfo(v15);
  }
LABEL_8:
  *(_DWORD *)(v9 + 8) = v5;
  v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 2, 0xFFFFFFFF);
  v13 = v12 <= 1;
  result = (unsigned int)(v12 - 1);
  if ( v13 )
    result = (*(__int64 (__fastcall **)(_QWORD, __int64, size_t))(**((_QWORD **)v2 - 3) + 8LL))(
               *((_QWORD *)v2 - 3),
               (__int64)v2 - 24,
               v11);
  *a1 = v10;
  return result;
}
