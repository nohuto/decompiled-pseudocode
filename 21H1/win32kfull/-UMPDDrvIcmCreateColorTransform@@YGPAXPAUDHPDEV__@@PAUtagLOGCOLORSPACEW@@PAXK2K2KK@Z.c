/*
 * XREFs of ?UMPDDrvIcmCreateColorTransform@@YGPAXPAUDHPDEV__@@PAUtagLOGCOLORSPACEW@@PAXK2K2KK@Z @ 0x20CDB4
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z @ 0x1F3FEA (-ThunkMemBlock@UMPDOBJ@@QAEHPAPAXK@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 */

int __stdcall UMPDDrvIcmCreateColorTransform(
        struct DHPDEV__ *a1,
        struct tagLOGCOLORSPACEW *a2,
        void *a3,
        void *a4,
        void *a5,
        void *a6,
        void *a7,
        void *a8,
        unsigned int a9)
{
  int v9; // edi
  UMPDOBJ *v10; // esi
  int v11; // eax
  int v13; // [esp+Ch] [ebp-54h] BYREF
  UMPDOBJ *v14; // [esp+10h] [ebp-50h] BYREF
  struct tagLOGCOLORSPACEW *v15; // [esp+14h] [ebp-4Ch]
  void *v16; // [esp+18h] [ebp-48h]
  void *v17; // [esp+1Ch] [ebp-44h]
  void *v18; // [esp+20h] [ebp-40h]
  _DWORD v19[14]; // [esp+24h] [ebp-3Ch] BYREF

  v15 = a2;
  v16 = a3;
  v17 = a5;
  v9 = 0;
  v18 = a7;
  v13 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v14);
  memset(v19, 0, sizeof(v19));
  v10 = v14;
  if ( v14 )
  {
    v19[0] = 56;
    v19[1] = 64;
    v19[4] = *(_DWORD *)v14;
    v19[6] = v15;
    v19[7] = v16;
    v19[9] = v17;
    v19[10] = a6;
    v19[11] = v18;
    v19[12] = a8;
    v19[13] = a9;
    v19[5] = a1;
    v19[8] = a4;
    if ( UMPDOBJ::ThunkMemBlock(v14, (void **)&v19[6], (void *)0x148) )
    {
      if ( UMPDOBJ::ThunkMemBlock(v10, (void **)&v19[7], a4)
        && UMPDOBJ::ThunkMemBlock(v10, (void **)&v19[9], a6)
        && UMPDOBJ::ThunkMemBlock(v10, (void **)&v19[11], a8) )
      {
        v11 = UMPDOBJ::Thunk(v10, v19, 0x38u, &v13, (char *)4);
        v9 = v11 != -1 ? v13 : 0;
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v14);
  return v9;
}
