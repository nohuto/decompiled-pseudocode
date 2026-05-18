/*
 * XREFs of sub_18012192C @ 0x18012192C
 * Callers:
 *     sub_1801201DC @ 0x1801201DC (sub_1801201DC.c)
 *     sub_1801219C0 @ 0x1801219C0 (sub_1801219C0.c)
 *     sub_180130E6D @ 0x180130E6D (sub_180130E6D.c)
 * Callees:
 *     sub_180121BF8 @ 0x180121BF8 (sub_180121BF8.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18012192C(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx

  *a1 = &Spectre::Utils::IConfigurationManager::`vftable';
  result = sub_180121BF8(a1 + 6);
  v3 = (volatile signed __int32 *)a1[5];
  if ( v3 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)a1[2];
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return result;
}
