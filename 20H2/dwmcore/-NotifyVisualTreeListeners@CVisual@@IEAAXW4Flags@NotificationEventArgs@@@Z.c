/*
 * XREFs of ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x1800AC150
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800AC280 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BD340 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BD378 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::NotifyVisualTreeListeners(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rdi

  result = CPtrArrayBase::GetCount((CPtrArrayBase *)(a1 + 24));
  v5 = 0LL;
  if ( (_DWORD)result )
  {
    v6 = (unsigned int)result;
    do
    {
      result = CPtrArrayBase::operator[](a1 + 24, v5);
      if ( result != *(_QWORD *)(a1 + 80) )
        result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)result + 72LL))(result, a2, a1);
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
