/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEXXZ @ 0x411D4
 * Callers:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(_DWORD *this)
{
  int result; // eax

  result = *this;
  if ( *this != gSmartObjNullRef )
  {
    --*(_DWORD *)(*this + 4);
    result = *this;
    if ( !*(_DWORD *)(*this + 4) )
    {
      result = *this;
      if ( *(_BYTE *)(*this + 8) )
        return Win32FreeToPagedLookasideList(gpStackRefLookAside, *this);
    }
  }
  return result;
}
