/*
 * XREFs of sub_180048F10 @ 0x180048F10
 * Callers:
 *     sub_180048650 @ 0x180048650 (sub_180048650.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180048F10(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  __int64 result; // rax
  volatile signed __int32 *v4; // rdi
  __int128 v5; // [rsp+20h] [rbp-18h]

  v1 = *(volatile signed __int32 **)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 136) = 3;
  if ( v1 )
  {
    result = (unsigned int)_InterlockedDecrement(v1 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      result = (unsigned int)_InterlockedDecrement(v1 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  v4 = *(volatile signed __int32 **)(a1 + 128);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  if ( v4 )
  {
    result = (unsigned int)_InterlockedDecrement(v4 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedDecrement(v4 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  *(_QWORD *)&v5 = 0LL;
  BYTE8(v5) = 1;
  *(_OWORD *)(a1 + 144) = v5;
  return result;
}
