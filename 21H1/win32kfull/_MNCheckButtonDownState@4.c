/*
 * XREFs of _MNCheckButtonDownState@4 @ 0x1975B5
 * Callers:
 *     _xxxCallHandleMenuMessages@20 @ 0x1978D8 (_xxxCallHandleMenuMessages@20.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall MNCheckButtonDownState(_DWORD *this)
{
  int v2; // edx
  unsigned int result; // eax
  int v4; // edx

  v2 = _GetKeyState(this[13]) & 0x8000;
  result = this[1] & 0xFFFFFFF7;
  v4 = result | (v2 != 0 ? 8 : 0);
  this[1] = v4;
  if ( (v4 & 8) == 0 )
  {
    this[1] = v4 & 0xFFFFDF7F;
    return UnlockMFMWFPWindow(this + 11);
  }
  return result;
}
