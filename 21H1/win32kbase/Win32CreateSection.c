/*
 * XREFs of Win32CreateSection @ 0x1C0021038
 * Callers:
 *     HmgCreate @ 0x1C001EE8C (HmgCreate.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C007B980 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C01424A0 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C0148F6C (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C0149028 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     EngAllocSectionMem @ 0x1C0154910 (EngAllocSectionMem.c)
 *     InitCreateSharedSection @ 0x1C029AE90 (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C029AFE8 (InitKernelHandleTable.c)
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
