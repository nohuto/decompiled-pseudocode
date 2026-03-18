/*
 * XREFs of ?TrapAppContainerRendering@@YG_NAAVXDCOBJ@@AAPAUHSURF__@@1PAK@Z @ 0xBDAFA
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0xBD6B8 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@H@Z.c)
 * Callees:
 *     _TrapAppContainerRenderingWrap@16 @ 0x5A26C (_TrapAppContainerRenderingWrap@16.c)
 */

bool __userpurge TrapAppContainerRendering@<al>(
        int a1@<edx>,
        int a2@<ecx>,
        struct XDCOBJ *a3,
        HSURF *a4,
        HSURF *a5,
        unsigned int *a6)
{
  return TrapAppContainerRenderingWrap(a2, a1, a3, a4) == 1;
}
