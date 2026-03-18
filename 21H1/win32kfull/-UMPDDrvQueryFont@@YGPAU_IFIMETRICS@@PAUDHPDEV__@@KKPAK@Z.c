/*
 * XREFs of ?UMPDDrvQueryFont@@YGPAU_IFIMETRICS@@PAUDHPDEV__@@KKPAK@Z @ 0x20DBEF
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?ProbeAndReadIFIMETRICS@@YGPAU_IFIMETRICS@@PAU1@HK@Z @ 0x20A7B1 (-ProbeAndReadIFIMETRICS@@YGPAU_IFIMETRICS@@PAU1@HK@Z.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?UMPDMyDrvFree@@YGXPAVUMPDOBJ@@PAUDHPDEV__@@PAXK@Z @ 0x20FBD9 (-UMPDMyDrvFree@@YGXPAVUMPDOBJ@@PAUDHPDEV__@@PAXK@Z.c)
 *     ?bIsFreeHooked@@YGHPAUDHPDEV__@@PAVUMPDOBJ@@@Z @ 0x20FD4C (-bIsFreeHooked@@YGHPAUDHPDEV__@@PAVUMPDOBJ@@@Z.c)
 */

PATHOBJ *__stdcall UMPDDrvQueryFont(struct DHPDEV__ *a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  PATHOBJ *IFIMETRICS; // ebx
  UMPDOBJ *v5; // esi
  char *KernelPtr; // eax
  size_t *v7; // eax
  int v8; // edi
  int v9; // ecx
  int v11; // [esp+0h] [ebp-60h]
  struct DHPDEV__ *v12; // [esp+0h] [ebp-60h]
  void *v13; // [esp+0h] [ebp-60h]
  unsigned int v14; // [esp+4h] [ebp-5Ch]
  struct UMPDOBJ *v15; // [esp+4h] [ebp-5Ch]
  unsigned int v16; // [esp+4h] [ebp-5Ch]
  struct UMPDOBJ *v17; // [esp+Ch] [ebp-54h] BYREF
  struct DHPDEV__ **v18; // [esp+10h] [ebp-50h]
  struct DHPDEV__ *v19; // [esp+14h] [ebp-4Ch]
  UMPDOBJ *v20; // [esp+18h] [ebp-48h] BYREF
  _BYTE v21[16]; // [esp+1Ch] [ebp-44h] BYREF
  _DWORD Src[12]; // [esp+2Ch] [ebp-34h] BYREF

  IFIMETRICS = 0;
  v19 = a1;
  v18 = (struct DHPDEV__ **)a4;
  v17 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v20);
  memset(Src, 0, sizeof(Src));
  v5 = v20;
  if ( v20 )
  {
    Src[0] = 48;
    Src[1] = 26;
    Src[4] = *(_DWORD *)v20;
    Src[5] = a1;
    Src[6] = a2;
    Src[7] = a3;
    Src[9] = UMPDOBJ::_AllocUserMem(v20, (char *)4, 1);
    Src[10] = 0;
    Src[11] = 0;
    if ( !Src[9] || UMPDOBJ::Thunk(v5, Src, 0x30u, &v17, (char *)4) == -1 )
    {
      v7 = 0;
    }
    else
    {
      KernelPtr = UMPDOBJ::GetKernelPtr(v5, (char *)Src[9]);
      *v18 = *(struct DHPDEV__ **)KernelPtr;
      v7 = (size_t *)v17;
      if ( !v17 )
      {
LABEL_14:
        *v18 = (struct DHPDEV__ *)IFIMETRICS;
        goto LABEL_17;
      }
      if ( a3 )
      {
        v8 = *((_DWORD *)v5 + 58);
        if ( v8 )
        {
          v7 = (size_t *)UMPDOBJ::GetKernelPtr(v5, (char *)Src[11]);
          v9 = Src[10];
        }
        else
        {
          v9 = -1;
        }
        IFIMETRICS = ProbeAndReadIFIMETRICS(v8 == 0, v7, (struct _IFIMETRICS *)v9, v11, v14);
        if ( bIsFreeHooked(v12, v15) )
        {
          memset(v21, 0, sizeof(v21));
          if ( IFIMETRICS )
            PushThreadGuardedObject(v21, IFIMETRICS, Win32FreePool);
          UMPDMyDrvFree(v17, *v18, v13, v16);
          if ( IFIMETRICS )
            PopThreadGuardedObject(v21);
        }
        goto LABEL_14;
      }
    }
    IFIMETRICS = (PATHOBJ *)v7;
  }
LABEL_17:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v20);
  return IFIMETRICS;
}
