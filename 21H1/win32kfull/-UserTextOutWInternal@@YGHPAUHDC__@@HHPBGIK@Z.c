/*
 * XREFs of ?UserTextOutWInternal@@YGHPAUHDC__@@HHPBGIK@Z @ 0x1B8170
 * Callers:
 *     <none>
 * Callees:
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 */

int __stdcall UserTextOutWInternal(
        HDC a1,
        ERECTL *a2,
        struct XDCOBJ *a3,
        unsigned __int16 *a4,
        struct tagRECT *a5,
        unsigned int a6)
{
  return GreExtTextOutWInternal(a1, a2, a3, 0, 0, a4, a5, 0, 0, 0);
}
