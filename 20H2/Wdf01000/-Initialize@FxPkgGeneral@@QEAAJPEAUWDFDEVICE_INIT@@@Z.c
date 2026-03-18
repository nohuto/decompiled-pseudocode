/*
 * XREFs of ?Initialize@FxPkgGeneral@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C008D300
 * Callers:
 *     ?CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0051010 (-CreateDevice@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009330 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ??0FxFileObjectInfo@@QEAA@XZ @ 0x1C008CBBC (--0FxFileObjectInfo@@QEAA@XZ.c)
 *     ?ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C008CD34 (-ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     ?ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C008CF6C (-ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall FxPkgGeneral::Initialize(FxPkgGeneral *this, WDFDEVICE_INIT *DeviceInit)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FX_POOL **v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  unsigned __int16 v9; // r9
  _LIST_ENTRY *Blink; // rdx
  unsigned int v11; // eax
  _LIST_ENTRY *p_CxDeviceInitListHead; // r14
  _LIST_ENTRY *i; // rbx
  FX_POOL **v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  _LIST_ENTRY *v17; // rdx
  unsigned int v18; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  m_Globals = this->m_Globals;
  if ( DeviceInit->FileObject.Set )
  {
    v5 = FxPoolAllocator(
           m_Globals,
           &m_Globals->FxPoolFrameworks,
           ExDefaultNonPagedPoolType,
           0xA0uLL,
           m_Globals->Tag,
           retaddr);
    if ( v5 )
    {
      FxFileObjectInfo::FxFileObjectInfo((FxFileObjectInfo *)v5);
      v7 = v6;
    }
    else
    {
      v7 = 0LL;
    }
    if ( !v7 )
    {
      v8 = -1073741670;
      v9 = 10;
LABEL_7:
      WPP_IFR_SF_d(m_Globals, 2u, 0x12u, v9, WPP_FxPkgGeneral_cpp_Traceguids, -1073741670);
      return (unsigned int)v8;
    }
    *(_BYTE *)(v7 + 148) = 0;
    *(_DWORD *)(v7 + 80) = DeviceInit->FileObject.Class;
    *(_OWORD *)(v7 + 88) = *(_OWORD *)&DeviceInit->FileObject.Attributes.Size;
    *(_OWORD *)(v7 + 104) = *(_OWORD *)&DeviceInit->FileObject.Attributes.EvtDestroyCallback;
    *(_OWORD *)(v7 + 120) = *(_OWORD *)&DeviceInit->FileObject.Attributes.ParentObject;
    *(_QWORD *)(v7 + 136) = DeviceInit->FileObject.Attributes.ContextTypeInfo;
    *(_DWORD *)(v7 + 144) = DeviceInit->FileObject.AutoForwardCleanupClose;
    *(_QWORD *)(v7 + 24) = DeviceInit->FileObject.Callbacks.EvtDeviceFileCreate;
    *(_QWORD *)(v7 + 56) = DeviceInit->FileObject.Callbacks.EvtFileCleanup;
    *(_QWORD *)(v7 + 72) = DeviceInit->FileObject.Callbacks.EvtFileClose;
    Blink = this->m_FileObjectInfoHeadList.Blink;
    if ( Blink->Flink != &this->m_FileObjectInfoHeadList )
LABEL_24:
      __fastfail(3u);
    *(_QWORD *)v7 = &this->m_FileObjectInfoHeadList;
    *(_QWORD *)(v7 + 8) = Blink;
    Blink->Flink = (_LIST_ENTRY *)v7;
    this->m_FileObjectInfoHeadList.Blink = (_LIST_ENTRY *)v7;
    v11 = this->m_Flags | 2;
    this->m_Flags = v11;
    if ( *(_QWORD *)(v7 + 24) )
      this->m_Flags = v11 | 8;
  }
  p_CxDeviceInitListHead = &DeviceInit->CxDeviceInitListHead;
  for ( i = DeviceInit->CxDeviceInitListHead.Flink; i != p_CxDeviceInitListHead; i = i->Flink )
  {
    if ( BYTE4(i[13].Flink) )
    {
      v14 = FxPoolAllocator(
              m_Globals,
              &m_Globals->FxPoolFrameworks,
              ExDefaultNonPagedPoolType,
              0xA0uLL,
              m_Globals->Tag,
              retaddr);
      if ( v14 )
      {
        FxFileObjectInfo::FxFileObjectInfo((FxFileObjectInfo *)v14);
        v16 = v15;
      }
      else
      {
        v16 = 0LL;
      }
      if ( !v16 )
      {
        v8 = -1073741670;
        v9 = 11;
        goto LABEL_7;
      }
      *(_BYTE *)(v16 + 148) = 1;
      *(_DWORD *)(v16 + 80) = i[6].Blink;
      *(_LIST_ENTRY *)(v16 + 88) = i[7];
      *(_LIST_ENTRY *)(v16 + 104) = i[8];
      *(_LIST_ENTRY *)(v16 + 120) = i[9];
      *(_QWORD *)(v16 + 136) = i[10].Flink;
      *(_DWORD *)(v16 + 144) = i[13].Flink;
      *(_QWORD *)(v16 + 40) = i[11].Flink;
      *(_QWORD *)(v16 + 56) = i[12].Flink;
      *(_QWORD *)(v16 + 72) = i[11].Blink;
      *(_QWORD *)(v16 + 152) = i[40].Blink;
      v17 = this->m_FileObjectInfoHeadList.Blink;
      if ( v17->Flink != &this->m_FileObjectInfoHeadList )
        goto LABEL_24;
      *(_QWORD *)v16 = &this->m_FileObjectInfoHeadList;
      *(_QWORD *)(v16 + 8) = v17;
      v17->Flink = (_LIST_ENTRY *)v16;
      this->m_FileObjectInfoHeadList.Blink = (_LIST_ENTRY *)v16;
      v18 = this->m_Flags | 1;
      this->m_Flags = v18;
      if ( *(_QWORD *)(v16 + 40) )
        this->m_Flags = v18 | 4;
    }
  }
  if ( this->m_FileObjectInfoHeadList.Flink == &this->m_FileObjectInfoHeadList )
  {
    return 0;
  }
  else
  {
    v8 = FxPkgGeneral::ConfigureConstraints(this, &this->m_FileObjectInfoHeadList);
    if ( v8 >= 0 )
    {
      v8 = FxPkgGeneral::ConfigureFileObjectClass(this, &this->m_FileObjectInfoHeadList);
      if ( v8 >= 0 )
        return 0;
    }
  }
  return (unsigned int)v8;
}
