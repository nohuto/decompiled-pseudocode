/*
 * XREFs of CmpQueryNameString @ 0x140716838
 * Callers:
 *     CmKtmNotification @ 0x1406A36F0 (CmKtmNotification.c)
 *     CmpInitCmRM @ 0x140716078 (CmpInitCmRM.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x140723468 (CmpTraceHiveMountBaseFileMounted.c)
 *     CmpStartRMLog @ 0x14077D4E4 (CmpStartRMLog.c)
 *     CmpTraceHiveRestoreStart @ 0x14086AD10 (CmpTraceHiveRestoreStart.c)
 *     CmpAddRemoveRMLogContainer @ 0x1408751D4 (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x14027F0B0 (RtlAppendUnicodeStringToString.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExpAllocateStringRoutine @ 0x1406A0F60 (ExpAllocateStringRoutine.c)
 *     ObReferenceObjectByHandle @ 0x1406F0BC0 (ObReferenceObjectByHandle.c)
 *     ObQueryNameStringMode @ 0x140718E10 (ObQueryNameStringMode.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall CmpQueryNameString(void *a1, UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  int v4; // ebx
  SIZE_T i; // rbp
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v7; // rdi
  int NameStringMode; // eax
  SIZE_T Length; // rcx
  wchar_t *StringRoutine; // rax
  NTSTATUS appended; // eax
  unsigned __int16 v12; // dx
  wchar_t *Buffer; // r8
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp+20h] BYREF

  v14 = 0;
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(a1, 1u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, (PVOID *)&DmaAdapter, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    for ( i = 272LL; ; i = v14 )
    {
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, i, 0x62534D43u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      NameStringMode = ObQueryNameStringMode((_DWORD)DmaAdapter, (_DWORD)PoolWithTag, i, (unsigned int)&v14, 0);
      v4 = NameStringMode;
      if ( NameStringMode >= 0 )
      {
        a2->Length = 0;
        Length = v7->Length;
        a2->MaximumLength = v7->Length;
        StringRoutine = (wchar_t *)ExpAllocateStringRoutine(Length);
        a2->Buffer = StringRoutine;
        if ( StringRoutine )
        {
          appended = RtlAppendUnicodeStringToString(a2, v7);
          v12 = a2->Length;
          v4 = appended;
          if ( a2->Length )
          {
            Buffer = a2->Buffer;
            do
            {
              if ( Buffer[((unsigned __int64)v12 >> 1) - 1] )
                break;
              v12 -= 2;
              a2->Length = v12;
            }
            while ( v12 );
          }
        }
        else
        {
          v4 = -1073741801;
        }
LABEL_9:
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        break;
      }
      if ( NameStringMode != -2147483643 || v14 <= (unsigned int)i )
        goto LABEL_9;
      ExFreePoolWithTag(v7, 0);
    }
    HalPutDmaAdapter(DmaAdapter);
    return v4;
  }
  return result;
}
