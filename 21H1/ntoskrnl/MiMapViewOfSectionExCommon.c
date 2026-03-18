/*
 * XREFs of MiMapViewOfSectionExCommon @ 0x14064D220
 * Callers:
 *     MmMapViewOfSectionEx @ 0x1402C1530 (MmMapViewOfSectionEx.c)
 *     NtMapViewOfSectionEx @ 0x1406E6FE0 (NtMapViewOfSectionEx.c)
 *     MiPerformImageHotPatch @ 0x1408C8574 (MiPerformImageHotPatch.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiMapViewOfSection @ 0x140632050 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1406325D0 (MiMapParametersInitialize.c)
 *     MiMapViewOfSectionCommon @ 0x140633F20 (MiMapViewOfSectionCommon.c)
 *     MiMapExParametersInitialize @ 0x14064D4D0 (MiMapExParametersInitialize.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x14064DD78 (MiCaptureAllocateMapExtendedParameters.c)
 *     DbgkMapViewOfSection @ 0x14064E6A0 (DbgkMapViewOfSection.c)
 *     EtwTiLogMapExecView @ 0x1406E7D58 (EtwTiLogMapExecView.c)
 */

NTSTATUS __fastcall MiMapViewOfSectionExCommon(
        void *a1,
        __int64 a2,
        int a3,
        __int64 *a4,
        _QWORD *a5,
        _QWORD *a6,
        int a7,
        int a8,
        volatile void *Address,
        ULONGLONG ullMultiplicand,
        int a11,
        __int64 a12,
        KPROCESSOR_MODE a13,
        int a14)
{
  NTSTATUS result; // eax
  int MapExtendedParameters; // ebx
  int v19; // edx
  __int64 v20[2]; // [rsp+50h] [rbp-138h] BYREF
  __int128 v21; // [rsp+60h] [rbp-128h] BYREF
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+70h] [rbp-118h]
  int v23; // [rsp+80h] [rbp-108h]
  _QWORD v24[16]; // [rsp+90h] [rbp-F8h] BYREF
  _QWORD v25[15]; // [rsp+110h] [rbp-78h] BYREF

  memset(v24, 0, sizeof(v24));
  *(_OWORD *)v20 = 0LL;
  v21 = 0LL;
  *(_OWORD *)DmaAdapter = 0LL;
  memset(v25, 0, 0x48uLL);
  result = MiMapViewOfSectionCommon(a2, a1, a3, a4, (unsigned __int64)a6, (unsigned __int64)a5, a8, 0, a13, v20);
  if ( result < 0 )
  {
    if ( v20[0] )
      ++dword_140C4E724;
    else
      ++dword_140C4E720;
    return result;
  }
  MapExtendedParameters = MiCaptureAllocateMapExtendedParameters(Address, (unsigned int)ullMultiplicand, v25);
  if ( MapExtendedParameters < 0 )
  {
LABEL_12:
    if ( MapExtendedParameters >= 0 )
      goto LABEL_13;
    goto LABEL_22;
  }
  if ( (v25[7] & 0xFFFFFFFFFFFFFFDFuLL) == 0 )
  {
    MapExtendedParameters = MiMapParametersInitialize(
                              v24,
                              (__int64)DmaAdapter[0],
                              (__int64)DmaAdapter[1],
                              v20[0],
                              v20[1],
                              a7,
                              a8,
                              0LL);
    if ( MapExtendedParameters >= 0 )
    {
      MapExtendedParameters = MiMapExParametersInitialize(v24, v20, v25);
      if ( MapExtendedParameters >= 0 )
      {
        HIDWORD(v24[9]) = a11;
        v24[10] = a12;
        HIDWORD(v24[7]) |= a14;
        MapExtendedParameters = MiMapViewOfSection((__int64)DmaAdapter[0], (__int64)v24, (void **)v20, 0LL, &v21, 1, 0);
        v23 = MapExtendedParameters;
        if ( MapExtendedParameters >= 0 )
        {
          if ( (v24[9] & 4) != 0 )
            DbgkMapViewOfSection(DmaAdapter[1]);
          if ( ((__int64)DmaAdapter[0][3].DmaOperations & 0x20) == 0 && (BYTE8(v21) & 2) != 0 )
          {
            LOBYTE(v19) = a13;
            EtwTiLogMapExecView(DmaAdapter[1], v19, v20[0], v20[1], a7, a8);
          }
          *a4 = v20[0];
          *a6 = v24[3];
          if ( a5 )
            *a5 = v21;
        }
      }
    }
    goto LABEL_12;
  }
  MapExtendedParameters = -1073741811;
LABEL_22:
  if ( v20[0] )
    ++dword_140C4E724;
  else
    ++dword_140C4E720;
LABEL_13:
  if ( !a3 )
  {
    HalPutDmaAdapter(DmaAdapter[0]);
    ObfDereferenceObjectWithTag(DmaAdapter[1], 0x77566D4Du);
  }
  return MapExtendedParameters;
}
