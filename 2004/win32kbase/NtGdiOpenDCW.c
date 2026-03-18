/*
 * XREFs of NtGdiOpenDCW @ 0x1C0079880
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C001DD70 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C001DE50 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     UserGetDesktopDC @ 0x1C0040DE8 (UserGetDesktopDC.c)
 *     hdcOpenDCW @ 0x1C0079530 (hdcOpenDCW.c)
 *     AllocFreeTmpBuffer @ 0x1C007A550 (AllocFreeTmpBuffer.c)
 *     FreeTmpBuffer @ 0x1C007A7B0 (FreeTmpBuffer.c)
 *     PopThreadGuardedObject @ 0x1C0084420 (PopThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

__int64 __fastcall NtGdiOpenDCW(
        unsigned __int16 *a1,
        struct _devicemodeW *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        void *a7,
        struct _DRIVER_INFO_2W *a8,
        ULONG64 a9)
{
  HDC v12; // r14
  unsigned int v13; // ecx
  char *v14; // r15
  size_t v15; // rbx
  void *v16; // rsi
  int v17; // ebx
  int v18; // eax
  struct _devicemodeW *v20; // [rsp+60h] [rbp-48h]
  struct _DRIVER_INFO_2W *v21; // [rsp+68h] [rbp-40h]

  v12 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(a4, 0, 1);
  v13 = *a1;
  v14 = (char *)*((_QWORD *)a1 + 1);
  if ( *a1 )
  {
    v15 = v13;
    v16 = (void *)AllocFreeTmpBuffer(v13 + 2);
    if ( v16 )
    {
      if ( &v14[v15] < v14 || (unsigned __int64)&v14[v15] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v16, v14, v15);
      *((_WORD *)v16 + (v15 >> 1)) = 0;
    }
  }
  else
  {
    v16 = 0LL;
  }
  if ( !a2 || (v20 = CaptureDEVMODEW(a2)) != 0LL )
  {
    v17 = 1;
    v18 = 1;
  }
  else
  {
    v18 = 0;
    v17 = 1;
  }
  if ( !v18 || a8 && (v21 = CaptureDriverInfo2W(a8)) == 0LL )
    v17 = 0;
  if ( v17 )
    v12 = hdcOpenDCW((unsigned __int16 *)v16, v20, a4, a5, a7, 0LL, (__int64)v21, a9, a6);
  if ( v16 )
    FreeTmpBuffer(v16);
  if ( v20 )
  {
    PopThreadGuardedObject(&v20[-1].dmICMMethod);
    Win32FreePool(&v20[-1].dmICMMethod);
  }
  if ( v21 )
  {
    PopThreadGuardedObject((char *)v21 - 32);
    Win32FreePool((char *)v21 - 32);
  }
  return (__int64)v12;
}
