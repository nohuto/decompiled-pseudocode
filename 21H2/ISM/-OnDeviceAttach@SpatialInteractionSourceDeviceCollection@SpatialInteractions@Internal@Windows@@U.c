/*
 * XREFs of ?OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKKPEAUIHidDevice@234@PEAUMPCSourceDeviceInfo@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D0C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     std::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController_::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController__Windows::Internal::SpatialInteractions::IHidDevice___&_unsigned_long_&_unsigned_long_&__lambda_538a60f2dfb0de3d5e0ccb23ebc37905___ @ 0x1800CC97C (std--_Ref_count_obj_Windows--Internal--SpatialInteractions--SpatialInteractionSourceController_-.c)
 *     ?AcquireInterestInHeadEvent@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800CEE1C (-AcquireInterestInHeadEvent@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@.c)
 *     ?AddDeviceToCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKKAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800CEE4C (-AddDeviceToCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800D1F88 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDeviceAttach(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        unsigned int a2,
        int a3,
        struct Windows::Internal::SpatialInteractions::IHidDevice *a4,
        struct MPCSourceDeviceInfo *a5,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a6)
{
  char *v6; // rbx
  void *v7; // rax
  __int64 v8; // rdi
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r9
  int v14[2]; // [rsp+20h] [rbp-60h]
  __int128 v15; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v16[8]; // [rsp+40h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  unsigned int v18; // [rsp+A8h] [rbp+28h] BYREF
  int v19; // [rsp+B0h] [rbp+30h] BYREF
  struct Windows::Internal::SpatialInteractions::IHidDevice *v20; // [rsp+B8h] [rbp+38h] BYREF

  v20 = a4;
  v19 = a3;
  v18 = a2;
  v6 = (char *)this - 8;
  DWORD2(v15) = a2;
  *(_QWORD *)&v15 = (char *)this - 8;
  v7 = operator new(0x4B8uLL);
  *((_QWORD *)&v15 + 1) = std::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController_::_Ref_count_obj_Windows::Internal::SpatialInteractions::SpatialInteractionSourceController__Windows::Internal::SpatialInteractions::IHidDevice_____unsigned_long___unsigned_long____lambda_538a60f2dfb0de3d5e0ccb23ebc37905___(
                            (__int64)v7,
                            (__int64)&v20,
                            (__int64)&v18,
                            (__int64)&v19,
                            &v15);
  v8 = *((_QWORD *)&v15 + 1) + 16LL;
  *(_QWORD *)&v15 = *((_QWORD *)&v15 + 1) + 16LL;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::AcquireInterestInHeadEvent(
    (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *)(*((_QWORD *)&v15 + 1) + 16LL),
    a6);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 128LL))(v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 169LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_11;
  }
  v9 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDeviceToCache(
         (__int64)v6,
         v18,
         0,
         &v15);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 171LL;
    goto LABEL_9;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, struct MPCSourceDeviceInfo *))(*(_QWORD *)v15 + 144LL))(v15, a5);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 173LL;
    goto LABEL_9;
  }
  v16[1] = v6;
  v16[0] = off_1801B1A98;
  LOBYTE(v12) = 1;
  v16[7] = v16;
  v9 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
         v6,
         &v15,
         v16,
         v12,
         *(_QWORD *)v14);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 181LL;
    goto LABEL_9;
  }
  v10 = 0;
LABEL_11:
  if ( *((_QWORD *)&v15 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v15 + 1));
  return v10;
}
