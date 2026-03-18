/*
 * XREFs of ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1C00381C4
 * Callers:
 *     ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x1C00695C8 (-DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z.c)
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C0074ED0 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00C6D78 (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     <none>
 */

FxDefaultIrpHandler *__fastcall FxDevice::GetDispatchPackage(FxDevice *this, unsigned __int8 MajorFunction)
{
  FxDefaultIrpHandler *result; // rax

  if ( MajorFunction > 0x10u )
  {
    if ( MajorFunction != 18 )
    {
      if ( MajorFunction != 22 )
      {
        if ( MajorFunction == 23 )
          return (FxDefaultIrpHandler *)this->m_PkgWmi;
        if ( MajorFunction != 27 )
          return this->m_PkgDefault;
      }
      result = (FxDefaultIrpHandler *)this->m_PkgPnp;
      if ( result )
        return result;
      return this->m_PkgDefault;
    }
  }
  else if ( MajorFunction != 16 && MajorFunction && MajorFunction != 2 )
  {
    if ( MajorFunction > 2u && (MajorFunction <= 4u || (unsigned int)MajorFunction - 14 <= 1) )
      return (FxDefaultIrpHandler *)this->m_PkgIo;
    return this->m_PkgDefault;
  }
  return (FxDefaultIrpHandler *)this->m_PkgGeneral;
}
