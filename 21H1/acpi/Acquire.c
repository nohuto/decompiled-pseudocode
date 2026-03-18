/*
 * XREFs of Acquire @ 0x1C0022A90
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0009B90 (ValidateArgTypes.c)
 *     PushFrame @ 0x1C0022B78 (PushFrame.c)
 *     GetObjectPath @ 0x1C0023838 (GetObjectPath.c)
 *     LogError @ 0x1C002A08C (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B5B0 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     GetObjectTypeName @ 0x1C00652C8 (GetObjectTypeName.c)
 */

__int64 __fastcall Acquire(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  void *ObjectPath; // rsi
  int ObjectTypeName; // eax
  int v11; // r11d
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a1, a2[10], 0, "OI");
  if ( !v4 )
  {
    v5 = a2[10];
    v12 = 0LL;
    v6 = *(_QWORD *)(v5 + 16);
    LOBYTE(v5) = gdwfAMLI;
    a2[8] = v6;
    if ( (v5 & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
      v6 = a2[8];
    }
    if ( *(_WORD *)(v6 + 66) == 9 )
    {
      v4 = PushFrame(a1, 1179730753, 64, (unsigned int)ParseAcquire, (__int64)&v12);
      if ( !v4 )
      {
        v7 = v12;
        *(_QWORD *)(v12 + 32) = *(_QWORD *)(a2[8] + 96LL);
        *(_DWORD *)(v7 + 16) = (*(_WORD *)(a2[8] + 64LL) & 2 | 8) << 15;
        *(_WORD *)(v7 + 40) = *(_WORD *)(a2[10] + 56LL);
        *(_QWORD *)(v7 + 48) = a2[11];
        *(_QWORD *)(v7 + 56) = *(_QWORD *)(a2[8] + 16LL);
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      PrintDebugMessage(3, v11, ObjectTypeName, 0, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
