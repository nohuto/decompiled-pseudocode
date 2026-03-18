/*
 * XREFs of W32pProcessCallout @ 0x1C000C880
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C000CBFC (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     AllocateW32Process @ 0x1C000CC70 (AllocateW32Process.c)
 *     DereferenceW32ProcessEx @ 0x1C000CE2C (DereferenceW32ProcessEx.c)
 */

__int64 __fastcall W32pProcessCallout(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 ProcessWin32Process; // rbx
  bool v4; // r15
  bool IsCurrentProcessUmfdHost; // al
  int v6; // edx
  int v7; // eax
  int W32Process; // edi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  bool v14; // r14
  unsigned int CurrentProcessId; // eax
  __int64 v16; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rcx

  v1 = *a1;
  ProcessWin32Process = 0LL;
  v4 = 1;
  IsCurrentProcessUmfdHost = UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost();
  v6 = a1[1] & 1;
  if ( IsCurrentProcessUmfdHost )
  {
    if ( v6 )
    {
      W32Process = AllocateW32Process(v1);
      v14 = W32Process != 1073741851;
      if ( W32Process < 0 )
        return (unsigned int)W32Process;
      ProcessWin32Process = PsGetProcessWin32Process(v1);
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      LOBYTE(v16) = 1;
      *(_DWORD *)(ProcessWin32Process + 56) = CurrentProcessId & 0xFFFFFFFC;
      W32Process = GdiProcessCallout(ProcessWin32Process, v16);
      if ( W32Process >= 0 || !v14 )
        return (unsigned int)W32Process;
      v18 = ProcessWin32Process;
    }
    else
    {
      ThreadWin32Thread = PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, ThreadWin32Thread);
      W32Process = GdiProcessCallout(0LL, 0LL);
      ProcessWin32Process = PsGetProcessWin32Process(v1);
      v18 = ProcessWin32Process;
    }
    vMarkFreeW32Process(v18);
    v12 = 0LL;
LABEL_13:
    DereferenceW32ProcessEx(ProcessWin32Process, v12);
    return (unsigned int)W32Process;
  }
  if ( !v6 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(v1);
    v11 = PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v11 )
      PsSetThreadWin32Thread(KeGetCurrentThread(), 0LL, v11);
    xxxUserProcessCallout(ProcessWin32Process, 0LL);
    DCompositionProcessCallout(ProcessWin32Process, 0LL);
    GdiProcessCallout(ProcessWin32Process, 0LL);
    W32Process = 0;
    goto LABEL_9;
  }
  v7 = AllocateW32Process(v1);
  W32Process = v7;
  if ( v7 < 0 )
  {
LABEL_9:
    if ( (a1[1] & 1) != 0 && W32Process >= 0 )
      return (unsigned int)W32Process;
    if ( !ProcessWin32Process )
      return (unsigned int)W32Process;
    GdiUnmapGDIW32PIDLockedBitmaps(ProcessWin32Process);
    if ( !v4 )
      return (unsigned int)W32Process;
    vMarkFreeW32Process(ProcessWin32Process);
    v12 = 1LL;
    goto LABEL_13;
  }
  v4 = v7 != 1073741851;
  ProcessWin32Process = PsGetProcessWin32Process(v1);
  *(_DWORD *)(ProcessWin32Process + 56) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  result = xxxUserProcessCallout(ProcessWin32Process, a1);
  W32Process = result;
  if ( (_DWORD)result != 1073741851 )
  {
    if ( (int)result >= 0 )
    {
      LOBYTE(v10) = 1;
      W32Process = GdiProcessCallout(ProcessWin32Process, v10);
      if ( W32Process < 0 )
      {
        xxxUserProcessCallout(ProcessWin32Process, 0LL);
      }
      else
      {
        LOBYTE(v13) = 1;
        W32Process = DCompositionProcessCallout(ProcessWin32Process, v13);
        if ( W32Process < 0 )
        {
          xxxUserProcessCallout(ProcessWin32Process, 0LL);
          GdiProcessCallout(ProcessWin32Process, 0LL);
        }
      }
    }
    goto LABEL_9;
  }
  return result;
}
