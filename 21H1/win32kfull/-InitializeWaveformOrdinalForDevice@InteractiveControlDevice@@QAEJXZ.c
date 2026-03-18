/*
 * XREFs of ?InitializeWaveformOrdinalForDevice@InteractiveControlDevice@@QAEJXZ @ 0x1B2253
 * Callers:
 *     ?Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B1F54 (-Initialize@InteractiveControlDevice@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall InteractiveControlDevice::InitializeWaveformOrdinalForDevice(InteractiveControlDevice *this)
{
  int v1; // esi
  int v2; // edx
  unsigned int v3; // edi
  int v4; // esi
  unsigned int v5; // eax
  _WORD *v6; // ebx
  _WORD *i; // eax

  v1 = *((_DWORD *)this + 76);
  v2 = 0;
  v3 = 0;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 48);
    v4 = *(_DWORD *)(v1 + 44);
  }
  else
  {
    v4 = 0;
  }
  if ( v4 && v3 )
  {
    v5 = 0;
    v6 = (_WORD *)(v4 + 2);
    while ( *v6 != 4099 )
    {
      ++v5;
      v6 += 4;
      if ( v5 >= v3 )
        goto LABEL_11;
    }
    *((_WORD *)this + 155) = *(_WORD *)(v4 + 8 * v5);
LABEL_11:
    for ( i = (_WORD *)(v4 + 2); *i != 4100; i += 4 )
    {
      if ( ++v2 >= v3 )
        return 0;
    }
    *((_WORD *)this + 154) = *(_WORD *)(v4 + 8 * v2);
  }
  return 0;
}
