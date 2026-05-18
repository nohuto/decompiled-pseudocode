/*
 * XREFs of sub_1800111C8 @ 0x1800111C8
 * Callers:
 *     sub_180011354 @ 0x180011354 (sub_180011354.c)
 *     sub_1800140B8 @ 0x1800140B8 (sub_1800140B8.c)
 *     sub_18001415C @ 0x18001415C (sub_18001415C.c)
 *     sub_180018778 @ 0x180018778 (sub_180018778.c)
 *     sub_1800187D8 @ 0x1800187D8 (sub_1800187D8.c)
 *     sub_1800764EC @ 0x1800764EC (sub_1800764EC.c)
 *     sub_180076564 @ 0x180076564 (sub_180076564.c)
 *     sub_1800766A0 @ 0x1800766A0 (sub_1800766A0.c)
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 *     sub_180076790 @ 0x180076790 (sub_180076790.c)
 *     sub_1800768CC @ 0x1800768CC (sub_1800768CC.c)
 *     sub_180076944 @ 0x180076944 (sub_180076944.c)
 *     sub_1800769BC @ 0x1800769BC (sub_1800769BC.c)
 *     sub_18008AE6C @ 0x18008AE6C (sub_18008AE6C.c)
 *     sub_18008FBE4 @ 0x18008FBE4 (sub_18008FBE4.c)
 *     sub_180099B3C @ 0x180099B3C (sub_180099B3C.c)
 *     sub_18009DC80 @ 0x18009DC80 (sub_18009DC80.c)
 *     sub_1800A8788 @ 0x1800A8788 (sub_1800A8788.c)
 *     sub_1800ACB08 @ 0x1800ACB08 (sub_1800ACB08.c)
 *     sub_1800B850C @ 0x1800B850C (sub_1800B850C.c)
 *     sub_1800BD198 @ 0x1800BD198 (sub_1800BD198.c)
 *     sub_1800BD23C @ 0x1800BD23C (sub_1800BD23C.c)
 *     sub_1800BD408 @ 0x1800BD408 (sub_1800BD408.c)
 *     sub_1800BD494 @ 0x1800BD494 (sub_1800BD494.c)
 *     sub_1800DB5A4 @ 0x1800DB5A4 (sub_1800DB5A4.c)
 *     sub_1800FC688 @ 0x1800FC688 (sub_1800FC688.c)
 *     sub_1800FECA8 @ 0x1800FECA8 (sub_1800FECA8.c)
 *     sub_180101388 @ 0x180101388 (sub_180101388.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_1800111C8(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rcx

  if ( a2 )
  {
    v2 = *(_QWORD *)(a2 + 16);
    if ( !(v2 ? *(_DWORD *)(v2 + 8) : 0) )
    {
      v4 = *(volatile signed __int32 **)(a1 + 8);
      if ( v4 )
      {
        _InterlockedIncrement(v4 + 2);
        v4 = *(volatile signed __int32 **)(a1 + 8);
        if ( v4 )
          _InterlockedIncrement(v4 + 3);
      }
      v5 = *(volatile signed __int32 **)(a2 + 16);
      *(_QWORD *)(a2 + 8) = a2;
      *(_QWORD *)(a2 + 16) = v4;
      if ( v5 && _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
  }
}
