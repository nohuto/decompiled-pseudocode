/*
 * XREFs of IommupHvUnmapDevice @ 0x1404D5390
 * Callers:
 *     IommuMapDevice @ 0x1404D3F30 (IommuMapDevice.c)
 *     IommuUnmapDevice @ 0x1404D4BC0 (IommuUnmapDevice.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IommupHvUnmapDevice(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // ebx
  __int64 result; // rax

  v1 = BugCheckParameter2;
  result = ((__int64 (*)(void))qword_140C4A308)();
  if ( (_DWORD)result == 3473497 )
    KeBugCheckEx(0x159u, 0x3000uLL, v1, 0LL, 0LL);
  return result;
}
