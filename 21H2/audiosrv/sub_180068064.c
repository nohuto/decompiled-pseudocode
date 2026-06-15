/*
 * XREFs of sub_180068064 @ 0x180068064
 * Callers:
 *     sub_180068020 @ 0x180068020 (sub_180068020.c)
 *     sub_1800BD110 @ 0x1800BD110 (sub_1800BD110.c)
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180068110 @ 0x180068110 (sub_180068110.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180068064(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  void *v5; // rcx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  v4 = sub_180068110(&v7);
  if ( v4 < 0 )
    goto LABEL_10;
  pv = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, LPVOID *))(*(_QWORD *)v7 + 32LL))(
         v7,
         *(_QWORD *)(a1 + 16),
         0LL,
         &pv);
  v5 = pv;
  if ( v4 >= 0 )
    *a2 = *((unsigned __int16 *)pv + 1);
  if ( v5 )
    CoTaskMemFree(v5);
  if ( v4 < 0 )
LABEL_10:
    sub_18005E8F8((__int64)"CMeterControlBase::GetChannelCountFromDeviceFormat", 188, v4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)v4;
}
