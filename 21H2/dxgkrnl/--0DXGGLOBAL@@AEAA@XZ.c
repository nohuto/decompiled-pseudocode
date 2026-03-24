/*
 * XREFs of ??0DXGGLOBAL@@AEAA@XZ @ 0x1C0195384
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C01925BC (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0012E00 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019FF4 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ??0DXGSPINLOCK@@QEAA@XZ @ 0x1C0036FC8 (--0DXGSPINLOCK@@QEAA@XZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C016E9EC (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ??0REMOTE_VSYNC@@QEAA@XZ @ 0x1C0195A2C (--0REMOTE_VSYNC@@QEAA@XZ.c)
 *     ??0DXGBLACKBOX@@QEAA@XZ @ 0x1C0195A7C (--0DXGBLACKBOX@@QEAA@XZ.c)
 */

DXGGLOBAL *__fastcall DXGGLOBAL::DXGGLOBAL(DXGGLOBAL *this)
{
  int v2; // r8d
  int v3; // edx
  int v4; // r8d
  int v5; // edx
  BOOLEAN v6; // r8
  int v7; // edx
  __int64 v8; // rcx
  DXGGLOBAL *result; // rax

  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 208) = 0;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 248, 9, 1);
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 320, 10, 49);
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 46) = (char *)this + 360;
  *((_QWORD *)this + 45) = (char *)this + 360;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 1;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = 51;
  *((_DWORD *)this + 106) = -1;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_DWORD *)this + 112) = 0;
  *((_DWORD *)this + 113) = 13;
  *((_DWORD *)this + 114) = -1;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 464, 32, 1);
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 64) = (char *)this + 504;
  *((_QWORD *)this + 63) = (char *)this + 504;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 528, 35, v2);
  *((_QWORD *)this + 72) = (char *)this + 568;
  *((_QWORD *)this + 71) = (char *)this + 568;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 584, 11, 34);
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 624, v3, 1);
  *((_QWORD *)this + 84) = (char *)this + 664;
  *((_QWORD *)this + 83) = (char *)this + 664;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 680, 12, v4);
  *((_QWORD *)this + 92) = 0LL;
  *((_DWORD *)this + 186) = 0;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_DWORD *)this + 196) = 0;
  *((_DWORD *)this + 197) = 1;
  *((_DWORD *)this + 198) = -1;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *((_QWORD *)this + 105) = 0LL;
  REMOTE_VSYNC::REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 864));
  REMOTE_VSYNC::REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 936));
  *((_QWORD *)this + 126) = 0LL;
  *((_WORD *)this + 616) = 1;
  *((_QWORD *)this + 164) = 0LL;
  *((_QWORD *)this + 165) = 0LL;
  *((_BYTE *)this + 1234) = 0;
  *(_QWORD *)((char *)this + 1236) = 0LL;
  *(_QWORD *)((char *)this + 1244) = 1LL;
  *((_QWORD *)this + 157) = 0LL;
  *((_DWORD *)this + 316) = 0;
  *((_QWORD *)this + 159) = 0LL;
  *((_QWORD *)this + 160) = 0LL;
  *((_QWORD *)this + 161) = 0LL;
  *((_DWORD *)this + 324) = 0;
  *((_DWORD *)this + 325) = 65;
  *((_DWORD *)this + 326) = 1;
  AUTOEXPANDALLOCATION::GetBuffer((DXGGLOBAL *)((char *)this + 1312), 0, 0);
  *((_DWORD *)this + 332) = 0;
  *((_DWORD *)this + 333) = 8;
  *((_QWORD *)this + 167) = 0LL;
  *((_QWORD *)this + 168) = 0LL;
  *((_DWORD *)this + 338) = 0;
  *((_DWORD *)this + 339) = 40;
  *((_DWORD *)this + 340) = 67;
  *((_DWORD *)this + 342) = 0;
  *((_QWORD *)this + 172) = 0LL;
  *((_DWORD *)this + 346) = 0;
  *((_QWORD *)this + 174) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 1432, 70, 53);
  *((_BYTE *)this + 1488) = 0;
  *((_QWORD *)this + 185) = (char *)this + 1472;
  *((_QWORD *)this + 184) = (char *)this + 1472;
  *((_DWORD *)this + 373) = 0;
  *((_QWORD *)this + 187) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 1504, v5, 37);
  *(_QWORD *)((char *)this + 1548) = 0LL;
  *((_QWORD *)this + 203) = 0x200000000LL;
  *(_QWORD *)((char *)this + 1556) = 0LL;
  *((_QWORD *)this + 212) = (char *)this + 1688;
  *((_QWORD *)this + 211) = (char *)this + 1688;
  *((_QWORD *)this + 196) = 0LL;
  *((_QWORD *)this + 197) = 0LL;
  *((_QWORD *)this + 200) = 0LL;
  *((_QWORD *)this + 201) = 0LL;
  *((_QWORD *)this + 202) = 0LL;
  *((_QWORD *)this + 204) = 27LL;
  *((_BYTE *)this + 1640) = 0;
  *((_QWORD *)this + 207) = 0LL;
  *((_QWORD *)this + 208) = 0LL;
  *((_QWORD *)this + 219) = (char *)this + 1744;
  *((_QWORD *)this + 218) = (char *)this + 1744;
  *((_DWORD *)this + 418) = 0;
  *((_DWORD *)this + 419) = 1;
  *((_DWORD *)this + 420) = 74;
  *((_QWORD *)this + 213) = 0LL;
  *((_QWORD *)this + 214) = 0LL;
  *((_QWORD *)this + 215) = 0LL;
  *((_DWORD *)this + 432) = 0;
  *((_DWORD *)this + 433) = -1;
  *((_DWORD *)this + 434) = 1;
  *((_QWORD *)this + 220) = 0LL;
  *((_DWORD *)this + 442) = 0;
  *((_QWORD *)this + 222) = 0LL;
  *((_QWORD *)this + 223) = 0LL;
  *((_DWORD *)this + 488) = 0;
  *((_QWORD *)this + 245) = 0LL;
  *((_QWORD *)this + 246) = 0LL;
  *((_QWORD *)this + 247) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 1984, 78, 1);
  *((_QWORD *)this + 254) = 0LL;
  *((_QWORD *)this + 255) = 0LL;
  *((_QWORD *)this + 258) = (char *)this + 2056;
  *((_QWORD *)this + 257) = (char *)this + 2056;
  *((_QWORD *)this + 265) = DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback;
  *((_DWORD *)this + 512) = 0;
  *((_DWORD *)this + 513) = 1;
  *((_DWORD *)this + 518) = 0;
  *((_QWORD *)this + 266) = (char *)this + 2032;
  *((_QWORD *)this + 263) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 2080), NotificationEvent, v6);
  memset((char *)this + 2136, 0, 0x49C00uLL);
  `vector constructor iterator'(
    (char *)this + 2136,
    4720LL,
    64LL,
    (void (__fastcall *)(char *))DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_::_unnamed_type_BlockerArray_);
  *((_BYTE *)this + 304216) = 0;
  *((_QWORD *)this + 38028) = 0LL;
  *((_QWORD *)this + 38029) = 0LL;
  *((_BYTE *)this + 304240) = 0;
  *((_QWORD *)this + 38031) = 0LL;
  *((_QWORD *)this + 38032) = 0LL;
  *((_WORD *)this + 152132) = 0;
  *((_QWORD *)this + 38034) = 0LL;
  *((_QWORD *)this + 38035) = 0LL;
  *((_WORD *)this + 152144) = 0;
  *(_OWORD *)((char *)this + 304296) = 0LL;
  *((_QWORD *)this + 38039) = 0LL;
  *((_WORD *)this + 152160) = 0;
  *((_BYTE *)this + 304322) = 0;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 304328, -1, 32);
  *((_WORD *)this + 152184) = 0;
  *(_QWORD *)((char *)this + 304372) = 0LL;
  *((_QWORD *)this + 38048) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 304392, v7, 1);
  DXGBLACKBOX::DXGBLACKBOX((DXGGLOBAL *)((char *)this + 304432));
  *(_QWORD *)(v8 + 56) = 0LL;
  *(_WORD *)(v8 + 64) = 0;
  *(_DWORD *)(v8 + 68) = 4000;
  *(_DWORD *)(v8 + 72) = 7000;
  *(_QWORD *)(v8 + 80) = 0LL;
  *(_QWORD *)(v8 + 88) = 0LL;
  *(_QWORD *)(v8 + 96) = 0LL;
  *(_DWORD *)(v8 + 104) = 0;
  *(_DWORD *)(v8 + 108) = 86;
  *(_DWORD *)(v8 + 112) = 1;
  *((_QWORD *)this + 38069) = 0LL;
  *((_DWORD *)this + 76140) = 0;
  *((_BYTE *)this + 304564) = 1;
  *((_QWORD *)this + 38071) = 0LL;
  *((_QWORD *)this + 38072) = 0LL;
  *((_DWORD *)this + 76146) = 0;
  *((_BYTE *)this + 304588) = 0;
  *((_DWORD *)this + 76150) = -1;
  *((_QWORD *)this + 38079) = 0LL;
  *((_QWORD *)this + 38080) = 0LL;
  *((_QWORD *)this + 38074) = 0LL;
  *(_QWORD *)((char *)this + 304604) = 0LL;
  *((_DWORD *)this + 76162) = 0;
  *((_DWORD *)this + 76163) = 1;
  *((_DWORD *)this + 76164) = -1;
  *((_BYTE *)this + 304664) = 0;
  *((_QWORD *)this + 38078) = (char *)this + 304616;
  *((_QWORD *)this + 38077) = (char *)this + 304616;
  DXGSPINLOCK::DXGSPINLOCK((DXGGLOBAL *)((char *)this + 304688));
  *((_QWORD *)this + 38085) = (char *)this + 304672;
  *((_QWORD *)this + 38084) = (char *)this + 304672;
  *((_QWORD *)this + 38094) = (char *)this + 304744;
  *((_QWORD *)this + 38093) = (char *)this + 304744;
  *((_QWORD *)this + 38088) = 0LL;
  *((_QWORD *)this + 38089) = 0LL;
  *((_QWORD *)this + 38090) = 0LL;
  *((_DWORD *)this + 76182) = 0;
  *((_DWORD *)this + 76183) = -1;
  *((_DWORD *)this + 76184) = 1;
  *((_BYTE *)this + 304760) = 0;
  *((_BYTE *)this + 304768) = 0;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 304880, -1, 52);
  *((_OWORD *)this + 76) = 0LL;
  *(_OWORD *)((char *)this + 216) = 0LL;
  *(_OWORD *)((char *)this + 232) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 152);
  *((_QWORD *)this + 199) = (char *)this + 1584;
  *((_QWORD *)this + 198) = (char *)this + 1584;
  result = this;
  *((_OWORD *)this + 120) = 0LL;
  *((_BYTE *)this + 937) = 1;
  *((_OWORD *)this + 121) = 0LL;
  return result;
}
