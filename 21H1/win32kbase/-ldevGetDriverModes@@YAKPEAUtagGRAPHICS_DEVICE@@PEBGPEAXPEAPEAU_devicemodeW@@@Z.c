/*
 * XREFs of ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C00AD02C
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C00AC550 (DrvBuildDevmodeList.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ldevUnloadImage @ 0x1C00AD180 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C00AD2C0 (ldevLoadDriver.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevGetDriverModes(
        struct tagGRAPHICS_DEVICE *a1,
        const unsigned __int16 *a2,
        void *a3,
        struct _devicemodeW **a4)
{
  unsigned int v7; // ebx
  __int64 Driver; // rax
  __int64 v9; // rbp
  __int64 (__fastcall *v10)(void *, _QWORD, struct _devicemodeW *); // r14
  unsigned int v11; // edi
  struct _devicemodeW *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  unsigned int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // eax

  *a4 = 0LL;
  v7 = 0;
  Driver = ldevLoadDriver(a2);
  v9 = Driver;
  if ( Driver )
  {
    v10 = *(__int64 (__fastcall **)(void *, _QWORD, struct _devicemodeW *))(Driver + 392);
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = v10(a3, 0LL, 0LL);
        if ( !v11 )
          break;
        if ( *(_DWORD *)(v9 + 56) < 0x30000u && v11 <= 0x10000 )
          v11 = 0x10000;
        v12 = (struct _devicemodeW *)PALLOCMEM2(v11, 0x73726447u, 0);
        *a4 = v12;
        if ( !v12 )
          break;
        v7 = v10(a3, v11, v12);
        v15 = *((_DWORD *)a1 + 40);
        if ( (v15 & 0x800000) == 0 || v7 != -1 )
        {
          if ( (v15 & 0x4000000) != 0 )
          {
            v17 = 0;
            if ( v7 )
            {
              v18 = (__int64)*a4;
              do
              {
                v19 = v17;
                v17 += *(unsigned __int16 *)(v17 + v18 + 70) + *(unsigned __int16 *)(v17 + v18 + 68);
                v20 = 0;
                if ( *(_DWORD *)(v19 + v18 + 168) == 32 )
                  v20 = v7;
                v7 = v20;
              }
              while ( v17 < v20 );
            }
          }
          break;
        }
        Win32FreePool((__int64)*a4, v13, v14);
      }
    }
    ldevUnloadImage(v9);
    if ( v7 && ((*a4)->dmFields & 0x7C0000) != 0x7C0000 )
      return 0;
  }
  return v7;
}
