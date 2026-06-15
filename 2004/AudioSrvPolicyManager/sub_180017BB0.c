/*
 * XREFs of sub_180017BB0 @ 0x180017BB0
 * Callers:
 *     sub_1800147A0 @ 0x1800147A0 (sub_1800147A0.c)
 *     sub_180024B50 @ 0x180024B50 (sub_180024B50.c)
 *     sub_180026030 @ 0x180026030 (sub_180026030.c)
 *     sub_180027B9C @ 0x180027B9C (sub_180027B9C.c)
 *     sub_18002A1BC @ 0x18002A1BC (sub_18002A1BC.c)
 *     sub_1800322B0 @ 0x1800322B0 (sub_1800322B0.c)
 *     sub_1800324C8 @ 0x1800324C8 (sub_1800324C8.c)
 * Callees:
 *     sub_18000CDD8 @ 0x18000CDD8 (sub_18000CDD8.c)
 *     sub_180017D14 @ 0x180017D14 (sub_180017D14.c)
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_180036660 @ 0x180036660 (sub_180036660.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_180017BB0(void **a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebp
  HMODULE v6; // rbx
  unsigned int v7; // esi
  HRSRC Resource; // rax
  __int64 v9; // rcx

  *a1 = (void *)(((__int64 (__fastcall *)(__int64 (__fastcall ***)()))off_18004F098[3])(&off_18004F098) + 24);
  if ( (unsigned __int64)(a2 - 1) > 0xFFFE )
  {
    sub_18000CDD8(a1, a2);
  }
  else
  {
    v5 = (unsigned __int16)a2;
    v6 = (HMODULE)sub_180036660(v4, 0LL);
    v7 = 1;
    if ( v6 )
    {
      while ( 1 )
      {
        Resource = FindResourceExW(v6, (LPCWSTR)6, (LPCWSTR)(((unsigned __int64)v5 >> 4) + 1), 0);
        if ( Resource )
        {
          if ( sub_180019FC0(v6, Resource) )
            break;
        }
        v6 = (HMODULE)sub_180036660(v9, v7++);
        if ( !v6 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      v6 = 0LL;
    }
    if ( v6 )
      sub_180017D14(a1, v6, v5);
  }
  return a1;
}
