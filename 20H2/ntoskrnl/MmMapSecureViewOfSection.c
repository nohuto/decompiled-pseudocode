/*
 * XREFs of MmMapSecureViewOfSection @ 0x1405F5114
 * Callers:
 *     AlpcpCreateView @ 0x1405F4E04 (AlpcpCreateView.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     MiMapViewOfSection @ 0x140621850 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x140621DD0 (MiMapParametersInitialize.c)
 */

__int64 __fastcall MmMapSecureViewOfSection(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 result; // rax
  _QWORD v15[16]; // [rsp+40h] [rbp-88h] BYREF

  memset(v15, 0, sizeof(v15));
  result = MiMapParametersInitialize(v15, *a7, 0, 4, 0LL);
  if ( (int)result < 0
    || (v15[10] = a12,
        HIDWORD(v15[9]) = 2,
        result = MiMapViewOfSection(a1, (unsigned int)v15, (_DWORD)a3, 0, a6, 2, 1),
        (int)result < 0) )
  {
    if ( *a3 )
      ++dword_140C4E664;
    else
      ++dword_140C4E660;
  }
  else
  {
    *a7 = v15[3];
    return (unsigned int)result;
  }
  return result;
}
