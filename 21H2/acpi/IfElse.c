/*
 * XREFs of IfElse @ 0x1C0009C70
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C0009F50 (ValidateArgTypes.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 */

__int64 __fastcall IfElse(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _BYTE **v5; // r8
  _BYTE *v6; // rcx
  unsigned __int8 *v7; // rax
  unsigned int v8; // r10d
  unsigned __int8 *v9; // r14
  unsigned int v10; // r9d
  unsigned __int8 v11; // r11
  unsigned __int8 *v12; // rdx
  unsigned __int8 v13; // cl
  int v14; // eax
  _BYTE *v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // r15
  unsigned int v18; // esi
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 v21; // rax
  _QWORD *v22; // rdx
  char v23; // al
  _BYTE *v24; // rdx
  unsigned int v25; // r10d
  unsigned int v26; // r9d
  unsigned __int8 *v27; // r8
  _BYTE *v28; // r14
  __int64 v29; // rbp
  __int64 v30; // r13
  __int64 v31; // rax
  char v32; // al
  __int64 v33; // rax
  unsigned __int8 v34; // bp
  int v35; // eax
  unsigned __int8 v36; // cl
  __int64 v37; // rax
  __int64 v38; // [rsp+78h] [rbp+10h]

  if ( **(_BYTE **)(a2 + 32) != 0xA0 )
  {
    LogError(3222536193LL);
    AcpiDiagTraceAmlError(a1, 3222536193LL);
    PrintDebugMessage(59, 0, 0, 0, 0LL);
    return 3222536193LL;
  }
  result = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0LL, "I");
  if ( !(_DWORD)result )
  {
    v5 = (_BYTE **)(a2 + 40);
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) )
    {
      v24 = *v5;
      v18 = 0;
      if ( (unsigned __int64)*v5 < *(_QWORD *)(a2 + 48) && *v24 == 0xA1 )
      {
        v25 = (unsigned __int8)v24[1];
        v26 = v25 >> 6;
        v27 = v24 + 2;
        v28 = v24;
        if ( v24[1] >> 6 )
        {
          v25 &= 0xFu;
          v34 = 0;
          do
          {
            v35 = *v27++;
            v36 = v34++;
            v25 |= v35 << (8 * v36 + 4);
          }
          while ( v34 < (unsigned __int8)v26 );
        }
        v29 = (__int64)&v24[v25 + 1];
      }
      else
      {
        v28 = *v5;
        v29 = 0LL;
      }
      v16 = *(_QWORD *)(a2 + 88);
      v17 = *(_QWORD *)(a1 + 320);
      v19 = *(_QWORD *)(a1 + 88);
      v30 = *(_QWORD *)(a1 + 80);
      v38 = *(_QWORD *)(a1 + 120);
      v31 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x50u);
      v22 = (_QWORD *)v31;
      if ( v31 )
      {
        *(_QWORD *)(v31 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v31;
        *(_DWORD *)v31 = 1347371859;
        *(_QWORD *)(v31 + 24) = ParseScope;
        *(_QWORD *)(a1 + 120) = v38;
        *(_QWORD *)(v31 + 32) = v28;
        *(_QWORD *)(v31 + 40) = v29;
        *(_QWORD *)(v31 + 48) = *(_QWORD *)(a1 + 80);
        v32 = gdwfAMLI;
        *(_QWORD *)(a1 + 80) = v30;
        if ( (v32 & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v30 + 112));
        goto LABEL_23;
      }
LABEL_31:
      LogError(3222536194LL);
      AcpiDiagTraceAmlError(a1, 3222536194LL);
      PrintDebugMessage(153, 0, 0, 0, 0LL);
      return (unsigned int)-1072431102;
    }
    v6 = *v5;
    *(_QWORD *)(a1 + 120) = *v5;
    if ( (unsigned __int64)v6 < *(_QWORD *)(a2 + 48) && *v6 == 0xA1 )
    {
      v7 = v6 + 1;
      *(_QWORD *)(a1 + 120) = v6 + 1;
      if ( a2 != -40 )
      {
        *v5 = v7;
        v7 = *(unsigned __int8 **)(a1 + 120);
      }
      v8 = *v7;
      v9 = v7 + 1;
      *(_QWORD *)(a1 + 120) = v7 + 1;
      v10 = v8 >> 6;
      if ( (unsigned __int8)(v8 >> 6) )
      {
        v8 &= 0xFu;
        v11 = 0;
        do
        {
          v12 = *(unsigned __int8 **)(a1 + 120);
          v13 = v11++;
          v14 = *v12;
          v9 = v12 + 1;
          *(_QWORD *)(a1 + 120) = v12 + 1;
          v8 |= v14 << (8 * v13 + 4);
        }
        while ( v11 < (unsigned __int8)v10 );
      }
      v15 = *v5;
      if ( a2 != -40 )
      {
        v15 += v8;
        *v5 = v15;
        v9 = *(unsigned __int8 **)(a1 + 120);
      }
      v16 = *(_QWORD *)(a2 + 88);
      v17 = *(_QWORD *)(a1 + 320);
      v18 = 0;
      v19 = *(_QWORD *)(a1 + 88);
      v20 = *(_QWORD *)(a1 + 80);
      v21 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x50u);
      v22 = (_QWORD *)v21;
      if ( v21 )
      {
        *(_QWORD *)(v21 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v21;
        *(_DWORD *)v21 = 1347371859;
        *(_QWORD *)(v21 + 24) = ParseScope;
        *(_QWORD *)(a1 + 120) = v9;
        *(_QWORD *)(v21 + 32) = v15;
        *(_QWORD *)(v21 + 40) = 0LL;
        *(_QWORD *)(v21 + 48) = *(_QWORD *)(a1 + 80);
        v23 = gdwfAMLI;
        *(_QWORD *)(a1 + 80) = v20;
        if ( (v23 & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v20 + 112));
          v22[7] = *(_QWORD *)(a1 + 88);
          v37 = *(_QWORD *)(a1 + 320);
          *(_QWORD *)(a1 + 88) = v19;
          v22[8] = v37;
          *(_QWORD *)(a1 + 320) = v17;
          v22[9] = v16;
          return v18;
        }
LABEL_23:
        v22[7] = *(_QWORD *)(a1 + 88);
        v33 = *(_QWORD *)(a1 + 320);
        *(_QWORD *)(a1 + 88) = v19;
        v22[8] = v33;
        *(_QWORD *)(a1 + 320) = v17;
        v22[9] = v16;
        return v18;
      }
      goto LABEL_31;
    }
  }
  return result;
}
