/*
 * XREFs of EtwTraceFreezeThawProcess @ 0x140935E3C
 * Callers:
 *     PsThawProcess @ 0x1406001EC (PsThawProcess.c)
 *     PsFreezeProcess @ 0x140600364 (PsFreezeProcess.c)
 * Callees:
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceFreezeThawProcess(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rdx
  int v5; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-30h] BYREF
  __int64 v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+50h] [rbp-18h]
  int v9; // [rsp+54h] [rbp-14h]

  v5 = *(_DWORD *)(a1 + 1088);
  v6.Ptr = (ULONGLONG)&v5;
  v6.Reserved = 0;
  v6.Size = 4;
  v7 = a1 + 1128;
  v9 = 0;
  v8 = 8;
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4524) & 2) != 0 )
  {
    v3 = (const EVENT_DESCRIPTOR *)ProcessFreezeEvent;
    if ( !a2 )
      v3 = &ProcessThawEvent;
    EtwWrite(EtwpPsProvRegHandle, v3, 0LL, 2u, &v6);
  }
  return EtwTraceKernelEvent((int)&v6, 1, 0x40000002u, 805 - (a2 != 0), 5249282);
}
