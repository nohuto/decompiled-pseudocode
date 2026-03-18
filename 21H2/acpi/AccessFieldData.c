/*
 * XREFs of AccessFieldData @ 0x1C001AC40
 * Callers:
 *     WriteFieldObj @ 0x1C001A310 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C001A6A0 (ReadFieldObj.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     AccessBaseField @ 0x1C001AE70 (AccessBaseField.c)
 *     WriteBuffField @ 0x1C001B368 (WriteBuffField.c)
 *     PushAccFieldObj @ 0x1C001B7F8 (PushAccFieldObj.c)
 *     ReadBuffField @ 0x1C001CA14 (ReadBuffField.c)
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetFieldUnitRegionObj @ 0x1C00666B8 (GetFieldUnitRegionObj.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     PushPreserveWriteObj @ 0x1C00691D8 (PushPreserveWriteObj.c)
 */

__int64 __fastcall AccessFieldData(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4, char a5)
{
  __int64 *v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // ecx
  __int64 v19; // r9
  int v20; // r10d
  int v21; // edx
  __int64 v22; // r9
  unsigned int v23; // ecx
  __int64 ObjectPath; // rax
  void *v25; // rbp
  int v26; // r8d
  unsigned __int64 v27; // [rsp+58h] [rbp+10h]

  if ( *(_WORD *)(a2 + 2) == 14 )
  {
    v16 = *(_QWORD *)(a2 + 32);
    if ( a5 )
      return ReadBuffField(a1, v16);
    else
      return WriteBuffField(a1, v16, a3, *a4);
  }
  else
  {
    v8 = *(__int64 **)(a2 + 32);
    v9 = 0LL;
    v10 = *v8;
    v11 = *(unsigned __int16 *)(*v8 + 66);
    if ( (_WORD)v11 == 132 )
    {
      v17 = *(_QWORD *)(v10 + 96);
      if ( a5 )
      {
        return (unsigned int)PushAccFieldObj(
                               a1,
                               ReadFieldObj,
                               *(_QWORD *)(v17 + 8) + 64LL,
                               *(_QWORD *)(*(_QWORD *)(v17 + 8) + 96LL) + 8LL,
                               a4,
                               4);
      }
      else
      {
        v18 = a3[2];
        if ( v18 >= 0x40 )
          v19 = 0LL;
        else
          v19 = 1LL << v18;
        v20 = a3[3];
        LOBYTE(v21) = 1;
        v22 = ~((v19 - 1) << a3[1]);
        v23 = (v20 & 0xF) - 1;
        if ( v23 > 3 || (v21 = 1 << v23, 8 * (1 << v23) < 64) )
          v9 = 1LL << (8 * (unsigned __int8)v21);
        if ( ((v9 - 1) & v22) != 0 && (v20 & 0x60) == 0 )
          return (unsigned int)PushPreserveWriteObj(a1, *(_QWORD *)(v17 + 8) + 64LL, *a4);
        else
          return (unsigned int)PushAccFieldObj(
                                 a1,
                                 WriteFieldObj,
                                 *(_QWORD *)(v17 + 8) + 64LL,
                                 *(_QWORD *)(*(_QWORD *)(v17 + 8) + 96LL) + 8LL,
                                 a4,
                                 4);
      }
    }
    else
    {
      v12 = 0;
      if ( v11 == 131 || v11 == 130 )
      {
        v27 = **(_QWORD **)(v10 + 96);
        v13 = v27;
        if ( v27 && *(_WORD *)(v27 + 66) != 10 )
        {
          v12 = -1072431101;
          LogError(3222536195LL);
          AcpiDiagTraceAmlError(0LL, 3222536195LL);
          ObjectPath = GetObjectPath(v27);
          v25 = (void *)ObjectPath;
          v26 = *(unsigned __int16 *)(v27 + 66);
          if ( ObjectPath )
          {
            PrintDebugMessage(55, ObjectPath, v26, 0, 0LL);
            ExFreePoolWithTag(v25, 0);
          }
          else
          {
            PrintDebugMessage(55, (unsigned int)&unk_1C006FB8B, v26, 0, 0LL);
          }
        }
        else
        {
          if ( v27 )
          {
            if ( (gdwfAMLI & 4) != 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v27 + 112));
              v13 = v27;
            }
            v9 = v13;
            v14 = v13;
          }
          else
          {
            LODWORD(v13) = 0;
            v14 = 0LL;
          }
          if ( v14 )
          {
            v12 = AccessBaseField(a1, v13, (_DWORD)a3, (_DWORD)a4, a5);
            if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 112), 0xFFFFFFFF) == 1 )
            {
              *(_WORD *)(v9 + 64) |= 4u;
              if ( (*(_WORD *)(v9 + 64) & 0x40) == 0 )
                FreeNameSpaceObjects(v9);
            }
          }
        }
      }
      else
      {
        v12 = -1072431101;
        LogError(3222536195LL);
        AcpiDiagTraceAmlError(0LL, 3222536195LL);
        PrintDebugMessage(56, MEMORY[0x42], 0, 0, 0LL);
      }
    }
    return v12;
  }
}
