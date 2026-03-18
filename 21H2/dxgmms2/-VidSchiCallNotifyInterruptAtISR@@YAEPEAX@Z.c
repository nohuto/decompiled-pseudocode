/*
 * XREFs of ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C0044360
 * Callers:
 *     <none>
 * Callees:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C7A0 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiLogInterrupt @ 0x1C000CAA0 (VidSchiLogInterrupt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001E570 (McTemplateK0q_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall VidSchiCallNotifyInterruptAtISR(int **a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+30h] [rbp-18h]

  v7 = -1;
  v8 = 0LL;
  if ( (qword_1C006E010 & 2) != 0 )
  {
    v9 = 1;
    v7 = 4016;
    if ( byte_1C006E941 < 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter, a3, 4016);
  }
  else
  {
    v9 = 0;
  }
  ((void (__fastcall *)(int *, __int64))DxgCoreInterface[78])(&v7, 4016LL);
  VidSchiLogInterrupt(*((_QWORD *)*a1 + 79), a1[1], 0);
  VidSchDdiNotifyInterruptWorker((__int64)*a1, (unsigned int *)a1[1], 0);
  ((void (__fastcall *)(int *))DxgCoreInterface[79])(&v7);
  if ( v9 )
  {
    LOBYTE(v4) = byte_1C006E941;
    if ( byte_1C006E941 < 0 )
      McTemplateK0q_EtwWriteTransfer(v4, (__int64)&EventProfilerExit, v5, v7);
  }
  return 1;
}
