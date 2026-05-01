/*
 * XREFs of ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x180246D78
 * Callers:
 *     ??1?$EventInvocationContext@$00@details@wil@@UEAA@XZ @ 0x18023F164 (--1-$EventInvocationContext@$00@details@wil@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@?$EventInvocationContext@$00@details@wil@@QEAAJXZ @ 0x180242BE4 (-RuntimeClassInitialize@-$EventInvocationContext@$00@details@wil@@QEAAJXZ.c)
 * Callees:
 *     ?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAXPEAU_TP_WORK@@@Z @ 0x180240760 (-Destroy@-$DestroyThreadPoolWork@$01@details@wil@@SAXPEAU_TP_WORK@@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>::reset(
        struct _TP_WORK **a1,
        struct _TP_WORK *a2)
{
  struct _TP_WORK *v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    wil::details::DestroyThreadPoolWork<2>::Destroy(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
