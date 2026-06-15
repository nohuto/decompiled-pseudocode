/*
 * XREFs of sub_180009D94 @ 0x180009D94
 * Callers:
 *     sub_18003B3D5 @ 0x18003B3D5 (sub_18003B3D5.c)
 *     sub_18003B42A @ 0x18003B42A (sub_18003B42A.c)
 *     sub_18003B5CD @ 0x18003B5CD (sub_18003B5CD.c)
 *     ?dtor$2@?0???R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA?AV?$task@_N@Concurrency@@_N@Z@4HA @ 0x18003B60C (-dtor$2@-0---R_lambda_8b695f9820225e821433c25f6ed27cb8_@@QEBA-AV-$task@_N@Concurrency@@_N@Z@4HA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180009D94(__int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rdx
  signed __int32 v4; // eax
  bool v5; // cc
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 16) - 24LL);
  v4 = _InterlockedExchangeAdd(v3 + 4, 0xFFFFFFFF);
  v5 = v4 <= 1;
  result = (unsigned int)(v4 - 1);
  if ( v5 )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 8LL))(*(_QWORD *)v3);
  return result;
}
