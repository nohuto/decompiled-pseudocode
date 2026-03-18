/*
 * XREFs of ?OnDeviceOpened@RimBackedDeviceBase@Rim@@UAEXXZ @ 0x1A1686
 * Callers:
 *     ?OnDeviceOpened@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z @ 0x1AC085 (-OnDeviceOpened@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall Rim::RimBackedDeviceBase::OnDeviceOpened(Rim::RimBackedDeviceBase *this)
{
  int v2; // eax
  PDEVICE_OBJECT RelatedDeviceObject; // eax

  v2 = *((_DWORD *)this + 3);
  if ( v2 )
  {
    if ( !*((_BYTE *)this + 8) )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)(v2 + 196));
      *((_DWORD *)this + 4) = RelatedDeviceObject;
      ObfReferenceObject(RelatedDeviceObject);
      *((_BYTE *)this + 8) = 1;
    }
  }
}
