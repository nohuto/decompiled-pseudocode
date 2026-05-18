/*
 * XREFs of sub_18008CE5C @ 0x18008CE5C
 * Callers:
 *     sub_180012EA8 @ 0x180012EA8 (sub_180012EA8.c)
 *     sub_180097E00 @ 0x180097E00 (sub_180097E00.c)
 *     sub_1800BC4B0 @ 0x1800BC4B0 (sub_1800BC4B0.c)
 *     sub_1800BE6F8 @ 0x1800BE6F8 (sub_1800BE6F8.c)
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 *     sub_1800F4650 @ 0x1800F4650 (sub_1800F4650.c)
 *     sub_18010B240 @ 0x18010B240 (sub_18010B240.c)
 * Callees:
 *     sub_18008CF78 @ 0x18008CF78 (sub_18008CF78.c)
 *     sub_1800A02A0 @ 0x1800A02A0 (sub_1800A02A0.c)
 *     sub_1800A4E64 @ 0x1800A4E64 (sub_1800A4E64.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008CE5C(__int64 a1, __int64 a2, char a3)
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
    v9 = (_QWORD *)sub_1800A4E64(v8, v13);
    v10 = sub_1800A02A0(*v9, a2);
    LOBYTE(v11) = a3;
    result = sub_18008CF78(a1, v10, v11);
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
