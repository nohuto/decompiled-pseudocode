/*
 * XREFs of ?PanDitherColor@@YGKPAUDHPDEV__@@KKPAK@Z @ 0x1F5A94
 * Callers:
 *     <none>
 * Callees:
 *     _EngDitherColor@16 @ 0x1E7B57 (_EngDitherColor@16.c)
 */

ULONG __stdcall PanDitherColor(struct DHPDEV__ *a1, ULONG iMode, ULONG rgb, ULONG *pul)
{
  HSEMAPHORE v4; // esi
  ULONG v5; // eax
  ULONG v6; // edi

  v4 = (HSEMAPHORE)*((_DWORD *)a1 + 19);
  EngAcquireSemaphore(v4);
  if ( *((_DWORD *)a1 + 9) < 3u )
    v5 = (*((int (__stdcall **)(_DWORD, ULONG, ULONG, ULONG *))a1 + 118))(*((_DWORD *)a1 + 8), iMode, rgb, pul);
  else
    v5 = EngDitherColor(*((HDEV *)a1 + 11), iMode, rgb, pul);
  v6 = v5;
  if ( v4 )
    EngReleaseSemaphore(v4);
  return v6;
}
