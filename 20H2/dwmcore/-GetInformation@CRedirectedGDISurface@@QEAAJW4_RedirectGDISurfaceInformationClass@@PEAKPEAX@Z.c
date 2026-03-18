/*
 * XREFs of ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800402AC
 * Callers:
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ @ 0x18003E918 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAXXZ.c)
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18003FFF4 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x1800401D4 (-NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x1800A64D8 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRedirectedGDISurface::GetInformation(__int64 a1, int a2, _DWORD *a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v8; // edx
  __int64 v9; // rcx
  int v10; // ecx
  int v11; // ecx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r9d
  signed int v15; // eax
  signed int v16; // eax
  signed int LastError; // eax
  unsigned int v18; // [rsp+20h] [rbp-60h]
  _OWORD v19[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+70h] [rbp-10h]

  v6 = 0;
  if ( !a2 )
  {
    if ( a3 && *a3 >= 0x38u )
    {
      *a3 = 56;
      SetLastError(0);
      if ( (unsigned int)DwmHLSurfGetDirtyRgn(
                           *(_QWORD *)(a1 + 24),
                           *(_QWORD *)a4,
                           *(_QWORD *)(a4 + 8),
                           *(_QWORD *)(a4 + 16),
                           *(_QWORD *)(a4 + 24),
                           *(_QWORD *)(a4 + 32),
                           *(_QWORD *)(a4 + 40),
                           a4 + 48,
                           a4 + 52) )
        return v6;
      LastError = GetLastError();
      v6 = LastError;
      if ( LastError > 0 )
        v6 = (unsigned __int16)LastError | 0x80070000;
      v18 = 239;
      if ( (v6 & 0x80000000) == 0 )
        v6 = -2003304445;
      goto LABEL_19;
    }
    v18 = 226;
LABEL_36:
    v14 = -2147024872;
    v6 = -2147024872;
    goto LABEL_37;
  }
  v8 = a2 - 2;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      memset(v19, 0, sizeof(v19));
      if ( !a3 || *a3 < 0x20u )
      {
        v18 = 251;
        goto LABEL_36;
      }
      *a3 = 32;
      SetLastError(0);
      if ( (unsigned int)DwmGetRedirectionStyle(*(_QWORD *)(a1 + 24), v19) )
      {
        *(_DWORD *)a4 = v19[0];
        *(_OWORD *)(a4 + 8) = *(_OWORD *)((char *)v19 + 4);
        *(_QWORD *)(a4 + 24) = *((_QWORD *)&v19[1] + 1);
        return v6;
      }
      v15 = GetLastError();
      v6 = v15;
      if ( v15 > 0 )
        v6 = (unsigned __int16)v15 | 0x80070000;
      v18 = 256;
      if ( (v6 & 0x80000000) == 0 )
        v6 = -2003304445;
    }
    else
    {
      v6 = -2147024809;
      v18 = 267;
    }
LABEL_19:
    v14 = v6;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802DAE98, 4u, v14, v18, 0LL);
    return v6;
  }
  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  if ( !a3 || *a3 < 0x138u )
  {
    v18 = 131;
    goto LABEL_36;
  }
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  v9 = *(_QWORD *)(a1 + 24);
  *a3 = 312;
  if ( (unsigned int)DwmGetSurfaceData(v9, v19) )
  {
    v10 = v19[0];
    *(_QWORD *)(a4 + 32) = *(_QWORD *)((char *)v19 + 4);
    *(_DWORD *)(a4 + 40) = v19[1];
    *(_QWORD *)(a4 + 16) = *((_QWORD *)&v19[1] + 1);
    v11 = v10 - 1;
    if ( v11 )
    {
      *(_QWORD *)(a4 + 24) = 0LL;
      if ( v11 == 1 )
      {
        v12 = v20;
        *(_DWORD *)a4 = 2;
        *(_DWORD *)(a4 + 44) = 87;
        *(_DWORD *)(a4 + 48) = 1;
        *(_OWORD *)(a4 + 56) = __PAIR128__(*((unsigned __int64 *)&v20 + 1), v12);
      }
      else
      {
        *(_DWORD *)a4 = 0;
        *(_QWORD *)(a4 + 64) = 0LL;
        *(_DWORD *)(a4 + 48) = 0;
      }
    }
    else
    {
      *(_QWORD *)(a4 + 24) = *((_QWORD *)&v20 + 1);
      v13 = v20;
      *(_DWORD *)a4 = 1;
      *(_DWORD *)(a4 + 48) = 0;
      *(_QWORD *)(a4 + 56) = v13;
      *(_QWORD *)(a4 + 64) = 0LL;
    }
  }
  else
  {
    *(_DWORD *)a4 = 0;
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_QWORD *)(a4 + 64) = 0LL;
    *(_DWORD *)(a4 + 48) = 0;
    v16 = GetLastError();
    v6 = v16;
    if ( v16 > 0 )
      return (unsigned __int16)v16 | 0x80070000;
  }
  return v6;
}
