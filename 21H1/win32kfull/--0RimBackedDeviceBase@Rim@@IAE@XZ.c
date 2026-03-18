/*
 * XREFs of ??0RimBackedDeviceBase@Rim@@IAE@XZ @ 0x1A1414
 * Callers:
 *     ??0InkDevice@@QAE@XZ @ 0x1B02CB (--0InkDevice@@QAE@XZ.c)
 * Callees:
 *     <none>
 */

Rim::RimBackedDeviceBase *__thiscall Rim::RimBackedDeviceBase::RimBackedDeviceBase(Rim::RimBackedDeviceBase *this)
{
  signed __int32 v1; // eax

  *(_DWORD *)this = &Rim::RimBackedDeviceBase::`vftable';
  v1 = _InterlockedIncrement(&dword_278444);
  if ( !v1 )
    v1 = _InterlockedIncrement(&dword_278444);
  *((_DWORD *)this + 1) = v1;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  return this;
}
