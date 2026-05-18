/*
 * XREFs of sub_18009988C @ 0x18009988C
 * Callers:
 *     sub_180019830 @ 0x180019830 (sub_180019830.c)
 *     sub_18001CF60 @ 0x18001CF60 (sub_18001CF60.c)
 * Callees:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     sub_180063B28 @ 0x180063B28 (sub_180063B28.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18009988C(_QWORD *a1)
{
  __int64 *v2; // rdi
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rcx

  v2 = a1 + 14;
  *a1 = &Spectre::Engine::Texture::`vftable';
  sub_180063B28(a1 + 14);
  v3 = (void (__fastcall ***)(_QWORD, __int64))a1[17];
  if ( v3 )
    (**v3)(v3, 1LL);
  v4 = a1[16];
  if ( v4 )
    j__o_free(v4);
  sub_18001FFEC(v2, (__int64)v2);
  v5 = (volatile signed __int32 *)a1[13];
  if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  return sub_180022184((__int64)a1);
}
