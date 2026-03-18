/*
 * XREFs of Win32CreateSection @ 0x1C000A968
 * Callers:
 *     HmgCreate @ 0x1C00087BC (HmgCreate.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00822A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C013C154 (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C0142C1C (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C0142CD8 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     EngAllocSectionMem @ 0x1C014E5C0 (EngAllocSectionMem.c)
 *     InitCreateSharedSection @ 0x1C0293218 (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C0293370 (InitKernelHandleTable.c)
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
