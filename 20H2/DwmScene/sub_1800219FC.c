/*
 * XREFs of sub_1800219FC @ 0x1800219FC
 * Callers:
 *     sub_180016C80 @ 0x180016C80 (sub_180016C80.c)
 * Callees:
 *     sub_180025CE0 @ 0x180025CE0 (sub_180025CE0.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_180069938 @ 0x180069938 (sub_180069938.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _Mtx_init_in_situ @ 0x18011F9A6 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall sub_1800219FC(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  int v7; // eax
  volatile signed __int32 *v8; // rbx
  _QWORD v10[8]; // [rsp+28h] [rbp-40h] BYREF

  v10[2] = a1;
  v10[3] = a3;
  v10[0] = *a3;
  v10[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_180069938(a1, a2, v10);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderDeviceD3D11::`vftable';
  *(_QWORD *)(a1 + 4136) = 0LL;
  *(_QWORD *)(a1 + 4144) = 0LL;
  v5 = operator new(0x28uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *(_QWORD *)(a1 + 4136) = v5;
  *(_QWORD *)(a1 + 4152) = 0LL;
  *(_QWORD *)(a1 + 4160) = 0LL;
  v6 = operator new(0x28uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  *(_QWORD *)(a1 + 4152) = v6;
  Mtx_init_in_situ((_Mtx_t)(a1 + 4168), 2);
  *(_QWORD *)(a1 + 4248) = 6LL;
  *(_QWORD *)(a1 + 4256) = 0LL;
  *(_QWORD *)(a1 + 4264) = 0LL;
  *(_QWORD *)(a1 + 4272) = 0LL;
  *(_QWORD *)(a1 + 4280) = 0LL;
  *(_QWORD *)(a1 + 4616) = 0LL;
  *(_QWORD *)(a1 + 4624) = 7LL;
  *(_WORD *)(a1 + 4600) = 0;
  *(_QWORD *)(a1 + 4640) = 0LL;
  sub_1801163DC(&unk_180208020, 3LL, "-------------------------------------------------");
  v7 = sub_18006AB3C(a1);
  sub_1801163DC(&unk_180208020, 3LL, "RenderDeviceD3D11 constructor -- RenderDeviceID=%d", v7);
  std::wstring::assign((void *)(a1 + 112));
  std::wstring::assign((void *)(a1 + 80));
  *(_QWORD *)(a1 + 4288) = 0LL;
  sub_180025CE0(a1);
  v8 = (volatile signed __int32 *)a3[1];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return a1;
}
