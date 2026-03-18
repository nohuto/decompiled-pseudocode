/*
 * XREFs of ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00B9B44
 * Callers:
 *     bDynamicModeChange @ 0x1C0019194 (bDynamicModeChange.c)
 * Callees:
 *     DrvDxgkLogCodePointPacket @ 0x1C00C9780 (DrvDxgkLogCodePointPacket.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0143A94 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0143AD0 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 */

__int64 __fastcall bDynamicMatchEnoughForModeChange(_DWORD *a1, _DWORD *a2)
{
  int v3; // edx
  unsigned int v5; // r12d
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  _QWORD *v12; // rbx
  __int64 v13; // rdx
  int v14; // esi
  unsigned int v15; // edi
  unsigned int v16; // eax
  _DWORD *v17; // [rsp+50h] [rbp+30h] BYREF
  _DWORD *v18; // [rsp+58h] [rbp+38h] BYREF

  v17 = a2;
  v3 = 1;
  v18 = a1;
  if ( a1[527] == 1 || a2[527] == 1 )
    v3 = 0;
  v5 = 0;
  if ( ((a2[456] ^ a1[456]) & 0x840000) == 0 )
    v5 = v3;
  if ( gDrvDpiAdjustedForLoggedOnUser )
  {
    v7 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v17);
    if ( v7 != PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v18)
      || (v11 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v17), v11 != PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v18)) )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8, v10);
      v12[3] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v18);
      v12[4] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v18);
      v12[5] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v17);
      v12[6] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v17);
      WdLogEvent5_WdError(v12, v13);
      LODWORD(v12) = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v17);
      v14 = (unsigned __int16)PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v18);
      v15 = (_DWORD)v12 + (PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v17) << 16);
      v16 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v18);
      DrvDxgkLogCodePointPacket(95LL, v14 + (v16 << 16), v15, 0LL);
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
