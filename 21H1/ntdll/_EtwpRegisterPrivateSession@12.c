/*
 * XREFs of _EtwpRegisterPrivateSession@12 @ 0x4B3818EE
 * Callers:
 *     _EtwpStartUmLogger@16 @ 0x4B2F0075 (_EtwpStartUmLogger@16.c)
 * Callees:
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 */

int __fastcall EtwpRegisterPrivateSession(__int16 a1, _DWORD *a2, _WORD *a3)
{
  int result; // eax
  int v5; // [esp+4h] [ebp-10h] BYREF
  __int16 v6; // [esp+8h] [ebp-Ch]
  _BYTE v7[4]; // [esp+Ch] [ebp-8h] BYREF
  __int16 v8; // [esp+10h] [ebp-4h] BYREF

  v8 = a1;
  result = ZwTraceControl(39, (int)&v8, 2, (int)&v5, 8, (int)v7);
  if ( !result )
  {
    *a2 = v5;
    *a3 = v6;
  }
  return result;
}
