/*
 * XREFs of NtGdiGetDIBitsInternal @ 0x1C00F2BF0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0066DD4 (GreGetBitmapBitsSize.c)
 *     GreGetDIBitsInternal @ 0x1C0075B1C (GreGetDIBitsInternal.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C00F30E4 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall NtGdiGetDIBitsInternal(
        HDC a1,
        HBITMAP a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        struct tagBITMAPINFO *Address,
        unsigned int a7,
        unsigned int a8)
{
  volatile void *v8; // r12
  unsigned int biSize; // r13d
  size_t v10; // r14
  unsigned int BitmapSizeInternal; // eax
  struct tagBITMAPINFO *v12; // rax
  struct tagBITMAPINFO *v13; // rsi
  unsigned int biHeight; // edx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  bool v17; // zf
  int v18; // eax
  unsigned int biWidth_high; // eax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int DIBitsInternal; // ebx
  unsigned int Length; // [rsp+58h] [rbp-E0h]
  unsigned int v25; // [rsp+60h] [rbp-D8h]
  int v26; // [rsp+68h] [rbp-D0h]
  unsigned int v27; // [rsp+70h] [rbp-C8h]
  HANDLE SecureHandle; // [rsp+88h] [rbp-B0h]
  _DWORD v33[8]; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v34; // [rsp+E8h] [rbp-50h]

  v27 = a3;
  v25 = a4;
  Length = a8;
  v26 = 1;
  SecureHandle = 0LL;
  memset(v33, 0, sizeof(v33));
  v34 = 0LL;
  if ( a7 > 2 || !Address || !a2 )
    return 0LL;
  v8 = (volatile void *)(a5 & -(__int64)(a4 != 0));
  biSize = Address->bmiHeader.biSize;
  ProbeForWrite(Address, Address->bmiHeader.biSize, 1u);
  if ( v8 )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    LODWORD(v10) = 12;
    if ( biSize == 12 && !HIWORD(Address->bmiHeader.biHeight) )
      goto LABEL_42;
    LODWORD(v10) = 0;
    if ( biSize >= 0x28 && !Address->bmiHeader.biBitCount )
      LODWORD(v10) = 40;
  }
  if ( (_DWORD)v10 )
  {
LABEL_42:
    memmove(v33, Address, (unsigned int)v10);
    v33[0] = v10;
LABEL_43:
    v13 = (struct tagBITMAPINFO *)v33;
    goto LABEL_34;
  }
  if ( biSize == 40 )
    Address->bmiHeader.biClrUsed = 0;
  BitmapSizeInternal = GreGetBitmapSizeInternal(Address, a7, biSize);
  v10 = BitmapSizeInternal;
  if ( !BitmapSizeInternal )
    goto LABEL_43;
  v12 = (struct tagBITMAPINFO *)Win32AllocPool(BitmapSizeInternal, 1886221383LL);
  v13 = v12;
  if ( v12 )
    memset(v12, 0, (unsigned int)v10);
  if ( v13 )
  {
    if ( (struct tagBITMAPINFO *)((char *)Address + v10) < Address
      || (unsigned __int64)Address + v10 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(v13, Address, v10);
    v13->bmiHeader.biSize = biSize;
    if ( GreGetBitmapSizeInternal(v13, a7, biSize) != (_DWORD)v10 )
    {
LABEL_57:
      LODWORD(v10) = 0;
      goto LABEL_60;
    }
    if ( biSize >= 0x28 )
      v13->bmiHeader.biClrUsed = 0;
    if ( v25 )
    {
      if ( v13->bmiHeader.biSize < 0x28 )
      {
        biWidth_high = HIWORD(v13->bmiHeader.biWidth);
        v20 = biWidth_high;
        if ( biWidth_high >= a3 )
          v20 = a3;
        v27 = v20;
        v21 = biWidth_high - v20;
        if ( v21 >= a4 )
          v21 = a4;
        v25 = v21;
        if ( !LOWORD(v13->bmiHeader.biWidth) || !LOWORD(v13->bmiHeader.biHeight) )
          goto LABEL_48;
        v17 = HIWORD(v13->bmiHeader.biHeight) == 0;
      }
      else
      {
        biHeight = -v13->bmiHeader.biHeight;
        if ( v13->bmiHeader.biHeight >= 0 )
          biHeight = v13->bmiHeader.biHeight;
        v15 = biHeight;
        if ( biHeight >= a3 )
          v15 = a3;
        v27 = v15;
        v16 = biHeight - v15;
        if ( v16 >= a4 )
          v16 = a4;
        v25 = v16;
        if ( !v13->bmiHeader.biWidth || !v13->bmiHeader.biPlanes )
          goto LABEL_48;
        v17 = v13->bmiHeader.biBitCount == 0;
      }
      v18 = 0;
      if ( !v17 )
      {
LABEL_33:
        v26 = v18;
        goto LABEL_34;
      }
LABEL_48:
      v18 = 1;
      goto LABEL_33;
    }
  }
LABEL_34:
  if ( (_DWORD)v10 && v8 && v13 )
  {
    if ( v13->bmiHeader.biSize < 0x28 || v13->bmiHeader.biCompression - 1 > 1 || v13->bmiHeader.biSizeImage )
    {
      if ( a8 || (Length = GreGetBitmapBitsSize((__int64)v13)) != 0 )
      {
        ProbeForWrite(v8, Length, 4u);
        SecureHandle = MmSecureVirtualMemory((PVOID)v8, Length, 4u);
      }
      LODWORD(v10) = SecureHandle != 0LL ? v10 : 0;
      goto LABEL_60;
    }
    goto LABEL_57;
  }
LABEL_60:
  if ( v8 && v26 || !(_DWORD)v10 || !v13 )
  {
    DIBitsInternal = 0;
  }
  else
  {
    DIBitsInternal = GreGetDIBitsInternal(a1, a2, v27, v25, (__int64)v8, v13, a7, Length, v10);
    if ( DIBitsInternal )
      memmove(Address, v13, (unsigned int)v10);
  }
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( v13 )
  {
    if ( v13 != (struct tagBITMAPINFO *)v33 )
      Win32FreePool(v13);
  }
  return DIBitsInternal;
}
