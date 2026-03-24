/*
 * XREFs of NtMapViewOfSection @ 0x1406EAD00
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140414200 (memset.c)
 *     EtwTiLogMapExecView @ 0x1406BDCE4 (EtwTiLogMapExecView.c)
 *     MiMapViewOfSectionCommon @ 0x1406EAF70 (MiMapViewOfSectionCommon.c)
 *     MiValidateZeroBits @ 0x1406EB19C (MiValidateZeroBits.c)
 *     MiMapViewOfSection @ 0x1406EBA30 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1406EBFB0 (MiMapParametersInitialize.c)
 *     DbgkMapViewOfSection @ 0x1407129A4 (DbgkMapViewOfSection.c)
 */

__int64 NtMapViewOfSection(__int64 a1, __int64 a2, _QWORD *a3, ...)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rbx
  int v10; // r13d
  _QWORD *v11; // rdi
  _QWORD *v12; // r14
  int v13; // r15d
  int v14; // ebx
  bool v15; // zf
  __int64 v16; // [rsp+20h] [rbp-118h]
  int v17[2]; // [rsp+28h] [rbp-110h]
  char PreviousMode; // [rsp+50h] [rbp-E8h]
  __int64 v19[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v20; // [rsp+68h] [rbp-D0h] BYREF
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+78h] [rbp-C0h]
  int v22; // [rsp+88h] [rbp-B0h]
  _QWORD v23[16]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+158h] [rbp+20h] BYREF
  va_list va; // [rsp+158h] [rbp+20h]
  __int64 v26; // [rsp+160h] [rbp+28h]
  _QWORD *v27; // [rsp+168h] [rbp+30h]
  _QWORD *v28; // [rsp+170h] [rbp+38h]
  __int64 v29; // [rsp+178h] [rbp+40h]
  __int64 v30; // [rsp+180h] [rbp+48h]
  __int64 v31; // [rsp+188h] [rbp+50h]
  va_list va1; // [rsp+190h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD *);
  v28 = va_arg(va1, _QWORD *);
  v29 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  memset(v23, 0, sizeof(v23));
  *(_OWORD *)v19 = 0LL;
  v20 = 0LL;
  *(_OWORD *)DmaAdapter = 0LL;
  result = MiValidateZeroBits((__int64 *)va, v6, v7);
  if ( (int)result >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v9 = v24;
    v10 = v31;
    v11 = v27;
    v12 = v28;
    result = MiMapViewOfSectionCommon(a2, a1, 0LL, a3, v28, v27, v31, v24, PreviousMode, v19);
    if ( (int)result < 0 )
    {
      ++dword_140C4E7E0;
      return result;
    }
    v13 = v30;
    v14 = MiMapParametersInitialize(v23, v19[1], v30, v10, v9);
    if ( v14 < 0 )
    {
      v15 = v19[0] == 0;
    }
    else
    {
      v14 = MiMapViewOfSection(DmaAdapter[0], (unsigned int)v23, (unsigned int)v19, v26, (__int64)&v20, v29, 0);
      v22 = v14;
      if ( v14 >= 0 )
      {
        if ( (v23[9] & 4) != 0 )
          DbgkMapViewOfSection(DmaAdapter[1]);
        if ( ((__int64)DmaAdapter[0][3].DmaOperations & 0x20) == 0 && (BYTE8(v20) & 2) != 0 )
        {
          v17[0] = v10;
          LODWORD(v16) = v13;
          EtwTiLogMapExecView((__int64)DmaAdapter[1], PreviousMode, v19[0], v19[1], v16, *(_QWORD *)v17);
        }
        *v12 = v23[3];
        *a3 = v19[0];
        if ( v11 )
          *v11 = v20;
        goto LABEL_12;
      }
      v15 = v19[0] == 0;
    }
    if ( v15 )
      ++dword_140C4E7E0;
    else
      ++dword_140C4E7E4;
LABEL_12:
    HalPutDmaAdapter(DmaAdapter[0]);
    ObfDereferenceObjectWithTag(DmaAdapter[1], 0x77566D4Du);
    return (unsigned int)v14;
  }
  return result;
}
