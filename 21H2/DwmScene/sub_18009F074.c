/*
 * XREFs of sub_18009F074 @ 0x18009F074
 * Callers:
 *     sub_180033BA0 @ 0x180033BA0 (sub_180033BA0.c)
 *     sub_18009F2B0 @ 0x18009F2B0 (sub_18009F2B0.c)
 *     sub_1800B7990 @ 0x1800B7990 (sub_1800B7990.c)
 * Callees:
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_18009F074(_QWORD *a1)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  volatile signed __int32 *v9; // rcx
  volatile signed __int32 *v10; // rcx

  *a1 = &Spectre::Engine::DeviceTexture::`vftable';
  v2 = a1[18];
  if ( v2 >= 0x10 )
  {
    v3 = a1[15];
    v4 = v2 + 1;
    if ( v4 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v3 - 8);
      v6 = v4 + 39;
      v7 = v3 - v5;
      if ( (unsigned __int64)(v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v7, v6);
        JUMPOUT(0x18009F15BLL);
      }
      v3 = v5;
    }
    j_j__o_free(v3);
  }
  a1[17] = 0LL;
  a1[18] = 15LL;
  *((_BYTE *)a1 + 120) = 0;
  v8 = (_QWORD *)a1[14];
  if ( v8 )
  {
    if ( *v8 )
      j__o_free(*v8);
    j__o_free(v8);
  }
  v9 = (volatile signed __int32 *)a1[13];
  if ( v9 && _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = (volatile signed __int32 *)a1[10];
  if ( v10 && _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  return sub_180067BE8((__int64)a1);
}
