/*
 * XREFs of ?InitializePrivilegedOperations@RemoteLauncherForegroundHandler@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180213360
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RemoteLauncherForegroundHandler::InitializePrivilegedOperations(
        RemoteLauncherForegroundHandler *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  char *v5; // rbx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2.Data4;
  if ( !v4 )
  {
    v5 = (char *)this + 56;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))a3->lpVtbl->QueryInterface)(
      a3,
      &GUID_6ec37be6_2b14_42f6_a784_9f0d47b222d2,
      v5);
  }
  return 0LL;
}
