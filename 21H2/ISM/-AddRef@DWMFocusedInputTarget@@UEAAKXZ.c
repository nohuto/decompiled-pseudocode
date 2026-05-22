/*
 * XREFs of ?AddRef@DWMFocusedInputTarget@@UEAAKXZ @ 0x18001DC10
 * Callers:
 *     ?AddRef@GazeProcessor@@W7EAAKXZ @ 0x18004D0A0 (-AddRef@GazeProcessor@@W7EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@WBA@EAAKXZ @ 0x18004D0B0 (-AddRef@GazeProcessor@@WBA@EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@WBI@EAAKXZ @ 0x18004D0C0 (-AddRef@GazeProcessor@@WBI@EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@WCA@EAAKXZ @ 0x18004D0D0 (-AddRef@GazeProcessor@@WCA@EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@WCI@EAAKXZ @ 0x18004D0E0 (-AddRef@GazeProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::AddRef(DWMFocusedInputTarget *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 12);
}
