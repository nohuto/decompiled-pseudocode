/*
 * XREFs of MiLogRetpolineImageLoadEvents @ 0x1407615BC
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     MiReloadBootLoadedDrivers @ 0x140B04F8C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1402D9A20 (RtlIsImageFullyRetpolined.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x14081BD3C (MiLogNonRetpolineImageLoadEvent.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x1409709F4 (MiConstructNonRetpolineImageLoadRecord.c)
 */

_QWORD *__fastcall MiLogRetpolineImageLoadEvents(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  result = (_QWORD *)RtlIsImageFullyRetpolined(*(_QWORD *)(a1 + 48));
  if ( !(_DWORD)result )
  {
    if ( *(_QWORD *)&qword_140C53448 )
    {
      return (_QWORD *)MiLogNonRetpolineImageLoadEvent(
                         a1 + 88,
                         *(unsigned int *)(a1 + 120),
                         *(unsigned int *)(a1 + 156));
    }
    else
    {
      result = (_QWORD *)MiConstructNonRetpolineImageLoadRecord(a1);
      if ( result )
      {
        v3 = (_QWORD *)qword_140C4F438;
        if ( *(PVOID **)qword_140C4F438 != &qword_140C4F430 )
          __fastfail(3u);
        *result = &qword_140C4F430;
        result[1] = v3;
        *v3 = result;
        qword_140C4F438 = (__int64)result;
      }
    }
  }
  return result;
}
