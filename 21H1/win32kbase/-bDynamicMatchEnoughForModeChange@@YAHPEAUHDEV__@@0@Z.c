/*
 * XREFs of ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C004C084
 * Callers:
 *     bDynamicModeChange @ 0x1C0099854 (bDynamicModeChange.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x1C00C8250 (DrvDxgkLogCodePointPacket.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C014C288 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C014C2C4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall bDynamicMatchEnoughForModeChange(_DWORD *a1, _DWORD *a2)
{
  int v3; // edx
  unsigned int v5; // r12d
  unsigned int v7; // ebx
  unsigned int v8; // ebx
  _QWORD *v9; // rbx
  int v10; // esi
  unsigned int v11; // edi
  unsigned int v12; // eax
  _DWORD *v13; // [rsp+50h] [rbp+30h] BYREF
  _DWORD *v14; // [rsp+58h] [rbp+38h] BYREF

  v13 = a2;
  v3 = 1;
  v14 = a1;
  if ( a1[527] == 1 || a2[527] == 1 )
    v3 = 0;
  v5 = 0;
  if ( ((a2[456] ^ a1[456]) & 0x840000) == 0 )
    v5 = v3;
  if ( gDrvDpiAdjustedForLoggedOnUser )
  {
    v7 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v13);
    if ( v7 != PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v14)
      || (v8 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v13), v8 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v14)) )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdError();
      v9[3] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v14);
      v9[4] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v14);
      v9[5] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v13);
      v9[6] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v13);
      WdLogEvent5_WdError(v9);
      LODWORD(v9) = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v13);
      v10 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v14);
      v11 = (_DWORD)v9 + (PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v13) << 16);
      v12 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v14);
      DrvDxgkLogCodePointPacket(95LL, v10 + (v12 << 16), v11);
    }
  }
  if ( *((_QWORD *)a2 + 362)
    || *((_QWORD *)a2 + 380)
    || *((_QWORD *)a2 + 381)
    || *((_QWORD *)a2 + 387)
    || *((_QWORD *)a2 + 373) )
  {
    v5 = 0;
  }
  if ( *((_QWORD *)a1 + 362)
    || *((_QWORD *)a1 + 380)
    || *((_QWORD *)a1 + 381)
    || *((_QWORD *)a1 + 387)
    || *((_QWORD *)a1 + 373) )
  {
    return 0;
  }
  return v5;
}
