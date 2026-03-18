/*
 * XREFs of NtGdiStretchDIBitsInternal @ 0x1C00742C0
 * Callers:
 *     <none>
 * Callees:
 *     GreStretchDIBitsInternal @ 0x1C0074590 (GreStretchDIBitsInternal.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C00F30E4 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtGdiStretchDIBitsInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char *Address,
        char *Src,
        unsigned int a12,
        int a13,
        size_t Size,
        SIZE_T a15,
        __int64 a16)
{
  struct tagBITMAPINFO *v17; // rbx
  unsigned int v18; // edi
  HANDLE v19; // r12
  char *v20; // r15
  int v21; // esi
  unsigned int biSize; // r8d
  int v23; // r14d
  int v25; // [rsp+80h] [rbp-58h]
  struct tagBITMAPINFO *v26; // [rsp+88h] [rbp-50h]
  HANDLE v27; // [rsp+90h] [rbp-48h]
  __int64 v28; // [rsp+E0h] [rbp+8h]
  unsigned int v29; // [rsp+E8h] [rbp+10h]
  unsigned int v30; // [rsp+F0h] [rbp+18h]

  v30 = a3;
  v29 = a2;
  v28 = a1;
  v17 = 0LL;
  v26 = 0LL;
  v18 = 1;
  v25 = 1;
  v19 = 0LL;
  v27 = 0LL;
  v20 = Address;
  if ( !Address || !Src )
  {
    v21 = Size;
    goto LABEL_31;
  }
  v21 = Size;
  if ( !(_DWORD)Size )
  {
LABEL_31:
    v20 = 0LL;
    v23 = a15;
    goto LABEL_24;
  }
  if ( (unsigned int)(Size - 4) <= 0x270FFFC )
  {
    v17 = (struct tagBITMAPINFO *)AllocThreadBufferWithTag((unsigned int)Size, 1886221383LL, 0LL);
    v26 = v17;
    if ( v17 )
    {
      if ( &Src[(unsigned int)Size] < Src || (unsigned __int64)&Src[(unsigned int)Size] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v17, Src, (unsigned int)Size);
      biSize = v17->bmiHeader.biSize;
      if ( v17->bmiHeader.biSize >= 0x28
        && (unsigned int)Size >= biSize
        && (_DWORD)Size == GreGetBitmapSizeInternal(v17, a12, biSize) )
      {
        v23 = a15;
        if ( (_DWORD)a15 )
        {
          if ( ((unsigned __int8)Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&Address[(unsigned int)a15] > MmUserProbeAddress
            || &Address[(unsigned int)a15] < Address )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
        }
        v19 = MmSecureVirtualMemory(Address, (unsigned int)a15, 2u);
        v27 = v19;
        if ( v19 )
          goto LABEL_23;
        goto LABEL_22;
      }
      FreeThreadBufferWithTag(v17);
      v17 = 0LL;
      v26 = 0LL;
    }
  }
  v23 = a15;
LABEL_22:
  v18 = 0;
  v25 = 0;
LABEL_23:
  a3 = v30;
  a2 = v29;
  a1 = v28;
LABEL_24:
  if ( v18 )
  {
    v18 = GreStretchDIBitsInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, v20, v17, a12, a13, v21, v23, a16, v25, v26, v27);
    if ( v19 )
      MmUnsecureVirtualMemory(v19);
  }
  if ( v17 )
    FreeThreadBufferWithTag(v17);
  return v18;
}
