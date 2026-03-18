/*
 * XREFs of ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C00BC638
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C00BB5B0 (DrvBuildDevmodeList.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ldevLoadDriver @ 0x1C00BBEE0 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x1C00BD4E0 (ldevUnloadImage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevGetDriverModes(
        struct tagGRAPHICS_DEVICE *a1,
        const unsigned __int16 *a2,
        void *a3,
        struct _devicemodeW **a4)
{
  int v5; // r8d
  unsigned int v8; // ebx
  struct _LDEV *Driver; // rax
  struct _LDEV *v10; // rbp
  __int64 (__fastcall *v11)(void *, _QWORD, struct _devicemodeW *); // r14
  unsigned int v12; // edi
  struct _devicemodeW *v13; // rax
  int v14; // eax
  unsigned int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // eax

  v5 = *((_DWORD *)a1 + 40) & 0x4000000;
  *a4 = 0LL;
  v8 = 0;
  Driver = ldevLoadDriver(a2, 1LL, (v5 | 0x2000000u) >> 25);
  v10 = Driver;
  if ( Driver )
  {
    v11 = (__int64 (__fastcall *)(void *, _QWORD, struct _devicemodeW *))*((_QWORD *)Driver + 49);
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = v11(a3, 0LL, 0LL);
        if ( !v12 )
          break;
        if ( *((_DWORD *)v10 + 14) < 0x30000u && v12 <= 0x10000 )
          v12 = 0x10000;
        v13 = (struct _devicemodeW *)PALLOCMEM2(v12, 0x73726447u, 0);
        *a4 = v13;
        if ( !v13 )
          break;
        v8 = v11(a3, v12, v13);
        v14 = *((_DWORD *)a1 + 40);
        if ( (v14 & 0x800000) == 0 || v8 != -1 )
        {
          if ( (v14 & 0x4000000) != 0 )
          {
            v16 = 0;
            if ( v8 )
            {
              v17 = (__int64)*a4;
              do
              {
                v18 = v16;
                v16 += *(unsigned __int16 *)(v16 + v17 + 70) + *(unsigned __int16 *)(v16 + v17 + 68);
                v19 = 0;
                if ( *(_DWORD *)(v18 + v17 + 168) == 32 )
                  v19 = v8;
                v8 = v19;
              }
              while ( v16 < v19 );
            }
          }
          break;
        }
        Win32FreePool((__int64)*a4);
      }
    }
    ldevUnloadImage(v10);
    if ( v8 && ((*a4)->dmFields & 0x7C0000) != 0x7C0000 )
      return 0;
  }
  return v8;
}
