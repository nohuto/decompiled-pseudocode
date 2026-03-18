/*
 * XREFs of Release @ 0x1C0022C00
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0009B90 (ValidateArgTypes.c)
 *     PushFrame @ 0x1C0022B78 (PushFrame.c)
 *     GetObjectPath @ 0x1C0023838 (GetObjectPath.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     ReleaseASLMutex @ 0x1C002F0CC (ReleaseASLMutex.c)
 *     GetObjectTypeName @ 0x1C00652C8 (GetObjectTypeName.c)
 */

__int64 __fastcall Release(struct _SLIST_ENTRY *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r14
  __int16 v8; // si
  __int64 v9; // r8
  __int64 v10; // rdx
  void *ObjectPath; // rsi
  int ObjectTypeName; // eax
  int v14; // r11d
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v4 = ValidateArgTypes((__int64)a1, a2[10], 0, "O");
  if ( !v4 )
  {
    v5 = a2[10];
    v15 = 0LL;
    v6 = *(_QWORD *)(v5 + 16);
    LOBYTE(v5) = gdwfAMLI;
    a2[8] = v6;
    if ( (v5 & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
      v6 = a2[8];
    }
    v7 = *(_QWORD *)(v6 + 96);
    v8 = *(_WORD *)(v6 + 64) & 2;
    if ( *(_WORD *)(v6 + 66) == 9 )
    {
      v4 = PushFrame(a1, 1179403602, 0x38u, (__int64)ParseRelease, &v15);
      if ( v4 )
      {
        LOBYTE(v9) = v8 != 0;
        return (unsigned int)ReleaseASLMutex(a1, v7, v9);
      }
      else
      {
        v10 = v15;
        *(_QWORD *)(v15 + 32) = v7;
        *(_QWORD *)(v10 + 40) = a2[11];
        *(_QWORD *)(v10 + 48) = *(_QWORD *)(a2[8] + 16LL);
        if ( v8 )
          *(_DWORD *)(v10 + 16) = 0x10000;
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      PrintDebugMessage(173, v14, ObjectTypeName, 0, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
