/*
 * XREFs of ExprOp2_64 @ 0x1C0016CF0
 * Callers:
 *     ExprOp2 @ 0x1C0017290 (ExprOp2.c)
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C0017010 (WriteObject.c)
 *     MatchObjType @ 0x1C00178E0 (MatchObjType.c)
 *     FreeData @ 0x1C001840C (FreeData.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ExprOp2_64(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned int v6; // eax
  int v7; // ecx
  unsigned __int16 v8; // ax
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  int v18; // r11d
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  int ObjectTypeName; // eax

  result = ValidateArgTypes(a1, a2[10], 0, "II");
  if ( (int)result < 0 )
    return result;
  v5 = a2[10] + 80LL;
  v6 = *(unsigned __int16 *)(a2[10] + 82LL);
  if ( (_WORD)v6 != 128 )
  {
    if ( (_WORD)v6 == 129 )
    {
      v5 = *(_QWORD *)(a2[10] + 96LL);
      goto LABEL_6;
    }
    if ( v6 <= 0x10 )
    {
      v7 = 81921;
      if ( _bittest(&v7, v6) )
      {
LABEL_6:
        v8 = *(_WORD *)(v5 + 2);
        if ( v8 == 133 || v8 <= 4u )
        {
          if ( (*(_BYTE *)v5 & 1) != 0 )
          {
            v19 = *(_QWORD *)(v5 + 8);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 0xFFFFFFFF) == 1
              && (*(_BYTE *)v19 & 8) != 0 )
            {
              FreeData(v19);
            }
          }
          else if ( *(_QWORD *)(v5 + 32) )
          {
            if ( *(int *)(v5 + 8) <= 0 )
            {
              if ( *(_WORD *)(v5 + 2) == 4 )
                FreeDataBuffs(*(_QWORD *)(v5 + 32) + 8LL, **(unsigned int **)(v5 + 32));
              FreeObjData(v5);
            }
            else
            {
              *(_WORD *)v5 |= 8u;
            }
          }
          *(_OWORD *)v5 = 0LL;
          *(_OWORD *)(v5 + 16) = 0LL;
          *(_QWORD *)(v5 + 32) = 0LL;
        }
        goto LABEL_11;
      }
    }
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
    PrintDebugMessage(208, ObjectTypeName, 0, 0, 0LL);
    return 3222536202LL;
  }
  v5 = *(_QWORD *)(a2[10] + 96LL) + 64LL;
  if ( !(unsigned __int8)MatchObjType(*(unsigned __int16 *)(*(_QWORD *)(a2[10] + 96LL) + 66LL), 135LL) )
  {
    LogError(3222536202LL);
    AcpiDiagTraceAmlError(a1, 3222536202LL);
    GetObjectTypeName(135LL);
    v17 = GetObjectTypeName(*(unsigned __int16 *)(v5 + 2));
    PrintDebugMessage(207, v17, v18, 0, 0LL);
    return 3222536202LL;
  }
LABEL_11:
  *(_WORD *)(a2[11] + 2LL) = 1;
  v9 = *(_DWORD *)(a2[7] + 8LL);
  switch ( v9 )
  {
    case '{':
      v10 = *(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL);
LABEL_16:
      *(_QWORD *)(a2[11] + 16LL) = v10;
      break;
    case 'y':
      v11 = a2[10];
      v12 = *(_QWORD *)(v11 + 56);
      if ( v12 >= 0x40 )
        v13 = 0LL;
      else
        v13 = *(_QWORD *)(v11 + 16) << v12;
      *(_QWORD *)(a2[11] + 16LL) = v13;
      break;
    case '}':
      *(_QWORD *)(a2[11] + 16LL) = *(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL);
      break;
    default:
      switch ( v9 )
      {
        case 114:
          v10 = *(_QWORD *)(a2[10] + 16LL) + *(_QWORD *)(a2[10] + 56LL);
          goto LABEL_16;
        case 116:
          *(_QWORD *)(a2[11] + 16LL) = *(_QWORD *)(a2[10] + 16LL) - *(_QWORD *)(a2[10] + 56LL);
          break;
        case 119:
          v10 = *(_QWORD *)(a2[10] + 16LL) * *(_QWORD *)(a2[10] + 56LL);
          goto LABEL_16;
        case 122:
          v14 = a2[10];
          v15 = *(_QWORD *)(v14 + 56);
          if ( v15 >= 0x40 )
            v16 = 0LL;
          else
            v16 = *(_QWORD *)(v14 + 16) >> v15;
          *(_QWORD *)(a2[11] + 16LL) = v16;
          break;
        case 124:
          v10 = ~(*(_QWORD *)(a2[10] + 16LL) & *(_QWORD *)(a2[10] + 56LL));
          goto LABEL_16;
        case 126:
          *(_QWORD *)(a2[11] + 16LL) = ~(*(_QWORD *)(a2[10] + 16LL) | *(_QWORD *)(a2[10] + 56LL));
          break;
        case 127:
          *(_QWORD *)(a2[11] + 16LL) = *(_QWORD *)(a2[10] + 16LL) ^ *(_QWORD *)(a2[10] + 56LL);
          break;
        case 133:
          v20 = a2[10];
          v21 = *(_QWORD *)(v20 + 56);
          if ( v21 )
            *(_QWORD *)(a2[11] + 16LL) = *(_QWORD *)(v20 + 16) % v21;
          else
            *(_QWORD *)(a2[11] + 16LL) = 0LL;
          break;
        default:
          return WriteObject(a1, v5, a2[11]);
      }
      break;
  }
  return WriteObject(a1, v5, a2[11]);
}
