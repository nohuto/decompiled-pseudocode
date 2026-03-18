/*
 * XREFs of ??0DXGGLOBAL@@AEAA@XZ @ 0x1C017DF54
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C017F3C4 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C00114A4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019318 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ??0DXGSPINLOCK@@QEAA@XZ @ 0x1C0035138 (--0DXGSPINLOCK@@QEAA@XZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C015A11C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ??0REMOTE_VSYNC@@QEAA@XZ @ 0x1C017E5E8 (--0REMOTE_VSYNC@@QEAA@XZ.c)
 *     ??0DXGBLACKBOX@@QEAA@XZ @ 0x1C017E638 (--0DXGBLACKBOX@@QEAA@XZ.c)
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
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 136, 9, 1);
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 208, 10, 49);
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 32) = (char *)this + 248;
  *((_QWORD *)this + 31) = (char *)this + 248;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 1;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 51;
  *((_DWORD *)this + 78) = -1;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_DWORD *)this + 84) = 0;
  *((_DWORD *)this + 85) = 13;
  *((_DWORD *)this + 86) = -1;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 352, 32, 1);
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 50) = (char *)this + 392;
  *((_QWORD *)this + 49) = (char *)this + 392;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 416, 35, v2);
  *((_QWORD *)this + 58) = (char *)this + 456;
  *((_QWORD *)this + 57) = (char *)this + 456;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 472, 11, 34);
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 512, v3, 1);
  *((_QWORD *)this + 70) = (char *)this + 552;
  *((_QWORD *)this + 69) = (char *)this + 552;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 568, 12, v4);
  *((_QWORD *)this + 78) = 0LL;
  *((_DWORD *)this + 158) = 0;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_DWORD *)this + 168) = 0;
  *((_DWORD *)this + 169) = 1;
  *((_DWORD *)this + 170) = -1;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  REMOTE_VSYNC::REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 752));
  REMOTE_VSYNC::REMOTE_VSYNC((DXGGLOBAL *)((char *)this + 824));
  *((_QWORD *)this + 112) = 0LL;
  *((_WORD *)this + 560) = 1;
  *((_BYTE *)this + 1122) = 0;
  *((_QWORD *)this + 150) = 0LL;
  *((_QWORD *)this + 151) = 0LL;
  *(_QWORD *)((char *)this + 1124) = 0LL;
  *(_QWORD *)((char *)this + 1132) = 1LL;
  *((_QWORD *)this + 143) = 0LL;
  *((_DWORD *)this + 288) = 0;
  *((_QWORD *)this + 145) = 0LL;
  *((_QWORD *)this + 146) = 0LL;
  *((_QWORD *)this + 147) = 0LL;
  *((_DWORD *)this + 296) = 0;
  *((_DWORD *)this + 297) = 65;
  *((_DWORD *)this + 298) = 1;
  AUTOEXPANDALLOCATION::GetBuffer((DXGGLOBAL *)((char *)this + 1200), 0, 0);
  *((_DWORD *)this + 304) = 0;
  *((_DWORD *)this + 305) = 8;
  *((_QWORD *)this + 153) = 0LL;
  *((_QWORD *)this + 154) = 0LL;
  *((_DWORD *)this + 310) = 0;
  *((_DWORD *)this + 311) = 40;
  *((_DWORD *)this + 312) = 67;
  *((_DWORD *)this + 314) = 0;
  *((_QWORD *)this + 158) = 0LL;
  *((_DWORD *)this + 318) = 0;
  *((_QWORD *)this + 160) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 1320, 70, 53);
  *((_BYTE *)this + 1376) = 0;
  *((_QWORD *)this + 171) = (char *)this + 1360;
  *((_QWORD *)this + 170) = (char *)this + 1360;
  *((_DWORD *)this + 345) = 0;
  *((_QWORD *)this + 173) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 1392, v5, 37);
  *(_QWORD *)((char *)this + 1436) = 0LL;
  *((_QWORD *)this + 189) = 0x200000000LL;
  *(_QWORD *)((char *)this + 1444) = 0LL;
  *((_QWORD *)this + 197) = (char *)this + 1568;
  *((_QWORD *)this + 196) = (char *)this + 1568;
  *((_QWORD *)this + 182) = 0LL;
  *((_QWORD *)this + 183) = 0LL;
  *((_QWORD *)this + 186) = 0LL;
  *((_QWORD *)this + 187) = 0LL;
  *((_QWORD *)this + 188) = 0LL;
  *((_DWORD *)this + 380) = 27;
  *((_QWORD *)this + 192) = 0LL;
  *((_QWORD *)this + 193) = 0LL;
  *((_QWORD *)this + 204) = (char *)this + 1624;
  *((_QWORD *)this + 203) = (char *)this + 1624;
  *((_DWORD *)this + 388) = 0;
  *((_DWORD *)this + 389) = 1;
  *((_DWORD *)this + 390) = 74;
  *((_QWORD *)this + 198) = 0LL;
  *((_QWORD *)this + 199) = 0LL;
  *((_QWORD *)this + 200) = 0LL;
  *((_DWORD *)this + 402) = 0;
  *((_DWORD *)this + 403) = -1;
  *((_DWORD *)this + 404) = 1;
  *((_QWORD *)this + 205) = 0LL;
  *((_DWORD *)this + 412) = 0;
  *((_QWORD *)this + 207) = 0LL;
  *((_QWORD *)this + 208) = 0LL;
  *((_DWORD *)this + 458) = 0;
  *((_QWORD *)this + 230) = 0LL;
  *((_QWORD *)this + 231) = 0LL;
  *((_QWORD *)this + 232) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 1864, 78, 1);
  *((_QWORD *)this + 239) = 0LL;
  *((_QWORD *)this + 240) = 0LL;
  *((_QWORD *)this + 243) = (char *)this + 1936;
  *((_QWORD *)this + 242) = (char *)this + 1936;
  *((_QWORD *)this + 250) = DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback;
  *((_DWORD *)this + 482) = 0;
  *((_DWORD *)this + 483) = 1;
  *((_DWORD *)this + 488) = 0;
  *((_QWORD *)this + 251) = (char *)this + 1912;
  *((_QWORD *)this + 248) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 1960), NotificationEvent, v6);
  memset((char *)this + 2016, 0, 0x49C00uLL);
  `vector constructor iterator'(
    (char *)this + 2016,
    4720LL,
    64LL,
    (void (__fastcall *)(char *))DripsBlockerTrackingHelper::_unnamed_type_BlockerArray_::_unnamed_type_BlockerArray_);
  *((_BYTE *)this + 304096) = 0;
  *((_QWORD *)this + 38013) = 0LL;
  *((_QWORD *)this + 38014) = 0LL;
  *((_BYTE *)this + 304120) = 0;
  *((_QWORD *)this + 38016) = 0LL;
  *((_QWORD *)this + 38017) = 0LL;
  *((_WORD *)this + 152072) = 0;
  *((_QWORD *)this + 38019) = 0LL;
  *((_QWORD *)this + 38020) = 0LL;
  *((_WORD *)this + 152084) = 0;
  *((_OWORD *)this + 19011) = 0LL;
  *((_QWORD *)this + 38024) = 0LL;
  *((_WORD *)this + 152100) = 0;
  *((_BYTE *)this + 304202) = 0;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 304208, -1, 32);
  *((_WORD *)this + 152124) = 0;
  *(_QWORD *)((char *)this + 304252) = 0LL;
  *((_QWORD *)this + 38033) = 0LL;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 304272, v7, 1);
  DXGBLACKBOX::DXGBLACKBOX((DXGGLOBAL *)((char *)this + 304312));
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
  *((_QWORD *)this + 38054) = 0LL;
  *((_DWORD *)this + 76110) = 0;
  *((_BYTE *)this + 304444) = 1;
  *((_QWORD *)this + 38056) = 0LL;
  *((_QWORD *)this + 38057) = 0LL;
  *((_DWORD *)this + 76116) = 0;
  *((_BYTE *)this + 304468) = 0;
  *((_DWORD *)this + 76120) = -1;
  *((_QWORD *)this + 38064) = 0LL;
  *((_QWORD *)this + 38065) = 0LL;
  *((_QWORD *)this + 38059) = 0LL;
  *(_QWORD *)((char *)this + 304484) = 0LL;
  *((_DWORD *)this + 76132) = 0;
  *((_DWORD *)this + 76133) = 1;
  *((_DWORD *)this + 76134) = -1;
  *((_BYTE *)this + 304544) = 0;
  *((_QWORD *)this + 38063) = (char *)this + 304496;
  *((_QWORD *)this + 38062) = (char *)this + 304496;
  DXGSPINLOCK::DXGSPINLOCK((DXGGLOBAL *)((char *)this + 304568));
  *((_QWORD *)this + 38070) = (char *)this + 304552;
  *((_QWORD *)this + 38069) = (char *)this + 304552;
  *((_QWORD *)this + 38079) = (char *)this + 304624;
  *((_QWORD *)this + 38078) = (char *)this + 304624;
  *((_QWORD *)this + 38073) = 0LL;
  *((_QWORD *)this + 38074) = 0LL;
  *((_QWORD *)this + 38075) = 0LL;
  *((_DWORD *)this + 76152) = 0;
  *((_DWORD *)this + 76153) = -1;
  *((_DWORD *)this + 76154) = 1;
  *((_BYTE *)this + 304640) = 0;
  *((_BYTE *)this + 304648) = 0;
  DXGFASTMUTEX::DXGFASTMUTEX((__int64)this + 304752, -1, 52);
  *((_OWORD *)this + 69) = 0LL;
  *(_OWORD *)((char *)this + 104) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 138);
  *((_QWORD *)this + 185) = (char *)this + 1472;
  *((_QWORD *)this + 184) = (char *)this + 1472;
  result = this;
  *(_OWORD *)((char *)this + 1800) = 0LL;
  *((_BYTE *)this + 825) = 1;
  *(_OWORD *)((char *)this + 1816) = 0LL;
  return result;
}
