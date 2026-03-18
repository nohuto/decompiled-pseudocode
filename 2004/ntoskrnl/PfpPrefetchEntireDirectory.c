/*
 * XREFs of PfpPrefetchEntireDirectory @ 0x1406BD15C
 * Callers:
 *     PfSnPrefetchMetadata @ 0x1406BCE74 (PfSnPrefetchMetadata.c)
 * Callees:
 *     PfpOpenHandleCreate @ 0x14060587C (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x140605A14 (PfpOpenHandleClose.c)
 *     IopQueryXxxInformation @ 0x140605A8C (IopQueryXxxInformation.c)
 *     IopXxxControlFile @ 0x140674CF0 (IopXxxControlFile.c)
 */

__int64 __fastcall PfpPrefetchEntireDirectory(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r9
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rsi
  int v13; // edi
  PADAPTER_OBJECT v14; // rdi
  int v16[2]; // [rsp+40h] [rbp-31h]
  int Length; // [rsp+50h] [rbp-21h]
  char v18; // [rsp+58h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-9h] BYREF
  __int64 v20[2]; // [rsp+70h] [rbp-1h] BYREF
  int v21[2]; // [rsp+80h] [rbp+Fh] BYREF
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+88h] [rbp+17h]
  __int64 v23; // [rsp+98h] [rbp+27h]

  v19 = 0LL;
  v9 = *(_QWORD *)(a5 + 8);
  v10 = *(_QWORD *)(a5 + 16);
  *(_QWORD *)v21 = 0LL;
  v23 = 0x200000000LL;
  *(_OWORD *)v20 = 0LL;
  *(_OWORD *)DmaAdapter = 0LL;
  v11 = PfpOpenHandleCreate((__int64)v21, a1, v10, v9, 1048577, 0x4021u, 0, a2);
  v12 = v23;
  v13 = v11;
  if ( v11 >= 0 )
  {
    if ( a4 )
    {
      v14 = DmaAdapter[0];
      if ( (int)IopQueryXxxInformation(DmaAdapter[0], 6, 8u, 0, (struct _IRP *)&v19, &a6, 1) >= 0 )
      {
        *(_QWORD *)(a4 + 12) = v19;
        *(_QWORD *)a4 = v14[1].DmaOperations;
        *(_DWORD *)(a4 + 8) = v12;
      }
    }
    v18 = 0;
    Length = 0;
    v16[0] = 8 * *(_DWORD *)(a3 + 4) + 16;
    v13 = IopXxxControlFile(
            *(void **)v21,
            0LL,
            0LL,
            0LL,
            (unsigned __int64)v20,
            590112,
            (char *)a3,
            *(_QWORD *)v16,
            0LL,
            Length,
            v18);
    if ( v13 >= 0 )
      v13 = 0;
  }
  if ( (v12 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v21, a1);
  return (unsigned int)v13;
}
