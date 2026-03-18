/*
 * XREFs of ?GetPrimaryRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C01B0140
 * Callers:
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00101C8 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C0012654 (--0CLockedInputSpace@@QEAA@XZ.c)
 */

struct tagRECT *__fastcall InputConfig::Mouse::GetPrimaryRect(struct tagRECT *__return_ptr retstr)
{
  struct _ERESOURCE *v2; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-18h] BYREF
  struct _ERESOURCE **v5; // [rsp+28h] [rbp-10h]

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v4);
  v2 = *v5;
  *retstr = *(struct tagRECT *)(*((_QWORD *)gpInputConfig + 3) + 720LL);
  ExReleaseResourceLite(v2);
  KeLeaveCriticalRegion();
  return retstr;
}
