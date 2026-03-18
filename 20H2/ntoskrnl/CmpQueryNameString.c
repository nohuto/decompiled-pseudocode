/*
 * XREFs of CmpQueryNameString @ 0x140711A48
 * Callers:
 *     CmpTraceHiveMountBaseFileMounted @ 0x1405DBBA8 (CmpTraceHiveMountBaseFileMounted.c)
 *     CmKtmNotification @ 0x1406A3E40 (CmKtmNotification.c)
 *     CmpInitCmRM @ 0x14071037C (CmpInitCmRM.c)
 *     CmpStartRMLog @ 0x140779704 (CmpStartRMLog.c)
 *     CmpTraceHiveRestoreStart @ 0x14086D0E0 (CmpTraceHiveRestoreStart.c)
 *     CmpAddRemoveRMLogContainer @ 0x1408778EC (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     RtlAppendUnicodeStringToString @ 0x140340C70 (RtlAppendUnicodeStringToString.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     ObQueryNameStringMode @ 0x1406350A0 (ObQueryNameStringMode.c)
 *     ExpAllocateStringRoutine @ 0x1406C4F70 (ExpAllocateStringRoutine.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpQueryNameString(void *a1, UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  int v4; // ebx
  SIZE_T i; // rbp
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v7; // rdi
  int v8; // eax
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
      v8 = ObQueryNameStringMode((char *)DmaAdapter, (__int64)PoolWithTag, i, &v14, 0);
      v4 = v8;
      if ( v8 >= 0 )
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
      if ( v8 != -2147483643 || v14 <= (unsigned int)i )
        goto LABEL_9;
      ExFreePoolWithTag(v7, 0);
    }
    HalPutDmaAdapter(DmaAdapter);
    return v4;
  }
  return result;
}
