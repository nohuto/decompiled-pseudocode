/*
 * XREFs of GetAssignedAccessTypeForUser_0 @ 0x180037620
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B7E4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     GetAssignedAccessTypeForUser @ 0x180037338 (GetAssignedAccessTypeForUser.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser_0(unsigned __int16 *a1, __int64 a2)
{
  int AssignedAccessTypeForUser; // eax
  unsigned int v3; // ecx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v5) = a2;
  AssignedAccessTypeForUser = GetAssignedAccessTypeForUser(a1, a2, &v5);
  v3 = 0;
  if ( AssignedAccessTypeForUser >= 0 )
    return v5;
  return v3;
}
