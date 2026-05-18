/*
 * XREFs of sub_18008FE00 @ 0x18008FE00
 * Callers:
 *     sub_18008FFD0 @ 0x18008FFD0 (sub_18008FFD0.c)
 *     sub_180090000 @ 0x180090000 (sub_180090000.c)
 *     sub_18009A16C @ 0x18009A16C (sub_18009A16C.c)
 *     sub_18009DE90 @ 0x18009DE90 (sub_18009DE90.c)
 *     sub_1800ACF68 @ 0x1800ACF68 (sub_1800ACF68.c)
 *     sub_1800B88B8 @ 0x1800B88B8 (sub_1800B88B8.c)
 *     sub_180101584 @ 0x180101584 (sub_180101584.c)
 *     sub_180103570 @ 0x180103570 (sub_180103570.c)
 *     sub_18012BBBD @ 0x18012BBBD (sub_18012BBBD.c)
 *     sub_18012C4A2 @ 0x18012C4A2 (sub_18012C4A2.c)
 *     sub_18012C571 @ 0x18012C571 (sub_18012C571.c)
 *     sub_18012F835 @ 0x18012F835 (sub_18012F835.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall sub_18008FE00(_QWORD *a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 result; // rax
  volatile signed __int32 *v11; // rcx

  *a1 = &Spectre::Engine::Component::`vftable';
  v2 = a1[10];
  if ( v2 )
  {
    a1[10] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (volatile signed __int32 *)a1[8];
  if ( v3 && _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = a1[6];
  if ( v4 >= 0x10 )
  {
    v5 = v4 + 1;
    v6 = a1[3];
    if ( v5 >= 0x1000 )
    {
      v7 = v5 + 39;
      v8 = *(_QWORD *)(v6 - 8);
      v9 = v6 - v8;
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v7);
        JUMPOUT(0x18008FED7LL);
      }
      v6 = v8;
    }
    j_j__o_free(v6);
  }
  a1[5] = 0LL;
  a1[6] = 15LL;
  *((_BYTE *)a1 + 24) = 0;
  result = (unsigned __int64)&Spectre::Engine::IVisitable::`vftable';
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  v11 = (volatile signed __int32 *)a1[2];
  if ( v11 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  }
  return result;
}
