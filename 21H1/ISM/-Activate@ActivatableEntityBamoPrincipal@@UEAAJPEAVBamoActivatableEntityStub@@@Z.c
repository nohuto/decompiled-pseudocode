/*
 * XREFs of ?Activate@ActivatableEntityBamoPrincipal@@UEAAJPEAVBamoActivatableEntityStub@@@Z @ 0x180105890
 * Callers:
 *     <none>
 * Callees:
 *     ?GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ @ 0x180012104 (-GetForegroundManager@ISMStatics@@SAPEAUIForegroundManager@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ActivatableEntityBamoPrincipal::Activate(
        ActivatableEntityBamoPrincipal *this,
        struct BamoActivatableEntityStub *a2)
{
  struct IForegroundManager *ForegroundManager; // rsi
  void (__fastcall *v4)(struct IForegroundManager *, __int64, _QWORD); // rdi
  __int64 v5; // rax

  ForegroundManager = ISMStatics::GetForegroundManager();
  v4 = *(void (__fastcall **)(struct IForegroundManager *, __int64, _QWORD))(*(_QWORD *)ForegroundManager + 24LL);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8);
  v4(ForegroundManager, v5, 0LL);
  return 0LL;
}
