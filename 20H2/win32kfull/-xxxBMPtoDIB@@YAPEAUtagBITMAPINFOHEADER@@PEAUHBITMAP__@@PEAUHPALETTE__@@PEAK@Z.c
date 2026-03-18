/*
 * XREFs of ?xxxBMPtoDIB@@YAPEAUtagBITMAPINFOHEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@PEAK@Z @ 0x1C01518B0
 * Callers:
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C015166C (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z @ 0x1C021EA14 (-xxxBMPtoDIBV5@@YAPEAUBITMAPV5HEADER@@PEAUHBITMAP__@@PEAUHPALETTE__@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     GreGetDIBitsInternal @ 0x1C009B01C (GreGetDIBitsInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     _SelectPalette @ 0x1C00F7F64 (_SelectPalette.c)
 *     xxxRealizePalette @ 0x1C0113460 (xxxRealizePalette.c)
 */

struct tagBITMAPINFO *__fastcall xxxBMPtoDIB(HBITMAP a1, __int64 a2, unsigned int *a3)
{
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // cx
  unsigned int v7; // r12d
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r14
  unsigned int v10; // edi
  unsigned int v11; // esi
  __int64 v12; // rax
  struct tagBITMAPINFO *v13; // rbx
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  HDC CompatibleDC; // rsi
  __int64 v17; // r15
  BOOL v18; // edi
  __int64 ThreadWin32Thread; // rax
  __int128 v21; // [rsp+58h] [rbp-29h] BYREF
  __int64 v22; // [rsp+68h] [rbp-19h]
  __int128 v23; // [rsp+70h] [rbp-11h] BYREF
  __int128 v24; // [rsp+80h] [rbp-1h]
  __int128 v25; // [rsp+90h] [rbp+Fh]
  _BYTE v26[24]; // [rsp+A0h] [rbp+1Fh] BYREF

  v23 = 0LL;
  v24 = 0LL;
  if ( (unsigned int)GreExtGetObjectW((HBRUSH)a1, 32LL, (char *)&v23) )
  {
    v5 = v24 * WORD1(v24);
    if ( (unsigned __int16)(v24 * WORD1(v24)) <= 1u )
    {
      v6 = 1;
    }
    else
    {
      v6 = 4;
      if ( v5 > 4u )
      {
        if ( v5 <= 8u )
        {
          v6 = 8;
        }
        else if ( *(_WORD *)(gptiCurrent + 632LL) < 0x400u )
        {
          v6 = 24;
        }
        else if ( v5 <= 0x10u )
        {
          v6 = 16;
        }
        else
        {
          v6 = 24;
          if ( v5 > 0x18u )
            v6 = 32;
        }
      }
    }
    memset(v26, 0, sizeof(v26));
    v7 = DWORD2(v23);
    *(_QWORD *)((char *)&v25 + 4) = *(_QWORD *)((char *)&v23 + 4);
    v8 = v6 * (unsigned __int64)DWORD1(v23);
    LODWORD(v25) = 40;
    WORD6(v25) = 1;
    HIWORD(v25) = v6;
    if ( v8 <= 0xFFFFFFFF )
    {
      v9 = DWORD2(v23) * (unsigned __int64)(((unsigned int)(v8 + 31) >> 3) & 0x1FFFFFFC);
      if ( v9 <= 0xFFFFFFFF )
      {
        v10 = 0;
        if ( v6 <= 8u )
        {
          v10 = 4 * (1 << v6);
        }
        else if ( ((v6 - 16) & 0xFFEF) == 0 )
        {
          v10 = 12;
          *(_DWORD *)v26 = 3;
        }
        v11 = v10 + 40 + v9;
        if ( v11 >= v10 + 40 )
        {
          v12 = Win32AllocPool(v11, 1650684757LL);
          v13 = (struct tagBITMAPINFO *)v12;
          if ( v12 )
          {
            if ( a3 )
              *a3 = v11;
            v14 = *(_OWORD *)v26;
            *(_OWORD *)v12 = v25;
            v15 = *(_QWORD *)&v26[16];
            *(_OWORD *)(v12 + 16) = v14;
            *(_QWORD *)(v12 + 32) = v15;
            CompatibleDC = (HDC)GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
            if ( CompatibleDC )
            {
              v22 = 0LL;
              v21 = 0LL;
              v17 = 0LL;
              PushW32ThreadLock((__int64)v13, &v21, (__int64)Win32FreePool);
              if ( a2 )
              {
                v17 = SelectPalette((__int64)CompatibleDC, a2, 0);
                xxxRealizePalette(CompatibleDC);
              }
              v18 = GreGetDIBitsInternal(
                      CompatibleDC,
                      a1,
                      0,
                      v7,
                      (__int64)v13 + v13->bmiHeader.biSize + v10,
                      v13,
                      0,
                      v9,
                      v13->bmiHeader.biSize + v10) != 0;
              if ( v17 )
              {
                SelectPalette((__int64)CompatibleDC, v17, 0);
                xxxRealizePalette(CompatibleDC);
              }
              GreDeleteDC(CompatibleDC);
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)(ThreadWin32Thread + 16) = v21;
              if ( v18 )
                return v13;
            }
            Win32FreePool(v13);
          }
        }
      }
    }
  }
  return 0LL;
}
