/*
 * XREFs of GreCreateSemaphoreInternal @ 0x1C00737B0
 * Callers:
 *     HmgCreate @ 0x1C001EE8C (HmgCreate.c)
 *     GreCreateSemaphore @ 0x1C0036040 (GreCreateSemaphore.c)
 *     EngCreateSemaphore @ 0x1C0045F50 (EngCreateSemaphore.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C1C60 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0147A04 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     EngInitializeSafeSemaphore @ 0x1C0154CB0 (EngInitializeSafeSemaphore.c)
 *     bInitPALOBJ @ 0x1C02991B0 (bInitPALOBJ.c)
 *     InitializeGre @ 0x1C029CF90 (InitializeGre.c)
 * Callees:
 *     MultiUserGreTrackAddEngResource @ 0x1C0073850 (MultiUserGreTrackAddEngResource.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 */

__int64 __fastcall GreCreateSemaphoreInternal(char a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 ThreadWin32Thread; // rax

  v2 = Win32AllocPoolNonPaged(136LL, 1835365191LL);
  v3 = v2;
  if ( v2 )
  {
    v3 = v2 + 32;
    v4 = v2;
    v5 = v2;
    if ( ExInitializeResourceLite((PERESOURCE)(v2 + 32)) < 0 )
    {
      Win32FreePool(v4);
      return 0LL;
    }
    else
    {
      MultiUserGreTrackAddEngResource(v5, (a1 & 1) != 0 ? 4 : 1);
      if ( v3 )
      {
        *(_QWORD *)(v3 - 8) = 0LL;
      }
      else
      {
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread )
        {
          *(_DWORD *)(ThreadWin32Thread + 104) = 0;
          *(_DWORD *)(ThreadWin32Thread + 108) = 0;
        }
      }
    }
  }
  return v3;
}
