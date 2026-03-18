/*
 * XREFs of Wait @ 0x1C002A600
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     WaitASLEvent @ 0x1C002A6C0 (WaitASLEvent.c)
 *     PushPost @ 0x1C002A7B8 (PushPost.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall Wait(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  char v6; // al
  _BYTE *ObjectPath; // rsi
  int ObjectTypeName; // eax
  int v10; // r11d

  v4 = ValidateArgTypes(a1, a2[10], 0, "OI");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16);
    v6 = gdwfAMLI;
    a2[8] = v5;
    if ( (v6 & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
      v5 = a2[8];
    }
    if ( *(_WORD *)(v5 + 66) == 7 )
    {
      if ( *(_QWORD *)(a2[10] + 56) > 0xFFFFuLL )
      {
        v4 = -1072431089;
        LogError(3222536207LL);
        AcpiDiagTraceAmlError(a1, 3222536207LL);
        PrintDebugMessage(210, *(_QWORD *)(a2[10] + 56), 0, 0, 0LL);
      }
      else
      {
        v4 = PushPost(a1, (unsigned int)ProcessWait, 0, 0, a2[11]);
        if ( !v4 )
          return (unsigned int)WaitASLEvent(a1, *(_QWORD *)(a2[8] + 96), *(unsigned __int16 *)(a2[10] + 56));
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectPath = GetObjectPath(a2[8]);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66));
      PrintDebugMessage(209, v10, ObjectTypeName, 0, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
