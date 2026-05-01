/*
 * XREFs of ?InitializePrivilegedOperations@EmulatedFullScreenManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x180452260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EmulatedFullScreenManager::InitializePrivilegedOperations(
        EmulatedFullScreenManager *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  char *v7; // rbx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9.Data4;
  v5 = 0;
  if ( v4 )
  {
    return (unsigned int)-2147467263;
  }
  else
  {
    QueryInterface = a3->lpVtbl->QueryInterface;
    v7 = (char *)this + 56;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))QueryInterface)(
      a3,
      &GUID_ea149c36_d9b1_42c3_8f3e_be55df1a26d9,
      v7);
  }
  return v5;
}
