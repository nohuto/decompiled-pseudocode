/*
 * XREFs of ?AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z @ 0x1C0091C0C
 * Callers:
 *     ?StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C006C360 (-StoreAndReferenceMemory@FxUsbPipeTransferContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C006DE30 (-StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C0073C8C (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D310 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxRequestBuffer::AssignValues(
        FxRequestBuffer *this,
        _MDL **PPBuffer,
        _MDL **PPMdl,
        unsigned int *BufferLength)
{
  unsigned int Length; // ebx
  _MDL **p_pMdl; // rsi
  FxRequestBufferType DataType; // ecx
  _MDL **v9; // rdx
  __int32 v10; // ecx
  __int32 v11; // ecx
  __int32 v12; // ecx
  _WDFMEMORY_OFFSET *v13; // rax
  __int64 v14; // rbp
  _WDFMEMORY_OFFSET *Offsets; // rdx
  _MDL *pMdl; // [rsp+40h] [rbp+8h] BYREF

  Length = 0;
  p_pMdl = &pMdl;
  DataType = this->DataType;
  if ( PPBuffer )
    p_pMdl = PPBuffer;
  v9 = &pMdl;
  if ( PPMdl )
    v9 = PPMdl;
  v10 = DataType - 1;
  if ( !v10 )
  {
    v14 = ((__int64 (__fastcall *)(IFxMemory *, _MDL **))this->u.Memory.Memory->GetBuffer)(this->u.Memory.Memory, v9);
    LODWORD(v13) = this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
    Offsets = this->u.Memory.Offsets;
    if ( Offsets )
    {
      if ( Offsets->BufferLength )
        v13 = (_WDFMEMORY_OFFSET *)Offsets->BufferLength;
      if ( Offsets->BufferOffset )
        v14 += Offsets->BufferOffset;
    }
    *p_pMdl = (_MDL *)v14;
    goto LABEL_23;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    *v9 = this->u.Mdl.Mdl;
    *p_pMdl = 0LL;
    goto LABEL_16;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    *v9 = 0LL;
    *p_pMdl = this->u.Mdl.Mdl;
LABEL_16:
    Length = this->u.Mdl.Length;
    goto LABEL_24;
  }
  if ( v12 == 1 )
  {
    *v9 = this->u.RefMdl.Mdl;
    *p_pMdl = 0LL;
    v13 = this->u.Memory.Offsets;
    if ( v13 && v13->BufferLength )
      LODWORD(v13) = v13->BufferLength;
    else
      LODWORD(v13) = this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
LABEL_23:
    Length = (unsigned int)v13;
    goto LABEL_24;
  }
  *v9 = 0LL;
  *p_pMdl = 0LL;
LABEL_24:
  *BufferLength = Length;
}
