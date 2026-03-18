/*
 * XREFs of LogicalCursorPosFromDpiAwarenessContext @ 0x1C0031EF0
 * Callers:
 *     <none>
 * Callees:
 *     PhysicalToLogicalDPIPoint @ 0x1C0031FC0 (PhysicalToLogicalDPIPoint.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LogicalCursorPosFromDpiAwarenessContext(unsigned int a1)
{
  __int64 v2; // rax
  unsigned int v3; // r9d
  int v4; // edx
  int v5; // r8d
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( !qword_1C023F018 )
    return 0LL;
  v2 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C023F018 + 8LL))(qword_1C023F018);
  if ( !v2 )
    return 0LL;
  v3 = *(_DWORD *)(v2 + 76);
  v7 = 0LL;
  if ( (((unsigned __int16)(a1 >> 8) ^ (unsigned __int16)(v3 >> 8)) & 0x1FF) != 0 )
    goto LABEL_15;
  v4 = 1;
  v5 = (a1 & 0xF) == 2 && (a1 & 0x20000000) != 0;
  if ( (v3 & 0xF) != 2 || (v3 & 0x20000000) == 0 )
    v4 = 0;
  if ( v5 == v4 )
    return *(_QWORD *)(v2 + 68);
LABEL_15:
  PhysicalToLogicalDPIPoint(&v7, (char *)gpsi + 4960, a1, 0LL);
  return v7;
}
