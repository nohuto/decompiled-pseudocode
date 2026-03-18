/*
 * XREFs of ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C000BEE8
 * Callers:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C000AEF0 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C000BB5C (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C000BD50 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00359EC (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@AEAU_MousePac.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C000C308 (--0CLockedInputSpace@@QEAA@XZ.c)
 */

struct tagRECT *__fastcall InputConfig::Mouse::GetUnionRect(struct tagRECT *__return_ptr retstr)
{
  struct _ERESOURCE *v2; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-18h] BYREF
  struct _ERESOURCE **v5; // [rsp+28h] [rbp-10h]

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v4);
  v2 = *v5;
  *retstr = *(struct tagRECT *)(*((_QWORD *)gpInputConfig + 3) + 24LL);
  ExReleaseResourceLite(v2);
  KeLeaveCriticalRegion();
  return retstr;
}
