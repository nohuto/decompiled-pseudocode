/*
 * XREFs of ?RegisterProcess@CpuManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x140040450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?GetNode@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@AEBAPEAVCNode@12@KAEAI0AEAPEAV312@@Z @ 0x14003F3BC (-GetNode@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElem.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@CpuManager@@@6@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140040B58 (-RemoveAtPos@-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@CpuManager@@V-$CElementTrait.c)
 *     ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@CpuManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@CpuManager@@@Z @ 0x140040D20 (-SetAt@-$CAtlMap@KUListValue@HandleRegistrations@CpuManager@@V-$CElementTraits@K@ATL@@V-$CElemen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CpuManager::RegisterProcess(CpuManager *this, void *a2, struct ProcessRegistrationToken__ **a3)
{
  struct ProcessRegistrationToken__ **v3; // r12
  void *v4; // r13
  CpuManager *v5; // r14
  DWORD ProcessId; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v8; // esi
  char v9; // di
  __int64 Node; // rax
  __int64 v11; // rbx
  ATL::CAtlException *v13; // rbx
  DWORD v14; // [rsp+30h] [rbp-98h]
  int v15; // [rsp+30h] [rbp-98h]
  __int64 v16; // [rsp+38h] [rbp-90h]
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+40h] [rbp-88h]
  unsigned int v18; // [rsp+48h] [rbp-80h] BYREF
  int v19; // [rsp+4Ch] [rbp-7Ch] BYREF
  char *v20; // [rsp+50h] [rbp-78h]
  char *v21; // [rsp+58h] [rbp-70h]
  __int128 v22; // [rsp+60h] [rbp-68h] BYREF
  char *v23; // [rsp+70h] [rbp-58h]
  __int64 v24; // [rsp+78h] [rbp-50h] BYREF
  ATL::CAtlException *v25; // [rsp+80h] [rbp-48h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = this;
  ProcessId = GetProcessId(a2);
  v14 = ProcessId;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 16);
  v21 = (char *)v5 + 16;
  v17 = (struct _RTL_CRITICAL_SECTION *)((char *)v5 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v5 + 16));
  v23 = (char *)v5 + 16;
  v8 = (*(__int64 (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 128LL))(v5);
  if ( v8 < 0 )
    goto LABEL_14;
  v9 = 1;
  v20 = (char *)v5 + 56;
  Node = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::GetNode(
           (__int64)v5 + 56,
           ProcessId,
           &v19,
           &v18,
           &v24);
  v11 = Node;
  if ( Node )
  {
    _InterlockedAdd((volatile signed __int32 *)(Node + 8), 1u);
LABEL_9:
    *v3 = (struct ProcessRegistrationToken__ *)v11;
    v11 = 0LL;
    v9 = 0;
    v8 = 0;
    goto LABEL_10;
  }
  try
  {
    v22 = 0LL;
    LODWORD(v22) = 1;
    v11 = ATL::CAtlMap<unsigned long,CpuManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<CpuManager::HandleRegistrations::ListValue>>::SetAt(
            (char *)v5 + 56,
            v14,
            &v22);
    v16 = v11;
  }
  catch ( ATL::CAtlException *v25 )
  {
    v13 = v25;
    if ( *(_DWORD *)v25 == -1073741571 )
      _o__resetstkoflw();
    v15 = *(_DWORD *)v13;
    v8 = *(_DWORD *)v13;
    v5 = this;
    v11 = v16;
    v9 = 1;
    v7 = v17;
    if ( v15 < 0 )
      goto LABEL_10;
    v3 = a3;
    v4 = a2;
  }
  v8 = (*(__int64 (__fastcall **)(CpuManager *, void *, __int64))(*(_QWORD *)v5 + 80LL))(v5, v4, v11 + 16);
  if ( v8 >= 0 )
    goto LABEL_9;
LABEL_10:
  if ( v11 )
    ATL::CAtlMap<IUnknown *,CpuManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<CpuManager::DeviceRegistrations::ListValue>>::RemoveAtPos(
      v20,
      v11);
  if ( v9 )
    (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v5 + 136LL))(v5);
LABEL_14:
  if ( v21 )
    LeaveCriticalSection(v7);
  return (unsigned int)v8;
}
