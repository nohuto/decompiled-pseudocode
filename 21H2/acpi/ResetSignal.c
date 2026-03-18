/*
 * XREFs of ResetSignal @ 0x1C0026970
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00162B0 (ValidateArgTypes.c)
 *     SignalASLEvent @ 0x1C0026A00 (SignalASLEvent.c)
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0066810 (GetObjectTypeName.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ResetSignal(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  char v5; // cl
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // rcx
  __int64 v10; // rax
  void *ObjectPath; // rsi
  int ObjectTypeName; // eax
  int v13; // r11d
  int v14; // ecx
  __int64 v15; // rbx
  KIRQL v16; // al

  v4 = ValidateArgTypes(a1, a2[10], 0, "O");
  if ( !v4 )
  {
    v5 = gdwfAMLI;
    v6 = *(_QWORD *)(a2[10] + 16LL);
    a2[8] = v6;
    if ( (v5 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
    v7 = *(_DWORD *)(a2[7] + 8LL);
    if ( v7 == 9307 )
    {
      v8 = a2[8];
      if ( *(_WORD *)(v8 + 66) == 7 )
      {
        SignalASLEvent(*(_QWORD *)(v8 + 96));
        return v4;
      }
      v4 = -1072431095;
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      v14 = 175;
    }
    else
    {
      if ( v7 != 9819 )
        return v4;
      v10 = a2[8];
      if ( *(_WORD *)(v10 + 66) == 7 )
      {
        v15 = *(_QWORD *)(v10 + 96);
        v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 24));
        *(_DWORD *)v15 = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 24), v16);
        return 0;
      }
      v4 = -1072431095;
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      v14 = 174;
    }
    PrintDebugMessage(v14, v13, ObjectTypeName, 0, 0LL);
    if ( ObjectPath )
      ExFreePoolWithTag(ObjectPath, 0);
  }
  return v4;
}
