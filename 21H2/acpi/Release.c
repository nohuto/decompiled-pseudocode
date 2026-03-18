/*
 * XREFs of Release @ 0x1C001C1A0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     PushFrame @ 0x1C0018660 (PushFrame.c)
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 *     ReleaseASLMutex @ 0x1C0069B14 (ReleaseASLMutex.c)
 */

__int64 __fastcall Release(struct _SLIST_ENTRY *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  _SLIST_ENTRY *v7; // r14
  __int16 v8; // si
  __int64 v9; // r8
  _SLIST_ENTRY *v10; // rdx
  void *ObjectPath; // rsi
  int ObjectTypeName; // eax
  int v14; // r11d
  _SLIST_ENTRY *v15; // [rsp+68h] [rbp+10h] BYREF

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
    v7 = *(_SLIST_ENTRY **)(v6 + 96);
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
        v15[2].Next = v7;
        *((_QWORD *)&v10[2].Next + 1) = a2[11];
        v10[3].Next = *(_SLIST_ENTRY **)(a2[8] + 16LL);
        if ( v8 )
          LODWORD(v10[1].Next) = 0x10000;
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
