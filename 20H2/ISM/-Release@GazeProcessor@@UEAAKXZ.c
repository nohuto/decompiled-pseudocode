/*
 * XREFs of ?Release@GazeProcessor@@UEAAKXZ @ 0x180188D60
 * Callers:
 *     ?Release@GazeProcessor@@W7EAAKXZ @ 0x18004D030 (-Release@GazeProcessor@@W7EAAKXZ.c)
 *     ?Release@GazeProcessor@@WBA@EAAKXZ @ 0x18004D040 (-Release@GazeProcessor@@WBA@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WBI@EAAKXZ @ 0x18004D050 (-Release@GazeProcessor@@WBI@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WCA@EAAKXZ @ 0x18004D060 (-Release@GazeProcessor@@WCA@EAAKXZ.c)
 *     ?Release@GazeProcessor@@WCI@EAAKXZ @ 0x18004D070 (-Release@GazeProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GazeProcessor::Release(GazeProcessor *this)
{
  return RefCountedObject::Release((GazeProcessor *)((char *)this + 40));
}
