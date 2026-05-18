/*
 * XREFs of sub_18009B244 @ 0x18009B244
 * Callers:
 *     sub_180019740 @ 0x180019740 (sub_180019740.c)
 *     sub_18001CF50 @ 0x18001CF50 (sub_18001CF50.c)
 * Callees:
 *     sub_18001FFEC @ 0x18001FFEC (sub_18001FFEC.c)
 *     sub_180063B28 @ 0x180063B28 (sub_180063B28.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18009B244(_QWORD *a1)
{
  __int64 *v2; // rbx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx

  v2 = a1 + 16;
  *a1 = &Spectre::Engine::Sampler::`vftable';
  sub_180063B28(a1 + 16);
  sub_18001FFEC(v2, (__int64)v2);
  v3 = (volatile signed __int32 *)a1[15];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)a1[13];
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  return sub_180022184((__int64)a1);
}
