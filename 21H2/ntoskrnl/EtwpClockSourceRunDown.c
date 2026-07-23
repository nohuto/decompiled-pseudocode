/*
 * XREFs of EtwpClockSourceRunDown @ 0x14093DB3C
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14079763C (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeGetDynamicTickDisableReason @ 0x140272A70 (KeGetDynamicTickDisableReason.c)
 *     EtwpLogKernelEvent @ 0x14035AD50 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

void __fastcall EtwpClockSourceRunDown(__int64 a1, char a2)
{
  unsigned __int8 DynamicTickDisableReason; // al
  unsigned int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // [rsp+30h] [rbp-50h] BYREF
  int v7; // [rsp+38h] [rbp-48h]
  _OWORD v8[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-20h] BYREF
  int v10; // [rsp+68h] [rbp-18h]
  int v11; // [rsp+6Ch] [rbp-14h]

  if ( a2 )
  {
    memset(v8, 0, sizeof(v8));
    ((void (__fastcall *)(_OWORD *))off_140C00870[0])(v8);
    v6 = *(_QWORD *)((char *)v8 + 4);
    DynamicTickDisableReason = KeGetDynamicTickDisableReason();
    v11 = 0;
    v4 = *(_DWORD *)a1;
    v5 = *(_QWORD *)(a1 + 1080);
    v9 = &v6;
    v7 = DynamicTickDisableReason;
    v10 = 12;
    EtwpLogKernelEvent((__int64)&v9, v5, v4, 1u, 0xF5Au, 0x401802u);
  }
}
