/*
 * XREFs of NtMapViewOfSection @ 0x1406FB000
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiMapViewOfSectionCommon @ 0x1406FB240 (MiMapViewOfSectionCommon.c)
 *     MiValidateZeroBits @ 0x1406FB478 (MiValidateZeroBits.c)
 *     MiMapParametersInitialize @ 0x1406FC8B0 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x1406FCA10 (MiMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x140757090 (DbgkMapViewOfSection.c)
 *     EtwTiLogMapExecView @ 0x1409E637C (EtwTiLogMapExecView.c)
 */

__int64 NtMapViewOfSection(__int64 a1, __int64 a2, _QWORD *a3, ...)
{
  __int64 result; // rax
  __int64 v7; // rbx
  int v8; // r13d
  _QWORD *v9; // rdi
  _QWORD *v10; // r14
  char v11; // r15
  int v12; // ebx
  bool v13; // zf
  unsigned __int8 PreviousMode; // [rsp+50h] [rbp-E8h]
  __int64 v15[2]; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v16; // [rsp+68h] [rbp-D0h] BYREF
  PVOID Object[2]; // [rsp+78h] [rbp-C0h]
  int v18; // [rsp+88h] [rbp-B0h]
  _QWORD v19[16]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+158h] [rbp+20h] BYREF
  va_list va; // [rsp+158h] [rbp+20h]
  __int64 v22; // [rsp+160h] [rbp+28h]
  _QWORD *v23; // [rsp+168h] [rbp+30h]
  _QWORD *v24; // [rsp+170h] [rbp+38h]
  __int64 v25; // [rsp+178h] [rbp+40h]
  __int64 v26; // [rsp+180h] [rbp+48h]
  __int64 v27; // [rsp+188h] [rbp+50h]
  va_list va1; // [rsp+190h] [rbp+58h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD *);
  v24 = va_arg(va1, _QWORD *);
  v25 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _QWORD);
  memset(v19, 0, sizeof(v19));
  *(_OWORD *)v15 = 0LL;
  v16 = 0LL;
  *(_OWORD *)Object = 0LL;
  result = MiValidateZeroBits((__int64 *)va);
  if ( (int)result >= 0 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v7 = v20;
    v8 = v27;
    v9 = v23;
    v10 = v24;
    result = MiMapViewOfSectionCommon(a2, a1, 0LL, a3, v24, v23, v27, v20, PreviousMode, v15);
    if ( (int)result < 0 )
    {
      ++dword_140C52B18;
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
      v12 = MiMapViewOfSection(Object[0], (unsigned int)v19, (unsigned int)v15, v22, (__int64)&v16, v25, 0);
      v18 = v12;
      if ( v12 >= 0 )
      {
        if ( (v19[7] & 0x400000000LL) != 0 )
          DbgkMapViewOfSection(Object[1]);
        if ( (*((_DWORD *)Object[0] + 14) & 0x20) == 0 && (BYTE8(v16) & 2) != 0 )
          EtwTiLogMapExecView(Object[1], PreviousMode, v15[0], v15[1], v11, v8);
        *v10 = v19[3];
        *a3 = v15[0];
        if ( v9 )
          *v9 = v16;
        goto LABEL_12;
      }
      v13 = v15[0] == 0;
    }
    if ( v13 )
      ++dword_140C52B18;
    else
      ++dword_140C52B1C;
LABEL_12:
    ObfDereferenceObject(Object[0]);
    ObfDereferenceObjectWithTag(Object[1], 0x77566D4Du);
    return (unsigned int)v12;
  }
  return result;
}
