/*
 * XREFs of MiPageMightBeZero @ 0x14036A034
 * Callers:
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140333440 (MiGetPagePrivilege.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiPageMightBeZero(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  ULONG_PTR v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 result; // rax

  if ( (unsigned int)MI_PFN_IS_PROTO(a2) )
  {
    if ( (*(_QWORD *)(a2 + 40) & 0x1000000000LL) == 0 && *(__int64 *)(a2 + 8) > 0
      || (*(_DWORD *)(a2 + 16) & 0x400LL) != 0 )
    {
      return 0LL;
    }
  }
  else
  {
    if ( (*(_BYTE *)(v5 + 184) & 7u) >= 2 )
      return 0LL;
    if ( (MiGetPagePrivilege(v6, 0, 0LL) & 0xFFFFFFFD) != 0 )
      return 0LL;
    if ( !(unsigned int)MI_PFN_IS_PROTO(a2) )
    {
      v7 = a3 << 25 >> 16;
      if ( v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL )
        return 0LL;
    }
  }
  result = 1LL;
  if ( *(_WORD *)(a2 + 32) != 1 || (*(_BYTE *)(a2 + 34) & 0xC0) != 0x40 || (*(_BYTE *)(a2 + 35) & 0x40) != 0 )
    return 0LL;
  return result;
}
