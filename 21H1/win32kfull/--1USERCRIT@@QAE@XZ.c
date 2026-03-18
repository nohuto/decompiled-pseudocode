/*
 * XREFs of ??1USERCRIT@@QAE@XZ @ 0x1D6FFF
 * Callers:
 *     _NtGdiSetPixelFormat@8 @ 0x222992 (_NtGdiSetPixelFormat@8.c)
 * Callees:
 *     <none>
 */

void __thiscall USERCRIT::~USERCRIT(USERCRIT *this)
{
  if ( !*(_DWORD *)this )
    UserLeaveUserCritSec();
}
