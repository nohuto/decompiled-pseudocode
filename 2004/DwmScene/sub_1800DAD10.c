/*
 * XREFs of sub_1800DAD10 @ 0x1800DAD10
 * Callers:
 *     sub_1800DADC0 @ 0x1800DADC0 (sub_1800DADC0.c)
 *     sub_1800DB3C4 @ 0x1800DB3C4 (sub_1800DB3C4.c)
 *     sub_1801282BF @ 0x1801282BF (sub_1801282BF.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800DAD10(_QWORD *a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx

  result = (__int64)&Spectre::Engine::RenderStateState::`vftable';
  *a1 = &Spectre::Engine::RenderStateState::`vftable';
  v3 = (volatile signed __int32 *)a1[4];
  if ( v3 )
  {
    result = (unsigned int)_InterlockedDecrement(v3 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      result = (unsigned int)_InterlockedDecrement(v3 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)a1[2];
  if ( v4 )
  {
    result = (unsigned int)_InterlockedDecrement(v4 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}
