/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationTracker@@UIFastRundown@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180053C70
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationTracker@@UIFastRundown@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180075230 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180075230.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationTracker,IFastRundown>::QueryInterface(
        __int64 a1,
        int *a2,
        _QWORD *a3)
{
  int v3; // r9d

  *a3 = 0LL;
  v3 = *a2;
  if ( (*(_QWORD *)a2 != __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
     || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
     || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4])
    && (v3 != 42154548
     || a2[1] != *(_DWORD *)&GUID_02833a34_18e7_4a6d_87ae_a0e707eae0e0.Data2
     || a2[2] != *(_DWORD *)GUID_02833a34_18e7_4a6d_87ae_a0e707eae0e0.Data4
     || a2[3] != *(_DWORD *)&GUID_02833a34_18e7_4a6d_87ae_a0e707eae0e0.Data4[4]) )
  {
    if ( v3 != 64
      || a2[1] != *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data2
      || a2[2] != *(_DWORD *)GUID_00000040_0000_0000_c000_000000000046.Data4
      || a2[3] != *(_DWORD *)&GUID_00000040_0000_0000_c000_000000000046.Data4[4] )
    {
      return 2147500034LL;
    }
    a1 += 8LL;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
