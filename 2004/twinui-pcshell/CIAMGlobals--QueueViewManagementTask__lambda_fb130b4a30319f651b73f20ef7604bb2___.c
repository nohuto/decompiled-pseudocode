/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_fb130b4a30319f651b73f20ef7604bb2___ @ 0x180075B88
 * Callers:
 *     _lambda_ed95610872b18a867010d7fca41407e7_::operator() @ 0x180031B68 (_lambda_ed95610872b18a867010d7fca41407e7_--operator().c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180062AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1312c5eca8584d5a6e8e07620abebaca_____lambda_1312c5eca8584d5a6e8e07620abebaca___ @ 0x180075C48 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1312c5eca8584.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_fb130b4a30319f651b73f20ef7604bb2___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rbx
  __int64 *Ptr; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 *v8; // rax
  volatile int *v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = a1;
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = (__int64 *)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  if ( !Ptr )
    return 2147943568LL;
  v5 = *Ptr;
  v14[0] = (__int64)CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  (*(void (**)(void))(v5 + 8))();
  v6 = *a2;
  v7 = (unsigned int)v2[15].Ptr;
  v14[1] = v6;
  v8 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1312c5eca8584d5a6e8e07620abebaca_____lambda_1312c5eca8584d5a6e8e07620abebaca___(
                    &v15,
                    v14);
  v10 = *v8;
  *v8 = 0LL;
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v11,
      v9);
  }
  v12 = SHTaskPoolQueueTask(3LL, 2LL, v7);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  return v12;
}
