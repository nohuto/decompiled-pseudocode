/*
 * XREFs of ?xxxBMPtoDIB@@YGPAUtagBITMAPINFOHEADER@@PAUHBITMAP__@@PAUHPALETTE__@@PAK@Z @ 0x182097
 * Callers:
 *     ?xxxBMPtoDIBV5@@YGPAUBITMAPV5HEADER@@PAUHBITMAP__@@PAUHPALETTE__@@@Z @ 0x1822DF (-xxxBMPtoDIBV5@@YGPAUBITMAPV5HEADER@@PAUHBITMAP__@@PAUHPALETTE__@@@Z.c)
 *     ?xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x182778 (-xxxGetDummyDib@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _GreGetDIBitsInternal@36 @ 0x4B3C0 (_GreGetDIBitsInternal@36.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     __SelectPalette@12 @ 0x9AAF6 (__SelectPalette@12.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     _xxxRealizePalette@4 @ 0xBF854 (_xxxRealizePalette@4.c)
 */

struct tagBITMAPINFOHEADER *__userpurge xxxBMPtoDIB@<eax>(
        int a1@<edx>,
        struct XEPALOBJ *a2@<ecx>,
        HBITMAP a3,
        HPALETTE a4,
        unsigned int *a5)
{
  unsigned __int16 v5; // cx
  __int16 v6; // ax
  unsigned __int16 v7; // bx
  int v8; // eax
  unsigned int v9; // esi
  _DWORD *v10; // ebx
  HDC CompatibleDC; // esi
  BOOL v12; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  ULONG *v16; // [esp+0h] [ebp-7Ch]
  ULONG *v17; // [esp+0h] [ebp-7Ch]
  unsigned int v18; // [esp+0h] [ebp-7Ch]
  unsigned int *v19; // [esp+4h] [ebp-78h]
  _DWORD v20[10]; // [esp+10h] [ebp-6Ch] BYREF
  _DWORD v21[6]; // [esp+38h] [ebp-44h] BYREF
  _DWORD v22[3]; // [esp+50h] [ebp-2Ch] BYREF
  struct XEPALOBJ *v23; // [esp+5Ch] [ebp-20h]
  int v24; // [esp+60h] [ebp-1Ch]
  int v25; // [esp+64h] [ebp-18h]
  HBITMAP v26; // [esp+68h] [ebp-14h]
  unsigned int v27; // [esp+6Ch] [ebp-10h] BYREF
  struct tagBITMAPINFO *v28; // [esp+70h] [ebp-Ch]
  int v29; // [esp+74h] [ebp-8h]
  HBITMAP v30; // [esp+84h] [ebp+8h]

  v24 = a1;
  v23 = a2;
  memset(v21, 0, sizeof(v21));
  v29 = 0;
  v28 = 0;
  v27 = 0;
  if ( !GreExtGetObjectW(a2, 24, v21) )
    return 0;
  v5 = LOWORD(v21[4]) * HIWORD(v21[4]);
  v6 = 1;
  if ( (unsigned __int16)(LOWORD(v21[4]) * HIWORD(v21[4])) <= 1u )
    goto LABEL_10;
  v7 = 4;
  if ( v5 > 4u )
  {
    if ( v5 <= 8u )
    {
      v7 = 8;
      goto LABEL_11;
    }
    if ( *(_WORD *)(_gptiCurrent + 340) < 0x400u )
    {
      v6 = 24;
    }
    else
    {
      v6 = 16;
      if ( v5 > 0x10u )
      {
        v7 = v5 > 0x18u ? 32 : 24;
        goto LABEL_11;
      }
    }
LABEL_10:
    v7 = v6;
  }
LABEL_11:
  v26 = (HBITMAP)v21[2];
  v20[2] = v21[2];
  LOWORD(v20[3]) = 1;
  v25 = v7;
  memset(&v20[4], 0, 24);
  v20[0] = 40;
  v20[1] = v21[1];
  HIWORD(v20[3]) = v7;
  if ( ULongLongToULong(v21[1] * (unsigned __int64)v7, v16) < 0
    || ULongLongToULong((unsigned int)v26 * (unsigned __int64)(((unsigned int)(v29 + 31) >> 3) & 0x1FFFFFFC), v17) < 0 )
  {
    return 0;
  }
  v8 = 0;
  v29 = 0;
  if ( v7 <= 8u )
  {
    v8 = 4 * (1 << v25);
LABEL_18:
    v29 = v8;
    goto LABEL_19;
  }
  if ( v7 == 16 || v7 == 32 )
  {
    v8 = 12;
    v20[4] = 3;
    goto LABEL_18;
  }
LABEL_19:
  if ( (ULongAdd((int)v28, v8 + 40, (int *)&v27, v18, v19) & 0x80000000) == 0 )
  {
    v9 = v27;
    v10 = (_DWORD *)Win32AllocPool(v27, 1650684757);
    if ( v10 )
    {
      if ( a3 )
        *(_DWORD *)a3 = v9;
      qmemcpy(v10, v20, 0x28u);
      CompatibleDC = (HDC)GreCreateCompatibleDC(*(_DWORD *)(_gpDispInfo + 28));
      if ( CompatibleDC )
      {
        v30 = 0;
        memset(v22, 0, sizeof(v22));
        PushW32ThreadLock((int)v10, v22, (int)Win32FreePool);
        if ( v24 )
        {
          v30 = (HBITMAP)_SelectPalette((int)CompatibleDC, v24, 0);
          xxxRealizePalette(CompatibleDC);
        }
        v12 = GreGetDIBitsInternal(CompatibleDC, v23, 0, v26, (int)v10 + v29 + *v10, v10, 0, v28, v29 + *v10) != 0;
        if ( v30 )
        {
          _SelectPalette((int)CompatibleDC, (int)v30, 0);
          xxxRealizePalette(CompatibleDC);
        }
        GreDeleteDC(CompatibleDC);
        CurrentThread = KeGetCurrentThread();
        ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
        *(_DWORD *)(ThreadWin32Thread + 8) = v22[0];
        if ( v12 )
          return (struct tagBITMAPINFOHEADER *)v10;
      }
      Win32FreePool(v10);
    }
  }
  return 0;
}
