/*
 * XREFs of _W32pProcessCallout@4 @ 0x46322
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0x46590 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     _AllocateW32Process@4 @ 0x465CC (_AllocateW32Process@4.c)
 *     _DereferenceW32ProcessEx@8 @ 0x480CE (_DereferenceW32ProcessEx@8.c)
 */

int __stdcall W32pProcessCallout(_DWORD *a1)
{
  int ProcessWin32Process; // esi
  int v2; // ebx
  bool IsCurrentProcessUmfdHost; // al
  int v4; // ecx
  int W32Process; // eax
  int v6; // edi
  _DWORD *v7; // ebx
  int result; // eax
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  bool v11; // bl
  PKTHREAD v12; // eax
  int v13; // eax
  PKTHREAD v14; // eax
  PKTHREAD v15; // eax
  int v16; // [esp-4h] [ebp-18h]
  int v17; // [esp-4h] [ebp-18h]
  int v18; // [esp+0h] [ebp-14h]
  int v19; // [esp+4h] [ebp-10h]
  int v20; // [esp+Ch] [ebp-8h]
  bool v21; // [esp+13h] [ebp-1h]

  ProcessWin32Process = 0;
  v21 = 1;
  v2 = *a1;
  v20 = *a1;
  IsCurrentProcessUmfdHost = UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost();
  v4 = a1[1] & 1;
  if ( !IsCurrentProcessUmfdHost )
  {
    if ( v4 )
    {
      W32Process = AllocateW32Process(v2);
      v6 = W32Process;
      if ( W32Process >= 0 )
      {
        v21 = W32Process != 1073741851;
        ProcessWin32Process = PsGetProcessWin32Process(v2);
        v7 = a1;
        *(_DWORD *)(ProcessWin32Process + 32) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
        v6 = xxxUserProcessCallout(ProcessWin32Process, a1);
        result = 1073741851;
        if ( v6 == 1073741851 )
          return result;
        if ( v6 >= 0 )
        {
          v6 = GdiProcessCallout(ProcessWin32Process, 1);
          if ( v6 < 0 )
          {
            xxxUserProcessCallout(ProcessWin32Process, 0);
          }
          else
          {
            v6 = DCompositionProcessCallout(ProcessWin32Process, 1);
            if ( v6 < 0 )
            {
              xxxUserProcessCallout(ProcessWin32Process, 0);
              GdiProcessCallout(ProcessWin32Process, 0);
            }
          }
        }
LABEL_13:
        if ( (v7[1] & 1) != 0 && v6 >= 0 )
          return v6;
        if ( !ProcessWin32Process )
          return v6;
        GdiUnmapGDIW32PIDLockedBitmaps(ProcessWin32Process);
        if ( !v21 )
          return v6;
        goto LABEL_16;
      }
    }
    else
    {
      ProcessWin32Process = PsGetProcessWin32Process(v2);
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v17 = ThreadWin32Thread;
        v15 = KeGetCurrentThread();
        PsSetThreadWin32Thread(v15, 0, v17);
      }
      xxxUserProcessCallout(ProcessWin32Process, 0);
      DCompositionProcessCallout(ProcessWin32Process, 0);
      GdiProcessCallout(ProcessWin32Process, 0);
      v6 = 0;
    }
    v7 = a1;
    goto LABEL_13;
  }
  if ( v4 )
  {
    v6 = AllocateW32Process(v2);
    v11 = v6 != 1073741851;
    if ( v6 < 0 )
      return v6;
    ProcessWin32Process = PsGetProcessWin32Process(v20);
    *(_DWORD *)(ProcessWin32Process + 32) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    v6 = GdiProcessCallout(ProcessWin32Process, 1);
    if ( v6 >= 0 || !v11 )
      return v6;
  }
  else
  {
    v12 = KeGetCurrentThread();
    v13 = PsGetThreadWin32Thread(v12);
    if ( v13 )
    {
      v16 = v13;
      v14 = KeGetCurrentThread();
      PsSetThreadWin32Thread(v14, 0, v16);
    }
    v6 = GdiProcessCallout(0, 0);
    ProcessWin32Process = PsGetProcessWin32Process(v2);
  }
LABEL_16:
  vMarkFreeW32Process(ProcessWin32Process);
  DereferenceW32ProcessEx(v18, v19);
  return v6;
}
