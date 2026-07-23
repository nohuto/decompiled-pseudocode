/*
 * XREFs of PfpPrefetchEntireDirectory @ 0x140676D5C
 * Callers:
 *     PfSnPrefetchMetadata @ 0x140676A74 (PfSnPrefetchMetadata.c)
 * Callees:
 *     PfpOpenHandleCreate @ 0x140677DE8 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x140677F80 (PfpOpenHandleClose.c)
 *     IopQueryXxxInformation @ 0x140677FF8 (IopQueryXxxInformation.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 */

__int64 PfpPrefetchEntireDirectory(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, ...)
{
  __int64 v8; // r9
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // rsi
  int v12; // edi
  PADAPTER_OBJECT v13; // rdi
  size_t Size; // [rsp+40h] [rbp-31h]
  SIZE_T Length; // [rsp+50h] [rbp-21h]
  __int64 v17; // [rsp+68h] [rbp-9h] BYREF
  __int64 v18[2]; // [rsp+70h] [rbp-1h] BYREF
  int v19[2]; // [rsp+80h] [rbp+Fh] BYREF
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+88h] [rbp+17h]
  __int64 v21; // [rsp+98h] [rbp+27h]
  va_list va; // [rsp+F0h] [rbp+7Fh] BYREF

  va_start(va, a5);
  v17 = 0LL;
  v8 = *(_QWORD *)(a5 + 8);
  v9 = *(_QWORD *)(a5 + 16);
  *(_QWORD *)v19 = 0LL;
  v21 = 0x200000000LL;
  *(_OWORD *)v18 = 0LL;
  *(_OWORD *)DmaAdapter = 0LL;
  v10 = PfpOpenHandleCreate((unsigned int)v19, a1, v9, v8, 1048577, 16417, 0, a2);
  v11 = v21;
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a4 )
    {
      v13 = DmaAdapter[0];
      if ( (int)IopQueryXxxInformation(DmaAdapter[0], (__int64)&v17, (__int64)va, 1) >= 0 )
      {
        *(_QWORD *)(a4 + 12) = v17;
        *(_QWORD *)a4 = v13[1].DmaOperations;
        *(_DWORD *)(a4 + 8) = v11;
      }
    }
    LODWORD(Length) = 0;
    LODWORD(Size) = 8 * a3[1] + 16;
    v12 = IopXxxControlFile(v19[0], (__int64)v18, 590112, a3, Size, 0LL, Length, 0);
    if ( v12 >= 0 )
      v12 = 0;
  }
  if ( (v11 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v19, a1);
  return (unsigned int)v12;
}
