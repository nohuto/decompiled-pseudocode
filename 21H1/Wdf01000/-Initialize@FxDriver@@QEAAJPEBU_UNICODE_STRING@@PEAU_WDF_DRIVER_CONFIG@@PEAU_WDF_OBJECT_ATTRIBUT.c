/*
 * XREFs of ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0053C20
 * Callers:
 *     imp_WdfDriverCreate @ 0x1C004BE30 (imp_WdfDriverCreate.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?_RequiresRemLock@FxDevice@@SA?AW4FxDeviceRemLockAction@@EE@Z @ 0x1C0013798 (-_RequiresRemLock@FxDevice@@SA-AW4FxDeviceRemLockAction@@EE@Z.c)
 *     memmove @ 0x1C001D440 (memmove.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C003BBCC (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?ConfigureConstraints@FxDriver@@QEAAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0053AE0 (-ConfigureConstraints@FxDriver@@QEAAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     WPP_IFR_SF_qZ @ 0x1C00540FC (WPP_IFR_SF_qZ.c)
 *     ?_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C00552D8 (-_Create@FxDisposeList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ?AllocateDriverObjectExtensionAndStoreFxDriver@FxDriver@@QEAAJXZ @ 0x1C00555CC (-AllocateDriverObjectExtensionAndStoreFxDriver@FxDriver@@QEAAJXZ.c)
 */

__int64 __fastcall FxDriver::Initialize(
        FxDriver *this,
        const _UNICODE_STRING *ArgRegistryPath,
        _WDF_DRIVER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DriverAttributes)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _DRIVER_OBJECT *m_DriverObject; // rdx
  int DriverObjectExtensionAndStoreFxDriver; // ebx
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  unsigned __int16 Length; // ax
  _FX_DRIVER_GLOBALS *v14; // rcx
  unsigned __int64 v15; // rbp
  FX_POOL **v16; // rax
  __int64 (__fastcall *v17)(_DEVICE_OBJECT *, _IRP *); // rdx
  _DRIVER_EXTENSION *DriverExtension; // rcx
  bool v19; // zf
  __int64 v20; // r9
  __int64 (__fastcall *v21)(_DEVICE_OBJECT *, _IRP *); // rcx
  const _GUID *Tag; // [rsp+20h] [rbp-38h]
  void *Caller; // [rsp+58h] [rbp+0h]

  m_Globals = this->m_Globals;
  FxObject::MarkNoDeleteDDI(this, ObjectLock);
  this->m_ObjectFlags |= 0x800u;
  FxDriver::ConfigureConstraints(this, DriverAttributes);
  m_DriverObject = this->m_DriverObject.m_DriverObject;
  if ( m_DriverObject )
  {
    DriverObjectExtensionAndStoreFxDriver = FxDisposeList::_Create(m_Globals, m_DriverObject, &this->m_DisposeList);
    if ( DriverObjectExtensionAndStoreFxDriver >= 0 )
    {
      DriverObjectExtensionAndStoreFxDriver = FxDriver::AllocateDriverObjectExtensionAndStoreFxDriver(this);
      if ( DriverObjectExtensionAndStoreFxDriver >= 0 )
      {
        if ( (Config->DriverInitFlags & 2) == 0 )
        {
          this->m_DriverDeviceAdd.Method = Config->EvtDriverDeviceAdd;
          this->m_DriverUnload.Method = Config->EvtDriverUnload;
        }
        if ( ArgRegistryPath )
        {
          Length = ArgRegistryPath->Length;
          v14 = this->m_Globals;
          this->m_RegistryPath.Length = ArgRegistryPath->Length;
          v15 = (unsigned __int16)(Length + 2);
          this->m_RegistryPath.MaximumLength = Length + 2;
          v16 = FxPoolAllocator(v14, &v14->FxPoolFrameworks, 1u, v15, v14->Tag, Caller);
          this->m_RegistryPath.Buffer = (wchar_t *)v16;
          if ( v16 )
          {
            memmove(v16, ArgRegistryPath->Buffer, ArgRegistryPath->Length);
            this->m_RegistryPath.Buffer[(v15 >> 1) - 1] = 0;
          }
          else
          {
            *(_DWORD *)&this->m_RegistryPath.Length = 0;
            DriverObjectExtensionAndStoreFxDriver = -1073741670;
          }
        }
        if ( m_Globals->IsDriverCompanion )
        {
          this->m_DriverObject.m_DriverObject->DriverExtension->AddDevice = FxDriver::AddDevice;
          this->m_DriverObject.m_DriverObject->DriverUnload = FxDriver::Unload;
        }
        else if ( DriverObjectExtensionAndStoreFxDriver >= 0 )
        {
          LODWORD(v17) = Config->DriverInitFlags;
          if ( ((unsigned __int8)v17 & 2) == 0 )
          {
            DriverExtension = this->m_DriverObject.m_DriverObject->DriverExtension;
            if ( ((unsigned __int8)v17 & 1) != 0 )
            {
              DriverExtension->AddDevice = 0LL;
              this->m_DriverObject.m_DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))((unsigned __int64)FxDriver::Unload & -(__int64)(Config->EvtDriverUnload != 0LL));
            }
            else
            {
              DriverExtension->AddDevice = FxDriver::AddDevice;
              this->m_DriverObject.m_DriverObject->DriverUnload = FxDriver::Unload;
            }
            LOBYTE(v11) = 0;
            do
            {
              v19 = (unsigned int)FxDevice::_RequiresRemLock(v11, 0) == 0;
              v21 = (__int64 (__fastcall *)(_DEVICE_OBJECT *, _IRP *))FxDevice::Dispatch;
              v17 = FxDevice::DispatchWithLock;
              if ( !v19 )
                v21 = FxDevice::DispatchWithLock;
              LOBYTE(v11) = v11 + 1;
              *(_QWORD *)((char *)&this->m_DriverObject.m_DriverObject->Type + v20) = v21;
              v12 = v20 + 8;
            }
            while ( (unsigned __int8)v11 <= 0x1Bu );
          }
          if ( (_BYTE)KdDebuggerEnabled == 1 && !(_BYTE)KdDebuggerNotPresent )
            this->m_DebuggerConnected = 1;
          if ( (Config->DriverInitFlags & 1) != 0 && !Config->EvtDriverUnload )
            WPP_IFR_SF_qZ(
              m_Globals,
              (unsigned __int8)v17,
              v11,
              v12,
              Tag,
              this->m_DriverObject.m_DriverObject,
              &this->m_RegistryPath);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)DriverObjectExtensionAndStoreFxDriver;
}
