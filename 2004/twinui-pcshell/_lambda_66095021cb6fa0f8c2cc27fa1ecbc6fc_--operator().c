/*
 * XREFs of _lambda_66095021cb6fa0f8c2cc27fa1ecbc6fc_::operator() @ 0x180147EA4
 * Callers:
 *     ?RefreshMonitorMappings@CApplicationManager@@UEAAJXZ @ 0x18014F270 (-RefreshMonitorMappings@CApplicationManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_66095021cb6fa0f8c2cc27fa1ecbc6fc_::operator()(int *a1, __int64 a2)
{
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, __int64, GUID *, GUID *, __int64 *); // rbx
  __int64 v6; // rax
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  int v10; // [rsp+64h] [rbp+1Ch]

  v8 = 0LL;
  if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 280LL))(a2) & 1) != 0 )
  {
    v4 = *((_QWORD *)a1 + 1);
    v5 = *(int (__fastcall **)(__int64, __int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v4 + 88LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 384LL))(a2);
    if ( v5(v4, v6, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v8) >= 0 )
    {
      v9 = *a1;
      v10 = 0;
      (*(void (__fastcall **)(__int64, __int64, int *, _QWORD))(*(_QWORD *)a2 + 456LL))(a2, v8, &v9, 0LL);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return 1;
}
