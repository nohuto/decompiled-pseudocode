/*
 * XREFs of sub_18011C05C @ 0x18011C05C
 * Callers:
 *     sub_18011A90C @ 0x18011A90C (sub_18011A90C.c)
 *     sub_18011C0F0 @ 0x18011C0F0 (sub_18011C0F0.c)
 *     sub_18012B555 @ 0x18012B555 (sub_18012B555.c)
 * Callees:
 *     sub_18011C328 @ 0x18011C328 (sub_18011C328.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18011C05C(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx

  *a1 = &Spectre::Utils::IConfigurationManager::`vftable';
  result = sub_18011C328(a1 + 6);
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
