/*
 * XREFs of PiSwValidatePropertyArray @ 0x14074E8BC
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14074D2D8 (PiSwIrpInterfaceRegister.c)
 *     PiSwValidateCreateData @ 0x14074E604 (PiSwValidateCreateData.c)
 *     PiSwIrpPropertySet @ 0x14078A764 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407BD9D4 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     _PnpValidatePropertyData @ 0x14062F0CC (_PnpValidatePropertyData.c)
 */

__int64 __fastcall PiSwValidatePropertyArray(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v3; // edi
  __int64 i; // rbx

  result = 0LL;
  v3 = 0;
  if ( a2 )
  {
    for ( i = a1 + 32; !*(_DWORD *)(i - 12); i += 48LL )
    {
      result = PnpValidatePropertyData(*(__int64 **)(i + 8), *(_DWORD *)(i + 4), *(_DWORD *)i);
      if ( (int)result < 0 )
        break;
      if ( ++v3 >= a2 )
        return result;
    }
    return 3221225485LL;
  }
  return result;
}
