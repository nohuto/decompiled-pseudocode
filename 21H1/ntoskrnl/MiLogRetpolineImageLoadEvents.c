/*
 * XREFs of MiLogRetpolineImageLoadEvents @ 0x1407456AC
 * Callers:
 *     MiFinalizeImageRetpolineState @ 0x140745674 (MiFinalizeImageRetpolineState.c)
 *     MiReloadBootLoadedDrivers @ 0x140A425C0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x14036E830 (RtlIsImageFullyRetpolined.c)
 *     MiLogNonRetpolineImageLoadEvent @ 0x14075ECB0 (MiLogNonRetpolineImageLoadEvent.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x1407BA63C (MiConstructNonRetpolineImageLoadRecord.c)
 */

_QWORD *__fastcall MiLogRetpolineImageLoadEvents(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  result = (_QWORD *)RtlIsImageFullyRetpolined(*(void **)(a1 + 48));
  if ( !(_DWORD)result )
  {
    if ( *(_QWORD *)&qword_140C4EE20 )
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
        v3 = (_QWORD *)qword_140C4CBC0;
        if ( *(PVOID **)qword_140C4CBC0 != &qword_140C4CBB8 )
          __fastfail(3u);
        *result = &qword_140C4CBB8;
        result[1] = v3;
        *v3 = result;
        qword_140C4CBC0 = (__int64)result;
      }
    }
  }
  return result;
}
