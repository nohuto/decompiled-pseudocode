/*
 * XREFs of ndisStartMapping @ 0x1C00BDA60
 * Callers:
 *     ndisImmediateReadWritePort @ 0x1C00BD800 (ndisImmediateReadWritePort.c)
 *     ?ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z @ 0x1C00BD970 (-ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisStartMapping(
        INTERFACE_TYPE a1,
        ULONG a2,
        ULONG a3,
        unsigned int a4,
        int a5,
        __int64 *a6,
        LARGE_INTEGER a7)
{
  _BYTE *QuadPart; // rbx
  __int64 v8; // rdi
  LARGE_INTEGER v10; // rax
  __int64 v11; // rax
  LARGE_INTEGER v12[3]; // [rsp+30h] [rbp-18h] BYREF

  QuadPart = (_BYTE *)a7.QuadPart;
  v12[0].QuadPart = 0LL;
  a7.HighPart = 0;
  v8 = a4;
  *QuadPart = 0;
  a7.LowPart = a3;
  if ( a1 == InterfaceTypeUndefined )
  {
    v10 = a7;
    v12[0] = a7;
  }
  else
  {
    if ( ((a1 - 1) & 0xFFFFFFFB) != 0 )
      a1 = Isa;
    if ( !HalTranslateBusAddress(a1, a2, a7, (PULONG)&a5, v12) )
      return 3221225473LL;
    v10 = v12[0];
  }
  if ( a5 )
  {
    *a6 = v10.LowPart;
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MmMapIoSpaceEx)((LARGE_INTEGER)v10.QuadPart, v8, 516LL);
    *a6 = v11;
    if ( !v11 )
      return 3221225626LL;
    *QuadPart = 1;
  }
  return 0LL;
}
