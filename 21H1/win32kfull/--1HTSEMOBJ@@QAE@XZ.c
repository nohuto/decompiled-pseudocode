/*
 * XREFs of ??1HTSEMOBJ@@QAE@XZ @ 0x226EDE
 * Callers:
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __thiscall HTSEMOBJ::~HTSEMOBJ(HTSEMOBJ *this)
{
  HTSEMOBJ::vRelease(this);
}
