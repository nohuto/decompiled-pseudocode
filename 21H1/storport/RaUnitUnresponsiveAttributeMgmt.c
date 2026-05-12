/*
 * XREFs of RaUnitUnresponsiveAttributeMgmt @ 0x1C00484F0
 * Callers:
 *     RaUnitAttributeManagement @ 0x1C0045784 (RaUnitAttributeManagement.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0031F68 (WPP_SF_q.c)
 *     RaUnitClearUnresponsiveAttribute @ 0x1C0045E28 (RaUnitClearUnresponsiveAttribute.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x1C0046C78 (RaUnitSetUnresponsiveAttribute.c)
 */

__int64 __fastcall RaUnitUnresponsiveAttributeMgmt(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  _BYTE *v3; // rax
  char v4; // al
  PDEVICE_OBJECT v5; // r10
  unsigned __int16 v6; // dx

  v2 = -1073741811;
  if ( *(_DWORD *)(a1 + 916) || *(_DWORD *)(a1 + 924) || *(_DWORD *)(a1 + 920) || (*(_BYTE *)(a1 + 450) & 1) != 0 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1073741637;
    }
    v6 = 50;
    goto LABEL_21;
  }
  v3 = *(_BYTE **)(a1 + 104);
  if ( v3 )
  {
    v4 = *v3 & 0x1F;
    if ( v4 )
    {
      if ( v4 != 20 )
      {
        v5 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          return (unsigned int)-1073741637;
        }
        v6 = 51;
LABEL_21:
        WPP_SF_q((__int64)v5->AttachedDevice, v6, (__int64)&WPP_42fe1c4eb13a31e027d4a85af73a7d54_Traceguids, a1);
        return (unsigned int)-1073741637;
      }
    }
  }
  if ( a2 == 1 )
  {
    return (unsigned int)RaUnitSetUnresponsiveAttribute(a1);
  }
  else
  {
    if ( a2 )
      return v2;
    return (unsigned int)RaUnitClearUnresponsiveAttribute(a1);
  }
}
