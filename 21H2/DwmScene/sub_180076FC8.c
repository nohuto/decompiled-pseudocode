/*
 * XREFs of sub_180076FC8 @ 0x180076FC8
 * Callers:
 *     sub_1800BD730 @ 0x1800BD730 (sub_1800BD730.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_180066D08 @ 0x180066D08 (sub_180066D08.c)
 *     sub_180071528 @ 0x180071528 (sub_180071528.c)
 *     sub_180076844 @ 0x180076844 (sub_180076844.c)
 *     sub_180077678 @ 0x180077678 (sub_180077678.c)
 *     sub_180078CA0 @ 0x180078CA0 (sub_180078CA0.c)
 *     sub_1800A7200 @ 0x1800A7200 (sub_1800A7200.c)
 *     sub_1800E2FC8 @ 0x1800E2FC8 (sub_1800E2FC8.c)
 *     sub_1800E3160 @ 0x1800E3160 (sub_1800E3160.c)
 *     memset @ 0x18012396A (memset.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 *     _Mtx_init_in_situ @ 0x180125276 (_Mtx_init_in_situ.c)
 *     _Cnd_init_in_situ @ 0x180125374 (_Cnd_init_in_situ.c)
 *     K32GetProcessMemoryInfo @ 0x180125450 (K32GetProcessMemoryInfo.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=35
_QWORD *__fastcall sub_180076FC8(_QWORD *a1, unsigned int a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _OWORD *v12; // rbx
  void *v13; // rax
  __int64 v14; // rcx
  void *v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 *v18; // rax
  volatile signed __int32 *v19; // rbx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  HANDLE CurrentProcess; // rax
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  volatile signed __int32 *v25; // rbx
  void *v27; // [rsp+20h] [rbp-91h] BYREF
  unsigned int v28; // [rsp+28h] [rbp-89h]
  _QWORD *v29; // [rsp+30h] [rbp-81h]
  _QWORD *v30; // [rsp+38h] [rbp-79h]
  _QWORD *v31; // [rsp+40h] [rbp-71h]
  _QWORD *v32; // [rsp+48h] [rbp-69h]
  char v33[8]; // [rsp+50h] [rbp-61h] BYREF
  volatile signed __int32 *v34; // [rsp+58h] [rbp-59h]
  PROCESS_MEMORY_COUNTERS ppsmemCounters; // [rsp+60h] [rbp-51h] BYREF

  v28 = a2;
  v29 = a1;
  v30 = a3;
  v31 = a4;
  v32 = a5;
  sub_180066D08((__int64)(a1 + 1), a2);
  *a1 = &Spectre::Engine::Engine::`vftable';
  a1[8] = 0LL;
  a1[9] = 0LL;
  a1[10] = 0LL;
  a1[11] = 0LL;
  a1[12] = 0LL;
  a1[13] = 0LL;
  sub_180066D08((__int64)(a1 + 14), a2);
  a1[21] = 0LL;
  a1[22] = 0LL;
  v9 = operator new(0x20uLL);
  *v9 = v9;
  v9[1] = v9;
  a1[21] = v9;
  v27 = a1 + 23;
  a1[23] = 0LL;
  a1[24] = 0LL;
  v10 = operator new(0x40uLL);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  a1[23] = v10;
  *((_DWORD *)a1 + 50) = -1082130432;
  *((_DWORD *)a1 + 51) = -1082130432;
  a1[26] = 2LL;
  *((_DWORD *)a1 + 54) = 0;
  *((_DWORD *)a1 + 55) = -1082130432;
  *((_DWORD *)a1 + 56) = -1082130432;
  *(_QWORD *)((char *)a1 + 228) = 2LL;
  *((_DWORD *)a1 + 59) = 0;
  *((_DWORD *)a1 + 60) = 2;
  *((_DWORD *)a1 + 62) = 0;
  _InterlockedExchange((volatile __int32 *)a1 + 62, 0);
  a1[32] = 0LL;
  a1[33] = 0LL;
  a1[34] = 0LL;
  a1[35] = 0LL;
  a1[36] = 0LL;
  a1[37] = 0LL;
  a1[38] = 0LL;
  sub_180066D08((__int64)(a1 + 39), a2);
  sub_1800E2FC8(a1 + 46);
  a1[58] = 0LL;
  a1[59] = 0LL;
  a1[58] = *a3;
  a1[59] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  a1[60] = 0LL;
  a1[61] = 0LL;
  a1[60] = *a4;
  a1[61] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  a1[62] = 0LL;
  a1[63] = 0LL;
  a1[62] = *a5;
  a1[63] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  a1[64] = 0LL;
  a1[65] = 0LL;
  a1[66] = 0LL;
  a1[67] = 0LL;
  *((_DWORD *)a1 + 136) = 0;
  *(_QWORD *)((char *)a1 + 548) = 1LL;
  *((_BYTE *)a1 + 556) = 1;
  *((_DWORD *)a1 + 140) = 1;
  *((_DWORD *)a1 + 142) = 1;
  a1[72] = 0LL;
  a1[73] = 0LL;
  *((_BYTE *)a1 + 592) = 0;
  *((_DWORD *)a1 + 149) = 40960;
  a1[75] = 45312LL;
  a1[76] = 1LL;
  a1[77] = 0LL;
  a1[78] = 0LL;
  a1[79] = 0LL;
  a1[80] = 0LL;
  a1[81] = 0LL;
  *((_DWORD *)a1 + 164) = 0;
  *((_DWORD *)a1 + 166) = 3;
  a1[84] = 0LL;
  a1[85] = 0LL;
  *((_DWORD *)a1 + 172) = 0;
  *((_DWORD *)a1 + 174) = 0;
  a1[88] = 0LL;
  a1[89] = 0LL;
  a1[90] = 0LL;
  a1[91] = 0LL;
  a1[92] = 0LL;
  v11 = operator new(0x48uLL);
  *v11 = v11;
  v11[1] = v11;
  v11[2] = v11;
  *((_WORD *)v11 + 12) = 257;
  a1[91] = v11;
  *((_BYTE *)a1 + 744) = 1;
  *(_OWORD *)((char *)a1 + 748) = 0LL;
  *(_OWORD *)((char *)a1 + 764) = 0LL;
  *(_OWORD *)((char *)a1 + 780) = 0LL;
  *(_QWORD *)((char *)a1 + 796) = 0LL;
  *((_DWORD *)a1 + 201) = 0;
  sub_180066D08((__int64)(a1 + 101), a2);
  a1[108] = 0LL;
  a1[109] = 0LL;
  a1[110] = 0LL;
  a1[111] = 0LL;
  a1[112] = 0LL;
  a1[113] = 0LL;
  a1[114] = 0LL;
  a1[115] = 0LL;
  a1[116] = 0x8000000000000000uLL;
  *((_DWORD *)a1 + 234) = 0;
  a1[118] = 1LL;
  *((_DWORD *)a1 + 238) = 2139095039;
  *(_QWORD *)((char *)a1 + 956) = 1023960469LL;
  v12 = a1 + 121;
  v13 = operator new(0x138uLL);
  v27 = v13;
  if ( v13 )
    v14 = sub_180071528((__int64)v13);
  else
    v14 = 0LL;
  *v12 = 0LL;
  *(_QWORD *)v12 = v14 + 16;
  a1[122] = v14;
  v15 = operator new(0x78uLL);
  v27 = v15;
  v16 = 0LL;
  if ( v15 )
  {
    memset(v15, 0, 0x78uLL);
    v16 = sub_1800E3160(v15);
  }
  a1[123] = v16;
  a1[134] = 0LL;
  a1[135] = 0LL;
  a1[136] = 0LL;
  v17 = operator new(0x38uLL);
  *v17 = v17;
  v17[1] = v17;
  v17[2] = v17;
  *((_WORD *)v17 + 12) = 257;
  a1[135] = v17;
  *((_DWORD *)a1 + 274) = 1;
  sub_180066D08((__int64)(a1 + 138), v28);
  *((_BYTE *)a1 + 1160) = 0;
  a1[147] = 0LL;
  *((_OWORD *)a1 + 74) = 0LL;
  *((_DWORD *)a1 + 300) = 60;
  Cnd_init_in_situ((_Cnd_t)(a1 + 151));
  Mtx_init_in_situ((_Mtx_t)(a1 + 160), 2);
  *((_DWORD *)a1 + 342) = -8388609;
  *(_QWORD *)((char *)a1 + 1372) = 2139095039LL;
  a1[173] = 0LL;
  a1[176] = 0LL;
  a1[177] = 7LL;
  *((_WORD *)a1 + 696) = 0;
  std::wstring::assign((char *)a1 + 1392, &unk_1801CB868, 0LL);
  sub_180077678(a1 + 178);
  sub_180078CA0(a1, 0LL);
  v27 = a1;
  v18 = (__int64 *)sub_180076844((__int64)v33, &v27);
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 64, v18);
  v19 = v34;
  if ( v34 )
  {
    if ( !_InterlockedDecrement(v34 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( !_InterlockedDecrement(v19 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  sub_1800A7200(a1[64]);
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  a1[147] = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  CurrentProcess = GetCurrentProcess();
  K32GetProcessMemoryInfo(CurrentProcess, &ppsmemCounters, 0x48u);
  a1[146] = ppsmemCounters.PeakWorkingSetSize;
  v23 = (volatile signed __int32 *)a3[1];
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  v24 = (volatile signed __int32 *)a4[1];
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  v25 = (volatile signed __int32 *)a5[1];
  if ( v25 )
  {
    if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  return a1;
}
