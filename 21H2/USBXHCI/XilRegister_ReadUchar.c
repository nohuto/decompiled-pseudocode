/*
 * XREFs of XilRegister_ReadUchar @ 0x1C00140B8
 * Callers:
 *     Register_BiosHandoff @ 0x1C0013F74 (Register_BiosHandoff.c)
 * Callees:
 *     Register_ReadSecureMmio @ 0x1C003CAB8 (Register_ReadSecureMmio.c)
 */

char __fastcall XilRegister_ReadUchar(__int64 a1, __int64 a2)
{
  char v3; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 8) + 553LL) )
    return *(_BYTE *)a2;
  v3 = 0;
  Register_ReadSecureMmio(a1, a2, 0, 1, &v3);
  return v3;
}
