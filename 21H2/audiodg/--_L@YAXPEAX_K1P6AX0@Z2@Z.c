/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x14001E9FC
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x140010FA8 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x14001D358 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_dispatch_icall_fptr();
    a1 += a2;
  }
}
