/*
 * XREFs of ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C01AE40C
 * Callers:
 *     xxxKELocaleProcs @ 0x1C00466F0 (xxxKELocaleProcs.c)
 * Callees:
 *     xxxKeyEventEx @ 0x1C0069770 (xxxKeyEventEx.c)
 */

__int64 __fastcall xxxShiftLock(struct tagKE *a1)
{
  signed __int16 v2; // cx

  v2 = *((_WORD *)a1 + 1);
  if ( v2 >= 0 )
  {
    if ( (unsigned __int8)v2 == 20 )
    {
      if ( (BYTE5(gafAsyncKeyState) & 2) != 0 )
        return 0LL;
    }
    else if ( ((unsigned __int8)v2 == 16 || (unsigned __int16)((unsigned __int8)v2 - 160) <= 1u)
           && (BYTE5(gafAsyncKeyState) & 2) != 0 )
    {
      xxxKeyEventEx(v2, *(unsigned __int8 *)a1, *((_DWORD *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
      xxxKeyEventEx(0x14u, 0x23Au, *((_DWORD *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
      xxxKeyEventEx(0x8014u, 0x23Au, *((_DWORD *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
      return 0LL;
    }
  }
  return 1LL;
}
