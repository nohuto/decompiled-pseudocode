/*
 * XREFs of _EngFileIoControl@28 @ 0x1E7CFA
 * Callers:
 *     <none>
 * Callees:
 *     _CtxDeviceIoControlFile@40 @ 0x23A596 (_CtxDeviceIoControlFile@40.c)
 */

int __thiscall EngFileIoControl(
        void *this,
        PVOID Object,
        int a3,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        ULONG_PTR *a8)
{
  int result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+0h] [ebp-8h] BYREF

  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  result = CtxDeviceIoControlFile(
             Object,
             InputBuffer,
             InputBufferLength,
             OutputBuffer,
             OutputBufferLength,
             (int)this,
             (int)this,
             &IoStatusBlock,
             (int)this);
  *a8 = IoStatusBlock.Information;
  return result;
}
