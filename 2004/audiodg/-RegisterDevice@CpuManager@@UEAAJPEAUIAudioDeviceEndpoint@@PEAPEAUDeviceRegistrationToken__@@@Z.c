/*
 * XREFs of ?RegisterDevice@CpuManager@@UEAAJPEAUIAudioDeviceEndpoint@@PEAPEAUDeviceRegistrationToken__@@@Z @ 0x140035980
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x14001A8BC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z @ 0x140034748 (-Attach@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x140034B90 (-GetNode@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PE.c)
 *     ?ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z @ 0x1400355E8 (-ListKeyForDevice@@YAPEAUIUnknown@@PEAUIAudioDeviceEndpoint@@@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400362C8 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTrait.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBUListValue@DeviceRegistrations@CpuManager@@@Z @ 0x14003652C (-SetAt@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTraits@PEAU.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CpuManager::RegisterDevice(
        CpuManager *this,
        struct IAudioDeviceEndpoint *a2,
        struct DeviceRegistrationToken__ **a3)
{
  struct DeviceRegistrationToken__ **v3; // r13
  struct IAudioDeviceEndpoint *v4; // r12
  CpuManager *v5; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // r15
  int v7; // ebx
  char v8; // r14
  struct IUnknown *v9; // rax
  __int64 v10; // rbx
  __int64 Node; // rax
  __int64 v12; // rdi
  unsigned int *v14; // rbx
  int v15; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+38h] [rbp-A0h]
  __int64 v17; // [rsp+40h] [rbp-98h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+48h] [rbp-90h]
  int v19; // [rsp+50h] [rbp-88h] BYREF
  __int64 v20; // [rsp+58h] [rbp-80h] BYREF
  __int64 v21; // [rsp+60h] [rbp-78h] BYREF
  char *v22; // [rsp+68h] [rbp-70h]
  char *v23; // [rsp+70h] [rbp-68h]
  __int128 v24; // [rsp+78h] [rbp-60h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+88h] [rbp-50h]
  __int64 v26; // [rsp+90h] [rbp-48h] BYREF
  ATL::CAtlException *v27; // [rsp+98h] [rbp-40h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  v16 = 0LL;
  v17 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v23 = (char *)this + 16;
  v18 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v25 = v6;
  v7 = (*(__int64 (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 128LL))(v5);
  if ( v7 < 0 )
    goto LABEL_14;
  v8 = 1;
  v9 = ListKeyForDevice(v4);
  Microsoft::WRL::ComPtr<IUnknown>::Attach(&v17, (__int64)v9);
  v10 = v17;
  v20 = v17;
  v22 = (char *)v5 + 200;
  Node = ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::GetNode(
           (__int64)v5 + 200,
           (unsigned int *)&v20,
           &v19,
           (unsigned int *)&v15,
           &v26);
  v12 = Node;
  if ( Node )
  {
    _InterlockedAdd((volatile signed __int32 *)(Node + 8), 1u);
LABEL_9:
    *v3 = (struct DeviceRegistrationToken__ *)v12;
    v12 = 0LL;
    v8 = 0;
    v7 = 0;
    goto LABEL_10;
  }
  v24 = 0LL;
  LODWORD(v24) = 1;
  try
  {
    v21 = v10;
    v12 = ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::SetAt(
            (char *)v5 + 200,
            &v21,
            &v24);
    v16 = v12;
  }
  catch ( ATL::CAtlException *v27 )
  {
    v14 = (unsigned int *)v27;
    if ( *(_DWORD *)v27 == -1073741571 )
      _o__resetstkoflw();
    v15 = *v14;
    v7 = v15;
    v5 = this;
    v12 = v16;
    v8 = 1;
    v6 = v18;
    if ( v15 < 0 )
      goto LABEL_10;
    v3 = a3;
    v4 = a2;
  }
  v7 = (*(__int64 (__fastcall **)(CpuManager *, struct IAudioDeviceEndpoint *, __int64))(*(_QWORD *)v5 + 112LL))(
         v5,
         v4,
         v12 + 16);
  if ( v7 >= 0 )
    goto LABEL_9;
LABEL_10:
  if ( v12 )
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      v22,
      v12);
  if ( v8 )
    (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 136LL))(v5);
LABEL_14:
  if ( v23 )
    LeaveCriticalSection(v6);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  return (unsigned int)v7;
}
