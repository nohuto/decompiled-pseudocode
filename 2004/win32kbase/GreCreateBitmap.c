/*
 * XREFs of GreCreateBitmap @ 0x1C0099480
 * Callers:
 *     bInitBRUSHOBJ @ 0x1C0293494 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C0295908 (bInitBMOBJ.c)
 * Callees:
 *     EngSetLastError @ 0x1C0049420 (EngSetLastError.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00822A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00958C0 (--1SURFMEM@@QEAA@XZ.c)
 *     GreSetBitmapOwnerEx @ 0x1C0099670 (GreSetBitmapOwnerEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreCreateBitmap(int a1, int a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rbx
  unsigned int v6; // r10d
  unsigned __int64 v7; // rsi
  int v8; // edi
  int v9; // edx
  int v10; // r8d
  int v12; // eax
  __int64 v13; // [rsp+68h] [rbp+1Fh] BYREF
  char v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+74h] [rbp+2Bh]
  _DWORD v16[4]; // [rsp+78h] [rbp+2Fh] BYREF
  HPALETTE v17; // [rsp+88h] [rbp+3Fh]
  __int64 v18; // [rsp+90h] [rbp+47h]
  int v19; // [rsp+A8h] [rbp+5Fh] BYREF

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
    v16[3] = 0;
    v18 = 1LL;
    v16[1] = a1;
    v16[2] = a2;
    v17 = 0LL;
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
      v17 = hpalMono;
    }
    v16[0] = v8;
    v13 = 0LL;
    v14 = 0;
    v15 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v13, (struct _DEVBITMAPINFO *)v16, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( v13 )
    {
      *(_DWORD *)(v13 + 112) |= 0x4000000u;
      if ( a5 )
      {
        v19 = 0;
        v12 = qword_1C02517D0 ? qword_1C02517D0() : -1073741637;
        if ( v12 >= 0 && qword_1C02517D8 )
          qword_1C02517D8(*(_QWORD *)(v13 + 32), (unsigned int)v7, a5, &v19);
      }
      if ( v8 != 1 )
      {
        *(_DWORD *)(v13 + 112) |= 0x800000u;
        *(_DWORD *)(v13 + 112) |= 0x200u;
      }
      v14 |= 1u;
      GreSetBitmapOwnerEx(*(_QWORD *)(v13 + 32), 2147483650LL);
      v5 = *(_QWORD *)(v13 + 32);
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v13, v9, v10);
    return v5;
  }
}
