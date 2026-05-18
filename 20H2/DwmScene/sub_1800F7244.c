/*
 * XREFs of sub_1800F7244 @ 0x1800F7244
 * Callers:
 *     sub_1800F6850 @ 0x1800F6850 (sub_1800F6850.c)
 *     sub_1800F8650 @ 0x1800F8650 (sub_1800F8650.c)
 *     sub_1800F89F0 @ 0x1800F89F0 (sub_1800F89F0.c)
 *     sub_180129C46 @ 0x180129C46 (sub_180129C46.c)
 *     unknown_libname_80 @ 0x180129D43 (unknown_libname_80.c)
 *     sub_180129D4F @ 0x180129D4F (sub_180129D4F.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F7244(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rcx
  __int64 result; // rax
  _QWORD *v6; // rcx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx

  v2 = a1 + 15;
  v4 = (_QWORD *)a1[22];
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v4 + 32LL))(v4, a2);
    v2[7] = 0LL;
  }
  v6 = (_QWORD *)a1[14];
  if ( v6 )
  {
    LOBYTE(a2) = v6 != a1 + 7;
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6 + 32LL))(v6, a2);
    a1[14] = 0LL;
  }
  v7 = (volatile signed __int32 *)a1[3];
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = (volatile signed __int32 *)a1[1];
  if ( v8 )
  {
    result = (unsigned int)_InterlockedDecrement(v8 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      result = (unsigned int)_InterlockedDecrement(v8 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return result;
}
