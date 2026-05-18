/*
 * XREFs of sub_18009272C @ 0x18009272C
 * Callers:
 *     sub_180012F88 @ 0x180012F88 (sub_180012F88.c)
 *     sub_18009D6D0 @ 0x18009D6D0 (sub_18009D6D0.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 *     sub_1800C3FC8 @ 0x1800C3FC8 (sub_1800C3FC8.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 *     sub_1800F9F20 @ 0x1800F9F20 (sub_1800F9F20.c)
 *     sub_180110B10 @ 0x180110B10 (sub_180110B10.c)
 * Callees:
 *     sub_180092848 @ 0x180092848 (sub_180092848.c)
 *     sub_1800A5B70 @ 0x1800A5B70 (sub_1800A5B70.c)
 *     sub_1800AA734 @ 0x1800AA734 (sub_1800AA734.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009272C(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r8
  volatile signed __int32 *v12; // rdi
  _BYTE v13[8]; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int32 *v14; // [rsp+38h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v7 = *(volatile signed __int32 **)(a1 + 144);
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 2);
    v7 = *(volatile signed __int32 **)(a1 + 144);
  }
  v8 = *(_QWORD *)(a1 + 136);
  if ( v8 )
  {
    v9 = (_QWORD *)sub_1800AA734(v8, v13);
    v10 = sub_1800A5B70(*v9, a2);
    LOBYTE(v11) = a3;
    result = sub_180092848(a1, v10, v11);
    v12 = v14;
    if ( v14 )
    {
      result = (unsigned int)_InterlockedDecrement(v14 + 2);
      if ( !(_DWORD)result )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        result = (unsigned int)_InterlockedDecrement(v12 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
  }
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
