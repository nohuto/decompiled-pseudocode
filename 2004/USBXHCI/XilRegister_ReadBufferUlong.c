/*
 * XREFs of XilRegister_ReadBufferUlong @ 0x1C0017DE8
 * Callers:
 *     Register_GetAllExtendedCapability @ 0x1C0017D08 (Register_GetAllExtendedCapability.c)
 *     RootHub_PrepareHardware @ 0x1C006D2F0 (RootHub_PrepareHardware.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x1C003C240 (Register_ReadSecureMmio.c)
 */

__int64 __fastcall XilRegister_ReadBufferUlong(__int64 a1, _DWORD *a2, void *a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  _DWORD *v7; // rsi

  result = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(result + 537) )
    return Register_ReadSecureMmio(a1, (int)a2, 2, a4, a3);
  v5 = a4;
  v6 = a3;
  v7 = a2;
  while ( v5 )
  {
    *v6++ = *v7++;
    --v5;
  }
  return result;
}
