/*
 * XREFs of ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800C2AA0
 * Callers:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800A3FD4 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800C2A80 (-Initialize@CVisualTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1801AF670 (-Initialize@CDesktopTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTreeData::Initialize(CTreeData *this, struct CVisualTree *a2, struct CVisual *a3)
{
  __int64 v4; // rcx

  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_WORD *)this + 9) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_BYTE *)this + 276) = 0;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64, struct CVisualTree *))(*(_QWORD *)v4 + 8LL))(v4, a2);
  (*(void (__fastcall **)(CTreeData *, struct CVisualTree *))(*(_QWORD *)this + 32LL))(this, a2);
}
