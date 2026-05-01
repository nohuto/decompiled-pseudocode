/*
 * XREFs of ?SetBehaviorFlagsInternal@CImmersiveApp@@UEAAJ_NW4__MIDL___MIDL_itf_shpriv_core_0000_0322_0003@@@Z @ 0x180094AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::SetBehaviorFlagsInternal(__int64 a1, char a2, int a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx

  v3 = 0LL;
  if ( a2 )
    *(_DWORD *)(a1 + 388) |= a3;
  else
    *(_DWORD *)(a1 + 388) &= ~a3;
  v5 = *(_QWORD *)(a1 + 360);
  if ( v5 )
  {
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 352) + 8 * v3);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 184LL))(v6, *(unsigned int *)(a1 + 388));
      ++v3;
    }
    while ( v3 < v5 );
  }
  return 0LL;
}
