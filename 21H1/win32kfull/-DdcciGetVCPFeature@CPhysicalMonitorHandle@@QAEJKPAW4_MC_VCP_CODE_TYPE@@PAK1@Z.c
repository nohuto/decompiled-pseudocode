/*
 * XREFs of ?DdcciGetVCPFeature@CPhysicalMonitorHandle@@QAEJKPAW4_MC_VCP_CODE_TYPE@@PAK1@Z @ 0x1CF86A
 * Callers:
 *     ?DdcciGetVCPFeature@CMonitorAPI@@QAEJPAXKPAW4_MC_VCP_CODE_TYPE@@PAK2@Z @ 0x1CF813 (-DdcciGetVCPFeature@CMonitorAPI@@QAEJPAXKPAW4_MC_VCP_CODE_TYPE@@PAK2@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z @ 0x1CF957 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z @ 0x1CFA1C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z.c)
 */

int __thiscall CPhysicalMonitorHandle::DdcciGetVCPFeature(
        CPhysicalMonitorHandle *this,
        unsigned int a2,
        enum _MC_VCP_CODE_TYPE *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  int v6; // edx
  int v8; // [esp+14h] [ebp-18h] BYREF
  char v9; // [esp+18h] [ebp-14h]
  int v10; // [esp+1Ch] [ebp-10h] BYREF
  int v11; // [esp+20h] [ebp-Ch]
  __int16 v12; // [esp+24h] [ebp-8h]
  char v13; // [esp+26h] [ebp-6h]

  v8 = 98897;
  v9 = 0;
  HIBYTE(v8) = a2;
  v6 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(this, (union _LARGE_INTEGER)-500000LL, &v8, 5u);
  if ( v6 >= 0 )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v6 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(this, 0LL, &v10, 0xBu);
    if ( v6 >= 0 )
    {
      if ( HIBYTE(v10) == 1 )
      {
        return -1071774332;
      }
      else if ( HIBYTE(v10) <= 1u && (unsigned __int8)v11 == a2 && BYTE1(v11) <= 1u )
      {
        *(_DWORD *)a3 = BYTE1(v11) == 0;
        *a4 = HIBYTE(v12) | (unsigned __int16)((unsigned __int8)v12 << 8);
        *a5 = HIBYTE(v11) | (unsigned __int16)(BYTE2(v11) << 8);
      }
      else
      {
        return -1071774331;
      }
    }
  }
  return v6;
}
