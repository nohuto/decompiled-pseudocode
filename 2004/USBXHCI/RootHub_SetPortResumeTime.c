/*
 * XREFs of RootHub_SetPortResumeTime @ 0x1C003D0A4
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C0017ADC (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011228 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0012CF4 (RootHub_AcquireReadModifyWriteLock.c)
 */

char __fastcall RootHub_SetPortResumeTime(__int64 a1, int a2, int a3, int a4)
{
  unsigned int v4; // edi
  __int16 v5; // si
  __int64 v7; // rbx
  int v8; // r8d
  int v9; // r9d

  v5 = a3;
  v4 = a2 - 1;
  v7 = *(_QWORD *)(a1 + 48) + 104LL * (unsigned int)(a2 - 1);
  RootHub_AcquireReadModifyWriteLock(a1, a2 - 1, a3, a4);
  ++*(_DWORD *)(v7 + 48);
  *(_WORD *)(v7 + 52) = v5;
  return RootHub_ReleaseReadModifyWriteLock(a1, v4, v8, v9);
}
