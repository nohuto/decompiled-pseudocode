/*
 * XREFs of NtGdiOpenDCW @ 0x1C005DBC0
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003E4B0 (PopThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     FreeTmpBuffer @ 0x1C005CCE0 (FreeTmpBuffer.c)
 *     AllocFreeTmpBuffer @ 0x1C005CD90 (AllocFreeTmpBuffer.c)
 *     hdcOpenDCW @ 0x1C005DDD0 (hdcOpenDCW.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C0081A00 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C0081AE0 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     UserGetDesktopDC @ 0x1C00A3358 (UserGetDesktopDC.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall NtGdiOpenDCW(
        unsigned __int16 *a1,
        struct _devicemodeW *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        struct _DRIVER_INFO_2W *a8,
        __int64 a9)
{
  __int64 v11; // r14
  unsigned int v12; // ecx
  char *v13; // r15
  size_t v14; // rbx
  void *v15; // rsi
  int v16; // ebx
  int v17; // eax
  struct _devicemodeW *v19; // [rsp+60h] [rbp-48h]
  struct _DRIVER_INFO_2W *v20; // [rsp+68h] [rbp-40h]

  v11 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(a4, 0LL, 1LL);
  v12 = *a1;
  v13 = (char *)*((_QWORD *)a1 + 1);
  if ( *a1 )
  {
    v14 = v12;
    v15 = (void *)AllocFreeTmpBuffer(v12 + 2);
    if ( v15 )
    {
      if ( &v13[v14] < v13 || (unsigned __int64)&v13[v14] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v15, v13, v14);
      *((_WORD *)v15 + (v14 >> 1)) = 0;
    }
  }
  else
  {
    v15 = 0LL;
  }
  if ( !a2 || (v19 = CaptureDEVMODEW(a2)) != 0LL )
  {
    v16 = 1;
    v17 = 1;
  }
  else
  {
    v17 = 0;
    v16 = 1;
  }
  if ( !v17 || a8 && (v20 = CaptureDriverInfo2W(a8)) == 0LL )
    v16 = 0;
  if ( v16 )
    v11 = hdcOpenDCW((PCWSTR)v15, v19, a7, 0LL, (__int64)v20, a9, a6);
  if ( v15 )
    FreeTmpBuffer((char *)v15);
  if ( v19 )
  {
    PopThreadGuardedObject(&v19[-1].dmICMMethod);
    Win32FreePool((__int64)&v19[-1].dmICMMethod);
  }
  if ( v20 )
  {
    PopThreadGuardedObject((_QWORD *)v20 - 4);
    Win32FreePool((__int64)v20 - 32);
  }
  return v11;
}
