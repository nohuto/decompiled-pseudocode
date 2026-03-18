/*
 * XREFs of PiIommuUnblockDevice @ 0x1408B6EEC
 * Callers:
 *     PipProcessStartPhase1 @ 0x14073B388 (PipProcessStartPhase1.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PiIommuUnblockDevice(__int64 a1)
{
  int v2; // edi
  _QWORD *v3; // rsi
  __int64 v4; // rcx

  if ( (*(_BYTE *)(a1 + 16) & 1) == 0 || (*(_BYTE *)(*(_QWORD *)a1 + 4LL) & 1) != 0 )
  {
    v3 = (_QWORD *)(a1 + 8);
    v2 = ((__int64 (__fastcall *)(_QWORD, __int64))off_140C009C8[0])(*(_QWORD *)a1, a1 + 8);
    if ( v2 < 0 )
      return (unsigned int)v2;
    v4 = *(_QWORD *)(a1 + 24);
    if ( v4 )
    {
      v2 = ((__int64 (__fastcall *)(__int64, __int64))off_140C009C8[0])(v4, a1 + 32);
      if ( v2 >= 0 )
        goto LABEL_9;
      ((void (__fastcall *)(_QWORD))off_140C009C0[0])(*v3);
      *v3 = 0LL;
    }
    if ( v2 < 0 )
      return (unsigned int)v2;
LABEL_9:
    *(_BYTE *)(a1 + 16) |= 2u;
    return (unsigned int)v2;
  }
  return 0;
}
