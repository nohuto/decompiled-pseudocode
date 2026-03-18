/*
 * XREFs of _DesktopOpenProcedure@4 @ 0xA21B6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall DesktopOpenProcedure(int a1)
{
  _DWORD *v1; // edi
  int v2; // eax

  v1 = *(_DWORD **)(a1 + 8);
  v2 = v1[6];
  if ( (v2 & 8) == 0
    && (*(_DWORD *)(a1 + 16) == 1 || (v2 & 0x10) != 0)
    && (!*(_WORD *)(a1 + 12)
     || (unsigned __int8)PsIsSystemProcess(*(_DWORD *)(a1 + 4))
     || PsGetProcessSessionId(*(_DWORD *)(a1 + 4)) == *v1) )
  {
    return 0;
  }
  else
  {
    return -1073741790;
  }
}
