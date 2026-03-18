/*
 * XREFs of ?xxxWrapSBWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E4280
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C00BBE74 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     xxxSBWndProc @ 0x1C0246EA0 (xxxSBWndProc.c)
 */

__int64 __fastcall xxxWrapSBWndProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // edi
  int v6; // esi

  v5 = a3;
  v6 = a2;
  if ( (unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return xxxSBWndProc(a1, v6, v5, a4);
  else
    return 0LL;
}
