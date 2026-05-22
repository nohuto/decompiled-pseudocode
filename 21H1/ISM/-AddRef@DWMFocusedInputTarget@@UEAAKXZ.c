/*
 * XREFs of ?AddRef@DWMFocusedInputTarget@@UEAAKXZ @ 0x18001DEE0
 * Callers:
 *     ?AddRef@GazeProcessor@@W7EAAKXZ @ 0x18004CAC0 (-AddRef@GazeProcessor@@W7EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@WBA@EAAKXZ @ 0x18004CAD0 (-AddRef@GazeProcessor@@WBA@EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@WBI@EAAKXZ @ 0x18004CAE0 (-AddRef@GazeProcessor@@WBI@EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@WCA@EAAKXZ @ 0x18004CAF0 (-AddRef@GazeProcessor@@WCA@EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@WCI@EAAKXZ @ 0x18004CB00 (-AddRef@GazeProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::AddRef(DWMFocusedInputTarget *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 12);
}
