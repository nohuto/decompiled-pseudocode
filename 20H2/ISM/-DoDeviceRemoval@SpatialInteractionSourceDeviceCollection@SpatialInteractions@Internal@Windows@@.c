/*
 * XREFs of ?DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@K_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800CF224
 * Callers:
 *     ?OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D08F0 (-OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?RemoveSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAXPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800D80EC (-RemoveSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180069098 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     _lambda_0462a2c62e1b4bc053620d4745a50596_::operator() @ 0x1800CE510 (_lambda_0462a2c62e1b4bc053620d4745a50596_--operator().c)
 *     ?DeleteWorkItemsForSourceDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEBVSpatialInteractionSourceDevice@234@@Z @ 0x1800CEF40 (-DeleteWorkItemsForSourceDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Int.c)
 *     ?HasDynamicNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NXZ @ 0x1800CFFE0 (-HasDynamicNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NXZ.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800D1B28 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DoDeviceRemoval(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice **a2,
        int a3,
        char a4,
        __int64 a5)
{
  bool HasDynamicNode; // r14
  char v9; // r12
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  _QWORD *v14; // rbx
  _QWORD *v15; // rax
  _QWORD *v16; // r14
  __int64 v17; // r9
  int v18; // eax
  int v19; // eax
  int v21[2]; // [rsp+20h] [rbp-E0h] BYREF
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice **v22; // [rsp+28h] [rbp-D8h]
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v23; // [rsp+30h] [rbp-D0h]
  int *v24; // [rsp+38h] [rbp-C8h]
  int v25; // [rsp+40h] [rbp-C0h]
  _QWORD v26[8]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v27[8]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v28[14]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]
  _QWORD *v30; // [rsp+150h] [rbp+50h] BYREF
  char *v31; // [rsp+158h] [rbp+58h]
  int v32; // [rsp+160h] [rbp+60h] BYREF
  int v33; // [rsp+168h] [rbp+68h] BYREF

  v32 = a3;
  HasDynamicNode = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::HasDynamicNode(*a2);
  v9 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)*a2 + 40LL))(*a2);
  v10 = *a2;
  v33 = *((_DWORD *)*a2 + 2);
  *((_BYTE *)v10 + 104) = 1;
  (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)v10 + 120LL))(v10);
  *(_QWORD *)v21 = &v33;
  v22 = a2;
  v23 = this;
  v24 = &v32;
  LOBYTE(v25) = 1;
  v11 = a5;
  if ( *((_BYTE *)*a2 + 109) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  v26[0] = off_1801B0AF0;
  v26[1] = this;
  v26[7] = v26;
  v12 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
          this,
          a2,
          v26,
          0LL,
          *(_QWORD *)v21,
          v22,
          v23,
          v24,
          v25);
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      230LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v12);
  v13 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *, __int64, __int64))(*(_QWORD *)*a2 + 152LL))(
          *a2,
          5LL,
          v11);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      232LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v13);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DeleteWorkItemsForSourceDevice(
    this,
    *a2);
  if ( a4 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
    v31 = (char *)this + 432;
    if ( HasDynamicNode )
    {
      v14 = (_QWORD *)*((_QWORD *)this + 59);
      v15 = (_QWORD *)*v14;
      v30 = (_QWORD *)*v14;
      while ( v15 != v14 )
      {
        v16 = v15 + 5;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v15[5] + 72LL))(v15[5])
          && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 32LL))(*v16)
          && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 40LL))(*v16) )
        {
          v27[0] = off_1801B08C8;
          v27[1] = this;
          v27[7] = v27;
          LOBYTE(v17) = 1;
          v18 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
                  this,
                  v16,
                  v27,
                  v17,
                  *(_QWORD *)v21,
                  v22,
                  v23,
                  v24,
                  v25);
          if ( v18 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              261LL,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
              (const char *)(unsigned int)v18);
        }
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v30);
        v15 = v30;
      }
    }
    if ( v9 )
    {
      v28[0] = off_1801B08F8;
      v28[1] = this;
      v28[7] = v28;
      v19 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
              this,
              a2,
              v28,
              0LL,
              *(_QWORD *)v21,
              v22,
              v23,
              v24,
              v25);
      if ( v19 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          274LL,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
          (const char *)(unsigned int)v19);
    }
    if ( this != (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)-432LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 432));
  }
  LOBYTE(v25) = 0;
  lambda_0462a2c62e1b4bc053620d4745a50596_::operator()((__int64)v21);
  return 0LL;
}
