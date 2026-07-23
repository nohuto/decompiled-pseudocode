/*
 * XREFs of KiTpFetchImmediateOperand @ 0x140A14198
 * Callers:
 *     KiTpEmulateGroup11Instruction @ 0x140A13610 (KiTpEmulateGroup11Instruction.c)
 *     KiTpEmulateGroup1Instruction @ 0x140A136D0 (KiTpEmulateGroup1Instruction.c)
 *     KiTpEmulateMovRegImm @ 0x140A13F3C (KiTpEmulateMovRegImm.c)
 * Callees:
 *     KiTpFetchInstructionBytes @ 0x140A14210 (KiTpFetchInstructionBytes.c)
 */

__int64 __fastcall KiTpFetchImmediateOperand(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // eax
  unsigned int v5; // eax
  __int64 result; // rax
  char v7; // cl
  __int64 v8; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 23);
  v9 = 0LL;
  v5 = v3 >> 3;
  if ( a2 )
  {
    *a3 += v5;
    return 0LL;
  }
  else
  {
    result = KiTpFetchInstructionBytes(a1, &v9, v5, a3);
    if ( (int)result >= 0 )
    {
      v7 = *(_BYTE *)(a1 + 23);
      switch ( v7 )
      {
        case 8:
          v8 = (char)v9;
          break;
        case 16:
          v8 = (__int16)v9;
          break;
        case 32:
          v8 = (int)v9;
          break;
        default:
          v8 = v9;
          break;
      }
      *(_QWORD *)(a1 + 32) = v8;
    }
  }
  return result;
}
