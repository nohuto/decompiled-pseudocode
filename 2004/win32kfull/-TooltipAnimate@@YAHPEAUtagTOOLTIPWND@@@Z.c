/*
 * XREFs of ?TooltipAnimate@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C024359C
 * Callers:
 *     ?xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z @ 0x1C0243D10 (-xxxTooltipHandleTimer@@YAHPEAUtagTOOLTIPWND@@I@Z.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C0081610 (NtGdiBitBltInternal.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00BACF8 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 */

__int64 __fastcall TooltipAnimate(struct tagTOOLTIPWND *a1)
{
  unsigned int v1; // ebx
  HDC TooltipDC; // rbp
  _DWORD *v5; // rcx
  int v6; // r9d
  int v7; // esi
  int v8; // r11d
  int v9; // r10d
  int v10; // r8d

  v1 = 0;
  if ( !*((_QWORD *)a1 + 6) )
    return 1LL;
  TooltipDC = GetTooltipDC(a1, 0LL);
  v5 = *(_DWORD **)(*(_QWORD *)a1 + 40LL);
  v6 = v5[24] - v5[22];
  v7 = v5[25] - v5[23];
  v8 = (int)(v7
           * (((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - *((_DWORD *)a1 + 10))
           + 67)
     / 135;
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *((_DWORD *)a1 + 10) > 0x87
    || v8 == v7 )
  {
    NtGdiBitBltInternal(TooltipDC, 0, 0, v6, v7, *((HDC *)a1 + 2), 0, 0, -2134114272, 0, 0);
    v1 = 1;
  }
  else if ( *((_DWORD *)a1 + 11) != v8 )
  {
    v9 = *((_DWORD *)a1 + 8) & 1;
    *((_DWORD *)a1 + 11) = v8;
    v10 = 0;
    if ( !v9 )
      v10 = v7;
    NtGdiBitBltInternal(
      TooltipDC,
      0,
      v8 * (v9 - 1) + v10,
      v6,
      v8,
      *((HDC *)a1 + 2),
      0,
      v9 != 0 ? v7 - v8 : 0,
      -2134114272,
      0,
      0);
  }
  _ReleaseDC(TooltipDC);
  return v1;
}
