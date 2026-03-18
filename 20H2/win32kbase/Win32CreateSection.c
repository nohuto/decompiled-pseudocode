/*
 * XREFs of Win32CreateSection @ 0x1C0071C38
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001DB80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     HmgCreate @ 0x1C007227C (HmgCreate.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C0139E04 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C014073C (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C01407F8 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     EngAllocSectionMem @ 0x1C014C170 (EngAllocSectionMem.c)
 *     InitCreateSharedSection @ 0x1C029169C (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C02917F4 (InitKernelHandleTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32CreateSection(_QWORD *a1, __int64 a2)
{
  int Section; // ebx

  Section = MmCreateSection(a1, a2, 0LL);
  if ( Section >= 0 )
    ObDeleteCapturedInsertInfo(*a1);
  return (unsigned int)Section;
}
