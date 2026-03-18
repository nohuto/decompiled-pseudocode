/*
 * XREFs of ?Close@PROXYPORT@@QAEXXZ @ 0x2105FF
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YGXPAU_W32THREAD@@@Z @ 0xA3A60 (-vUMPDCachedResourceCleanup@@YGXPAU_W32THREAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall PROXYPORT::Close(PROXYPORT *this)
{
  int v2; // eax
  void *v3; // ecx
  int CurrentProcess; // eax
  int v5; // [esp-4h] [ebp-8h]

  v2 = *(_DWORD *)this;
  v3 = *(void **)(*(_DWORD *)this + 8);
  if ( v3 )
  {
    MmUnsecureVirtualMemory(v3);
    v2 = *(_DWORD *)this;
  }
  if ( *(_DWORD *)(v2 + 12) )
  {
    v5 = *(_DWORD *)(v2 + 12);
    CurrentProcess = PsGetCurrentProcess();
    MmUnmapViewOfSection(CurrentProcess, v5);
    v2 = *(_DWORD *)this;
  }
  if ( *(_DWORD *)(v2 + 4) )
  {
    ZwClose(*(HANDLE *)(v2 + 4));
    v2 = *(_DWORD *)this;
  }
  if ( *(_DWORD *)v2 )
  {
    ObfDereferenceObject(*(PVOID *)v2);
    v2 = *(_DWORD *)this;
  }
  Win32FreePool((PATHOBJ *)v2);
}
