/*
 * XREFs of sub_180069938 @ 0x180069938
 * Callers:
 *     sub_1800219FC @ 0x1800219FC (sub_1800219FC.c)
 *     sub_1800B1154 @ 0x1800B1154 (sub_1800B1154.c)
 * Callees:
 *     sub_180061438 @ 0x180061438 (sub_180061438.c)
 *     sub_1800617C4 @ 0x1800617C4 (sub_1800617C4.c)
 *     sub_1800698C8 @ 0x1800698C8 (sub_1800698C8.c)
 *     sub_1800DC1B8 @ 0x1800DC1B8 (sub_1800DC1B8.c)
 *     sub_1800DC834 @ 0x1800DC834 (sub_1800DC834.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 *     _Mtx_init_in_situ @ 0x18011F9A6 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_180069938(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // eax
  _QWORD *v7; // rax
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v10; // rdx
  volatile signed __int32 *v11; // rbx

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a2 )
    v6 = sub_1800617C4(a2 + 8);
  else
    v6 = 1;
  sub_180061438(a1 + 24, v6);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDevice::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 7LL;
  *(_WORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 7LL;
  *(_WORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 7LL;
  *(_WORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 7LL;
  *(_WORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 7LL;
  *(_WORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 240) = 1;
  *(_DWORD *)(a1 + 244) = _InterlockedExchangeAdd(&dword_1802085C0, 1u);
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 288) = 1;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_BYTE *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 316) = 40960;
  *(_QWORD *)(a1 + 320) = 45312LL;
  *(_QWORD *)(a1 + 328) = 1LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_DWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 384) = 3;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  v7 = operator new(0x68uLL);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  *(_QWORD *)(a1 + 496) = v7;
  Mtx_init_in_situ((_Mtx_t)(a1 + 512), 2);
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 592) = *a3;
  *(_QWORD *)(a1 + 600) = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_1800DC834(a1 + 608);
  sub_1800DC834(a1 + 832);
  sub_1800DC834(a1 + 1056);
  sub_1800DC1B8(a1 + 1280);
  *(_QWORD *)(a1 + 3840) = 0LL;
  *(_QWORD *)(a1 + 3848) = 0LL;
  *(_QWORD *)(a1 + 3856) = 0LL;
  *(_QWORD *)(a1 + 3864) = 0LL;
  *(_QWORD *)(a1 + 3872) = 0LL;
  *(_QWORD *)(a1 + 3880) = 3LL;
  *(_QWORD *)(a1 + 3888) = 0LL;
  *(_QWORD *)(a1 + 3896) = 0LL;
  *(_QWORD *)(a1 + 3904) = 0LL;
  *(_QWORD *)(a1 + 3912) = 0LL;
  *(_DWORD *)(a1 + 3920) = 0;
  *(_QWORD *)(a1 + 3928) = 0LL;
  *(_QWORD *)(a1 + 3936) = 0LL;
  *(_QWORD *)(a1 + 3944) = 0LL;
  *(_QWORD *)(a1 + 3952) = 0LL;
  *(_QWORD *)(a1 + 3960) = 0LL;
  *(_QWORD *)(a1 + 3968) = 0LL;
  *(_WORD *)(a1 + 3976) = 0;
  *(_QWORD *)(a1 + 3984) = a2;
  *(_QWORD *)(a1 + 3992) = 0LL;
  *(_QWORD *)(a1 + 4000) = 0LL;
  *(_QWORD *)(a1 + 4008) = 0LL;
  *(_QWORD *)(a1 + 4016) = 0LL;
  *(_QWORD *)(a1 + 4024) = 0LL;
  *(_QWORD *)(a1 + 4032) = 0LL;
  *(_QWORD *)(a1 + 4048) = 0LL;
  *(_QWORD *)(a1 + 4056) = 0LL;
  *(_QWORD *)(a1 + 4064) = 0LL;
  *(_QWORD *)(a1 + 4072) = 0LL;
  *(_QWORD *)(a1 + 4080) = 0LL;
  *(_QWORD *)(a1 + 4088) = 0LL;
  *(_DWORD *)(a1 + 4040) = 0;
  *(_DWORD *)(a1 + 4044) = 1065353216;
  sub_1800698C8((_QWORD *)(a1 + 4096), a1);
  *(_OWORD *)(a1 + 424) = 0LL;
  *(_OWORD *)(a1 + 440) = 0LL;
  *(_OWORD *)(a1 + 456) = 0LL;
  *(_OWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v10 = 1000000000 * (perf_counter % perf_frequency) % perf_frequency;
  *(_QWORD *)(a1 + 424) = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                        + 1000000000 * (perf_counter / perf_frequency);
  v11 = (volatile signed __int32 *)a3[1];
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v11)(v11, v10);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return a1;
}
