/*
 * XREFs of AllocThreadBufferWithTag @ 0x1C0007E30
 * Callers:
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C0007A40 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C0007B20 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall AllocThreadBufferWithTag(unsigned int a1, unsigned int a2, char a3)
{
  __int64 v3; // rsi
  _QWORD *v5; // rbp
  unsigned int v6; // ebx
  _QWORD *v7; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned int v15; // ecx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax

  v3 = 0LL;
  v5 = 0LL;
  if ( a1 < 0xFFFFEFDF )
  {
    if ( (a3 & 0x20) != 0 )
    {
      v15 = a1 + 32;
      if ( v15 > 0x400 && v15 + 4096 >= v15 )
        v15 = (v15 + 4095) & 0xFFFFF000;
      a1 = v15 - 32;
    }
    v6 = a1 + 32;
    if ( a1 != -32 && qword_1C0258BD0 && (int)qword_1C0258BD0() >= 0 )
    {
      v7 = qword_1C0258BD8 ? (_QWORD *)qword_1C0258BD8(33LL, v6, a2) : 0LL;
      if ( v7 )
      {
        v5 = v7 + 4;
        KeEnterCriticalRegion();
        CurrentThread = KeGetCurrentThread();
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (CurrentProcess = PsGetCurrentProcess(v10, v9),
              ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
              CurrentThreadProcess = PsGetCurrentThreadProcess(),
              ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
            v3 = *ThreadWin32Thread;
        }
        v7[3] = FreeThreadBufferWithTag;
        v7[2] = v5;
        if ( v3 )
        {
          v12 = *(_QWORD *)(v3 + 88);
          v13 = (_QWORD *)(v3 + 88);
          if ( *(_QWORD *)(v12 + 8) != v3 + 88 )
            __fastfail(3u);
          *v7 = v12;
          v7[1] = v13;
          *(_QWORD *)(v12 + 8) = v7;
          *v13 = v7;
        }
        else
        {
          v7[1] = v7;
          *v7 = v7;
        }
        KeLeaveCriticalRegion();
      }
    }
  }
  return v5;
}
