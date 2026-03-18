/*
 * XREFs of _LockCaptureWindow@8 @ 0xC5242
 * Callers:
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     _zzzAttachToQueue@16 @ 0xC7DF0 (_zzzAttachToQueue@16.c)
 * Callees:
 *     _UpdateRawMouseMode@4 @ 0x448A8 (_UpdateRawMouseMode@4.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SGXPBUtagQ@@PAUtagWND@@_N@Z @ 0xC529E (-SetCapture@Mouse@InputTraceLogging@@SGXPBUtagQ@@PAUtagWND@@_N@Z.c)
 */

int __fastcall LockCaptureWindow(int a1, BOOL a2)
{
  int v3; // ecx
  int v4; // esi
  int v5; // esi
  int i; // ecx
  int v7; // esi
  bool v9; // [esp-4h] [ebp-14h]

  v3 = 3;
  v4 = a1;
  while ( v3 )
  {
    v4 += 4;
    --v3;
  }
  v5 = gpsiLock;
  for ( i = 3; i; --i )
    v5 += 4;
  if ( *(_DWORD *)(a1 + 56) )
    --*(_DWORD *)(_gpsi + 6236);
  if ( a2 )
    ++*(_DWORD *)(_gpsi + 6236);
  v9 = a2;
  v7 = HMAssignmentLock(a1 + 56, a2);
  UpdateRawMouseMode((_DWORD *)a1);
  InputTraceLogging::Mouse::SetCapture(0, (struct tagWND *)(a1 + 56), v9);
  return v7;
}
