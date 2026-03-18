/*
 * XREFs of RIMCloseDev @ 0x1C005A3DC
 * Callers:
 *     rimFakePnpRemoveComplete @ 0x1C00569D0 (rimFakePnpRemoveComplete.c)
 *     rimOnPnpArrived @ 0x1C0059E98 (rimOnPnpArrived.c)
 *     rimOnPnpRemoveComplete @ 0x1C005A1C4 (rimOnPnpRemoveComplete.c)
 *     RIMUnregisterForInput @ 0x1C00A0B60 (RIMUnregisterForInput.c)
 *     rimOnPnpQueryRemove @ 0x1C0175D74 (rimOnPnpQueryRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCloseDev(__int64 a1)
{
  unsigned int v2; // edi
  void *v3; // rcx
  NTSTATUS v4; // eax
  void *v5; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = *(void **)(a1 + 224);
  if ( v3 )
  {
    IoStatusBlock = 0LL;
    ZwCancelIoFile(v3, &IoStatusBlock);
    v4 = ZwClose(*(HANDLE *)(a1 + 224));
    v5 = *(void **)(a1 + 232);
    v2 = v4;
    if ( v5 )
    {
      ObfDereferenceObject(v5);
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    *(_QWORD *)(a1 + 224) = 0LL;
    *(_DWORD *)(a1 + 184) &= 0xFFFFFE7F;
  }
  return v2;
}
