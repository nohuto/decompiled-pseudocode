/*
 * XREFs of _EtwpRegisterPrivateSession@12 @ 0x4B3818EE
 * Callers:
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 * Callees:
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 */

NTSTATUS __fastcall EtwpRegisterPrivateSession(__int16 a1, _DWORD *a2, _WORD *a3)
{
  NTSTATUS result; // eax
  int OutputBuffer; // [esp+4h] [ebp-10h] BYREF
  __int16 v6; // [esp+8h] [ebp-Ch]
  ULONG ReturnLength; // [esp+Ch] [ebp-8h] BYREF
  __int16 InputBuffer; // [esp+10h] [ebp-4h] BYREF

  InputBuffer = a1;
  result = ZwTraceControl(EtwRegisterPrivateSession, &InputBuffer, 2u, &OutputBuffer, 8u, &ReturnLength);
  if ( !result )
  {
    *a2 = OutputBuffer;
    *a3 = v6;
  }
  return result;
}
