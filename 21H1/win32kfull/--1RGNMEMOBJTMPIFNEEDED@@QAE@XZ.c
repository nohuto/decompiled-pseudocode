/*
 * XREFs of ??1RGNMEMOBJTMPIFNEEDED@@QAE@XZ @ 0x1E7DCF
 * Callers:
 *     _EngFillPath@28 @ 0x1E7DFE (_EngFillPath@28.c)
 *     _EngStrokeAndFillPath@40 @ 0x1E8174 (_EngStrokeAndFillPath@40.c)
 * Callees:
 *     <none>
 */

void __thiscall RGNMEMOBJTMPIFNEEDED::~RGNMEMOBJTMPIFNEEDED(RGNMEMOBJTMPIFNEEDED *this)
{
  if ( *((_DWORD *)this + 2) )
  {
    RGNMEMOBJ::vPopThreadGuardedObject(this);
    RGNOBJ::vDeleteRGNOBJ(this);
  }
  if ( *((_DWORD *)this + 1) == 1 )
    RGNOBJ::vDeleteRGNOBJ(this);
}
