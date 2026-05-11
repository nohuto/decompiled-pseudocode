/*
 * XREFs of USBHwGetCurrentFrame @ 0x1C0003CF8
 * Callers:
 *     UsbHwFrameCountTimestamp @ 0x1C0003DAC (UsbHwFrameCountTimestamp.c)
 *     USBType1RenderBytePosition @ 0x1C0004870 (USBType1RenderBytePosition.c)
 *     USBType1ProcessStreamPointer @ 0x1C0005F68 (USBType1ProcessStreamPointer.c)
 *     USBCaptureBytePosition @ 0x1C00073F0 (USBCaptureBytePosition.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00133D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall USBHwGetCurrentFrame(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v4; // edx
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v7 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 72) + 56LL);
  if ( v5 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, int *))(v5 + 40))(*(_QWORD *)(v5 + 8), &v7);
    v4 = v7;
  }
  else
  {
    result = 3221225659LL;
  }
  if ( (int)result >= 0 )
  {
    if ( a2 )
      *a2 = v4;
  }
  return result;
}
