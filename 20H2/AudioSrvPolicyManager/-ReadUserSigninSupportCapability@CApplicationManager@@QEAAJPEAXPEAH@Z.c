/*
 * XREFs of ?ReadUserSigninSupportCapability@CApplicationManager@@QEAAJPEAXPEAH@Z @ 0x18001D914
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B7E4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 */

__int64 __fastcall CApplicationManager::ReadUserSigninSupportCapability(CApplicationManager *this, void *a2, int *a3)
{
  int v3; // ebx
  int v5; // eax
  signed int v6; // r9d
  __int64 result; // rax
  CApplicationManager *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  v3 = 0;
  *a3 = 0;
  LOBYTE(v8) = 0;
  v5 = CapabilityCheck(a2, L"userSigninSupport", &v8);
  v6 = (unsigned __int16)v5 | 0x80070000;
  if ( v5 <= 0 )
    v6 = v5;
  if ( v6 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, &WPP_386a857d2e283c5fe15986819513c374_Traceguids, v6);
  }
  LOBYTE(v3) = (_BYTE)v8 != 0;
  result = 0LL;
  *a3 = v3;
  return result;
}
