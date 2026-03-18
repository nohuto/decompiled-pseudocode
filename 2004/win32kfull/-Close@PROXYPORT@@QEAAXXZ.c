/*
 * XREFs of ?Close@PROXYPORT@@QEAAXXZ @ 0x1C00EF43C
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00ED958 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PROXYPORT::Close(PROXYPORT *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 CurrentProcess; // rax

  v4 = *(_QWORD *)this;
  if ( *(_QWORD *)(v4 + 16) )
  {
    MmUnsecureVirtualMemory(*(HANDLE *)(v4 + 16));
    v4 = *(_QWORD *)this;
  }
  v5 = *(_QWORD *)(v4 + 24);
  if ( v5 )
  {
    CurrentProcess = PsGetCurrentProcess(v4, a2, a3);
    MmUnmapViewOfSection(CurrentProcess, v5);
    v4 = *(_QWORD *)this;
  }
  if ( *(_QWORD *)(v4 + 8) )
  {
    ZwClose(*(HANDLE *)(v4 + 8));
    v4 = *(_QWORD *)this;
  }
  if ( *(_QWORD *)v4 )
  {
    ObfDereferenceObject(*(PVOID *)v4);
    v4 = *(_QWORD *)this;
  }
  Win32FreePool(v4);
}
