/*
 * XREFs of ?xxxGetEventProc@@YGP6GXPAUHWINEVENTHOOK__@@KPAUHWND__@@JJKK@ZPAUtagEVENTHOOK@@@Z @ 0x147EA
 * Callers:
 *     _xxxProcessNotifyWinEvent@4 @ 0x143A2 (_xxxProcessNotifyWinEvent@4.c)
 * Callees:
 *     ??0?$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ @ 0x146E8 (--0-$CUnLockDomainExclusiveInUserCrit@VDLT_WINEVENT@@@@QAE@XZ.c)
 *     _MakeExportSuppressedPfnValid@4 @ 0x148AE (_MakeExportSuppressedPfnValid@4.c)
 *     _xxxLoadHmodIndex@4 @ 0x16802 (_xxxLoadHmodIndex@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 */

void (__stdcall *__thiscall xxxGetEventProc(
        _DWORD *this))(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v4; // ecx
  PKTHREAD v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edi
  int CurrentProcess; // eax
  tagDomLock *v12; // [esp+Ch] [ebp-4h] BYREF

  if ( (*(_BYTE *)(_HMPheFromObject(this) + 13) & 1) != 0 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v4 = this[10];
  if ( v4 != -1 && ((1 << v4) & *(_DWORD *)(*(_DWORD *)(ThreadWin32Thread + 232) + 224)) == 0 )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( PsIsProtectedProcess(CurrentProcess) )
      return 0;
    CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>::CUnLockDomainExclusiveInUserCrit<DLT_WINEVENT>(&v12);
    if ( !xxxLoadHmodIndex(this[10]) )
    {
      tagDomLock::LockExclusive(v12);
      return 0;
    }
    tagDomLock::LockExclusive(v12);
  }
  if ( (*(_BYTE *)(_HMPheFromObject(this) + 13) & 1) != 0 )
    return 0;
  if ( this[10] == -1 )
    return (void (__stdcall *)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))this[9];
  v5 = KeGetCurrentThread();
  v6 = W32GetThreadWin32Thread(v5);
  v7 = this[10];
  v8 = *(_DWORD *)(v6 + 232);
  v9 = this[9] + *(_DWORD *)(v8 + 4 * v7 + 228);
  if ( v7 != -1 )
    MakeExportSuppressedPfnValid(this[9] + *(_DWORD *)(v8 + 4 * v7 + 228));
  return (void (__stdcall *)(HWINEVENTHOOK, unsigned int, HWND, int, int, unsigned int, unsigned int))v9;
}
