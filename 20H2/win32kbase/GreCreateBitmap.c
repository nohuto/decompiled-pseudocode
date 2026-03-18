/*
 * XREFs of GreCreateBitmap @ 0x1C001D8A0
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C02911B0 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C0293798 (bInitBMOBJ.c)
 * Callees:
 *     GreSetBitmapOwnerEx @ 0x1C001DA90 (GreSetBitmapOwnerEx.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001DB80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003B6E0 (--1SURFMEM@@QEAA@XZ.c)
 *     EngSetLastError @ 0x1C00AAA00 (EngSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreCreateBitmap(int a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned int v6; // r10d
  unsigned __int64 v7; // rsi
  int v8; // edi
  int v10; // eax
  __int64 v11; // [rsp+68h] [rbp+1Fh] BYREF
  char v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+74h] [rbp+2Bh]
  _DWORD v14[4]; // [rsp+78h] [rbp+2Fh] BYREF
  HPALETTE v15; // [rsp+88h] [rbp+3Fh]
  __int64 v16; // [rsp+90h] [rbp+47h]
  int v17; // [rsp+A8h] [rbp+5Fh] BYREF

  v5 = 0LL;
  v6 = a4 * a3;
  if ( a1 <= 0
    || (unsigned int)a1 > 0x7FFFFFF
    || a2 <= 0
    || a3 > 0x20
    || a4 > 0x20
    || v6 > 0x20
    || (v7 = a2 * (unsigned __int64)(((a1 * v6 + 15) >> 3) & 0x1FFFFFFE), v7 > 0xFFFFFFFF) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    v14[3] = 0;
    v16 = 1LL;
    v14[1] = a1;
    v14[2] = a2;
    v15 = 0LL;
    if ( v6 > 1 )
    {
      v8 = 4;
      if ( v6 <= 4 )
      {
        v8 = 2;
      }
      else if ( v6 <= 8 )
      {
        v8 = 3;
      }
      else if ( v6 > 0x10 )
      {
        v8 = (v6 > 0x18) + 5;
      }
    }
    else
    {
      v8 = 1;
      v15 = hpalMono;
    }
    v14[0] = v8;
    v11 = 0LL;
    v12 = 0;
    v13 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v11, (struct _DEVBITMAPINFO *)v14, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( v11 )
    {
      *(_DWORD *)(v11 + 112) |= 0x4000000u;
      if ( a5 )
      {
        v17 = 0;
        v10 = qword_1C024F7D0 ? qword_1C024F7D0() : -1073741637;
        if ( v10 >= 0 && qword_1C024F7D8 )
          qword_1C024F7D8(*(_QWORD *)(v11 + 32), (unsigned int)v7, a5, &v17);
      }
      if ( v8 != 1 )
      {
        *(_DWORD *)(v11 + 112) |= 0x800000u;
        *(_DWORD *)(v11 + 112) |= 0x200u;
      }
      v12 |= 1u;
      GreSetBitmapOwnerEx(*(_QWORD *)(v11 + 32), 2147483650LL);
      v5 = *(_QWORD *)(v11 + 32);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v11);
    return v5;
  }
}
