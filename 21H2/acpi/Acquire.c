/*
 * XREFs of Acquire @ 0x1C001C290
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
 */

__int64 __fastcall Acquire(struct _SLIST_ENTRY *a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  _SLIST_ENTRY *v7; // rdx
  void *ObjectPath; // rsi
  int ObjectTypeName; // eax
  int v11; // r11d
  _SLIST_ENTRY *v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes((__int64)a1, a2[10], 0, "OI");
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
      v4 = PushFrame(a1, 1179730753, 0x40u, (__int64)ParseAcquire, &v12);
      if ( !v4 )
      {
        v7 = v12;
        v12[2].Next = *(_SLIST_ENTRY **)(a2[8] + 96LL);
        LODWORD(v7[1].Next) = (*(_WORD *)(a2[8] + 64LL) & 2 | 8) << 15;
        *((_WORD *)&v7[2].Next + 4) = *(_WORD *)(a2[10] + 56LL);
        v7[3].Next = (_SLIST_ENTRY *)a2[11];
        *((_QWORD *)&v7[3].Next + 1) = *(_QWORD *)(a2[8] + 16LL);
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
