/*
 * XREFs of PiIommuBlockDevice @ 0x1408B6E70
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1407415D0 (PiDmaGuardProcessPostRemove.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PiIommuBlockDevice(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 16) & 2) == 0 )
    return 0LL;
  result = ((__int64 (__fastcall *)(_QWORD))off_140C009C0[0])(*(_QWORD *)(a1 + 8));
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)(a1 + 32) )
      result = off_140C009C0[0]();
    if ( (int)result >= 0 )
      *(_BYTE *)(a1 + 16) &= ~2u;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  return result;
}
