/*
 * XREFs of CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_2b311223614f654dd5c02d621b456739___ @ 0x18011F26C
 * Callers:
 *     ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x180127470 (-GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_2b311223614f654dd5c02d621b456739___(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rbx

  v2 = *(_QWORD *)(a1 + 16);
  for ( i = 0LL; i < v2; ++i )
  {
    **(_DWORD **)a2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 64LL))(
                        *(_QWORD *)(a2 + 8),
                        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * i));
    if ( **(int **)a2 < 0 )
      break;
  }
}
