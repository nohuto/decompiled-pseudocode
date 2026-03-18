/*
 * XREFs of ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C001B318
 * Callers:
 *     EtwTraceAuditApiRegisterRawInputDevices @ 0x1C001AC90 (EtwTraceAuditApiRegisterRawInputDevices.c)
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     EtwTraceProcessWindowInfo @ 0x1C0077800 (EtwTraceProcessWindowInfo.c)
 *     EtwTraceInputProcessDelay @ 0x1C00778E0 (EtwTraceInputProcessDelay.c)
 *     EtwTraceMessageCheckDelay @ 0x1C0078070 (EtwTraceMessageCheckDelay.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C0126C80 (-EtwCaptureStateCallback@@YAXXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall EtwpGetThreadInfoFlags(struct tagTHREADINFO *const a1)
{
  __int64 v1; // r10
  int v3; // r9d
  int v4; // ecx
  int v5; // r9d
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // r8d
  int v10; // ecx
  int v11; // edx
  __int64 v12; // rcx
  int result; // eax

  v1 = *((_QWORD *)a1 + 153);
  v3 = ((v1 & 0x100000000LL) != 0) + 2;
  if ( (v1 & 0x200000000LL) == 0 )
    v3 = (v1 & 0x100000000LL) != 0;
  v4 = v3 | 4;
  if ( (v1 & 0x400000000LL) == 0 )
    v4 = v3;
  v5 = *((_DWORD *)a1 + 120);
  v6 = v4 | 8;
  if ( !*((_DWORD *)a1 + 223) )
    v6 = v4;
  v7 = v6 | 0x10;
  if ( !*((_DWORD *)a1 + 222) )
    v7 = v6;
  v8 = v7 | 0x20;
  if ( v5 >= 0 )
    v8 = v7;
  v9 = v8 | 0x40;
  if ( (v5 & 1) == 0 )
    v9 = v8;
  v10 = v9 | 0x200;
  if ( (v5 & 0x400) == 0 )
    v10 = v9;
  v11 = v10 | 0x80;
  if ( !*((_QWORD *)a1 + 144) )
    v11 = v10;
  v12 = *((_QWORD *)a1 + 53);
  result = v11;
  if ( v12 && *(_DWORD *)(v12 + 40) )
    result = v11 | 0x100;
  if ( gptiForeground == a1 )
    result |= 0x400u;
  if ( v12 == gpqForeground )
    return result | 0x800;
  return result;
}
