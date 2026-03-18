/*
 * XREFs of ?BuildDeviceShapeDescriptor@InteractiveControlParser@@CGJPAVInteractiveControlDevice@@@Z @ 0x1B5A17
 * Callers:
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CGJPAU_INTERACTIVECTRL_CAPABILITIES@@PAVInteractiveControlDevice@@@Z @ 0x1B58D8 (-BuildDeviceAttributes@InteractiveControlParser@@CGJPAU_INTERACTIVECTRL_CAPABILITIES@@PAVInterac.c)
 * Callees:
 *     ?GetScaledComponentValue@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1B5F36 (-GetScaledComponentValue@InteractiveControlParser@@SGJPAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z.c)
 */

int __thiscall InteractiveControlParser::BuildDeviceShapeDescriptor(_DWORD *this)
{
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // ebx
  int ScaledComponentValue; // eax
  int v6; // ecx
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-8h]

  this[40] = 1;
  this[41] = 0;
  this[42] = 0;
  if ( this[35] )
  {
    v2 = (_DWORD *)this[37];
    if ( v2 != this + 37 )
    {
      v3 = this + 37;
      do
      {
        v4 = v2;
        v2 = (_DWORD *)*v2;
        if ( v4[2] == 8 && v4[23] )
        {
          ScaledComponentValue = InteractiveControlParser::GetScaledComponentValue(v8, v9);
          if ( this[35] == 1 )
            goto LABEL_15;
          v6 = *((unsigned __int16 *)v4 + 36);
          if ( v6 == 72 )
          {
            this[43] = ScaledComponentValue;
          }
          else if ( v6 == 73 )
          {
            this[44] = ScaledComponentValue;
          }
          v3 = this + 37;
        }
      }
      while ( v2 != v3 );
    }
  }
  else
  {
    ScaledComponentValue = 5800;
LABEL_15:
    this[44] = ScaledComponentValue;
    this[43] = ScaledComponentValue;
  }
  return 0;
}
