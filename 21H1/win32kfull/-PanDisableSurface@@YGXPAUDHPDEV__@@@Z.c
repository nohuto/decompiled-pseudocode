/*
 * XREFs of ?PanDisableSurface@@YGXPAUDHPDEV__@@@Z @ 0x1F5A2E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PanDisableSurface(struct DHPDEV__ *a1)
{
  struct DHPDEV__ *v1; // ebx
  HSURF hsurf; // esi
  SURFOBJ *v3; // [esp-4h] [ebp-14h]
  int v4; // [esp+8h] [ebp-8h] BYREF
  int v5; // [esp+Ch] [ebp-4h] BYREF

  v1 = a1;
  v5 = *((_DWORD *)a1 + 15);
  a1 = (struct DHPDEV__ *)*((_DWORD *)a1 + 16);
  v4 = *((_DWORD *)v1 + 17);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&a1);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v4);
  v3 = (SURFOBJ *)*((_DWORD *)v1 + 13);
  hsurf = v3->hsurf;
  EngUnlockSurface(v3);
  EngDeleteSurface(hsurf);
  EngDeleteSurface(*((HSURF *)v1 + 12));
  EngUnlockSurface(*((SURFOBJ **)v1 + 14));
  (*((void (__stdcall **)(_DWORD))v1 + 109))(*((_DWORD *)v1 + 8));
}
