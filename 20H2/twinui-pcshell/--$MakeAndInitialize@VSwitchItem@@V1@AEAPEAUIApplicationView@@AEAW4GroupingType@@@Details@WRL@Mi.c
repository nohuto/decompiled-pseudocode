/*
 * XREFs of ??$MakeAndInitialize@VSwitchItem@@V1@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItem@@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Z @ 0x18039DB74
 * Callers:
 *     ?SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z @ 0x18039E28C (-SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@UISwitchItem@@UISwitchItemInternal@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801646E4 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservabl.c)
 *     ??0SwitchItem@@QEAA@XZ @ 0x18039DC5C (--0SwitchItem@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItem@@@WRL@Microsoft@@IEAAKXZ @ 0x18039E058 (-InternalRelease@-$ComPtr@VSwitchItem@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z @ 0x18039E198 (-RuntimeClassInitialize@SwitchItem@@QEAAJPEAUIApplicationView@@W4GroupingType@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItem,SwitchItem,IApplicationView * &,enum GroupingType &>(
        __int64 *a1,
        __int64 *a2,
        unsigned int *a3)
{
  SwitchItem *v6; // rax
  int v7; // ebx
  SwitchItem *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdi
  volatile int *v12; // rdx
  SwitchItem *v14; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (SwitchItem *)operator new(0xC8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = SwitchItem::SwitchItem(v6);
    v9 = *a3;
    v10 = *a2;
    v11 = (__int64)v8;
    v14 = v8;
    v7 = SwitchItem::RuntimeClassInitialize(v8, v10, v9);
    if ( v7 >= 0 )
    {
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableItem,ISwitchItem,ISwitchItemInternal>::InternalAddRef(
          v11,
          v12);
      *a1 = v11;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<SwitchItem>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
