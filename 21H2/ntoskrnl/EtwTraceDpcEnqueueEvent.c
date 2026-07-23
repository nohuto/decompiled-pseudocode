/*
 * XREFs of EtwTraceDpcEnqueueEvent @ 0x1405A7954
 * Callers:
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void (__fastcall *__fastcall EtwTraceDpcEnqueueEvent(
        __int64 a1,
        void (__fastcall *a2)(struct _KDPC *Dpc, PVOID DeferredContext, unsigned int *SystemArgument1, PVOID SystemArgument2),
        int a3,
        int a4,
        int a5,
        char a6))(struct _KDPC *Dpc, PVOID DeferredContext, unsigned int *SystemArgument1, PVOID SystemArgument2)
{
  void (__fastcall *result)(struct _KDPC *, PVOID, unsigned int *, PVOID); // rax
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  int v8; // [rsp+38h] [rbp-28h]
  int v9; // [rsp+3Ch] [rbp-24h]
  int v10; // [rsp+40h] [rbp-20h]
  char v11; // [rsp+44h] [rbp-1Ch]
  __int16 v12; // [rsp+45h] [rbp-1Bh]
  char v13; // [rsp+47h] [rbp-19h]
  _QWORD v14[2]; // [rsp+48h] [rbp-18h] BYREF

  result = EtwpStackWalkDpc;
  v12 = 0;
  v13 = 0;
  if ( a2 != EtwpStackWalkDpc )
  {
    v10 = a5;
    v11 = a6;
    v12 = 0;
    v13 = 0;
    v7 = a1;
    v8 = a3;
    v9 = a4;
    v14[0] = &v7;
    v14[1] = 24LL;
    return (void (__fastcall *)(struct _KDPC *, PVOID, unsigned int *, PVOID))EtwTraceKernelEvent(
                                                                                (int)v14,
                                                                                1,
                                                                                0x20040000u,
                                                                                3940,
                                                                                5250562);
  }
  return result;
}
