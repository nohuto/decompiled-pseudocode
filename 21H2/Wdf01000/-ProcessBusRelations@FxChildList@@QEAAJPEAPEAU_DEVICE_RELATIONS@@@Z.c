/*
 * XREFs of ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0017820
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0017668 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001812C (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0018288 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C001F658 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqq @ 0x1C0030348 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C005BA9C (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C005C7B0 (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 */

__int64 __fastcall FxChildList::ProcessBusRelations(FxChildList *this, _DEVICE_RELATIONS **DeviceRelations)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _DEVICE_RELATIONS *v4; // r14
  KIRQL v5; // al
  _LIST_ENTRY *p_m_DescriptionListHead; // rbp
  _LIST_ENTRY *Flink; // r15
  char v8; // r12
  int v9; // ebx
  KIRQL v10; // r13
  int *_a3; // r15
  int v12; // r12d
  unsigned __int8 v13; // bp
  KIRQL v14; // al
  KIRQL v15; // bl
  int v17; // eax
  __int64 v18; // rdx
  _LIST_ENTRY *v19; // rbx
  _DEVICE_OBJECT *v20; // rbx
  const void *v21; // rax
  __int64 v22; // rdx
  const void *ObjectHandleUnchecked; // rax
  __int64 v24; // r8
  _LIST_ENTRY *v25; // rbx
  _LIST_ENTRY *v26; // r12
  const void *v27; // rax
  __int64 v28; // r8
  const void *_a1; // rax
  const void *v30; // rax
  const void *v31; // rax
  _LIST_ENTRY *v32; // rbx
  int v33; // eax
  const void *v34; // rax
  __int64 v35; // rdx
  const void *v36; // rax
  __int64 v37; // rdx
  const void *v38; // rax
  __int64 v39; // rdx
  const void *v40; // rax
  __int64 v41; // rdx
  int v42; // edx
  const void *v43; // rax
  int v44; // edx
  size_t v45; // r8
  const void *v46; // rax
  __int64 v47; // rdx
  const void *v48; // rax
  __int64 v49; // rdx
  PVOID *Objects; // rbx
  __int64 Count; // rdi
  unsigned __int8 invalidateRelations[8]; // [rsp+40h] [rbp-78h] BYREF
  int *v53; // [rsp+48h] [rbp-70h]
  _LIST_ENTRY *v54; // [rsp+50h] [rbp-68h]
  _DEVICE_RELATIONS *Pool2; // [rsp+58h] [rbp-60h]
  _LIST_ENTRY freeHead; // [rsp+60h] [rbp-58h] BYREF
  char v57; // [rsp+C0h] [rbp+8h]
  _LIST_ENTRY *v58; // [rsp+C0h] [rbp+8h]
  char v60; // [rsp+D0h] [rbp+18h]
  KIRQL NewIrql; // [rsp+D8h] [rbp+20h]
  KIRQL NewIrqla; // [rsp+D8h] [rbp+20h]

  FxVerifierCheckIrqlLevel(this->m_Globals, 0);
  m_Globals = this->m_Globals;
  v60 = 1;
  v57 = 0;
  v4 = 0LL;
  invalidateRelations[0] = 0;
  freeHead.Blink = &freeHead;
  freeHead.Flink = &freeHead;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  this->m_State = ListLockedForEnum;
  Flink = this->m_DescriptionListHead.Flink;
  v8 = 0;
  v9 = 0;
  NewIrql = 0;
  v10 = v5;
  if ( Flink != &this->m_DescriptionListHead )
  {
    do
    {
      v17 = (int)Flink[1].Flink;
      if ( v17 > 0 )
      {
        if ( v17 > 2 )
        {
          if ( v17 == 4 )
          {
            if ( m_Globals->FxVerboseOn )
            {
              ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)Flink[4].Flink);
              WPP_IFR_SF_qq(
                m_Globals,
                5u,
                0xCu,
                0x22u,
                WPP_FxChildList_cpp_Traceguids,
                ObjectHandleUnchecked,
                *(const void **)(v24 + 144));
            }
            v8 = 1;
          }
        }
        else
        {
          ++v9;
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_DescriptionListHead );
    NewIrql = v8;
    v4 = 0LL;
  }
  KeReleaseSpinLock(&this->m_ListLock, v10);
  _a3 = (int *)*DeviceRelations;
  v53 = (int *)*DeviceRelations;
  if ( v9 )
  {
    if ( _a3 )
      v9 += *_a3;
  }
  else
  {
    if ( !v8 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x24u, WPP_FxChildList_cpp_Traceguids, _a1);
      }
LABEL_6:
      v60 = 0;
      v12 = -1073741637;
      goto LABEL_7;
    }
    if ( _a3 )
    {
      v25 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
      {
        do
        {
          v26 = v25->Flink;
          if ( LODWORD(v25[1].Flink) == 4 )
          {
            v27 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v25[4].Flink);
            WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x23u, WPP_FxChildList_cpp_Traceguids, v27, *(const void **)(v28 + 144));
            LODWORD(v25[1].Flink) = 3;
            BYTE3(v25[5].Flink) = 1;
          }
          v25 = v26;
        }
        while ( v26 != p_m_DescriptionListHead );
        _a3 = v53;
      }
      goto LABEL_6;
    }
  }
  if ( v9 )
    v18 = 8LL * (unsigned int)(v9 - 1) + 16;
  else
    v18 = 4LL;
  Pool2 = (_DEVICE_RELATIONS *)ExAllocatePool2(256LL, v18, m_Globals->Tag);
  v4 = Pool2;
  if ( !Pool2 )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xCu, 0x25u, WPP_FxChildList_cpp_Traceguids, v9);
    ++this->m_EnumRetries;
    v12 = -1073741637;
    v60 = 0;
    LODWORD(v53) = -1073741637;
    if ( this->m_EnumRetries > 3u )
    {
      if ( NewIrql )
      {
        v30 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0x26u, WPP_FxChildList_cpp_Traceguids, v30);
      }
      v31 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qL(m_Globals, 2u, 0xCu, 0x27u, WPP_FxChildList_cpp_Traceguids, v31, 3u);
    }
    else
    {
      v57 = 1;
    }
    if ( _a3 )
    {
      v32 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
      {
        do
        {
          v54 = v32->Flink;
          v33 = (int)v32[1].Flink;
          if ( v33 == 2 )
          {
            v36 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v32[4].Flink);
            WPP_IFR_SF_qqq(
              m_Globals,
              4u,
              0xCu,
              0x28u,
              WPP_FxChildList_cpp_Traceguids,
              v36,
              *(const void **)(v37 + 144),
              _a3);
            NewIrqla = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
            if ( this->m_StaticList )
            {
              v40 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v32[4].Flink);
              WPP_IFR_SF_qq(
                m_Globals,
                3u,
                0xCu,
                0x2Au,
                WPP_FxChildList_cpp_Traceguids,
                v40,
                *(const void **)(v41 + 144));
            }
            else if ( FxChildList::ReenumerateEntryLocked(this, (FxDeviceDescriptionEntry *)v32, 1u) )
            {
              v38 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v32[4].Flink);
              WPP_IFR_SF_qq(
                m_Globals,
                4u,
                0xCu,
                0x29u,
                WPP_FxChildList_cpp_Traceguids,
                v38,
                *(const void **)(v39 + 144));
              FxChildList::CloneEntryLocked(this, &freeHead, (FxDeviceDescriptionEntry *)v32, 1u);
            }
            LODWORD(v32[1].Flink) = 3;
            BYTE3(v32[5].Flink) = 1;
            KeReleaseSpinLock(&this->m_ListLock, NewIrqla);
          }
          else if ( v33 == 4 )
          {
            v34 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v32[4].Flink);
            WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x2Bu, WPP_FxChildList_cpp_Traceguids, v34, *(const void **)(v35 + 144));
            LODWORD(v32[1].Flink) = 3;
            BYTE3(v32[5].Flink) = 1;
          }
          v32 = v54;
        }
        while ( v54 != p_m_DescriptionListHead );
        v4 = Pool2;
        v12 = (int)v53;
      }
    }
    else
    {
      v12 = -1073741670;
    }
    goto LABEL_7;
  }
  if ( _a3 )
  {
    v42 = *_a3;
    if ( *_a3 )
    {
      if ( !m_Globals->FxVerboseOn
        || (v43 = (const void *)FxObject::GetObjectHandleUnchecked(this),
            WPP_IFR_SF_qqd(m_Globals, 5u, 0xCu, 0x2Cu, WPP_FxChildList_cpp_Traceguids, v43, _a3, v44),
            (v42 = *_a3) != 0) )
      {
        v45 = 8LL * (unsigned int)(v42 - 1) + 16;
      }
      else
      {
        v45 = 4LL;
      }
      memmove(Pool2, _a3, v45);
    }
  }
  v19 = p_m_DescriptionListHead->Flink;
  v12 = 0;
  if ( p_m_DescriptionListHead->Flink == p_m_DescriptionListHead )
  {
LABEL_7:
    v13 = v57;
    goto $Done_6;
  }
  do
  {
    v58 = v19->Flink;
    switch ( LODWORD(v19[1].Flink) )
    {
      case 1:
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x2Du, WPP_FxChildList_cpp_Traceguids);
        if ( FxChildList::CreateDevice(this, (FxDeviceDescriptionEntry *)v19, invalidateRelations) )
        {
          v21 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v19[4].Flink);
          WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x2Eu, WPP_FxChildList_cpp_Traceguids, v21, *(const void **)(v22 + 144));
LABEL_28:
          if ( m_Globals->FxVerboseOn )
          {
            v48 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v19[4].Flink);
            WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x2Fu, WPP_FxChildList_cpp_Traceguids, v48, *(const void **)(v49 + 144));
          }
          v20 = (_DEVICE_OBJECT *)v19[4].Flink[9].Flink;
          ObfReferenceObject(v20);
          v4->Objects[v4->Count++] = v20;
        }
        break;
      case 2:
        goto LABEL_28;
      case 4:
        v46 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v19[4].Flink);
        WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x30u, WPP_FxChildList_cpp_Traceguids, v46, *(const void **)(v47 + 144));
        LODWORD(v19[1].Flink) = 3;
        BYTE3(v19[5].Flink) = 1;
        break;
    }
    v19 = v58;
  }
  while ( v58 != p_m_DescriptionListHead );
  v13 = invalidateRelations[0];
  _a3 = v53;
$Done_6:
  v14 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  this->m_State = ListUnlocked;
  v15 = v14;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  if ( v12 >= 0 )
    this->m_EnumRetries = 0;
  KeReleaseSpinLock(&this->m_ListLock, v15);
  if ( v13 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, BusRelations);
  FxChildList::DrainFreeListHead(this, &freeHead);
  if ( v60 )
  {
    if ( _a3 )
    {
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x31u, WPP_FxChildList_cpp_Traceguids, _a3);
      ExFreePoolWithTag(_a3, 0);
    }
    if ( v12 < 0 && v4 )
    {
      if ( v4->Count )
      {
        Objects = (PVOID *)v4->Objects;
        Count = v4->Count;
        do
        {
          ObfDereferenceObject(*Objects++);
          --Count;
        }
        while ( Count );
      }
      ExFreePoolWithTag(v4, 0);
      v4 = 0LL;
    }
    *DeviceRelations = v4;
  }
  return (unsigned int)v12;
}
