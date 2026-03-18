/*
 * XREFs of ??1?$unique_ptr@VCDirectFlipInfo@@U?$default_delete@VCDirectFlipInfo@@@std@@@std@@QEAA@XZ @ 0x1801DEE58
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x1800BC2AC (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 * Callees:
 *     ??_GCDirectFlipInfo@@QEAAPEAXI@Z @ 0x1801B7D30 (--_GCDirectFlipInfo@@QEAAPEAXI@Z.c)
 */

CDirectFlipInfo *__fastcall std::unique_ptr<CDirectFlipInfo>::~unique_ptr<CDirectFlipInfo>(CDirectFlipInfo **a1)
{
  CDirectFlipInfo *v1; // rcx
  CDirectFlipInfo *result; // rax

  v1 = *a1;
  if ( v1 )
    return CDirectFlipInfo::`scalar deleting destructor'(v1);
  return result;
}
