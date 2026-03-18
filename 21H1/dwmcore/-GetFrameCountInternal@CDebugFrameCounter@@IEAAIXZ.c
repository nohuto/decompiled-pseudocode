/*
 * XREFs of ?GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ @ 0x1801671C8
 * Callers:
 *     ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x180167178 (-GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ.c)
 *     ?GetFrameRate@CDebugFrameCounter@@QEAAIXZ @ 0x1801671FC (-GetFrameRate@CDebugFrameCounter@@QEAAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDebugFrameCounter::GetFrameCountInternal(CDebugFrameCounter *this)
{
  unsigned int v1; // r8d
  __int64 result; // rax

  if ( !*((_BYTE *)this + 24) )
    return 0LL;
  v1 = *((_DWORD *)this + 4);
  if ( v1 == -1 )
    return 0LL;
  result = *((_DWORD *)this + 5) - v1;
  if ( v1 > *((_DWORD *)this + 5) )
    return (unsigned int)(result + 256);
  return result;
}
