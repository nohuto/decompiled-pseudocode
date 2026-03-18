/*
 * XREFs of MmMapSecureViewOfSection @ 0x14068AFAC
 * Callers:
 *     AlpcpCreateView @ 0x14068AC9C (AlpcpCreateView.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     MiMapViewOfSection @ 0x1405FD010 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1405FD590 (MiMapParametersInitialize.c)
 */

__int64 __fastcall MmMapSecureViewOfSection(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        _WORD *a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 result; // rax
  _QWORD v16[16]; // [rsp+40h] [rbp-88h] BYREF

  memset(v16, 0, sizeof(v16));
  result = MiMapParametersInitialize(v16, a1, a2, *a3, *a7, 0, 4, 0LL);
  if ( (int)result < 0
    || (v16[10] = a12,
        HIDWORD(v16[9]) = 2,
        result = MiMapViewOfSection(a1, (__int64)v16, (void **)a3, 0LL, a6, 2, 1),
        (int)result < 0) )
  {
    if ( *a3 )
      ++dword_140C4E5E4;
    else
      ++dword_140C4E5E0;
  }
  else
  {
    *a7 = v16[3];
    return (unsigned int)result;
  }
  return result;
}
