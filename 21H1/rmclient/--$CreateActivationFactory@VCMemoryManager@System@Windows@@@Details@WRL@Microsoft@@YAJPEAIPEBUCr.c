/*
 * XREFs of ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180002B00
 * Callers:
 *     <none>
 * Callees:
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800010A4 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CMemoryManager@System@Windows@@QEAA@XZ @ 0x180002C58 (--0CMemoryManager@System@Windows@@QEAA@XZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800037A0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics2@System@Windows@@UIMemoryManagerStatics3@56@UIMemoryManagerStatics4@56@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800037D0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics2.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000A2A4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000A970 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager>(
        int *a1,
        __int64 a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v8; // rbx
  Windows::System::CMemoryManager *v9; // rax
  __int64 v10; // rax
  volatile int *v11; // rdx
  int CanCastTo; // eax
  int v13; // r11d
  int v14; // edi
  char *v15; // r8
  int v16; // ecx
  __int64 result; // rax

  v8 = 0LL;
  v9 = (Windows::System::CMemoryManager *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v9 )
  {
    v10 = Windows::System::CMemoryManager::CMemoryManager(v9);
    v8 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( (unsigned int)InlineIsEqualGUID(a3, &GUID_00000035_0000_0000_c000_000000000046) )
    {
      *a4 = (void *)v8;
LABEL_16:
      v16 = *a1;
      if ( (*a1 & 4) == 0 )
      {
        Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v8 + 108), v11);
        v16 = *a1;
      }
      *(_DWORD *)(v8 + 128) = v16;
      result = 0LL;
      *(_QWORD *)(v8 + 120) = a2;
      return result;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v8 + 8), a3, a4);
    v13 = -2147467262;
    v14 = CanCastTo;
    if ( CanCastTo == -2147467262 )
    {
      if ( (unsigned int)InlineIsEqualGUID(a3, &GUID_5c6c279c_d7ca_4779_9188_4057219ce64c) )
      {
        *a4 = v15;
        v14 = 0;
      }
      else
      {
        v14 = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>::CanCastTo(
                v15 + 8,
                a3,
                a4);
        if ( v14 == v13 )
          v14 = v13;
      }
    }
    if ( v14 == v13 )
    {
      v14 = v13;
    }
    else if ( v14 >= 0 )
    {
      goto LABEL_16;
    }
  }
  else
  {
    v14 = -2147024882;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v14;
}
