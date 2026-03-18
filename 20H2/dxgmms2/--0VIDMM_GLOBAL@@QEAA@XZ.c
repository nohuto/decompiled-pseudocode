/*
 * XREFs of ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C0095160
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C0093BD4 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     memset @ 0x1C00185C0 (memset.c)
 *     ??0VIDMM_PURGE_TELEMETRY@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0095738 (--0VIDMM_PURGE_TELEMETRY@@QEAA@PEAVVIDMM_GLOBAL@@@Z.c)
 */

VIDMM_GLOBAL *__fastcall VIDMM_GLOBAL::VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  VIDMM_GLOBAL *result; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 464) = 0LL;
  *((_QWORD *)this + 477) = 0LL;
  *((_QWORD *)this + 478) = 0LL;
  *((_DWORD *)this + 959) = 1;
  *((_DWORD *)this + 958) = 0;
  *((_QWORD *)this + 576) = 0LL;
  *((_QWORD *)this + 577) = 0LL;
  *((_BYTE *)this + 4624) = 0;
  memset((char *)this + 4625, 0, 0x40uLL);
  memset((char *)this + 6488, 0, 0x200uLL);
  *((_DWORD *)this + 1751) = 0;
  *((_QWORD *)this + 876) = 0LL;
  *((_QWORD *)this + 877) = 0LL;
  *((_QWORD *)this + 878) = 0LL;
  *((_QWORD *)this + 879) = 0LL;
  *((_WORD *)this + 3540) = 0;
  *((_QWORD *)this + 986) = 0LL;
  *((_DWORD *)this + 1974) = 0;
  *((_QWORD *)this + 4990) = 0LL;
  *((_QWORD *)this + 4991) = 0LL;
  *((_DWORD *)this + 9984) = 0;
  *((_DWORD *)this + 9985) = 53;
  *((_DWORD *)this + 9986) = 71;
  *((_QWORD *)this + 4996) = 0LL;
  *((_QWORD *)this + 4997) = 0LL;
  *((_DWORD *)this + 9996) = 0;
  *((_DWORD *)this + 9997) = 53;
  *((_DWORD *)this + 9998) = 46;
  *((_DWORD *)this + 10018) = -1;
  *((_QWORD *)this + 5006) = 0LL;
  *((_QWORD *)this + 5007) = 0LL;
  *((_DWORD *)this + 10016) = 0;
  *((_DWORD *)this + 10017) = 1;
  *((_DWORD *)this + 10040) = 0;
  *(_DWORD *)((char *)this + 40169) = 257;
  *((_DWORD *)this + 10044) = -1;
  *((_QWORD *)this + 5023) = 0LL;
  *((_QWORD *)this + 5024) = 0LL;
  *((_QWORD *)this + 5025) = 0LL;
  *((_QWORD *)this + 5026) = 0LL;
  memset((char *)this + 40384, 0, 0x220uLL);
  *((_BYTE *)this + 40936) &= 0x41u;
  *((_BYTE *)this + 40937) &= 0xEEu;
  *((_DWORD *)this + 10232) = 0;
  *((_BYTE *)this + 40939) = 0;
  *((_QWORD *)this + 5123) = 0LL;
  *((_DWORD *)this + 10248) = 0;
  *((_QWORD *)this + 5125) = 0LL;
  *((_QWORD *)this + 5126) = 0LL;
  *((_DWORD *)this + 10254) = 0;
  *((_DWORD *)this + 10255) = 1;
  *((_QWORD *)this + 5128) = 0LL;
  *((_DWORD *)this + 10258) = 0;
  *((_QWORD *)this + 5130) = 0LL;
  *((_QWORD *)this + 5131) = 0LL;
  *((_DWORD *)this + 10264) = 0;
  *((_DWORD *)this + 10265) = 5;
  *((_DWORD *)this + 10266) = 66;
  *((_QWORD *)this + 5135) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5134);
  *((_QWORD *)this + 5138) = 0LL;
  *((_QWORD *)this + 5139) = 0LL;
  *((_DWORD *)this + 10280) = 0;
  *((_DWORD *)this + 10281) = 1;
  *((_QWORD *)this + 5142) = (char *)this + 41128;
  *((_QWORD *)this + 5141) = (char *)this + 41128;
  *((_QWORD *)this + 5149) = DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback;
  *((_DWORD *)this + 10286) = 0;
  *((_QWORD *)this + 5150) = (char *)this + 41104;
  *((_QWORD *)this + 5147) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 41152), NotificationEvent, 1u);
  VIDMM_PURGE_TELEMETRY::VIDMM_PURGE_TELEMETRY((VIDMM_GLOBAL *)((char *)this + 41208), this);
  *((_QWORD *)this + 5543) = 0LL;
  *((_QWORD *)this + 5547) = 0LL;
  *((_QWORD *)this + 5548) = 0LL;
  *((_DWORD *)this + 11098) = 0;
  *((_DWORD *)this + 11099) = 1;
  *((_DWORD *)this + 11106) = 0;
  KeInitializeEvent((PRKEVENT)this + 1850, NotificationEvent, 1u);
  *((_QWORD *)this + 5554) = 0LL;
  *((_QWORD *)this + 5555) = 0LL;
  *((_QWORD *)this + 5556) = 0LL;
  *((_QWORD *)this + 5557) = 0LL;
  *((_QWORD *)this + 5558) = 0LL;
  *((_QWORD *)this + 5559) = 0LL;
  *((_QWORD *)this + 5560) = 0LL;
  *((_DWORD *)this + 11122) = 0;
  *((_DWORD *)this + 11123) = 53;
  *((_DWORD *)this + 11124) = 60;
  *((_QWORD *)this + 5573) = 0LL;
  *((_QWORD *)this + 5574) = 0LL;
  *((_QWORD *)this + 5575) = 0LL;
  *((_QWORD *)this + 5576) = 0LL;
  *((_QWORD *)this + 5577) = 0LL;
  *((_BYTE *)this + 44624) = 0;
  *((_DWORD *)this + 11164) = -1;
  *((_QWORD *)this + 5579) = 0LL;
  *((_QWORD *)this + 5580) = 0LL;
  *((_DWORD *)this + 11162) = 0;
  *((_DWORD *)this + 11163) = 53;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  *((_QWORD *)this + 468) = (char *)this + 3736;
  *((_QWORD *)this + 467) = (char *)this + 3736;
  *((_QWORD *)this + 470) = (char *)this + 3752;
  *((_QWORD *)this + 469) = (char *)this + 3752;
  *((_QWORD *)this + 472) = (char *)this + 3768;
  *((_QWORD *)this + 471) = (char *)this + 3768;
  *((_QWORD *)this + 474) = (char *)this + 3784;
  *((_QWORD *)this + 473) = (char *)this + 3784;
  *((_QWORD *)this + 5546) = (char *)this + 44360;
  *((_QWORD *)this + 5545) = (char *)this + 44360;
  *((_QWORD *)this + 5137) = (char *)this + 41088;
  *((_QWORD *)this + 5136) = (char *)this + 41088;
  *((_QWORD *)this + 476) = (char *)this + 3800;
  *((_QWORD *)this + 475) = (char *)this + 3800;
  *((_QWORD *)this + 5005) = (char *)this + 40032;
  *((_BYTE *)this + 44664) = 0;
  *((_DWORD *)this + 11167) = -1;
  *((_BYTE *)this + 44688) = 0;
  *((_QWORD *)this + 5587) = 0LL;
  *((_QWORD *)this + 5588) = 0LL;
  *((_QWORD *)this + 5004) = (char *)this + 40032;
  v2 = 4LL;
  *((_QWORD *)this + 5001) = (char *)this + 40000;
  *((_QWORD *)this + 5000) = (char *)this + 40000;
  *((_QWORD *)this + 4995) = (char *)this + 39952;
  *((_QWORD *)this + 4994) = (char *)this + 39952;
  *((_QWORD *)this + 5003) = (char *)this + 40016;
  *((_QWORD *)this + 5002) = (char *)this + 40016;
  *((_QWORD *)this + 5572) = (char *)this + 44568;
  *((_QWORD *)this + 5571) = (char *)this + 44568;
  *((_QWORD *)this + 5585) = (char *)this + 44672;
  *((_QWORD *)this + 5584) = (char *)this + 44672;
  v3 = (_QWORD *)((char *)this + 44504);
  do
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
    --v2;
  }
  while ( v2 );
  memset((char *)this + 7096, 0, 0x50uLL);
  *((_QWORD *)this + 886) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5544);
  *(_OWORD *)((char *)this + 7864) = 0LL;
  *((_QWORD *)this + 985) = 0LL;
  memset((char *)this + 632, 0, 0x200uLL);
  memset((char *)this + 1144, 0, 0x200uLL);
  memset((char *)this + 3840, 0, 0x100uLL);
  memset((char *)this + 1656, 0, 0x800uLL);
  memset((char *)this + 4096, 0, 0x100uLL);
  memset((char *)this + 4352, 0, 0x100uLL);
  memset((char *)this + 4692, 0, 0x100uLL);
  memset((char *)this + 4952, 0, 0x200uLL);
  memset((char *)this + 5976, 0, 0x200uLL);
  memset((char *)this + 5464, 0, 0x200uLL);
  *(_OWORD *)((char *)this + 7048) = 0LL;
  *(_OWORD *)((char *)this + 7064) = 0LL;
  *((_DWORD *)this + 1750) = 1;
  memset((char *)this + 7176, 0, 0x2B0uLL);
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 40256), 0LL, 0LL, 0, 0x18uLL, 0x61356956u, 0);
  result = this;
  *((_QWORD *)this + 5589) = 0LL;
  return result;
}
