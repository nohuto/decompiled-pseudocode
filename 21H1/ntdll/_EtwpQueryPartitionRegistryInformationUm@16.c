/*
 * XREFs of _EtwpQueryPartitionRegistryInformationUm@16 @ 0x4B2F0FDE
 * Callers:
 *     _EtwpAddLogHeaderToLogFile@16 @ 0x4B2F085E (_EtwpAddLogHeaderToLogFile@16.c)
 * Callees:
 *     _EtwpGetRegDwordValue@12 @ 0x4B2F0EE6 (_EtwpGetRegDwordValue@12.c)
 *     _StringToGuidNoBrackets@8 @ 0x4B2F1112 (_StringToGuidNoBrackets@8.c)
 *     _EtwpQueryRegString@16 @ 0x4B2F1160 (_EtwpQueryRegString@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall EtwpQueryPartitionRegistryInformationUm(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // eax
  _DWORD *v6; // edi
  size_t v7; // [esp-4h] [ebp-CCh]
  size_t v8; // [esp-4h] [ebp-CCh]
  _WORD v9[2]; // [esp+Ch] [ebp-BCh] BYREF
  _BYTE *v10; // [esp+10h] [ebp-B8h]
  _WORD v11[2]; // [esp+14h] [ebp-B4h] BYREF
  _BYTE *v12; // [esp+18h] [ebp-B0h]
  _DWORD *v13; // [esp+1Ch] [ebp-ACh]
  _BYTE v14[80]; // [esp+20h] [ebp-A8h] BYREF
  _BYTE v15[84]; // [esp+70h] [ebp-58h] BYREF

  *a2 = 0;
  v13 = a2;
  LODWORD(v7) = 76;
  memset(v15, 0, v7);
  LODWORD(v8) = 76;
  memset(v14, 0, v8);
  v12 = v15;
  v11[1] = 76;
  v11[0] = 76;
  result = EtwpQueryRegString(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control", L"ContainerId", v15, 0x26u);
  if ( !result || result == -1073741772 )
  {
    v10 = v14;
    v9[1] = 76;
    v9[0] = 76;
    result = EtwpQueryRegString(
               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control",
               L"ContainerCorrelationId",
               v14,
               0x26u);
    if ( !result || result == -1073741772 )
    {
      result = EtwpGetRegDwordValue(v13);
      if ( !result || result == -1073741772 )
      {
        *a3 = 0;
        a3[1] = 0;
        if ( StringToGuidNoBrackets(v11, a1) )
        {
          *a1 = NullGuid[0];
          v6 = a1 + 1;
          *v6++ = NullGuid[1];
          *v6 = NullGuid[2];
          v6[1] = NullGuid[3];
        }
        result = StringToGuidNoBrackets(v9, a4);
        if ( result )
        {
          result = 0;
          *a4 = NullGuid[0];
          a4[1] = NullGuid[1];
          a4[2] = NullGuid[2];
          a4[3] = NullGuid[3];
        }
      }
    }
  }
  return result;
}
