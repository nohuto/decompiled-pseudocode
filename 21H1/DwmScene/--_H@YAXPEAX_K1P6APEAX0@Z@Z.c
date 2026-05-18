/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180028D0C
 * Callers:
 *     sub_1800A72EC @ 0x1800A72EC (sub_1800A72EC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 v5; // rbx

  if ( a3 )
  {
    v5 = a3;
    do
    {
      a4(a1);
      a1 += a2;
      --v5;
    }
    while ( v5 );
  }
}
