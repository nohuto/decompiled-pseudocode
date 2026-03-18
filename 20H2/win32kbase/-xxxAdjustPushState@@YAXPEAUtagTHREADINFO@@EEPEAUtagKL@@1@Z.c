/*
 * XREFs of ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C01A596C
 * Callers:
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x1C01A5B38 (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 * Callees:
 *     xxxKeyEventEx @ 0x1C002CAE0 (xxxKeyEventEx.c)
 *     InternalMapVirtualKeyEx @ 0x1C004F9B0 (InternalMapVirtualKeyEx.c)
 */

void __fastcall xxxAdjustPushState(
        struct tagTHREADINFO *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        struct tagKL *a4,
        struct tagKL *a5)
{
  unsigned __int64 v5; // rdi
  unsigned int v7; // esi
  unsigned __int64 v9; // rdx
  int v10; // r8d
  unsigned int v11; // ebp
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // eax

  v5 = a3;
  v7 = a2;
  if ( a2 )
  {
    v9 = (unsigned __int64)a2 >> 2;
    v10 = 1 << (2 * (v7 & 3));
    if ( ((unsigned __int8)v10 & gafRawKeyState[v9]) != 0
      || ((unsigned __int8)v10 & *((_BYTE *)&gafAsyncKeyState + v9)) != 0
      || (*(_BYTE *)(*((_QWORD *)a1 + 54) + v9 + 228) & (unsigned __int8)v10) != 0 )
    {
      v11 = InternalMapVirtualKeyEx(v7, 0LL, *(_QWORD *)(*((_QWORD *)a4 + 6) + 32LL));
      v12 = InternalMapVirtualKeyEx(v7, 0LL, *(_QWORD *)(*((_QWORD *)a5 + 6) + 32LL));
      if ( v11 )
      {
        if ( !v12 )
          xxxKeyEventEx(v7 | 0x8000, v11 | 0x200, 0, 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
      }
    }
  }
  if ( (_BYTE)v5 )
  {
    v13 = v5 >> 2;
    v14 = 1 << (2 * (v5 & 3));
    if ( ((unsigned __int8)v14 & gafRawKeyState[v5 >> 2]) != 0
      || ((unsigned __int8)v14 & *((_BYTE *)&gafAsyncKeyState + v13)) != 0
      || (*(_BYTE *)(*((_QWORD *)a1 + 54) + v13 + 228) & (unsigned __int8)v14) != 0 )
    {
      v15 = InternalMapVirtualKeyEx(v5, 0LL, *(_QWORD *)(*((_QWORD *)a4 + 6) + 32LL));
      v16 = InternalMapVirtualKeyEx(v5, 0LL, *(_QWORD *)(*((_QWORD *)a5 + 6) + 32LL));
      if ( v15 )
      {
        if ( !v16 )
          xxxKeyEventEx(v5 | 0x8000, v15 | 0x200, 0, 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
      }
    }
  }
}
