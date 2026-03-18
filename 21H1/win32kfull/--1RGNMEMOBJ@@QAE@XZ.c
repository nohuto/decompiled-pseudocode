/*
 * XREFs of ??1RGNMEMOBJ@@QAE@XZ @ 0x9E99E
 * Callers:
 *     _bSpEnableSprites@4 @ 0x9E6C6 (_bSpEnableSprites@4.c)
 *     _EngCreateWnd@20 @ 0x1E6AA4 (_EngCreateWnd@20.c)
 * Callees:
 *     <none>
 */

void __thiscall RGNMEMOBJ::~RGNMEMOBJ(RGNMEMOBJ *this)
{
  if ( *((_DWORD *)this + 1) == 1 )
    RGNOBJ::vDeleteRGNOBJ(this);
}
