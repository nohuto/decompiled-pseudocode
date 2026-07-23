/*
 * XREFs of KiTpEmulateInstruction @ 0x140A138C0
 * Callers:
 *     KiTpHandleTrap @ 0x14051D410 (KiTpHandleTrap.c)
 *     KiTpCompletion @ 0x140A13130 (KiTpCompletion.c)
 *     KiTpParseInstruction @ 0x140A142AC (KiTpParseInstruction.c)
 * Callees:
 *     KiTpAccessMemory @ 0x140A13008 (KiTpAccessMemory.c)
 *     KiTpDecodeModRm @ 0x140A13168 (KiTpDecodeModRm.c)
 *     KiTpDecodeModRmOperand @ 0x140A13254 (KiTpDecodeModRmOperand.c)
 *     KiTpEmulateGroup0Instruction @ 0x140A133B4 (KiTpEmulateGroup0Instruction.c)
 *     KiTpEmulateGroup11Instruction @ 0x140A13610 (KiTpEmulateGroup11Instruction.c)
 *     KiTpEmulateGroup1Instruction @ 0x140A136D0 (KiTpEmulateGroup1Instruction.c)
 *     KiTpEmulateMovRegImm @ 0x140A13F3C (KiTpEmulateMovRegImm.c)
 *     KiTpEmulateMovzx @ 0x140A13FCC (KiTpEmulateMovzx.c)
 *     KiTpEmulateRegisterPushPop @ 0x140A140DC (KiTpEmulateRegisterPushPop.c)
 *     KiTpFetchInstructionBytes @ 0x140A14210 (KiTpFetchInstructionBytes.c)
 *     KiTpGetRegisterAddressByIndex @ 0x140A14254 (KiTpGetRegisterAddressByIndex.c)
 *     KiTpReadOperandValue @ 0x140A143EC (KiTpReadOperandValue.c)
 *     KiTpSetFlagsZeroSignParity @ 0x140A14640 (KiTpSetFlagsZeroSignParity.c)
 *     KiTpSetImmediateOperandSize @ 0x140A146B0 (KiTpSetImmediateOperandSize.c)
 *     KiTpSignExtendOperandValue @ 0x140A146E0 (KiTpSignExtendOperandValue.c)
 *     KiTpWriteRegisterValue @ 0x140A1470C (KiTpWriteRegisterValue.c)
 */

__int64 __fastcall KiTpEmulateInstruction(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rdx
  int InstructionBytes; // ebx
  __int64 v7; // r8
  int v8; // eax
  int v9; // ecx
  __int64 v10; // r8
  int v11; // r9d
  int v12; // r9d
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // r9d
  _QWORD *RegisterAddressByIndex; // rax
  char v18; // r14
  int v19; // r9d
  int v20; // r9d
  _QWORD *v21; // rax
  int v22; // r9d
  __int64 v23; // rax
  int v24; // r9d
  _DWORD *v25; // rax
  volatile void *v27; // [rsp+40h] [rbp-28h] BYREF
  __int64 v28; // [rsp+48h] [rbp-20h] BYREF
  __int64 v29[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+38h] BYREF
  char v31; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+48h] BYREF
  int v33; // [rsp+B8h] [rbp+50h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 21);
  v28 = 0LL;
  v29[0] = 0LL;
  v27 = 0LL;
  LOBYTE(v32) = 0;
  v31 = 0;
  LOBYTE(v30) = 0;
  v33 = v2;
  InstructionBytes = KiTpFetchInstructionBytes(a1, &v32, 1LL, &v33);
  if ( InstructionBytes < 0 )
    goto LABEL_92;
  if ( (v32 & 0xF0) == 0x50 )
  {
    v8 = KiTpEmulateRegisterPushPop(a1, a2, (unsigned __int8)v32);
    goto LABEL_89;
  }
  if ( (v32 & 0xF0) == 0xB0 )
  {
    v8 = KiTpEmulateMovRegImm(a1, a2, (unsigned __int8)v32, &v33);
    goto LABEL_89;
  }
  if ( (v32 & 0xC4) == 0 )
  {
    v8 = KiTpEmulateGroup0Instruction((_BYTE *)a1, a2, v32, &v33);
    goto LABEL_89;
  }
  if ( (unsigned __int8)v32 > 0x8Au )
  {
    if ( (unsigned __int8)v32 > 0xC6u )
    {
      if ( (unsigned __int8)v32 != 199 )
        goto LABEL_77;
      if ( !a2 )
        goto LABEL_87;
    }
    else
    {
      if ( (unsigned __int8)v32 != 198 )
      {
        if ( (unsigned __int8)v32 == 139 )
        {
LABEL_59:
          InstructionBytes = KiTpDecodeModRm(a1, a2, &v33);
          if ( InstructionBytes < 0 )
            goto LABEL_92;
          if ( !a2 )
            goto LABEL_47;
          KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v27, &v31, &v30);
          LOBYTE(v24) = v31;
          InstructionBytes = KiTpReadOperandValue(a1, a2, (_DWORD)v27, v24, v30, (__int64)v29);
          if ( InstructionBytes < 0 )
            goto LABEL_92;
          v23 = v29[0];
          goto LABEL_56;
        }
        if ( (unsigned __int8)v32 == 141 )
        {
          InstructionBytes = KiTpDecodeModRm(a1, a2, &v33);
          if ( InstructionBytes < 0 )
            goto LABEL_92;
          if ( !a2 )
            goto LABEL_47;
          KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v27, &v31, &v30);
          if ( (_BYTE)v30 )
          {
            v25 = *(_DWORD **)a2;
            InstructionBytes = -1073741795;
            v25[6] = 0;
            *v25 = -1073741795;
            goto LABEL_92;
          }
          v23 = (__int64)v27;
LABEL_56:
          LOBYTE(v22) = (*(_BYTE *)(a1 + 25) & 4) != 0;
          KiTpWriteRegisterValue(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v22, v23);
          goto LABEL_90;
        }
        if ( (unsigned __int8)v32 != 144 )
        {
          if ( (unsigned __int8)v32 == 194 )
          {
            if ( a2 )
            {
LABEL_74:
              InstructionBytes = KiTpAccessMemory(
                                   a2,
                                   &v28,
                                   *(volatile void **)(*(_QWORD *)(a2 + 8) + 152LL),
                                   *(_BYTE *)(a2 + 16),
                                   0,
                                   8u,
                                   0);
              if ( InstructionBytes >= 0 )
              {
                *(_QWORD *)(*(_QWORD *)(a2 + 8) + 248LL) = v28;
                *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL) += *(_QWORD *)(a1 + 32) + 8LL;
                InstructionBytes = 0;
              }
              goto LABEL_92;
            }
            InstructionBytes = KiTpFetchInstructionBytes(a1, a1 + 32, 2LL, &v33);
            if ( InstructionBytes < 0 )
              return (unsigned int)InstructionBytes;
          }
          else if ( (unsigned __int8)v32 != 195 )
          {
            goto LABEL_77;
          }
          if ( !a2 )
            goto LABEL_47;
          goto LABEL_74;
        }
        if ( (*(_BYTE *)(a1 + 25) & 1) == 0 )
          goto LABEL_90;
LABEL_77:
        InstructionBytes = -1073741637;
        goto LABEL_92;
      }
      if ( !a2 )
      {
        *(_BYTE *)(a1 + 1) = 8;
LABEL_87:
        LOBYTE(v5) = 16;
        LOBYTE(v7) = 32;
        KiTpSetImmediateOperandSize(a1, v5, v7);
      }
    }
    v8 = KiTpEmulateGroup11Instruction(a1, a2, &v33);
    goto LABEL_89;
  }
  if ( (unsigned __int8)v32 == 138 )
  {
    if ( !a2 )
      *(_BYTE *)(a1 + 1) = 8;
    goto LABEL_59;
  }
  if ( (unsigned __int8)v32 > 0x84u )
  {
    if ( (unsigned __int8)v32 == 133 )
      goto LABEL_33;
    if ( (unsigned __int8)v32 == 134 )
    {
      if ( !a2 )
        *(_BYTE *)(a1 + 1) = 8;
    }
    else if ( (unsigned __int8)v32 != 135 )
    {
      if ( (unsigned __int8)v32 == 136 )
      {
        if ( !a2 )
          *(_BYTE *)(a1 + 1) = 8;
      }
      else if ( (unsigned __int8)v32 != 137 )
      {
        goto LABEL_77;
      }
      InstructionBytes = KiTpDecodeModRm(a1, a2, &v33);
      if ( InstructionBytes < 0 )
        goto LABEL_92;
      if ( a2 )
      {
        KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v27, &v31, &v30);
        LOBYTE(v16) = (*(_BYTE *)(a1 + 25) & 4) != 0;
        RegisterAddressByIndex = (_QWORD *)KiTpGetRegisterAddressByIndex(
                                             a1,
                                             a2,
                                             (*(unsigned __int8 *)(a1 + 26) >> 3) & 7,
                                             v16,
                                             1);
        v29[0] = KiTpSignExtendOperandValue(a1, *RegisterAddressByIndex);
        v32 = v29[0];
        v8 = KiTpAccessMemory(a2, &v32, v27, v31, v30, *(_BYTE *)(a1 + 1) >> 3, 1);
        goto LABEL_89;
      }
LABEL_47:
      InstructionBytes = 0;
LABEL_94:
      *(_BYTE *)(a1 + 24) = v33;
      return (unsigned int)InstructionBytes;
    }
    InstructionBytes = KiTpDecodeModRm(a1, a2, &v33);
    if ( InstructionBytes < 0 )
      goto LABEL_92;
    if ( !a2 )
      goto LABEL_47;
    KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v27, &v31, &v30);
    v18 = v30;
    LOBYTE(v19) = v31;
    InstructionBytes = KiTpReadOperandValue(a1, a2, (_DWORD)v27, v19, v30, (__int64)&v28);
    if ( InstructionBytes >= 0 )
    {
      LOBYTE(v20) = (*(_BYTE *)(a1 + 25) & 4) != 0;
      v21 = (_QWORD *)KiTpGetRegisterAddressByIndex(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v20, 1);
      v29[0] = KiTpSignExtendOperandValue(a1, *v21);
      v30 = v29[0];
      InstructionBytes = KiTpAccessMemory(a2, &v30, v27, v31, v18, *(_BYTE *)(a1 + 1) >> 3, 1);
      if ( InstructionBytes >= 0 )
      {
        v23 = v28;
        goto LABEL_56;
      }
    }
LABEL_92:
    if ( a2 )
      return (unsigned int)InstructionBytes;
    goto LABEL_93;
  }
  if ( (unsigned __int8)v32 == 132 )
  {
    if ( !a2 )
      *(_BYTE *)(a1 + 1) = 8;
LABEL_33:
    InstructionBytes = KiTpDecodeModRm(a1, a2, &v33);
    if ( InstructionBytes < 0 )
      goto LABEL_92;
    if ( a2 )
    {
      KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v27, &v31, &v30);
      LOBYTE(v11) = v31;
      InstructionBytes = KiTpReadOperandValue(a1, a2, (_DWORD)v27, v11, v30, (__int64)&v28);
      if ( InstructionBytes < 0 )
        goto LABEL_92;
      LOBYTE(v12) = (*(_BYTE *)(a1 + 25) & 4) != 0;
      v13 = (_QWORD *)KiTpGetRegisterAddressByIndex(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v12, 1);
      v29[0] = KiTpSignExtendOperandValue(a1, *v13);
      v14 = v28 & v29[0];
      *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFF7FE;
      KiTpSetFlagsZeroSignParity(v15, a2, v14);
      goto LABEL_90;
    }
    goto LABEL_47;
  }
  if ( (unsigned __int8)v32 != 15 )
  {
    if ( (unsigned __int8)v32 == 128 )
    {
      if ( a2 )
        goto LABEL_23;
      *(_BYTE *)(a1 + 1) = 8;
    }
    else if ( (unsigned __int8)v32 != 129 )
    {
      if ( (unsigned __int8)v32 == 130 )
      {
        if ( a2 )
          goto LABEL_23;
        *(_BYTE *)(a1 + 1) = 8;
      }
      else if ( (unsigned __int8)v32 != 131 )
      {
        goto LABEL_77;
      }
      if ( !a2 )
      {
        LOBYTE(v7) = 8;
        LOBYTE(v5) = 8;
LABEL_22:
        KiTpSetImmediateOperandSize(a1, v5, v7);
      }
LABEL_23:
      v8 = KiTpEmulateGroup1Instruction(a1, a2, &v33);
      goto LABEL_89;
    }
    if ( a2 )
      goto LABEL_23;
    LOBYTE(v5) = 16;
    LOBYTE(v7) = 32;
    goto LABEL_22;
  }
  InstructionBytes = KiTpFetchInstructionBytes(a1, &v32, 1LL, &v33);
  if ( InstructionBytes < 0 )
    goto LABEL_92;
  if ( (unsigned __int8)(v32 + 74) > 1u )
    goto LABEL_77;
  LOBYTE(v9) = v32 & 1;
  v10 = (unsigned int)(v9 + 1);
  LOBYTE(v10) = 8 * ((v32 & 1) + 1);
  v8 = KiTpEmulateMovzx(a1, a2, v10, &v33);
LABEL_89:
  InstructionBytes = v8;
  if ( v8 < 0 )
    goto LABEL_92;
LABEL_90:
  if ( a2 )
  {
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 248LL) += *(unsigned __int8 *)(a1 + 24);
    goto LABEL_92;
  }
LABEL_93:
  if ( InstructionBytes >= 0 )
    goto LABEL_94;
  return (unsigned int)InstructionBytes;
}
