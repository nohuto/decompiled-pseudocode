/*
 * XREFs of sub_1800CDAA0 @ 0x1800CDAA0
 * Callers:
 *     sub_180077530 @ 0x180077530 (sub_180077530.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800CDAA0(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    v2 = qword_18019E5F8;
    *(_BYTE *)(a1 + 8) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v1 + 232LL))(*v1, v2);
  }
  return result;
}
