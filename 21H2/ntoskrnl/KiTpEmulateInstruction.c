/*
 * XREFs of KiTpEmulateInstruction @ 0x140AB28B8
 * Callers:
 *     KiTpHandleTrap @ 0x1405730E0 (KiTpHandleTrap.c)
 *     KiTpCompletion @ 0x140AB2130 (KiTpCompletion.c)
 *     KiTpParseInstruction @ 0x140AB332C (KiTpParseInstruction.c)
 * Callees:
 *     KiTpAccessMemory @ 0x140AB2008 (KiTpAccessMemory.c)
 *     KiTpDecodeModRm @ 0x140AB2168 (KiTpDecodeModRm.c)
 *     KiTpDecodeModRmOperand @ 0x140AB2254 (KiTpDecodeModRmOperand.c)
 *     KiTpEmulateGroup0Instruction @ 0x140AB23B0 (KiTpEmulateGroup0Instruction.c)
 *     KiTpEmulateGroup11Instruction @ 0x140AB2608 (KiTpEmulateGroup11Instruction.c)
 *     KiTpEmulateGroup1Instruction @ 0x140AB26C8 (KiTpEmulateGroup1Instruction.c)
 *     KiTpEmulateMovRegImm @ 0x140AB2FBC (KiTpEmulateMovRegImm.c)
 *     KiTpEmulateMovzx @ 0x140AB304C (KiTpEmulateMovzx.c)
 *     KiTpEmulateRegisterPushPop @ 0x140AB315C (KiTpEmulateRegisterPushPop.c)
 *     KiTpFetchInstructionBytes @ 0x140AB3290 (KiTpFetchInstructionBytes.c)
 *     KiTpGetRegisterAddressByIndex @ 0x140AB32D4 (KiTpGetRegisterAddressByIndex.c)
 *     KiTpReadOperandValue @ 0x140AB346C (KiTpReadOperandValue.c)
 *     KiTpSetFlagsZeroSignParity @ 0x140AB36C0 (KiTpSetFlagsZeroSignParity.c)
 *     KiTpSetImmediateOperandSize @ 0x140AB3730 (KiTpSetImmediateOperandSize.c)
 *     KiTpSignExtendOperandValue @ 0x140AB3760 (KiTpSignExtendOperandValue.c)
 *     KiTpWriteRegisterValue @ 0x140AB378C (KiTpWriteRegisterValue.c)
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
  _QWORD *RegisterAddressByIndex; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // r9d
  _QWORD *v17; // rax
  char v18; // r14
  int v19; // r9d
  int v20; // r9d
  _QWORD *v21; // rax
  int v22; // r9d
  __int64 v23; // rax
  int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  _DWORD *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  volatile void *v33; // [rsp+40h] [rbp-28h] BYREF
  __int64 v34; // [rsp+48h] [rbp-20h] BYREF
  __int64 v35[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+38h] BYREF
  char v37; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v38; // [rsp+B0h] [rbp+48h] BYREF
  int v39; // [rsp+B8h] [rbp+50h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 21);
  v34 = 0LL;
  v35[0] = 0LL;
  v33 = 0LL;
  LOBYTE(v38) = 0;
  v37 = 0;
  LOBYTE(v36) = 0;
  v39 = v2;
  InstructionBytes = KiTpFetchInstructionBytes(a1, &v38, 1LL, &v39);
  if ( InstructionBytes < 0 )
    goto LABEL_81;
  if ( (v38 & 0xF0) == 0x50 )
  {
    v8 = KiTpEmulateRegisterPushPop(a1, a2, (unsigned __int8)v38);
    goto LABEL_98;
  }
  if ( (v38 & 0xF0) == 0xB0 )
  {
    v8 = KiTpEmulateMovRegImm(a1, a2, (unsigned __int8)v38, &v39);
    goto LABEL_98;
  }
  if ( (v38 & 0xC4) == 0 )
  {
    v8 = KiTpEmulateGroup0Instruction((_BYTE *)a1, a2, v38, &v39);
    goto LABEL_98;
  }
  if ( (unsigned __int8)v38 > 0x8Au )
  {
    if ( (unsigned __int8)v38 > 0xC6u )
    {
      if ( (unsigned __int8)v38 != 199 )
        goto LABEL_86;
      if ( a2 )
        goto LABEL_97;
    }
    else
    {
      if ( (unsigned __int8)v38 != 198 )
      {
        switch ( (unsigned __int8)v38 )
        {
          case 0x8Bu:
LABEL_61:
            InstructionBytes = KiTpDecodeModRm(a1, a2, &v39);
            if ( InstructionBytes < 0 )
              goto LABEL_81;
            if ( !a2 )
              goto LABEL_48;
            KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v33, &v37, &v36);
            LOBYTE(v24) = v37;
            InstructionBytes = KiTpReadOperandValue(a1, a2, (_DWORD)v33, v24, v36, (__int64)v35);
            if ( InstructionBytes < 0 )
              return (unsigned int)InstructionBytes;
            v23 = v35[0];
            goto LABEL_58;
          case 0x8Du:
            InstructionBytes = KiTpDecodeModRm(a1, a2, &v39);
            if ( InstructionBytes < 0 )
              goto LABEL_81;
            if ( !a2 )
              goto LABEL_48;
            KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v33, &v37, &v36);
            if ( (_BYTE)v36 )
            {
              v29 = *(_DWORD **)a2;
              InstructionBytes = -1073741795;
              v29[6] = 0;
              *v29 = -1073741795;
              return (unsigned int)InstructionBytes;
            }
            v23 = (__int64)v33;
            goto LABEL_58;
          case 0x90u:
            if ( (*(_BYTE *)(a1 + 25) & 1) == 0 )
              goto LABEL_99;
            goto LABEL_86;
          case 0xC2u:
            if ( a2 )
              goto LABEL_76;
            InstructionBytes = KiTpFetchInstructionBytes(a1, a1 + 32, 2LL, &v39);
            if ( InstructionBytes < 0 )
              return (unsigned int)InstructionBytes;
            break;
          case 0xC3u:
            break;
          default:
            goto LABEL_86;
        }
        if ( !a2 )
          goto LABEL_48;
LABEL_76:
        InstructionBytes = KiTpAccessMemory(
                             a2,
                             &v34,
                             *(volatile void **)(*(_QWORD *)(a2 + 8) + 152LL),
                             *(_BYTE *)(a2 + 16),
                             0,
                             8u,
                             0);
        if ( InstructionBytes >= 0 )
        {
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 248LL) = v34;
          *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL) += *(_QWORD *)(a1 + 32) + 8LL;
          if ( (KeKernelCetWrssEnabledScenarios & 2) != 0 )
          {
            v25 = *(_QWORD *)(a2 + 8);
            if ( (*(_DWORD *)(v25 + 48) & 0x100080) == 0x100080 )
            {
              v26 = *(int *)(v25 + 1256);
              v27 = *(_QWORD *)(v25 + 248);
              *(_WORD *)(v26 + v25 + 1250) |= 3u;
              *(_QWORD *)(v26 + v25 + 1240) = v27;
            }
          }
          InstructionBytes = 0;
        }
        goto LABEL_81;
      }
      if ( a2 )
      {
LABEL_97:
        v8 = KiTpEmulateGroup11Instruction(a1, a2, &v39);
        goto LABEL_98;
      }
      *(_BYTE *)(a1 + 1) = 8;
    }
    LOBYTE(v5) = 16;
    LOBYTE(v7) = 32;
    KiTpSetImmediateOperandSize(a1, v5, v7);
    goto LABEL_97;
  }
  if ( (unsigned __int8)v38 == 138 )
  {
    if ( !a2 )
      *(_BYTE *)(a1 + 1) = 8;
    goto LABEL_61;
  }
  if ( (unsigned __int8)v38 <= 0x84u )
  {
    if ( (unsigned __int8)v38 != 132 )
    {
      if ( (unsigned __int8)v38 != 15 )
      {
        switch ( (unsigned __int8)v38 )
        {
          case 0x80u:
            if ( a2 )
              goto LABEL_23;
            *(_BYTE *)(a1 + 1) = 8;
            break;
          case 0x81u:
            if ( a2 )
              goto LABEL_23;
            break;
          case 0x82u:
            if ( !a2 )
            {
              *(_BYTE *)(a1 + 1) = 8;
LABEL_21:
              LOBYTE(v7) = 8;
              LOBYTE(v5) = 8;
LABEL_22:
              KiTpSetImmediateOperandSize(a1, v5, v7);
            }
LABEL_23:
            v8 = KiTpEmulateGroup1Instruction(a1, a2, &v39);
            goto LABEL_98;
          case 0x83u:
            if ( !a2 )
              goto LABEL_21;
            goto LABEL_23;
          default:
LABEL_86:
            InstructionBytes = -1073741637;
            goto LABEL_81;
        }
        LOBYTE(v5) = 16;
        LOBYTE(v7) = 32;
        goto LABEL_22;
      }
      InstructionBytes = KiTpFetchInstructionBytes(a1, &v38, 1LL, &v39);
      if ( InstructionBytes < 0 )
        goto LABEL_81;
      if ( (unsigned __int8)(v38 + 74) > 1u )
        goto LABEL_86;
      LOBYTE(v9) = v38 & 1;
      v10 = (unsigned int)(v9 + 1);
      LOBYTE(v10) = 8 * ((v38 & 1) + 1);
      v8 = KiTpEmulateMovzx(a1, a2, v10, &v39);
LABEL_98:
      InstructionBytes = v8;
      if ( v8 >= 0 )
      {
LABEL_99:
        if ( a2 )
          goto LABEL_100;
        goto LABEL_82;
      }
LABEL_81:
      if ( a2 )
        return (unsigned int)InstructionBytes;
LABEL_82:
      if ( InstructionBytes < 0 )
        return (unsigned int)InstructionBytes;
LABEL_83:
      *(_BYTE *)(a1 + 24) = v39;
      return (unsigned int)InstructionBytes;
    }
    if ( !a2 )
      *(_BYTE *)(a1 + 1) = 8;
    goto LABEL_34;
  }
  if ( (unsigned __int8)v38 == 133 )
  {
LABEL_34:
    InstructionBytes = KiTpDecodeModRm(a1, a2, &v39);
    if ( InstructionBytes < 0 )
      goto LABEL_81;
    if ( a2 )
    {
      KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v33, &v37, &v36);
      LOBYTE(v11) = v37;
      InstructionBytes = KiTpReadOperandValue(a1, a2, (_DWORD)v33, v11, v36, (__int64)&v34);
      if ( InstructionBytes < 0 )
        return (unsigned int)InstructionBytes;
      LOBYTE(v12) = (*(_BYTE *)(a1 + 25) & 4) != 0;
      RegisterAddressByIndex = (_QWORD *)KiTpGetRegisterAddressByIndex(
                                           a1,
                                           a2,
                                           (*(unsigned __int8 *)(a1 + 26) >> 3) & 7,
                                           v12,
                                           1);
      v35[0] = KiTpSignExtendOperandValue(a1, *RegisterAddressByIndex);
      v14 = v34 & v35[0];
      *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFF7FE;
      KiTpSetFlagsZeroSignParity(v15, a2, v14);
      goto LABEL_100;
    }
    goto LABEL_48;
  }
  if ( (unsigned __int8)v38 == 134 )
  {
    if ( !a2 )
      *(_BYTE *)(a1 + 1) = 8;
  }
  else if ( (unsigned __int8)v38 != 135 )
  {
    if ( (unsigned __int8)v38 == 136 )
    {
      if ( !a2 )
        *(_BYTE *)(a1 + 1) = 8;
    }
    else if ( (unsigned __int8)v38 != 137 )
    {
      goto LABEL_86;
    }
    InstructionBytes = KiTpDecodeModRm(a1, a2, &v39);
    if ( InstructionBytes < 0 )
      goto LABEL_81;
    if ( a2 )
    {
      KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v33, &v37, &v36);
      LOBYTE(v16) = (*(_BYTE *)(a1 + 25) & 4) != 0;
      v17 = (_QWORD *)KiTpGetRegisterAddressByIndex(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v16, 1);
      v35[0] = KiTpSignExtendOperandValue(a1, *v17);
      v38 = v35[0];
      InstructionBytes = KiTpAccessMemory(a2, &v38, v33, v37, v36, *(_BYTE *)(a1 + 1) >> 3, 1);
      if ( InstructionBytes < 0 )
        return (unsigned int)InstructionBytes;
      goto LABEL_100;
    }
LABEL_48:
    InstructionBytes = 0;
    goto LABEL_83;
  }
  InstructionBytes = KiTpDecodeModRm(a1, a2, &v39);
  if ( InstructionBytes < 0 )
    goto LABEL_81;
  if ( !a2 )
    goto LABEL_48;
  KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v33, &v37, &v36);
  v18 = v36;
  LOBYTE(v19) = v37;
  InstructionBytes = KiTpReadOperandValue(a1, a2, (_DWORD)v33, v19, v36, (__int64)&v34);
  if ( InstructionBytes < 0 )
    return (unsigned int)InstructionBytes;
  LOBYTE(v20) = (*(_BYTE *)(a1 + 25) & 4) != 0;
  v21 = (_QWORD *)KiTpGetRegisterAddressByIndex(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v20, 1);
  v35[0] = KiTpSignExtendOperandValue(a1, *v21);
  v36 = v35[0];
  InstructionBytes = KiTpAccessMemory(a2, &v36, v33, v37, v18, *(_BYTE *)(a1 + 1) >> 3, 1);
  if ( InstructionBytes < 0 )
    return (unsigned int)InstructionBytes;
  v23 = v34;
LABEL_58:
  LOBYTE(v22) = (*(_BYTE *)(a1 + 25) & 4) != 0;
  KiTpWriteRegisterValue(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v22, v23);
LABEL_100:
  *(_QWORD *)(*(_QWORD *)(a2 + 8) + 248LL) += *(unsigned __int8 *)(a1 + 24);
  if ( (KeKernelCetWrssEnabledScenarios & 2) != 0 )
  {
    v30 = *(_QWORD *)(a2 + 8);
    if ( (*(_DWORD *)(v30 + 48) & 0x100080) == 0x100080 )
    {
      v31 = *(int *)(v30 + 1256);
      v32 = *(_QWORD *)(v30 + 248);
      *(_WORD *)(v31 + v30 + 1250) |= 1u;
      *(_QWORD *)(v31 + v30 + 1240) = v32;
    }
  }
  return (unsigned int)InstructionBytes;
}
