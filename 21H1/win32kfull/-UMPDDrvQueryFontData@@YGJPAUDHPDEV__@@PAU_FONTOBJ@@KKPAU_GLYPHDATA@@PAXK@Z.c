/*
 * XREFs of ?UMPDDrvQueryFontData@@YGJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAU_GLYPHDATA@@PAXK@Z @ 0x20DD7A
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z @ 0x1F3BE3 (-GetKernelPtr@UMPDOBJ@@QAEPAXPAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ?pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z @ 0x1F4429 (-pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z @ 0x210A97 (-UMPDAcquireRFONTSem@@YGXAAVRFONTOBJ@@PAVUMPDOBJ@@KKPBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z @ 0x210CB8 (-UMPDReleaseRFONTSem@@YGHAAVRFONTOBJ@@PAVUMPDOBJ@@PAK2PAPAH@Z.c)
 */

int __stdcall UMPDDrvQueryFontData(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        struct _GLYPHDATA *a5,
        void *a6,
        void *MaxCount)
{
  UMPDOBJ *v7; // esi
  void *v8; // edi
  int v9; // ebx
  char *KernelPtr; // eax
  unsigned int *v12; // [esp+0h] [ebp-58h]
  unsigned int v13; // [esp+0h] [ebp-58h]
  int **v14; // [esp+4h] [ebp-54h]
  const int *v15; // [esp+4h] [ebp-54h]
  struct _FONTOBJ *v16; // [esp+Ch] [ebp-4Ch] BYREF
  int v17; // [esp+10h] [ebp-48h] BYREF
  UMPDOBJ *v18; // [esp+14h] [ebp-44h] BYREF
  void *v19; // [esp+18h] [ebp-40h]
  struct DHPDEV__ *v20; // [esp+1Ch] [ebp-3Ch]
  char *v21; // [esp+20h] [ebp-38h]
  _DWORD v22[12]; // [esp+24h] [ebp-34h] BYREF

  v17 = 0;
  v19 = a6;
  v20 = a1;
  v16 = a2;
  v21 = (char *)a5;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  memset(v22, 0, sizeof(v22));
  v7 = v18;
  if ( !v18 )
    goto LABEL_13;
  v22[0] = 48;
  v22[1] = 28;
  v22[4] = *(_DWORD *)v18;
  v8 = MaxCount != 0 ? v19 : 0;
  v22[5] = v20;
  v22[6] = v16;
  v22[7] = a3;
  v22[8] = a4;
  v22[11] = MaxCount;
  v22[9] = a5;
  v22[10] = v8;
  if ( !UMPDOBJ::ThunkMemBlock(v18, (void **)&v22[9], (void *)0x40) )
    goto LABEL_13;
  if ( UMPDOBJ::ThunkMemBlock(v7, (void **)&v22[10], MaxCount) && UMPDOBJ::pfo(v7, (struct _FONTOBJ **)&v22[6]) )
  {
    UMPDReleaseRFONTSem(0, 0, 0, v12, v14);
    if ( UMPDOBJ::Thunk(v7, v22, 0x30u, &v17, (char *)4) == -1 )
      v9 = -1;
    else
      v9 = v17;
    UMPDAcquireRFONTSem(0, 0, 0, v13, v15);
    v16 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v16);
    if ( v9 != -1 )
    {
      if ( v8 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v7, (char *)v22[10]);
        memcpy(v8, KernelPtr, (size_t)MaxCount);
      }
      if ( v21 )
        qmemcpy(v21, UMPDOBJ::GetKernelPtr(v7, (char *)v22[9]), 0x40u);
    }
  }
  else
  {
LABEL_13:
    v9 = -1;
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v18);
  return v9;
}
