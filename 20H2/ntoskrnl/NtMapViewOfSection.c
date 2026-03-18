/*
 * XREFs of NtMapViewOfSection @ 0x140621590
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiMapViewOfSectionCommon @ 0x140621360 (MiMapViewOfSectionCommon.c)
 *     MiValidateZeroBits @ 0x1406217FC (MiValidateZeroBits.c)
 *     MiMapViewOfSection @ 0x140621850 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x140621DD0 (MiMapParametersInitialize.c)
 *     EtwTiLogMapExecView @ 0x1406DDC94 (EtwTiLogMapExecView.c)
 *     DbgkMapViewOfSection @ 0x1406EFF84 (DbgkMapViewOfSection.c)
 */

NTSTATUS NtMapViewOfSection(void *a1, __int64 a2, __int64 *a3, ...)
{
  NTSTATUS result; // eax
  __int64 v7; // rbx
  int v8; // r13d
  _QWORD *v9; // rdi
  _QWORD *v10; // r14
  char v11; // r15
  int v12; // ebx
  bool v13; // zf
  unsigned __int8 v14; // [rsp+50h] [rbp-E8h]
  __int64 v15[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v16; // [rsp+68h] [rbp-D0h] BYREF
  PADAPTER_OBJECT DmaAdapter[2]; // [rsp+78h] [rbp-C0h]
  int v18; // [rsp+88h] [rbp-B0h]
  _QWORD v19[16]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+158h] [rbp+20h] BYREF
  va_list va; // [rsp+158h] [rbp+20h]
  __int64 v22; // [rsp+160h] [rbp+28h]
  unsigned __int64 v23; // [rsp+168h] [rbp+30h]
  unsigned __int64 v24; // [rsp+170h] [rbp+38h]
  __int64 v25; // [rsp+178h] [rbp+40h]
  __int64 v26; // [rsp+180h] [rbp+48h]
  __int64 v27; // [rsp+188h] [rbp+50h]
  va_list va1; // [rsp+190h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD);
  memset(v19, 0, sizeof(v19));
  *(_OWORD *)v15 = 0LL;
  v16 = 0LL;
  *(_OWORD *)DmaAdapter = 0LL;
  result = MiValidateZeroBits((__int64 *)va);
  if ( result >= 0 )
  {
    v14 = KeGetCurrentThread()->$6A88714AB977AAA8032D9F5E2A96BA31::gap0[10];
    v7 = v20;
    v8 = v27;
    v9 = (_QWORD *)v23;
    v10 = (_QWORD *)v24;
    result = MiMapViewOfSectionCommon(a2, a1, 0, a3, v24, v23, v27, v20, v14, v15);
    if ( result < 0 )
    {
      ++dword_140C4E660;
      return result;
    }
    v11 = v26;
    v12 = MiMapParametersInitialize(v19, v15[1], v26, v8, v7);
    if ( v12 < 0 )
    {
      v13 = v15[0] == 0;
    }
    else
    {
      v12 = MiMapViewOfSection(DmaAdapter[0], (unsigned int)v19, (unsigned int)v15, v22, (__int64)&v16, v25, 0);
      v18 = v12;
      if ( v12 >= 0 )
      {
        if ( (v19[9] & 4) != 0 )
          DbgkMapViewOfSection(DmaAdapter[1]);
        if ( ((__int64)DmaAdapter[0][3].DmaOperations & 0x20) == 0 && (BYTE8(v16) & 2) != 0 )
          EtwTiLogMapExecView(DmaAdapter[1], v14, v15[0], v15[1], v11, v8);
        *v10 = v19[3];
        *a3 = v15[0];
        if ( v9 )
          *v9 = v16;
        goto LABEL_12;
      }
      v13 = v15[0] == 0;
    }
    if ( v13 )
      ++dword_140C4E660;
    else
      ++dword_140C4E664;
LABEL_12:
    HalPutDmaAdapter(DmaAdapter[0]);
    ObfDereferenceObjectWithTag(DmaAdapter[1], 0x77566D4Du);
    return v12;
  }
  return result;
}
