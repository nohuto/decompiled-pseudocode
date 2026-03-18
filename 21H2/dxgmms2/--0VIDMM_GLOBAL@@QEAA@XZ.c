/*
 * XREFs of ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00B2A38
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z @ 0x1C00B1018 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z.c)
 * Callees:
 *     memset @ 0x1C001DC40 (memset.c)
 *     ??0VIDMM_PURGE_TELEMETRY@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1C00B3024 (--0VIDMM_PURGE_TELEMETRY@@QEAA@PEAVVIDMM_GLOBAL@@@Z.c)
 */

VIDMM_GLOBAL *__fastcall VIDMM_GLOBAL::VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  __int64 v2; // rdi
  _QWORD *v3; // rax
  VIDMM_GLOBAL *result; // rax

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 0;
  v2 = 4LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 464) = 0LL;
  *((_QWORD *)this + 479) = 0LL;
  *((_QWORD *)this + 480) = 0LL;
  *((_DWORD *)this + 963) = 4;
  *((_DWORD *)this + 962) = 0;
  *((_QWORD *)this + 578) = 0LL;
  *((_QWORD *)this + 579) = 0LL;
  *((_BYTE *)this + 4640) = 0;
  memset((char *)this + 4641, 0, 0x40uLL);
  memset((char *)this + 6504, 0, 0x200uLL);
  *((_DWORD *)this + 1755) = 0;
  *((_QWORD *)this + 878) = 0LL;
  *((_QWORD *)this + 879) = 0LL;
  *((_QWORD *)this + 880) = 0LL;
  *((_WORD *)this + 3544) = 0;
  *((_QWORD *)this + 987) = 0LL;
  *((_DWORD *)this + 1976) = 0;
  *((_QWORD *)this + 4991) = 0LL;
  *((_QWORD *)this + 4992) = 0LL;
  *((_DWORD *)this + 9986) = 0;
  *((_DWORD *)this + 9987) = 64;
  *((_DWORD *)this + 9988) = 71;
  *((_QWORD *)this + 4997) = 0LL;
  *((_QWORD *)this + 4998) = 0LL;
  *((_DWORD *)this + 9998) = 0;
  *((_DWORD *)this + 9999) = 64;
  *((_DWORD *)this + 10000) = 46;
  *((_DWORD *)this + 10020) = -1;
  *((_QWORD *)this + 5007) = 0LL;
  *((_QWORD *)this + 5008) = 0LL;
  *((_DWORD *)this + 10018) = 0;
  *((_DWORD *)this + 10019) = 1;
  *((_DWORD *)this + 10046) = -1;
  *((_DWORD *)this + 10042) = 0;
  *(_DWORD *)((char *)this + 40177) = 257;
  *((_BYTE *)this + 40181) = 0;
  *((_QWORD *)this + 5024) = 0LL;
  *((_QWORD *)this + 5025) = 0LL;
  *((_QWORD *)this + 5026) = 0LL;
  *((_QWORD *)this + 5027) = 0LL;
  memset((char *)this + 40384, 0, 0x220uLL);
  *((_BYTE *)this + 40936) &= 0x41u;
  *((_BYTE *)this + 40937) &= 0xCEu;
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
  *((_DWORD *)this + 10265) = 10;
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
  *((_DWORD *)this + 10302) = 1;
  *((_QWORD *)this + 5150) = (char *)this + 41104;
  *((_QWORD *)this + 5147) = 0LL;
  KeInitializeEvent((PRKEVENT)((char *)this + 41152), NotificationEvent, 1u);
  VIDMM_PURGE_TELEMETRY::VIDMM_PURGE_TELEMETRY((VIDMM_GLOBAL *)((char *)this + 41216), this);
  *((_QWORD *)this + 5544) = 0LL;
  *((_QWORD *)this + 5548) = 0LL;
  *((_QWORD *)this + 5549) = 0LL;
  *((_DWORD *)this + 11100) = 0;
  *((_DWORD *)this + 11101) = 1;
  *((_DWORD *)this + 11108) = 0;
  KeInitializeEvent((PRKEVENT)((char *)this + 44408), NotificationEvent, 1u);
  *((_QWORD *)this + 5555) = 0LL;
  *((_QWORD *)this + 5556) = 0LL;
  *((_QWORD *)this + 5557) = 0LL;
  *((_QWORD *)this + 5558) = 0LL;
  *((_QWORD *)this + 5559) = 0LL;
  *((_QWORD *)this + 5560) = 0LL;
  *((_QWORD *)this + 5561) = 0LL;
  *((_DWORD *)this + 11124) = 0;
  *((_DWORD *)this + 11125) = 64;
  *((_DWORD *)this + 11126) = 60;
  *((_QWORD *)this + 5574) = 0LL;
  *((_QWORD *)this + 5575) = 0LL;
  *((_QWORD *)this + 5576) = 0LL;
  *((_QWORD *)this + 5577) = 0LL;
  *((_QWORD *)this + 5578) = 0LL;
  *((_BYTE *)this + 44632) = 0;
  *((_DWORD *)this + 11166) = -1;
  *((_QWORD *)this + 5580) = 0LL;
  *((_QWORD *)this + 5581) = 0LL;
  *((_DWORD *)this + 11164) = 0;
  *((_DWORD *)this + 11165) = 64;
  *((_DWORD *)this + 11169) = -1;
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
  *((_QWORD *)this + 5547) = (char *)this + 44368;
  *((_QWORD *)this + 5546) = (char *)this + 44368;
  *((_QWORD *)this + 5137) = (char *)this + 41088;
  *((_QWORD *)this + 5136) = (char *)this + 41088;
  *((_BYTE *)this + 44672) = 0;
  *((_BYTE *)this + 44696) = 0;
  *((_QWORD *)this + 5588) = 0LL;
  *((_QWORD *)this + 5589) = 0LL;
  *((_QWORD *)this + 5591) = 0LL;
  *((_DWORD *)this + 11204) = 0;
  *((_QWORD *)this + 476) = (char *)this + 3800;
  *((_QWORD *)this + 475) = (char *)this + 3800;
  *((_QWORD *)this + 478) = (char *)this + 3816;
  *((_QWORD *)this + 477) = (char *)this + 3816;
  *((_QWORD *)this + 5006) = (char *)this + 40040;
  *((_QWORD *)this + 5005) = (char *)this + 40040;
  *((_QWORD *)this + 5002) = (char *)this + 40008;
  *((_QWORD *)this + 5001) = (char *)this + 40008;
  *((_QWORD *)this + 4996) = (char *)this + 39960;
  *((_QWORD *)this + 4995) = (char *)this + 39960;
  *((_QWORD *)this + 5004) = (char *)this + 40024;
  *((_QWORD *)this + 5003) = (char *)this + 40024;
  *((_QWORD *)this + 5573) = (char *)this + 44576;
  *((_QWORD *)this + 5572) = (char *)this + 44576;
  *((_QWORD *)this + 5586) = (char *)this + 44680;
  *((_QWORD *)this + 5585) = (char *)this + 44680;
  v3 = (_QWORD *)((char *)this + 44512);
  do
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
    --v2;
  }
  while ( v2 );
  memset((char *)this + 7104, 0, 0x50uLL);
  *((_QWORD *)this + 887) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5545);
  *((_OWORD *)this + 492) = 0LL;
  *((_QWORD *)this + 986) = 0LL;
  memset((char *)this + 632, 0, 0x200uLL);
  memset((char *)this + 1144, 0, 0x200uLL);
  memset((char *)this + 3856, 0, 0x100uLL);
  memset((char *)this + 1656, 0, 0x800uLL);
  memset((char *)this + 4112, 0, 0x100uLL);
  memset((char *)this + 4368, 0, 0x100uLL);
  memset((char *)this + 4708, 0, 0x100uLL);
  memset((char *)this + 4968, 0, 0x200uLL);
  memset((char *)this + 5992, 0, 0x200uLL);
  memset((char *)this + 5480, 0, 0x200uLL);
  *((_OWORD *)this + 441) = 0LL;
  *((_OWORD *)this + 442) = 0LL;
  *((_DWORD *)this + 1754) = 1;
  memset((char *)this + 7184, 0, 0x2B0uLL);
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 40256), 0LL, 0LL, 0, 0x20uLL, 0x61356956u, 0);
  result = this;
  *((_QWORD *)this + 5592) = 0LL;
  return result;
}
