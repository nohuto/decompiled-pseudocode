/*
 * XREFs of ?xxxLoadSomeStrings@@YGXXZ @ 0xD9A20
 * Callers:
 *     _xxxInitWindowStation@0 @ 0xD69D6 (_xxxInitWindowStation@0.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 * Callees:
 *     _xxxClientLoadStringW@12 @ 0xD9AD4 (_xxxClientLoadStringW@12.c)
 */

void __stdcall xxxLoadSomeStrings()
{
  int v0; // esi
  int v1; // edi
  int v2; // ebx

  v0 = 800;
  v1 = 0;
  v2 = 11;
  do
  {
    *(_DWORD *)(v1 + _gpsi + 568) = v0;
    *(_DWORD *)(v1 + _gpsi + 564) = v0 - 799;
    xxxClientLoadStringW((struct _CALLBACKSTATUS *)0xF);
    v1 += 40;
    ++v0;
    --v2;
  }
  while ( v2 );
  xxxClientLoadStringW((struct _CALLBACKSTATUS *)0xF);
  xxxClientLoadStringW((struct _CALLBACKSTATUS *)0xF);
  xxxClientLoadStringW((struct _CALLBACKSTATUS *)0x14);
  xxxClientLoadStringW((struct _CALLBACKSTATUS *)0x14);
  xxxClientLoadStringW((struct _CALLBACKSTATUS *)0xF);
  xxxClientLoadStringW((struct _CALLBACKSTATUS *)0x14);
}
