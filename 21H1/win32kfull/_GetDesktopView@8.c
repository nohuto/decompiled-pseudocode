/*
 * XREFs of _GetDesktopView@8 @ 0x6FBFA
 * Callers:
 *     _zzzSetDesktop@12 @ 0x6EDEC (_zzzSetDesktop@12.c)
 *     _MapDesktop@4 @ 0x6FA98 (_MapDesktop@4.c)
 *     ?FreeView@@YGXPAU_EPROCESS@@PAUtagDESKTOP@@@Z @ 0x8237C (-FreeView@@YGXPAU_EPROCESS@@PAUtagDESKTOP@@@Z.c)
 *     _NtUserPostThreadMessage@16 @ 0x82578 (_NtUserPostThreadMessage@16.c)
 *     __MapDesktopObject@4 @ 0xA6EA0 (__MapDesktopObject@4.c)
 *     _UserCommitDesktopMemory@12 @ 0xAAE84 (_UserCommitDesktopMemory@12.c)
 *     _IsHotKey@8 @ 0xB1CD0 (_IsHotKey@8.c)
 *     _NtUserDwmValidateWindow@8 @ 0xC8888 (_NtUserDwmValidateWindow@8.c)
 * Callees:
 *     <none>
 */

_DWORD *__stdcall GetDesktopView(int a1, int a2)
{
  int DLT; // eax
  _DWORD *result; // eax

  DLT = DLT_DESKTOP::getDLT();
  GetDomainLockRef(DLT);
  for ( result = *(_DWORD **)(a1 + 384); result; result = (_DWORD *)*result )
  {
    if ( result[1] == a2 )
      break;
  }
  return result;
}
