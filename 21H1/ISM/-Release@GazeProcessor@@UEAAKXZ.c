/*
 * XREFs of ?Release@GazeProcessor@@UEAAKXZ @ 0x1801892B0
 * Callers:
 *     ?Release@GazeProcessor@@W7EAAKXZ @ 0x18004D670 (-Release@GazeProcessor@@W7EAAKXZ.c)
 *     ?Release@GazeProcessor@@WBA@EAAKXZ @ 0x18004D680 (-Release@GazeProcessor@@WBA@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WBI@EAAKXZ @ 0x18004D690 (-Release@GazeProcessor@@WBI@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WCA@EAAKXZ @ 0x18004D6A0 (-Release@GazeProcessor@@WCA@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WCI@EAAKXZ @ 0x18004D6B0 (-Release@GazeProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::Release(GazeProcessor *this)
{
  return RefCountedObject::Release((GazeProcessor *)((char *)this + 40));
}
