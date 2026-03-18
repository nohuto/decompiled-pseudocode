/*
 * XREFs of FreeHidTLCInfo @ 0x1C01D5B30
 * Callers:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C0006F10 (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ?CleanupFreedTLCInfo@@YAXXZ @ 0x1C00F80E4 (-CleanupFreedTLCInfo@@YAXXZ.c)
 *     ?DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z @ 0x1C00F9CC0 (-DerefIncludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@HH@Z.c)
 *     ?DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x1C01D5354 (-DerefExcludeRequest@@YAXPEAUtagPROCESS_HID_REQUEST@@HH@Z.c)
 *     CleanupHidRequestList @ 0x1C01D5A80 (CleanupHidRequestList.c)
 * Callees:
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00F8DDC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00F8E0C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 */

void __fastcall FreeHidTLCInfo(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v4, (struct _KTHREAD **)gTLCInfoLock);
  v2 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v3 = (_QWORD *)a1[1], (_QWORD *)*v3 != a1) )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  Win32FreePool(a1);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v4);
}
