/*
 * XREFs of ?hbmCreateDriverSurface@@YAPEAUHBITMAP__@@KPEAUDHSURF__@@UtagSIZE@@JKKPEAX@Z @ 0x1C003EF64
 * Callers:
 *     EngCreateDeviceSurface @ 0x1C003EE90 (EngCreateDeviceSurface.c)
 *     EngCreateRedirectionDeviceBitmap @ 0x1C003EEF0 (EngCreateRedirectionDeviceBitmap.c)
 *     EngCreateBitmap @ 0x1C003EF30 (EngCreateBitmap.c)
 *     EngCreateDeviceBitmap @ 0x1C014EEF0 (EngCreateDeviceBitmap.c)
 * Callees:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00822A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00958C0 (--1SURFMEM@@QEAA@XZ.c)
 */

__int64 __fastcall hbmCreateDriverSurface(
        int a1,
        struct DHSURF__ *a2,
        struct tagSIZE a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        void *a7)
{
  __int64 v7; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // [rsp+68h] [rbp-1h] BYREF
  char v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+74h] [rbp+Bh]
  unsigned int v18; // [rsp+78h] [rbp+Fh] BYREF
  struct tagSIZE v19; // [rsp+7Ch] [rbp+13h]
  int v20; // [rsp+84h] [rbp+1Bh]
  __int64 v21; // [rsp+88h] [rbp+1Fh]
  unsigned int v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+94h] [rbp+2Bh]
  LONG cy; // [rsp+CCh] [rbp+63h]

  cy = a3.cy;
  v7 = 0LL;
  if ( a3.cx < 0 || a3.cy < 0 )
    return 0LL;
  v19 = a3;
  v20 = 0;
  v23 = 0;
  v18 = a5 & 0xFFFF7FFF;
  v21 = 0LL;
  v22 = a6;
  if ( !a7 || !a4 )
    goto LABEL_13;
  switch ( a5 & 0xFFFF7FFF )
  {
    case 1u:
      v14 = 8LL * a4;
      goto LABEL_26;
    case 2u:
      v14 = 2LL * a4;
LABEL_26:
      if ( v14 <= 0xFFFFFFFF )
      {
        v19.cx = v14;
        break;
      }
      return 0LL;
    case 3u:
LABEL_12:
      v19.cx = a4;
      break;
    case 4u:
      a4 >>= 1;
      goto LABEL_12;
    case 5u:
      v19.cx = a4 / 3;
      break;
    case 6u:
      a4 >>= 2;
      goto LABEL_12;
  }
LABEL_13:
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  SURFMEM::bCreateDIB(
    (SURFMEM *)&v15,
    (struct _DEVBITMAPINFO *)&v18,
    a7,
    0LL,
    0,
    0LL,
    0LL,
    (a5 & 0x8000) == 0,
    a7 == 0LL,
    0,
    0);
  v11 = v15;
  if ( v15 )
  {
    if ( a1 == 3 )
    {
      *(_DWORD *)(v15 + 112) |= 0x400000u;
      v11 = v15;
    }
    if ( a1 )
    {
      *(_DWORD *)(v11 + 88) = 0;
      *(_QWORD *)(v15 + 80) = 0LL;
      *(_QWORD *)(v15 + 72) = 0LL;
      v11 = v15;
    }
    *(_DWORD *)(v11 + 112) |= 0x200000u;
    v12 = v15;
    if ( a3.cx <= *(_DWORD *)(v15 + 56) && cy <= *(_DWORD *)(v15 + 60) )
    {
      *(struct tagSIZE *)(v15 + 56) = a3;
      v12 = v15;
    }
    *(_QWORD *)(v12 + 24) = a2;
    *(_WORD *)(v15 + 100) = a1;
    v16 |= 1u;
    if ( (a5 & 0x8000) != 0 )
      *(_DWORD *)(v15 + 112) |= 0x40000u;
    v7 = *(_QWORD *)(v15 + 32);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v15);
  return v7;
}
