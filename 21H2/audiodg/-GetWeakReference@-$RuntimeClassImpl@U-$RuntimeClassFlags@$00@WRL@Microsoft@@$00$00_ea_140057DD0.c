/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@567@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x140057DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICPAudioHistoryControl@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x140021EA0 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICPAudioH.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICrossProcessMemoryManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14003EE10 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICrossProcessMemo.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140055490 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z @ 0x140055E30 (-CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>>::GetWeakReference(
        __int64 a1,
        struct IUnknown *a2)
{
  signed __int64 v2; // rbx
  __int64 v5; // rbx
  __int64 WeakReference; // rax
  struct IUnknownVtbl *v7; // r8
  unsigned __int64 v9; // rdx
  bool i; // zf
  signed __int64 v11; // rax
  signed __int64 v12; // rbx
  volatile int *v13; // rdx

  v2 = *(_QWORD *)(a1 + 24);
  a2->lpVtbl = 0LL;
  if ( v2 >= 0 )
  {
    WeakReference = (__int64)Microsoft::WRL::Details::CreateWeakReference((struct IUnknown *)(a1 - 8), a2);
    v7 = (struct IUnknownVtbl *)WeakReference;
    if ( !WeakReference )
      return 2147942414LL;
    *(_DWORD *)(WeakReference + 16) = v2;
    v9 = (WeakReference >> 1) | 0x8000000000000000uLL;
    v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v9, v2);
    for ( i = v2 == v11; ; i = v11 == v12 )
    {
      v12 = v11;
      if ( i )
      {
        a2->lpVtbl = v7;
        return 0LL;
      }
      if ( v11 < 0 )
        break;
      LODWORD(v7->Release) = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v9, v11);
    }
    Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
      (Microsoft::WRL::Details::WeakReferenceImpl *)v7,
      1);
    v5 = 2 * v12;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICrossProcessMemoryManager>::AddRef(
      v5,
      v13);
  }
  else
  {
    v5 = 2 * v2;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICPAudioHistoryControl>::InternalAddRef(
      v5,
      (volatile int *)a2);
  }
  a2->lpVtbl = (struct IUnknownVtbl *)v5;
  return 0LL;
}
