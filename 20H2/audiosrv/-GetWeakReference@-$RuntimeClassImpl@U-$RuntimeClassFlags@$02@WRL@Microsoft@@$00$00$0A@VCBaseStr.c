/*
 * XREFs of ?GetWeakReference@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAJPEAPEAUIWeakReference@@@Z @ 0x1800361A0
 * Callers:
 *     <none>
 * Callees:
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180051820 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumeProvider@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180071690 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVolumePr.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C40D0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjec.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::GetWeakReference(
        __int64 a1,
        __int64 *a2)
{
  signed __int64 v2; // rdi
  __int64 result; // rax
  __int64 v6; // r10
  _DWORD *v7; // rax
  __int64 v8; // rbx
  Microsoft::WRL::Details *v9; // rcx
  unsigned __int64 v10; // rdx
  bool v11; // zf
  signed __int64 v12; // rax
  signed __int64 v13; // rdi
  signed __int64 v14; // rcx
  __int64 v15; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  *a2 = 0LL;
  if ( v2 >= 0 )
  {
    v7 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = (__int64)v7;
    if ( v7 )
    {
      v9 = Microsoft::WRL::Details::ModuleBase::module_;
      v7[3] = 1;
      *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IWeakReference>::`vftable';
      if ( v9 )
        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)v9 + 8LL))(v9);
      *(_QWORD *)(v8 + 24) = a1 - 248;
      *(_QWORD *)v8 = &Microsoft::WRL::Details::WeakReferenceImpl::`vftable';
      *(_DWORD *)(v8 + 16) = 0x3FFFFFFF;
      v10 = (v8 >> 1) | 0x8000000000000000uLL;
      *(_DWORD *)(v8 + 12) = 2;
      *(_DWORD *)(v8 + 16) = v2;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v10, v2);
      v11 = v2 == v12;
      v13 = v12;
      if ( v11 )
      {
LABEL_9:
        *a2 = v8;
        return 0LL;
      }
      else
      {
        while ( v13 >= 0 )
        {
          v14 = v13;
          *(_DWORD *)(v8 + 16) = v13;
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v10, v13);
          if ( v13 == v14 )
            goto LABEL_9;
        }
        Microsoft::WRL::Details::WeakReferenceImpl::`vector deleting destructor'(
          (Microsoft::WRL::Details::WeakReferenceImpl *)v8,
          1u);
        v15 = 2 * v13;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::AddRef(v15);
        result = 0LL;
        *a2 = v15;
      }
    }
    else
    {
      return 2147942414LL;
    }
  }
  else
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVolumeProvider>::InternalAddRef(
      2 * v2,
      a2);
    result = 0LL;
    *a2 = v6;
  }
  return result;
}
