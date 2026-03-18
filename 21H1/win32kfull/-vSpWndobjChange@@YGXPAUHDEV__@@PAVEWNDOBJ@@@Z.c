/*
 * XREFs of ?vSpWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z @ 0x1E3129
 * Callers:
 *     ?vForceClientRgnUpdate@@YGXXZ @ 0x1E6558 (-vForceClientRgnUpdate@@YGXXZ.c)
 *     _GreClientRgnDone@4 @ 0x1E6ED8 (_GreClientRgnDone@4.c)
 *     _GreDeleteWnd@4 @ 0x1E6F47 (_GreDeleteWnd@4.c)
 * Callees:
 *     ?vSpDeviceWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z @ 0x1E14C8 (-vSpDeviceWndobjChange@@YGXPAUHDEV__@@PAVEWNDOBJ@@@Z.c)
 */

void __fastcall vSpWndobjChange(int a1, struct EWNDOBJ *a2)
{
  int v4; // edi
  unsigned int v5; // esi
  char v6[4]; // [esp+10h] [ebp-8h] BYREF
  int v7; // [esp+14h] [ebp-4h] BYREF

  v7 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v6, (struct PDEVOBJ *)&v7);
  v4 = v7;
  if ( *(_DWORD *)(v7 + 104) )
  {
    v5 = 0;
    do
      vSpDeviceWndobjChange(*(_DWORD *)(*(_DWORD *)(v4 + 108) + 4 * v5++), a2);
    while ( v5 < *(_DWORD *)(v4 + 104) );
  }
  else
  {
    vSpDeviceWndobjChange(a1, a2);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v6);
}
