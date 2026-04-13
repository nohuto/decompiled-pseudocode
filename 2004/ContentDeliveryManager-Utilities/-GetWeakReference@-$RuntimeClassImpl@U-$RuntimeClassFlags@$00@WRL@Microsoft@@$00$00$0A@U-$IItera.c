/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x18001BDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x1800075A0 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  signed __int64 v2; // rdi
  __int64 v5; // r8
  signed __int32 v6; // eax
  __int64 WeakReference; // rax
  __int64 v8; // rdx
  unsigned __int64 v10; // r8
  bool i; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rdi
  signed __int32 v14; // eax

  v2 = *(_QWORD *)(a1 + 16);
  a2->lpVtbl = 0LL;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((Microsoft::WRL::Details *)(a1 - 8), a2);
    v8 = WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    *(_DWORD *)(WeakReference + 16) = v2;
    v10 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v2);
    for ( i = v2 == v12; ; i = v12 == v13 )
    {
      v13 = v12;
      if ( i )
        break;
      if ( v12 < 0 )
      {
        *(_QWORD *)v8 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
        *(_DWORD *)(v8 + 16) = -1073741823;
        *(_DWORD *)(v8 + 12) = -1073741823;
        operator delete((void *)v8);
        v8 = 2 * v13;
        do
          v14 = *(_DWORD *)(2 * v13 + 0xC);
        while ( v14 != 0x7FFFFFFF
             && v14 != _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 12), v14 + 1, v14) );
        break;
      }
      *(_DWORD *)(v8 + 16) = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 16), v10, v12);
    }
    a2->lpVtbl = (struct IUnknownVtbl *)v8;
  }
  else
  {
    v5 = 2 * v2;
    do
      v6 = *(_DWORD *)(2 * v2 + 0xC);
    while ( v6 != 0x7FFFFFFF && v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 12), v6 + 1, v6) );
    a2->lpVtbl = (struct IUnknownVtbl *)v5;
  }
  return 0LL;
}
