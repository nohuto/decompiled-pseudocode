/*
 * XREFs of ?PenHotkeyCallback@@YGXIJ@Z @ 0xF04C2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PenHotkeyCallback(unsigned int a1, int a2)
{
  int v2; // [esp+0h] [ebp-8h] BYREF
  int v3; // [esp+4h] [ebp-4h]

  v2 = 0;
  v3 = 0;
  if ( a1 != 30 )
  {
    switch ( a1 )
    {
      case 0x1Fu:
        v3 = 1;
        break;
      case 0x20u:
        v3 = 2;
        break;
      case 0x21u:
        v2 = 1;
        v3 = 1;
        break;
      case 0x22u:
        v2 = 1;
        v3 = 0;
        break;
      default:
        return;
    }
  }
  SendMessageTo(17, &v2, 8);
}
