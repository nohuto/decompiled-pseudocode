/*
 * XREFs of ?DecrementObjectCount@?$Module@$01VServiceModule@Internal@Windows@@@WRL@Microsoft@@UEAAKXZ @ 0x1800B9344
 * Callers:
 *     ?DecrementObjectCount@ServiceModule@Internal@Windows@@UEAAKXZ @ 0x1800B9390 (-DecrementObjectCount@ServiceModule@Internal@Windows@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Module<2,Windows::Internal::ServiceModule>::DecrementObjectCount(__int64 a1)
{
  ULONG v2; // ebx
  __int64 v3; // rcx

  v2 = CoReleaseServerProcess();
  if ( !v2 )
  {
    v3 = *(_QWORD *)(a1 + 8);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return v2;
}
