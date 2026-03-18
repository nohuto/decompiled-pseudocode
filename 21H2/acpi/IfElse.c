/*
 * XREFs of IfElse @ 0x1C0015FE0
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0014FF0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall IfElse(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _SLIST_ENTRY **v5; // r8
  _SLIST_ENTRY *v6; // rcx
  unsigned __int8 *v7; // rax
  unsigned int v8; // r10d
  unsigned __int8 *v9; // r14
  unsigned int v10; // r9d
  _SLIST_ENTRY *v11; // rbp
  __int64 v12; // rdi
  __int64 v13; // r15
  unsigned int v14; // esi
  __int64 v15; // r12
  __int64 v16; // r13
  _SLIST_ENTRY *v17; // rax
  _SLIST_ENTRY *v18; // rdx
  char v19; // al
  _SLIST_ENTRY *v20; // rdx
  __int64 v21; // rbp
  _SLIST_ENTRY *v22; // r14
  __int64 v23; // r13
  _SLIST_ENTRY *v24; // rax
  char v25; // al
  _SLIST_ENTRY *v26; // rax
  unsigned int v27; // r10d
  unsigned int v28; // r9d
  unsigned __int8 *v29; // r8
  unsigned __int8 v30; // r11
  unsigned __int8 *v31; // rdx
  unsigned __int8 v32; // cl
  int v33; // eax
  unsigned __int8 v34; // r11
  int v35; // eax
  unsigned __int8 v36; // cl
  _SLIST_ENTRY *v37; // rax
  __int64 v38; // [rsp+68h] [rbp+10h]

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
    v5 = (_SLIST_ENTRY **)(a2 + 40);
    if ( *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL) )
    {
      v20 = *v5;
      v14 = 0;
      if ( (unsigned __int64)*v5 < *(_QWORD *)(a2 + 48) && LOBYTE(v20->Next) == 0xA1 )
      {
        v27 = BYTE1(v20->Next);
        v28 = v27 >> 6;
        v29 = (unsigned __int8 *)&v20->Next + 2;
        v22 = v20;
        if ( BYTE1(v20->Next) >> 6 )
        {
          v27 &= 0xFu;
          v34 = 0;
          do
          {
            v35 = *v29++;
            v36 = v34++;
            v27 |= v35 << (8 * v36 + 4);
          }
          while ( v34 < (unsigned __int8)v28 );
        }
        v21 = (__int64)&v20->Next + v27 + 1;
      }
      else
      {
        v21 = 0LL;
        v22 = *v5;
      }
      v12 = *(_QWORD *)(a2 + 88);
      v13 = *(_QWORD *)(a1 + 320);
      v15 = *(_QWORD *)(a1 + 88);
      v23 = *(_QWORD *)(a1 + 80);
      v38 = *(_QWORD *)(a1 + 120);
      v24 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x50u);
      v18 = v24;
      if ( v24 )
      {
        *((_QWORD *)&v24->Next + 1) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v24;
        LODWORD(v24->Next) = 1347371859;
        *((_QWORD *)&v24[1].Next + 1) = ParseScope;
        *(_QWORD *)(a1 + 120) = v38;
        v24[2].Next = v22;
        *((_QWORD *)&v24[2].Next + 1) = v21;
        v24[3].Next = *(_SLIST_ENTRY **)(a1 + 80);
        v25 = gdwfAMLI;
        *(_QWORD *)(a1 + 80) = v23;
        if ( (v25 & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v23 + 112));
        goto LABEL_20;
      }
LABEL_32:
      LogError(3222536194LL);
      AcpiDiagTraceAmlError(a1, 3222536194LL);
      PrintDebugMessage(153, 0, 0, 0, 0LL);
      return (unsigned int)-1072431102;
    }
    v6 = *v5;
    *(_QWORD *)(a1 + 120) = *v5;
    if ( (unsigned __int64)v6 < *(_QWORD *)(a2 + 48) && LOBYTE(v6->Next) == 0xA1 )
    {
      v7 = (unsigned __int8 *)&v6->Next + 1;
      *(_QWORD *)(a1 + 120) = (char *)&v6->Next + 1;
      if ( a2 != -40 )
      {
        *v5 = (_SLIST_ENTRY *)v7;
        v7 = *(unsigned __int8 **)(a1 + 120);
      }
      v8 = *v7;
      v9 = v7 + 1;
      *(_QWORD *)(a1 + 120) = v7 + 1;
      v10 = v8 >> 6;
      if ( (unsigned __int8)(v8 >> 6) )
      {
        v8 &= 0xFu;
        v30 = 0;
        do
        {
          v31 = *(unsigned __int8 **)(a1 + 120);
          v32 = v30++;
          v33 = *v31;
          v9 = v31 + 1;
          *(_QWORD *)(a1 + 120) = v31 + 1;
          v8 |= v33 << (8 * v32 + 4);
        }
        while ( v30 < (unsigned __int8)v10 );
      }
      v11 = *v5;
      if ( a2 != -40 )
      {
        v11 = (_SLIST_ENTRY *)((char *)v11 + v8);
        *v5 = v11;
        v9 = *(unsigned __int8 **)(a1 + 120);
      }
      v12 = *(_QWORD *)(a2 + 88);
      v13 = *(_QWORD *)(a1 + 320);
      v14 = 0;
      v15 = *(_QWORD *)(a1 + 88);
      v16 = *(_QWORD *)(a1 + 80);
      v17 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x50u);
      v18 = v17;
      if ( v17 )
      {
        *((_QWORD *)&v17->Next + 1) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v17;
        LODWORD(v17->Next) = 1347371859;
        *((_QWORD *)&v17[1].Next + 1) = ParseScope;
        *(_QWORD *)(a1 + 120) = v9;
        v17[2].Next = v11;
        *((_QWORD *)&v17[2].Next + 1) = 0LL;
        v17[3].Next = *(_SLIST_ENTRY **)(a1 + 80);
        v19 = gdwfAMLI;
        *(_QWORD *)(a1 + 80) = v16;
        if ( (v19 & 4) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v16 + 112));
          *((_QWORD *)&v18[3].Next + 1) = *(_QWORD *)(a1 + 88);
          v37 = *(_SLIST_ENTRY **)(a1 + 320);
          *(_QWORD *)(a1 + 88) = v15;
          v18[4].Next = v37;
          *(_QWORD *)(a1 + 320) = v13;
          *((_QWORD *)&v18[4].Next + 1) = v12;
          return v14;
        }
LABEL_20:
        *((_QWORD *)&v18[3].Next + 1) = *(_QWORD *)(a1 + 88);
        v26 = *(_SLIST_ENTRY **)(a1 + 320);
        *(_QWORD *)(a1 + 88) = v15;
        v18[4].Next = v26;
        *(_QWORD *)(a1 + 320) = v13;
        *((_QWORD *)&v18[4].Next + 1) = v12;
        return v14;
      }
      goto LABEL_32;
    }
  }
  return result;
}
