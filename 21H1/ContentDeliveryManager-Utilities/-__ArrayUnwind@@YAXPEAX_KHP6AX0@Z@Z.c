/*
 * XREFs of ?__ArrayUnwind@@YAXPEAX_KHP6AX0@Z@Z @ 0x1800CB408
 * Callers:
 *     ??_M@YAXPEAX_KHP6AX0@Z@Z @ 0x1800CB398 (--_M@YAXPEAX_KHP6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_KHP6AX0@Z2@Z @ 0x1800CB5C4 (--_L@YAXPEAX_KHP6AX0@Z2@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __ArrayUnwind(char *a1, __int64 a2, int a3, void (__fastcall *a4)(char *))
{
  while ( --a3 >= 0 )
  {
    a1 -= a2;
    a4(a1);
  }
}
