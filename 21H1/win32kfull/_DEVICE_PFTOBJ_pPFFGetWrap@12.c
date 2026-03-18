/*
 * XREFs of _DEVICE_PFTOBJ_pPFFGetWrap@12 @ 0x1D1019
 * Callers:
 *     <none>
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QAEPAVPFF@@PAUHDEV__@@PAPAPAV2@@Z @ 0x88C66 (-pPFFGet@DEVICE_PFTOBJ@@QAEPAVPFF@@PAUHDEV__@@PAPAPAV2@@Z.c)
 */

struct PFF *__stdcall DEVICE_PFTOBJ_pPFFGetWrap(DEVICE_PFTOBJ *a1, HDEV a2, struct PFF ***a3)
{
  return DEVICE_PFTOBJ::pPFFGet(a1, a2, a3);
}
