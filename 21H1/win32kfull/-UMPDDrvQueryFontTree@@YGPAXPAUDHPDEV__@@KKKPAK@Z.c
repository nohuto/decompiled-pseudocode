/*
 * XREFs of ?UMPDDrvQueryFontTree@@YGPAXPAUDHPDEV__@@KKKPAK@Z @ 0x20DF1E
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ?bSandboxedClient@UMPDOBJ@@QAEHXZ @ 0x1F4402 (-bSandboxedClient@UMPDOBJ@@QAEHXZ.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?ProbeAndReadFD_GLYPHSET@@YGPAU_FD_GLYPHSET@@PBU1@HKJ@Z @ 0x20A451 (-ProbeAndReadFD_GLYPHSET@@YGPAU_FD_GLYPHSET@@PBU1@HKJ@Z.c)
 *     ?ProbeAndReadFD_KERNINGPAIR@@YGPAU_FD_KERNINGPAIR@@PBU1@HK@Z @ 0x20A683 (-ProbeAndReadFD_KERNINGPAIR@@YGPAU_FD_KERNINGPAIR@@PBU1@HK@Z.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?UMPDMyDrvFree@@YGXPAVUMPDOBJ@@PAUDHPDEV__@@PAXK@Z @ 0x20FBD9 (-UMPDMyDrvFree@@YGXPAVUMPDOBJ@@PAUDHPDEV__@@PAXK@Z.c)
 *     ?bIsFreeHooked@@YGHPAUDHPDEV__@@PAVUMPDOBJ@@@Z @ 0x20FD4C (-bIsFreeHooked@@YGHPAUDHPDEV__@@PAVUMPDOBJ@@@Z.c)
 */

int __stdcall UMPDDrvQueryFontTree(
        struct DHPDEV__ *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v5; // ebx
  UMPDOBJ *v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // eax
  char *KernelPtr; // eax
  struct UMPDOBJ *v11; // eax
  int v12; // eax
  PATHOBJ *FD_GLYPHSET; // eax
  int v14; // ecx
  struct DHPDEV__ *v16; // [esp+0h] [ebp-68h]
  void *v17; // [esp+0h] [ebp-68h]
  struct UMPDOBJ *v18; // [esp+4h] [ebp-64h]
  unsigned int v19; // [esp+4h] [ebp-64h]
  struct UMPDOBJ *v20; // [esp+Ch] [ebp-5Ch] BYREF
  struct DHPDEV__ **v21; // [esp+10h] [ebp-58h]
  struct _FD_GLYPHSET *v22; // [esp+14h] [ebp-54h]
  struct UMPDOBJ *v23; // [esp+18h] [ebp-50h]
  struct DHPDEV__ *v24; // [esp+1Ch] [ebp-4Ch]
  UMPDOBJ *v25; // [esp+20h] [ebp-48h] BYREF
  _BYTE v26[16]; // [esp+24h] [ebp-44h] BYREF
  _DWORD Src[12]; // [esp+34h] [ebp-34h] BYREF

  v5 = 0;
  v24 = a1;
  v21 = (struct DHPDEV__ **)a5;
  v20 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v25);
  memset(Src, 0, sizeof(Src));
  v6 = v25;
  if ( !v25 )
    goto LABEL_31;
  Src[0] = 48;
  Src[1] = 27;
  v7 = *(_DWORD *)v25;
  Src[5] = a1;
  Src[4] = v7;
  v8 = 1;
  Src[6] = a2;
  Src[7] = a3;
  Src[8] = a4;
  Src[9] = UMPDOBJ::_AllocUserMem(v25, (char *)4, 1);
  Src[10] = 0;
  Src[11] = 0;
  if ( !Src[9] )
    goto LABEL_31;
  v9 = UMPDOBJ::Thunk(v6, Src, 0x30u, &v20, (char *)4);
  v22 = (struct _FD_GLYPHSET *)-1;
  if ( v9 == -1 || !v20 )
    goto LABEL_31;
  KernelPtr = UMPDOBJ::GetKernelPtr(v6, (char *)Src[9]);
  *v21 = *(struct DHPDEV__ **)KernelPtr;
  if ( !*((_DWORD *)v6 + 58) || !Src[11] || !Src[10] )
    v8 = 0;
  v11 = (struct UMPDOBJ *)UMPDOBJ::GetKernelPtr(v6, (char *)Src[11]);
  v23 = v11;
  if ( a4 == 3 )
  {
    if ( v8 )
      v22 = (struct _FD_GLYPHSET *)Src[10];
    else
      v23 = v20;
    if ( UMPDOBJ::bSandboxedClient(v6) )
    {
      v12 = *((_DWORD *)v6 + 52);
      if ( v12 )
        v5 = *(_DWORD *)(v12 + 24);
    }
    FD_GLYPHSET = ProbeAndReadFD_GLYPHSET(v8, (unsigned int)v23, v22, v5, (unsigned int)v16, (int)v18);
LABEL_24:
    v5 = (int)FD_GLYPHSET;
    goto LABEL_25;
  }
  if ( a4 == 2 )
  {
    if ( v8 )
      v14 = Src[10];
    else
      v14 = -1;
    if ( !v8 )
      v11 = v20;
    FD_GLYPHSET = ProbeAndReadFD_KERNINGPAIR(
                    v8,
                    (unsigned int)v11,
                    (const struct _FD_KERNINGPAIR *)v14,
                    (int)v16,
                    (unsigned int)v18);
    goto LABEL_24;
  }
LABEL_25:
  if ( bIsFreeHooked(v16, v18) )
  {
    memset(v26, 0, sizeof(v26));
    if ( v5 )
      PushThreadGuardedObject(v26, v5, Win32FreePool);
    UMPDMyDrvFree(v20, *v21, v17, v19);
    if ( v5 )
      PopThreadGuardedObject(v26);
  }
  *v21 = (struct DHPDEV__ *)v5;
LABEL_31:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v25);
  return v5;
}
