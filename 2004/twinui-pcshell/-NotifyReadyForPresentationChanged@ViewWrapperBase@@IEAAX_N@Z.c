/*
 * XREFs of ?NotifyReadyForPresentationChanged@ViewWrapperBase@@IEAAX_N@Z @ 0x1802D0030
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Do_call @ 0x1802D30B0 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Do_call.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180062AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e4d9c0fb879e8ff368f5a938bccc8be3_____lambda_e4d9c0fb879e8ff368f5a938bccc8be3___ @ 0x1802CC130 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e4d9c0fb879e8.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_94b07443dc25265a5fa4265bdfdfc4e6___ @ 0x1802CC52C (Windows--Internal--ComTaskPool--QueueTask__lambda_94b07443dc25265a5fa4265bdfdfc4e6___.c)
 */

void __fastcall ViewWrapperBase::NotifyReadyForPresentationChanged(ViewWrapperBase *this, __int64 a2)
{
  char v2; // si
  unsigned int v4; // r8d
  char *v5; // rbx
  unsigned int v6; // edi
  __int64 *v7; // rax
  volatile int *v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // rcx
  ViewWrapperBase *v11; // [rsp+30h] [rbp-20h] BYREF
  char *v12; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  char *v15; // [rsp+80h] [rbp+30h] BYREF

  v2 = a2;
  if ( (_BYTE)a2 && !*((_BYTE *)this + 517) )
  {
    v4 = *((_DWORD *)this + 46);
    v14 = *((_QWORD *)this + 34);
    *((_BYTE *)this + 517) = 1;
    Windows::Internal::ComTaskPool::QueueTask__lambda_94b07443dc25265a5fa4265bdfdfc4e6___((__int64)this, a2, v4, &v14);
  }
  if ( this )
    v5 = (char *)this + 32;
  else
    v5 = 0LL;
  v15 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v11 = this;
  v12 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
  v6 = *((_DWORD *)this + 46);
  v13 = v2;
  v7 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e4d9c0fb879e8ff368f5a938bccc8be3_____lambda_e4d9c0fb879e8ff368f5a938bccc8be3___(
         &v14,
         (__int64)&v11);
  v9 = *v7;
  *v7 = 0LL;
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v10,
      v8);
  }
  SHTaskPoolQueueTask(3LL, 2LL, v6);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
}
