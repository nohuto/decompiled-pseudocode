/*
 * XREFs of ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0090EC0
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C000AD0C (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0067200 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C006B6EC (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C0072110 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 * Callees:
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C000B08C (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C000B0E4 (WPP_IFR_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_dd @ 0x1C002DEC8 (WPP_IFR_SF_dd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1C005B3BC (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C005B5EC (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     FxProbeAndLockWithAccess @ 0x1C0090ADC (FxProbeAndLockWithAccess.c)
 */

__int64 __fastcall FxRequestBuffer::GetOrAllocateMdl(
        FxRequestBuffer *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _MDL **Mdl,
        _MDL **MdlToFree,
        unsigned __int8 *UnlockWhenFreed,
        _LOCK_OPERATION Operation,
        unsigned __int8 ReuseMdl,
        unsigned __int64 *SizeOfMdl)
{
  __int64 result; // rax
  _WDFMEMORY_OFFSET *Offsets; // rax
  char *v14; // rbp
  signed int BufferLength; // r12d
  SIZE_T v16; // rax
  unsigned __int64 v17; // r13
  _MDL *v18; // rcx
  _MDL *Debug; // rax
  _MDL *v20; // rax
  __int64 (*GetBuffer)(void); // rax
  unsigned __int64 Memory; // rbp
  unsigned int v23; // eax
  __int64 v24; // r13
  SIZE_T v25; // rax
  unsigned int v26; // edx
  unsigned __int8 v27; // r12
  _MDL *v28; // rcx
  _MDL *v29; // rax
  _MDL *v30; // r8
  signed int v31; // eax
  unsigned int v32; // edi
  unsigned __int8 Irp; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v35; // [rsp+70h] [rbp+8h]

  *UnlockWhenFreed = 0;
  if ( this->DataType == FxRequestBufferUnspecified )
  {
    result = 0LL;
    goto LABEL_68;
  }
  if ( this->DataType != FxRequestBufferMemory )
  {
    if ( this->DataType == FxRequestBufferMdl )
    {
      v20 = this->u.Mdl.Mdl;
      goto LABEL_31;
    }
    if ( this->DataType != FxRequestBufferBuffer )
    {
      if ( this->DataType != FxRequestBufferReferencedMdl )
      {
        result = 3221225485LL;
LABEL_68:
        *Mdl = 0LL;
        return result;
      }
      Offsets = this->u.Memory.Offsets;
      if ( Offsets && (Offsets->BufferOffset || Offsets->BufferLength) )
      {
        v14 = (char *)this->u.RefMdl.Mdl->StartVa + this->u.RefMdl.Mdl->ByteOffset + Offsets->BufferOffset;
        BufferLength = FxRequestBuffer::GetBufferLength(this);
        v16 = MmSizeOfMdl(v14, BufferLength);
        v17 = v16;
        if ( ReuseMdl && v16 <= *SizeOfMdl )
        {
          v18 = *MdlToFree;
          if ( ((*MdlToFree)->MdlFlags & 0x20) != 0 )
          {
            MmUnmapLockedPages(v18->MappedSystemVa, *MdlToFree);
            v18 = *MdlToFree;
          }
          *Mdl = v18;
LABEL_27:
          IoBuildPartialMdl(this->u.RefMdl.Mdl, v18, v14, BufferLength);
LABEL_63:
          *MdlToFree = *Mdl;
          return 0LL;
        }
        if ( *MdlToFree )
        {
          if ( FxDriverGlobals->FxVerifierOn )
            FxMdlFreeDebug(FxDriverGlobals, *MdlToFree);
          else
            IoFreeMdl(*MdlToFree);
          *MdlToFree = 0LL;
          if ( SizeOfMdl )
            *SizeOfMdl = 0LL;
        }
        if ( FxDriverGlobals->FxVerifierOn )
          Debug = FxMdlAllocateDebug(FxDriverGlobals, 0LL, v14, BufferLength, Irp, 0, retaddr);
        else
          Debug = IoAllocateMdl(v14, BufferLength, 0, 0, 0LL);
        *Mdl = Debug;
        v18 = Debug;
        if ( Debug )
        {
          if ( SizeOfMdl )
          {
            *SizeOfMdl = v17;
            v18 = *Mdl;
          }
          goto LABEL_27;
        }
        WPP_IFR_SF_dd(FxDriverGlobals, 2u, 6u, 0xCu, WPP_FxRequestBufferKm_cpp_Traceguids, BufferLength, -1073741670);
        return 3221225626LL;
      }
      v20 = this->u.RefMdl.Mdl;
LABEL_31:
      *Mdl = v20;
      return 0LL;
    }
    goto LABEL_36;
  }
  GetBuffer = (__int64 (*)(void))this->u.Memory.Memory->GetBuffer;
  if ( this->u.Memory.Offsets )
    Memory = this->u.Memory.Offsets->BufferOffset + GetBuffer();
  else
    Memory = GetBuffer();
  if ( !Memory )
LABEL_36:
    Memory = (unsigned __int64)this->u.Memory.Memory;
  v23 = FxRequestBuffer::GetBufferLength(this);
  v24 = v23;
  v25 = MmSizeOfMdl((PVOID)Memory, (int)v23);
  v27 = ReuseMdl;
  v35 = v25;
  if ( ReuseMdl && v25 <= *SizeOfMdl )
  {
    v28 = *MdlToFree;
    if ( ((*MdlToFree)->MdlFlags & 0x20) != 0 )
    {
      MmUnmapLockedPages(v28->MappedSystemVa, *MdlToFree);
      v28 = *MdlToFree;
    }
    *Mdl = v28;
    goto LABEL_54;
  }
  v27 = 0;
  if ( *MdlToFree )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      FxMdlFreeDebug(FxDriverGlobals, *MdlToFree);
    else
      IoFreeMdl(*MdlToFree);
    *MdlToFree = 0LL;
    if ( SizeOfMdl )
      *SizeOfMdl = 0LL;
  }
  if ( FxDriverGlobals->FxVerifierOn )
    v29 = FxMdlAllocateDebug(FxDriverGlobals, 0LL, (void *)Memory, v24, Irp, 0, retaddr);
  else
    v29 = IoAllocateMdl((PVOID)Memory, v24, 0, 0, 0LL);
  *Mdl = v29;
  if ( !v29 )
  {
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 6u, 0xAu, WPP_FxRequestBufferKm_cpp_Traceguids, v24, -1073741670);
    return 3221225626LL;
  }
  if ( SizeOfMdl )
  {
    *SizeOfMdl = v35;
LABEL_54:
    if ( v27 == 1 )
    {
      v30 = *Mdl;
      v30->Next = 0LL;
      v30->MdlFlags = 0;
      v26 = Memory & 0xFFF;
      v30->Size = 8 * ((((Memory & 0xFFF) + v24 + 4095) >> 12) + 6);
      v30->ByteOffset = v26;
      v30->StartVa = (void *)(Memory & 0xFFFFFFFFFFFFF000uLL);
      v30->ByteCount = v24;
    }
  }
  v31 = FxProbeAndLockWithAccess(*Mdl, v26, Operation);
  v32 = v31;
  if ( v31 >= 0 )
  {
    *UnlockWhenFreed = 1;
    goto LABEL_63;
  }
  WPP_IFR_SF_qL(FxDriverGlobals, 2u, 6u, 0xBu, WPP_FxRequestBufferKm_cpp_Traceguids, *Mdl, v31);
  if ( !v27 )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      FxMdlFreeDebug(FxDriverGlobals, *Mdl);
    else
      IoFreeMdl(*Mdl);
  }
  *Mdl = 0LL;
  return v32;
}
