/*
 * XREFs of ?IsAnyMessageNonDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C019AB4C
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01A0280 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::IsAnyMessageNonDelegated(CPointerInfoNode *this)
{
  __int64 result; // rax
  int *v2; // rcx
  unsigned int v3; // edx
  int v4; // eax
  int v5; // eax
  int v6; // eax

  result = CPointerInfoNode::IsValid(this);
  v3 = 0;
  if ( (_DWORD)result )
  {
    v4 = *v2;
    if ( (*v2 & 0x100000) == 0
      || (v4 & 0x400000) != 0
      || (v4 & 0x800000) != 0 && ((v4 & 0x1000000) == 0 || (v4 & 0x4000000) != 0) )
    {
      return 1;
    }
    if ( (v4 & 0x8000000) != 0 && ((v4 & 0x10000000) == 0 || (v4 & 0x40000000) != 0) )
      return 1;
    if ( v4 < 0 )
    {
      v5 = v2[1];
      if ( (v5 & 1) == 0 || (v5 & 4) != 0 )
        return 1;
    }
    v6 = v2[1];
    if ( (v6 & 8) != 0 && ((v6 & 0x10) == 0 || (v6 & 0x40) != 0) )
      return 1;
    return v3;
  }
  return result;
}
