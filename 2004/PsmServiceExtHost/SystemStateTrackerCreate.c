/*
 * XREFs of SystemStateTrackerCreate @ 0x18003EE98
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F340 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?SstpInitialize@@YAXPEAU_SYSTEM_STATE_TRACKER@@@Z @ 0x18003EF3C (-SstpInitialize@@YAXPEAU_SYSTEM_STATE_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 SystemStateTrackerCreate()
{
  struct _SYSTEM_STATE_TRACKER *Heap; // rax
  struct _SYSTEM_STATE_TRACKER *v1; // rdi
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+30h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-60h] BYREF
  unsigned int *v6; // [rsp+58h] [rbp-40h]
  int v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+64h] [rbp-34h]
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+68h] [rbp-30h] BYREF

  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_1800A3715,
      0LL,
      0LL,
      2u,
      &v9);
  Heap = (struct _SYSTEM_STATE_TRACKER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xE8uLL);
  v1 = Heap;
  if ( Heap )
  {
    SstpInitialize(Heap);
    v2 = 0;
    GlobalSystemStateTracker = v1;
  }
  else
  {
    v2 = -1073741801;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
  {
    v8 = 0;
    v6 = &v4;
    v4 = v2;
    v7 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800B31E0,
      (unsigned __int8 *)dword_1800A36E4,
      0LL,
      0LL,
      3u,
      &v5);
  }
  return v2;
}
