/*
 * XREFs of ?UMPDDrvIcmCheckBitmapBits@@YGHPAUDHPDEV__@@PAXPAU_SURFOBJ@@PAE@Z @ 0x20CC14
 * Callers:
 *     <none>
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 *     ?pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z @ 0x1F44B5 (-pso@UMPDOBJ@@AAEHPAU_DDIOBJMAP@@PAPAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QAE@XZ @ 0x20A0DF (--0XUMPDOBJ@@QAE@XZ.c)
 *     ??1XUMPDOBJ@@QAE@XZ @ 0x20A147 (--1XUMPDOBJ@@QAE@XZ.c)
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z @ 0x20FC76 (-bDeleteLargeBitmaps@UMPDOBJ@@QAEHPAU_SURFOBJ@@00@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z @ 0x20FF60 (-bThunkLargeBitmap@UMPDOBJ@@QAEHPAU_SURFOBJ@@PAPAX1PAH2PAK@Z.c)
 */

int __stdcall UMPDDrvIcmCheckBitmapBits(struct DHPDEV__ *a1, void *a2, struct _SURFOBJ *a3, unsigned __int8 *a4)
{
  UMPDOBJ *v4; // esi
  int v5; // edi
  int v6; // edi
  ULONG *v8; // [esp+0h] [ebp-58h]
  unsigned int v9; // [esp+0h] [ebp-58h]
  unsigned int v10; // [esp+0h] [ebp-58h]
  unsigned int *v11; // [esp+4h] [ebp-54h]
  unsigned int *v12; // [esp+4h] [ebp-54h]
  UMPDOBJ *v13; // [esp+Ch] [ebp-4Ch] BYREF
  void *v14; // [esp+10h] [ebp-48h] BYREF
  void *v15; // [esp+14h] [ebp-44h] BYREF
  int v16; // [esp+18h] [ebp-40h] BYREF
  unsigned __int8 *v17; // [esp+1Ch] [ebp-3Ch]
  int v18; // [esp+20h] [ebp-38h] BYREF
  unsigned int v19; // [esp+24h] [ebp-34h] BYREF
  unsigned int v20; // [esp+28h] [ebp-30h] BYREF
  unsigned int v21; // [esp+2Ch] [ebp-2Ch] BYREF
  _DWORD Src[9]; // [esp+30h] [ebp-28h] BYREF

  v19 = (unsigned int)a1;
  v20 = (unsigned int)a2;
  v17 = a4;
  v21 = 1;
  v16 = 0;
  v18 = 0;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v13);
  v15 = 0;
  v14 = 0;
  v4 = v13;
  memset(Src, 0, sizeof(Src));
  if ( !v13 )
    goto LABEL_18;
  v5 = a3->sizlBitmap.cx * a3->sizlBitmap.cy;
  Src[0] = 36;
  Src[1] = 66;
  Src[4] = *(_DWORD *)v13;
  Src[5] = v19;
  Src[6] = v20;
  Src[8] = v17;
  Src[7] = a3;
  v17 = (unsigned __int8 *)v5;
  if ( !*((_DWORD *)v13 + 58) )
    goto LABEL_8;
  v19 = 40;
  v21 = 0;
  if ( ULongLongToULong((unsigned int)v5, v8) < 0
    || (v20 = 0, (ULongAdd(3, v21, (int *)&v20, v9, v11) & 0x80000000) != 0)
    || (ULongAdd(v20 & 0xFFFFFFFC, 0x28u, (int *)&v19, v10, v12) & 0x80000000) != 0 )
  {
LABEL_18:
    v6 = 0;
    goto LABEL_19;
  }
  v6 = UMPDOBJ::bThunkLargeBitmap(v4, a3, &v15, &v14, &v16, &v18, &v19);
  v21 = v6;
  if ( !v6 )
    goto LABEL_14;
  v5 = (int)v17;
LABEL_8:
  v6 = 0;
  if ( UMPDOBJ::pso(v4, (UMPDOBJ *)((char *)v4 + 40), (struct _SURFOBJ **)&Src[7], v18) )
  {
    Src[8] = UMPDOBJ::_AllocUserMem(v4, (char *)v5, 1);
    if ( Src[8] )
    {
      if ( UMPDOBJ::Thunk(v4, Src, 0x24u, &v21, (char *)4) != -1 && v21 )
        v6 = 1;
    }
  }
LABEL_14:
  if ( v16 )
  {
    if ( v18 )
      UMPDOBJ::bDeleteLargeBitmaps(v4, a3, 0, 0);
    a3->pvBits = v15;
    a3->pvScan0 = v14;
  }
LABEL_19:
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v13);
  return v6;
}
