/*
 * XREFs of ?MulCreateDeviceBitmap@@YGPAUHBITMAP__@@PAUDHPDEV__@@UtagSIZE@@K@Z @ 0x2028BF
 * Callers:
 *     <none>
 * Callees:
 *     ?pAllocateAndInitializeMDSURF@@YGPAU_MDSURF@@PAU_VDEV@@@Z @ 0x206598 (-pAllocateAndInitializeMDSURF@@YGPAU_MDSURF@@PAU_VDEV@@@Z.c)
 *     ?vSetupDevBitmap@@YGXPAVPDEVOBJ@@PAVSURFACE@@@Z @ 0x2067D6 (-vSetupDevBitmap@@YGXPAVPDEVOBJ@@PAVSURFACE@@@Z.c)
 */

HBITMAP __stdcall MulCreateDeviceBitmap(struct DHPDEV__ *a1, SIZEL sizl, ULONG iFormat)
{
  HBITMAP Bitmap; // ebx
  struct _MDSURF *v4; // edi
  HDEV v5; // esi
  _DWORD *v6; // eax
  int (__stdcall *v7)(_DWORD, LONG, LONG, ULONG); // ecx
  HSURF v8; // eax
  SURFOBJ *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  struct _VDEV *v14; // [esp+4h] [ebp-18h]
  struct SURFACE *v15; // [esp+8h] [ebp-14h]
  SURFOBJ *pso; // [esp+10h] [ebp-Ch]
  HSURF hsurf; // [esp+18h] [ebp-4h]

  Bitmap = 0;
  v4 = 0;
  v5 = *(HDEV *)a1;
  if ( *(_DWORD *)a1 )
  {
    do
    {
      v6 = (_DWORD *)*((_DWORD *)v5 + 9);
      if ( (v6[280] & 0x8000000) != 0 )
      {
        v7 = (int (__stdcall *)(_DWORD, LONG, LONG, ULONG))v6[485];
        if ( v7 )
        {
          v8 = (HSURF)v7(v6[277], sizl.cx, sizl.cy, iFormat);
          hsurf = v8;
          v9 = v8 ? EngLockSurface(v8) : 0;
          pso = v9;
          if ( v9 )
          {
            if ( !v4 )
            {
              v4 = pAllocateAndInitializeMDSURF(v14);
              if ( !v4 )
                goto LABEL_18;
              Bitmap = EngCreateBitmap(sizl, 0, iFormat, 1u, 0);
              if ( !Bitmap )
              {
                EngFreeMem(v4);
LABEL_18:
                EngUnlockSurface(pso);
                EngDeleteSurface(hsurf);
                return 0;
              }
            }
            v10 = *((_DWORD *)v4 + 1);
            *(_DWORD *)v4 = a1;
            *(_DWORD *)(v10 + 4 * *((_DWORD *)v5 + 2)) = pso;
            pso[1].hsurf = (HSURF)((int)pso[1].hsurf | (unsigned int)&loc_80000);
            pso[1].pvBits = Bitmap;
            vSetupDevBitmap(v14, v15);
          }
        }
      }
      v5 = *(HDEV *)v5;
    }
    while ( v5 );
    if ( v4 )
    {
      v11 = HmgShareLockCheck(Bitmap, 5);
      v12 = v11;
      if ( v11 )
      {
        *(_DWORD *)(v11 + 72) |= 0x400000u;
        *(_WORD *)(v11 + 64) = 3;
        *(_DWORD *)(v11 + 16) = v4;
        EngAssociateSurface((HSURF)Bitmap, *((HDEV *)a1 + 4), *((_DWORD *)a1 + 9));
        DEC_SHARE_REF_CNT(v12);
      }
    }
  }
  return Bitmap;
}
