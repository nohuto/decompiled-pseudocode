/*
 * XREFs of ?Invoke@CAudioSessionGroupingParamChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180045A90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionGroupingParamChanged::Invoke(_QWORD *a1, _QWORD *a2)
{
  unsigned int v3; // edi
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF

  v5 = *(_OWORD *)a1[2];
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, _QWORD))(*(_QWORD *)*a2 + 64LL))(*a2, a1[1], &v5, a1[3]);
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return v3;
}
