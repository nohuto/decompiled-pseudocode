/*
 * XREFs of ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C00B0680
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 */

void __fastcall MULTIDEVLOCKOBJ::vInit(MULTIDEVLOCKOBJ *this, struct _MDEV *a2)
{
  unsigned int v2; // edi
  unsigned int v5; // eax
  char *v6; // r8
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // rcx

  v2 = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  if ( a2 )
  {
    v5 = 2 * *((_DWORD *)a2 + 5);
    *((_DWORD *)this + 1) = v5;
    if ( v5 > 0xA )
    {
      v10 = (char *)PALLOCMEM2((unsigned int)(16 * *((_DWORD *)a2 + 5)), 0x706D7447u, 0);
      *((_QWORD *)this + 1) = v10;
      v6 = v10;
      if ( v10 )
      {
        v11 = *((unsigned int *)a2 + 5);
        *(_DWORD *)this = 3;
        *((_QWORD *)this + 2) = &v10[8 * v11];
      }
    }
    else
    {
      v6 = (char *)this + 24;
      *((_QWORD *)this + 1) = (char *)this + 24;
      v7 = *((unsigned int *)a2 + 5);
      *(_DWORD *)this = 1;
      *((_QWORD *)this + 2) = (char *)this + 8 * v7 + 24;
    }
    if ( v6 && *((_DWORD *)a2 + 5) )
    {
      do
      {
        v8 = v2++;
        v9 = *((_QWORD *)a2 + 7 * v8 + 5);
        *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v8) = *(_QWORD *)(v9 + 48);
        *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v8) = *(_QWORD *)(v9 + 64);
      }
      while ( v2 < *((_DWORD *)a2 + 5) );
    }
  }
  else
  {
    *(_DWORD *)this = 1;
  }
}
