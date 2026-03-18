/*
 * XREFs of ?ReportHungExplorerToWer@@YGJPAUtagDESKTOP@@PBUtagTHREADINFO@@@Z @ 0x19F9C2
 * Callers:
 *     _DoExplorerHangDetection@4 @ 0x11B94 (_DoExplorerHangDetection@4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ReportHungExplorerToWer(int a1, PETHREAD *a2)
{
  HANDLE *v4; // esi
  NTSTATUS v6; // edi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-1Ch] BYREF
  void *ThreadHandle; // [esp+24h] [ebp-4h] BYREF

  ThreadHandle = 0;
  v4 = (HANDLE *)Win32AllocPoolNonPaged(12, 1163359061);
  if ( !v4 )
    return -1073741801;
  *v4 = PsGetProcessId(**(PEPROCESS **)(*(_DWORD *)(a1 + 4) + 88));
  v4[1] = PsGetThreadId(*a2);
  v4[2] = (HANDLE)1024;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  ObjectAttributes.Length = 24;
  v6 = PsCreateSystemThread(
         &ThreadHandle,
         (ULONG)&loc_1FFFFC + 3,
         &ObjectAttributes,
         (HANDLE)0xFFFFFFFF,
         0,
         WerSubmitReportWorker,
         v4);
  if ( v6 < 0 )
    Win32FreePool(v4);
  else
    ZwClose(ThreadHandle);
  return v6;
}
