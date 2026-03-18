/*
 * XREFs of InitClientInfo @ 0x1C0031274
 * Callers:
 *     InitSystemThread @ 0x1C0030EE0 (InitSystemThread.c)
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 */

__int64 __fastcall InitClientInfo(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  PVOID CurrentProcess; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  BOOL v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rcx

  v2 = *(_QWORD *)(a1 + 472);
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(a1 + 624);
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 28LL) = *(_DWORD *)(a1 + 480);
  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 208LL) = 0LL;
  v3 = *(_QWORD *)(a1 + 432);
  v4 = *(_QWORD *)(a1 + 472);
  if ( v3 )
  {
    *(_WORD *)(v4 + 152) = *(_WORD *)(v3 + 72);
    v4 = *(_QWORD *)(a1 + 472);
    *(_QWORD *)(v4 + 144) = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 40LL);
  }
  else
  {
    *(_WORD *)(v4 + 152) = 0;
    *(_QWORD *)(*(_QWORD *)(a1 + 472) + 144LL) = 0LL;
  }
  CurrentProcess = (PVOID)PsGetCurrentProcess(v4, v2);
  v9 = 0;
  if ( CurrentProcess )
    v9 = CurrentProcess == g_pepDwm;
  v10 = v9;
  v11 = *(_QWORD *)(a1 + 416);
  if ( *(int *)(v11 + 12) < 0 )
    v10 |= 2u;
  if ( (*(_DWORD *)(v11 + 820) & 0x800) != 0 )
    v10 |= 4u;
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(CurrentProcess, v5, v7, v8) + 12) & 0x20000000) != 0 )
    v10 |= 0x40u;
  *(_QWORD *)(*(_QWORD *)(a1 + 472) + 224LL) |= v10;
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 232LL) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 236LL) = 0;
  v12 = *(_QWORD *)(a1 + 472);
  *(_QWORD *)(a1 + 360) = v12 + 232;
  *(_DWORD *)(v12 + 240) = *(_DWORD *)(a1 + 344);
  *(_DWORD *)(*(_QWORD *)(a1 + 472) + 244LL) = 0;
  *(_QWORD *)(a1 + 368) = *(_QWORD *)(a1 + 472) + 240LL;
  return 1LL;
}
