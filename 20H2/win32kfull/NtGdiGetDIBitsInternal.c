/*
 * XREFs of NtGdiGetDIBitsInternal @ 0x1C009A2F0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapBitsSize @ 0x1C0096034 (GreGetBitmapBitsSize.c)
 *     ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C009A7E4 (-GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z.c)
 *     GreGetDIBitsInternal @ 0x1C009B01C (GreGetDIBitsInternal.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall NtGdiGetDIBitsInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        int a4,
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
  bool v14; // zf
  int v15; // eax
  unsigned int DIBitsInternal; // ebx
  unsigned int Length; // [rsp+58h] [rbp-E0h]
  int v20; // [rsp+68h] [rbp-D0h]
  HANDLE SecureHandle; // [rsp+88h] [rbp-B0h]
  _DWORD v23[8]; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-50h]

  Length = a8;
  v20 = 1;
  SecureHandle = 0LL;
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
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
      goto LABEL_36;
    LODWORD(v10) = 0;
    if ( biSize >= 0x28 && !Address->bmiHeader.biBitCount )
      LODWORD(v10) = 40;
  }
  if ( (_DWORD)v10 )
  {
LABEL_36:
    memmove(v23, Address, (unsigned int)v10);
    v23[0] = v10;
LABEL_37:
    v13 = (struct tagBITMAPINFO *)v23;
    goto LABEL_28;
  }
  if ( biSize == 40 )
    Address->bmiHeader.biClrUsed = 0;
  BitmapSizeInternal = GreGetBitmapSizeInternal(Address, a7, biSize);
  v10 = BitmapSizeInternal;
  if ( !BitmapSizeInternal )
    goto LABEL_37;
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
LABEL_47:
      LODWORD(v10) = 0;
      goto LABEL_50;
    }
    if ( biSize >= 0x28 )
      v13->bmiHeader.biClrUsed = 0;
    if ( a4 )
    {
      if ( v13->bmiHeader.biSize < 0x28 )
      {
        if ( !LOWORD(v13->bmiHeader.biWidth) || !LOWORD(v13->bmiHeader.biHeight) )
          goto LABEL_42;
        v14 = HIWORD(v13->bmiHeader.biHeight) == 0;
      }
      else
      {
        if ( !v13->bmiHeader.biWidth || !v13->bmiHeader.biPlanes )
          goto LABEL_42;
        v14 = v13->bmiHeader.biBitCount == 0;
      }
      v15 = 0;
      if ( !v14 )
      {
LABEL_27:
        v20 = v15;
        goto LABEL_28;
      }
LABEL_42:
      v15 = 1;
      goto LABEL_27;
    }
  }
LABEL_28:
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
      goto LABEL_50;
    }
    goto LABEL_47;
  }
LABEL_50:
  if ( v8 && v20 || !(_DWORD)v10 || !v13 )
  {
    DIBitsInternal = 0;
  }
  else
  {
    DIBitsInternal = GreGetDIBitsInternal(a1, (__int64)v8, v13, a7, Length, v10);
    if ( DIBitsInternal )
      memmove(Address, v13, (unsigned int)v10);
  }
  if ( SecureHandle )
    MmUnsecureVirtualMemory(SecureHandle);
  if ( v13 )
  {
    if ( v13 != (struct tagBITMAPINFO *)v23 )
      Win32FreePool(v13);
  }
  return DIBitsInternal;
}
