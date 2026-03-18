/*
 * XREFs of ?vspRemoveStateReferencesForSprite@@YGXPAVDWMSPRITE@@@Z @ 0xA3FEA
 * Callers:
 *     ?GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z @ 0x1BBC6 (-GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z @ 0xA3F2E (-vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall vspRemoveStateReferencesForSprite(_DWORD *this)
{
  int v2; // edx
  _DWORD *v3; // ecx
  _DWORD Buffer[2]; // [esp+4h] [ebp-8h] BYREF

  if ( this[6] )
  {
    Buffer[0] = this[6];
    Buffer[1] = *this;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)g_pDwmState, Buffer);
  }
  v2 = this[4];
  if ( *(_DWORD **)(v2 + 4) != this + 4 || (v3 = (_DWORD *)this[5], (_DWORD *)*v3 != this + 4) )
    __fastfail(3u);
  *v3 = v2;
  *(_DWORD *)(v2 + 4) = v3;
}
