/*
 * XREFs of imp_WdfRegistryOpenKey @ 0x1C0009970
 * Callers:
 *     <none>
 * Callees:
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0004440 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C000A094 (-FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000A0E0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C001A2A4 (-MarkPassiveCallbacks@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001D540 (memset.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C002E818 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_qddd @ 0x1C002F86C (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_DDid @ 0x1C0056860 (WPP_IFR_SF_DDid.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00592C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005A340 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C6CE0 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C6D24 (-Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

int __fastcall imp_WdfRegistryOpenKey(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *ParentKey,
        _UNICODE_STRING *KeyName,
        ACCESS_MASK DesiredAccess,
        _WDF_OBJECT_ATTRIBUTES *KeyAttributes,
        WDFKEY__ **Key)
{
  _WDF_OBJECT_ATTRIBUTES *v6; // r14
  _FX_DRIVER_GLOBALS *DriverName; // rsi
  void *ParentObject; // rdx
  WDFKEY__ **v10; // r13
  unsigned __int8 CurrentIrql; // al
  int result; // eax
  unsigned __int16 v13; // r9
  _FX_DRIVER_GLOBALS *ContextSizeOverride; // rdx
  ULONG Tag; // r12d
  _POOL_TYPE v16; // r15d
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v18; // rbp
  int v19; // ebx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  void *v25; // rax
  FX_POOL **v26; // rax
  FX_POOL **v27; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v28; // rax
  unsigned __int64 ContextSize; // r8
  bool v30; // zf
  FxObject *Flink; // r15
  int v32; // ebp
  FX_POOL *v33; // rax
  KIRQL v34; // al
  KIRQL v35; // r13
  KIRQL v36; // r8
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *v38; // rax
  __int64 v39; // rax
  char *v40; // rax
  void (__fastcall *EvtDestroyCallback)(void *); // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rcx
  unsigned __int64 v43; // r14
  ACCESS_MASK v44; // r12d
  NTSTATUS v45; // eax
  __int64 v46; // rax
  _QWORD *i; // rax
  const _GUID *_a1; // [rsp+20h] [rbp-C8h]
  FxRegKey *pParent; // [rsp+50h] [rbp-98h] BYREF
  void *PPObject; // [rsp+58h] [rbp-90h] BYREF
  void *m_Key; // [rsp+60h] [rbp-88h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-80h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]
  KIRQL v54; // [rsp+F0h] [rbp+8h]
  FxObject *v55; // [rsp+F8h] [rbp+10h] BYREF
  _UNICODE_STRING *v56; // [rsp+100h] [rbp+18h]
  ACCESS_MASK v57; // [rsp+108h] [rbp+20h]

  v57 = DesiredAccess;
  v56 = KeyName;
  v6 = KeyAttributes;
  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( ParentKey )
  {
    pParent = 0LL;
    FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, ParentKey, 0x1006u, (void **)&pParent);
    DriverName = pParent->m_Globals;
    m_Key = pParent->m_Key;
  }
  else
  {
    m_Key = 0LL;
    if ( KeyAttributes )
    {
      if ( KeyAttributes->Size == 56 )
      {
        ParentObject = KeyAttributes->ParentObject;
        if ( ParentObject )
        {
          PPObject = 0LL;
          FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, ParentObject, 0x1000u, &PPObject);
          DriverName = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
        }
      }
      else
      {
        WPP_IFR_SF_qddd(
          (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
          0,
          6u,
          0xBu,
          WPP_FxValidateFunctions_hpp_Traceguids,
          KeyAttributes,
          56,
          KeyAttributes->Size,
          -1073741820);
      }
    }
  }
  if ( !KeyName )
    FxVerifierNullBugCheck(DriverName, retaddr);
  v10 = Key;
  if ( !Key )
    FxVerifierNullBugCheck(DriverName, retaddr);
  *Key = 0LL;
  if ( DriverName->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(DriverName, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(DriverName);
      return -1073741808;
    }
  }
  result = FxValidateObjectAttributes(DriverName, v6, 0);
  if ( result >= 0 )
  {
    result = FxValidateUnicodeString(DriverName, KeyName);
    if ( result >= 0 )
    {
      ContextSizeOverride = 0LL;
      Tag = DriverName->Tag;
      v16 = ExDefaultNonPagedPoolType;
      if ( v6 )
      {
        ContextTypeInfo = v6->ContextTypeInfo;
        if ( ContextTypeInfo )
        {
          ContextSizeOverride = (_FX_DRIVER_GLOBALS *)v6->ContextSizeOverride;
          if ( !ContextSizeOverride )
            ContextSizeOverride = (_FX_DRIVER_GLOBALS *)ContextTypeInfo->ContextSize;
        }
      }
      v18 = 176LL;
      v19 = 0;
      v20 = -1LL;
      if ( ContextSizeOverride )
      {
        v21 = ((unsigned __int64)&ContextSizeOverride->Linkage.Flink + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v21 < (unsigned __int64)ContextSizeOverride )
          goto LABEL_45;
        v22 = v21 + 176;
        v18 = -1LL;
        if ( v22 >= 0xB0 )
          v18 = v22;
        v19 = v22 < 0xB0 ? 0xC0000095 : 0;
        if ( v22 < 0xB0 )
          goto LABEL_29;
      }
      if ( DriverName->FxVerifierHandle )
      {
        v23 = v18 + 48;
        v24 = v18;
        if ( v18 + 48 >= v18 )
          v20 = v18 + 48;
        v18 = v20;
        v19 = v23 < v24 ? 0xC0000095 : 0;
      }
      if ( v19 < 0 )
      {
LABEL_29:
        WPP_IFR_SF_DDid(
          DriverName,
          (unsigned __int8)ContextSizeOverride,
          v20,
          v13,
          _a1,
          0x78u,
          0,
          (__int64)ContextSizeOverride,
          v19);
        if ( v19 < 0 )
          goto LABEL_45;
      }
      v25 = retaddr;
      if ( !DriverName->FxPoolTrackingOn )
        v25 = 0LL;
      v26 = FxPoolAllocator(DriverName, &DriverName->FxPoolFrameworks, v16, v18, Tag, v25);
      v27 = v26;
      if ( v26 )
      {
        if ( DriverName->FxVerifierHandle )
        {
          v27 = v26 + 6;
          *(_OWORD *)v26 = 0LL;
          *((_OWORD *)v26 + 1) = 0LL;
          *((_OWORD *)v26 + 2) = 0LL;
          *((_DWORD *)v26 + 8) = 1146058822;
        }
        v27[17] = 0LL;
        v27[18] = 0LL;
        v27[19] = 0LL;
        v27[20] = 0LL;
        v27[21] = 0LL;
        v27[16] = (FX_POOL *)v27;
        if ( v6 )
        {
          v28 = v6->ContextTypeInfo;
          if ( v28 )
          {
            ContextSize = v6->ContextSizeOverride;
            if ( !ContextSize )
              ContextSize = v28->ContextSize;
            memset(v27 + 22, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
            v28 = v6->ContextTypeInfo;
          }
          v27[20] = (FX_POOL *)v28;
        }
      }
      if ( v27 )
      {
        *((_DWORD *)v27 + 2) = 8392710;
        *v27 = (FX_POOL *)FxObject::`vftable';
        v27[7] = 0LL;
        *((_BYTE *)v27 + 48) = 1;
        *((_DWORD *)v27 + 6) = 0x10000;
        v27[5] = (FX_POOL *)(v27 + 4);
        v27[4] = (FX_POOL *)(v27 + 4);
        v27[10] = (FX_POOL *)(v27 + 9);
        v27[9] = (FX_POOL *)(v27 + 9);
        v27[2] = (FX_POOL *)DriverName;
        *((_DWORD *)v27 + 3) = 1;
        v27[8] = 0LL;
        v27[11] = 0LL;
        v27[12] = 0LL;
        if ( DriverName->FxVerifierOn )
          FxObject::Vf_VerifyConstruct((FxObject *)v27, ContextSizeOverride, 0);
        *((_WORD *)v27 + 12) |= 0x11u;
        *v27 = (FX_POOL *)FxRegKey::`vftable';
        v27[13] = 0LL;
        v27[14] = 0LL;
LABEL_46:
        if ( !v27 )
        {
          WPP_IFR_SF_d(DriverName, 2u, 2u, 0xAu, WPP_FxRegistryAPI_cpp_Traceguids, -1073741670);
          return -1073741670;
        }
        v30 = *((_WORD *)v27 + 5) == 0;
        Flink = 0LL;
        v55 = 0LL;
        if ( v30 )
        {
          v32 = -1073741816;
          goto LABEL_91;
        }
        if ( !v6 )
          goto LABEL_101;
        if ( v6->ExecutionLevel == WdfExecutionLevelPassive )
        {
          FxObject::MarkPassiveCallbacks((FxObject *)v27, ObjectLock);
          Flink = v55;
        }
        ContextSizeOverride = (_FX_DRIVER_GLOBALS *)v6->ParentObject;
        if ( ContextSizeOverride )
        {
          FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)v27[2], ContextSizeOverride, 0x1000u, (void **)&v55);
          Flink = v55;
        }
        else
        {
LABEL_101:
          if ( !v27[8] )
          {
            v33 = v27[2];
            if ( (FX_POOL **)v33->PagedLock.m_Lock.Event.Header.WaitListHead.Flink != v27 )
              Flink = (FxObject *)v33->PagedLock.m_Lock.Event.Header.WaitListHead.Flink;
            v55 = Flink;
          }
        }
        if ( Flink )
        {
          v34 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v27 + 7);
          v35 = v34;
          if ( *((_WORD *)v27 + 13) != 1 )
          {
            FxObject::TraceDroppedEvent((FxObject *)v27, FxObjectDroppedEventAssignParentObject);
            KeReleaseSpinLock((PKSPIN_LOCK)v27 + 7, v35);
            v32 = -1073741738;
            goto LABEL_91;
          }
          if ( v27[8] )
          {
            KeReleaseSpinLock((PKSPIN_LOCK)v27 + 7, v34);
            v32 = -1071644147;
LABEL_91:
            v46 = *((unsigned __int16 *)v27 + 5);
            if ( (_WORD)v46 )
            {
              for ( i = (FX_POOL **)((char *)v27 + v46); i; i = (_QWORD *)i[1] )
              {
                i[3] = 0LL;
                i[2] = 0LL;
              }
            }
            *((_WORD *)v27 + 12) &= ~0x400u;
            ((void (__fastcall *)(FX_POOL **))(*v27)->PagedLock.m_Lock.Owner)(v27);
            return v32;
          }
          v36 = KeAcquireSpinLockRaiseToDpc(&Flink->m_SpinLock.m_Lock);
          v54 = v36;
          if ( Flink->m_ObjectState == 1 )
          {
            Blink = Flink->m_ChildListHead.Blink;
            v38 = (_LIST_ENTRY *)(v27 + 9);
            if ( Blink->Flink != &Flink->m_ChildListHead )
              __fastfail(3u);
            v38->Flink = &Flink->m_ChildListHead;
            v27[10] = (FX_POOL *)Blink;
            Blink->Flink = v38;
            Flink->m_ChildListHead.Blink = v38;
            if ( !v27[12] )
              v27[12] = (FX_POOL *)Flink->m_DeviceBase;
            KeReleaseSpinLock(&Flink->m_SpinLock.m_Lock, v36);
            v32 = 0;
            v27[8] = (FX_POOL *)Flink;
          }
          else
          {
            FxObject::TraceDroppedEvent(Flink, FxObjectDroppedEventAddChildObjectInternal);
            KeReleaseSpinLock(&Flink->m_SpinLock.m_Lock, v54);
            v32 = -1073741738;
          }
          KeReleaseSpinLock((PKSPIN_LOCK)v27 + 7, v35);
          if ( v32 < 0 )
            goto LABEL_91;
          v10 = Key;
        }
        if ( v6 )
        {
          v39 = *((unsigned __int16 *)v27 + 5);
          if ( (_WORD)v39 )
            v40 = (char *)v27 + v39;
          else
            v40 = 0LL;
          EvtDestroyCallback = v6->EvtDestroyCallback;
          if ( EvtDestroyCallback )
            *((_QWORD *)v40 + 3) = EvtDestroyCallback;
          EvtCleanupCallback = v6->EvtCleanupCallback;
          if ( EvtCleanupCallback )
          {
            *((_QWORD *)v40 + 2) = EvtCleanupCallback;
            *((_WORD *)v27 + 12) |= 0x400u;
          }
        }
        *((_WORD *)v27 + 12) |= 8u;
        v43 = (unsigned __int64)v27 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !*((_WORD *)v27 + 5) )
          v43 = 0LL;
        if ( LOBYTE(v27[2][1].PeakPagedAllocations) )
          FxObject::Vf_VerifyLeakDetectionConsiderObject((FxObject *)v27, ContextSizeOverride);
        v44 = v57;
        ObjectAttributes.RootDirectory = m_Key;
        ObjectAttributes.ObjectName = v56;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v45 = ZwOpenKey((PHANDLE)v27 + 14, v57, &ObjectAttributes);
        v32 = v45;
        if ( v45 < 0 )
        {
          WPP_IFR_SF_d(DriverName, 2u, 2u, 0xBu, WPP_FxRegistryAPI_cpp_Traceguids, v45);
        }
        else
        {
          if ( (v44 & 0x50030006) != 0 )
            FxRegKey::_VerifyStateSeparationRegistryPolicy((_FX_DRIVER_GLOBALS *)v27[2], v27[14]);
          *v10 = (WDFKEY__ *)v43;
        }
        if ( v32 >= 0 )
          return v32;
        goto LABEL_91;
      }
LABEL_45:
      v27 = 0LL;
      goto LABEL_46;
    }
  }
  return result;
}
