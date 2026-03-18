/*
 * XREFs of ?UMPDDrvQueryAdvanceWidths@@YGHPAUDHPDEV__@@PAU_FONTOBJ@@KPAKPAXK@Z @ 0x20D7AC
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ?pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z @ 0x1F4429 (-pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 */

int __stdcall UMPDDrvQueryAdvanceWidths(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        unsigned int a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6)
{
  UMPDOBJ *v6; // esi
  int v7; // eax
  int v8; // edi
  char *KernelPtr; // eax
  unsigned int *v11; // [esp+0h] [ebp-50h]
  unsigned int v12; // [esp+0h] [ebp-50h]
  int **v13; // [esp+4h] [ebp-4Ch]
  const int *v14; // [esp+4h] [ebp-4Ch]
  UMPDOBJ *v15; // [esp+10h] [ebp-40h] BYREF
  void *v16; // [esp+14h] [ebp-3Ch]
  int v17; // [esp+18h] [ebp-38h] BYREF
  struct _FONTOBJ *v18; // [esp+1Ch] [ebp-34h] BYREF
  _DWORD v19[11]; // [esp+20h] [ebp-30h] BYREF

  v17 = 0;
  v18 = a2;
  v16 = a5;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v15);
  memset(v19, 0, sizeof(v19));
  v6 = v15;
  if ( !v15 )
    goto LABEL_9;
  if ( !a4 )
    goto LABEL_9;
  if ( !v16 )
    goto LABEL_9;
  v19[0] = 44;
  v19[1] = 53;
  v19[4] = *(_DWORD *)v15;
  v19[5] = a1;
  v19[6] = v18;
  v19[7] = a3;
  v19[8] = a4;
  v19[9] = v16;
  v19[10] = a6;
  if ( a6 > 0x3FFFFFFF )
    goto LABEL_9;
  v19[9] = UMPDOBJ::_AllocUserMem(v15, (char *)(2 * a6), 1);
  if ( v19[9]
    && UMPDOBJ::pfo(v6, (struct _FONTOBJ **)&v19[6])
    && UMPDOBJ::ThunkMemBlock(v6, (void **)&v19[8], (void *)(4 * a6)) )
  {
    UMPDReleaseRFONTSem(0, 0, 0, v11, v13);
    v7 = UMPDOBJ::Thunk(v6, v19, 0x2Cu, &v17, (char *)4);
    v8 = v7 != -1 ? v17 : 0;
    UMPDAcquireRFONTSem(0, 0, 0, v12, v14);
    v18 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
    KernelPtr = UMPDOBJ::GetKernelPtr(v6, (char *)v19[9]);
    memcpy(v16, KernelPtr, 2 * a6);
  }
  else
  {
LABEL_9:
    v8 = 0;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v15);
  return v8;
}
