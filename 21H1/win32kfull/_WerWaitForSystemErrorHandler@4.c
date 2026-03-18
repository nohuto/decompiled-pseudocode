/*
 * XREFs of _WerWaitForSystemErrorHandler@4 @ 0x1B9E72
 * Callers:
 *     _WerKernelSubmitReportForHungProcess@12 @ 0x1B9A56 (_WerKernelSubmitReportForHungProcess@12.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WerWaitForSystemErrorHandler(int a1)
{
  NTSTATUS result; // eax
  union _LARGE_INTEGER *p_Timeout; // eax
  NTSTATUS v4; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-30h] BYREF
  _WORD v6[2]; // [esp+20h] [ebp-18h] BYREF
  const wchar_t *v7; // [esp+24h] [ebp-14h]
  union _LARGE_INTEGER Timeout; // [esp+28h] [ebp-10h] BYREF
  void *EventHandle; // [esp+34h] [ebp-4h] BYREF

  v6[0] = 70;
  v6[1] = 72;
  v7 = L"\\KernelObjects\\SystemErrorPortReady";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v6;
  EventHandle = 0;
  Timeout.QuadPart = 0LL;
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  result = ZwOpenEvent(&EventHandle, 0x100001u, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( a1 == -1 )
    {
      p_Timeout = 0;
    }
    else
    {
      Timeout.QuadPart = -10000LL * a1;
      p_Timeout = &Timeout;
    }
    v4 = ZwWaitForSingleObject(EventHandle, 0, p_Timeout);
    ZwClose(EventHandle);
    return v4;
  }
  return result;
}
