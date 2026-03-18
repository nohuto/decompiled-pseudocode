/*
 * XREFs of ?ConvertPTPMouseEventToMouseInputData@@YGXPBUtagPTPMOUSEEVENT@@PAU_MOUSE_INPUT_DATA@@@Z @ 0x178604
 * Callers:
 *     _OnPTPMouseOperation@0 @ 0x178BB9 (_OnPTPMouseOperation@0.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertPTPMouseEventToMouseInputData(_DWORD *a1, int a2)
{
  int v2; // eax
  _DWORD v3[6]; // [esp+10h] [ebp-18h] BYREF

  v3[0] = 0x800000;
  memset(&v3[1], 0, 20);
  v2 = a1[3];
  qmemcpy((void *)a2, v3, 0x18u);
  if ( (v2 & 2) != 0 )
  {
    *(_WORD *)(a2 + 4) |= 1u;
  }
  else
  {
    switch ( v2 )
    {
      case 4:
        *(_WORD *)(a2 + 4) |= 2u;
        break;
      case 8:
        *(_WORD *)(a2 + 4) |= 4u;
        break;
      case 16:
        *(_WORD *)(a2 + 4) |= 8u;
        break;
    }
  }
  if ( (v2 & 1) != 0 )
  {
    *(_DWORD *)(a2 + 12) = a1[1];
    *(_DWORD *)(a2 + 16) = a1[2];
  }
}
