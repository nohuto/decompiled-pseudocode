/*
 * XREFs of sub_1800F07E0 @ 0x1800F07E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F07E0(__int64 a1)
{
  __int64 v1; // rbx
  volatile signed __int32 *v2; // rcx

  v1 = a1 + 16;
  *(_QWORD *)(a1 + 16) = &Spectre::Engine::ConstantBuffer::`vftable';
  sub_18001FFEC((__int64 *)(a1 + 128), a1 + 128);
  v2 = *(volatile signed __int32 **)(v1 + 104);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  return sub_180022184(v1);
}
