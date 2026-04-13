/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VMobilityExperienceManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18009FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMobilityExperienceManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009F8F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMobilityExperie.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMobilityExperienceManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009F960 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMobility.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD9C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<MobilityExperienceManager,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD *); // rbx
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rdi
  int v10; // esi
  struct Microsoft::WRL::Details::ModuleBase *v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, __int64, _QWORD *); // [rsp+48h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    RoOriginateError(2147746064LL, 0LL);
    return 2147746064LL;
  }
  else
  {
    v7 = 0LL;
    v12 = 0LL;
    v8 = (volatile signed __int32 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      v11 = Microsoft::WRL::Details::ModuleBase::module_;
      *((_DWORD *)v8 + 3) = 1;
      *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMobilityExperienceManager>::`vftable';
      if ( v11 )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v11 + 8LL))(v11);
      *(_QWORD *)v9 = &MobilityExperienceManager::`vftable';
      v10 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMobilityExperienceManager>::QueryInterface(
              (__int64)v9,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v12);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMobilityExperienceManager>::Release(v9);
      v7 = v12;
      if ( v10 >= 0 )
        v10 = (**v12)(v12, a3, a4);
    }
    else
    {
      v10 = -2147024882;
    }
    if ( v7 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v7)[2])(v7);
    return (unsigned int)v10;
  }
}
