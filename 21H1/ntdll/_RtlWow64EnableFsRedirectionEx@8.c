/*
 * XREFs of _RtlWow64EnableFsRedirectionEx@8 @ 0x4B2CC460
 * Callers:
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpProcessWork@8 @ 0x4B2CE6E8 (_LdrpProcessWork@8.c)
 *     _LdrpLoadKnownDll@4 @ 0x4B2CEF5D (_LdrpLoadKnownDll@4.c)
 *     _LdrpFindLoadedDll@12 @ 0x4B2E9CFC (_LdrpFindLoadedDll@12.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlWow64EnableFsRedirectionEx(PVOID Wow64FsEnableRedirection, PVOID *OldFsRedirectionLevel)
{
  struct _TEB *v2; // eax
  int WowTebOffset; // ecx
  void *v4; // eax
  struct _TEB *v5; // eax
  int v6; // ecx
  void *v8; // [esp+14h] [ebp-1Ch]

  v2 = NtCurrentTeb();
  WowTebOffset = v2->WowTebOffset;
  if ( WowTebOffset < 0 )
    v2 = (struct _TEB *)((char *)v2 + WowTebOffset);
  if ( v2 == (struct _TEB *)v2->NtTib.Self )
    v4 = v2->TlsSlots[8];
  else
    v4 = (void *)v2[1].GdiTebBatch.Buffer[185];
  v8 = v4;
  v5 = NtCurrentTeb();
  v6 = v5->WowTebOffset;
  if ( v6 < 0 )
    v5 = (struct _TEB *)((char *)v5 + v6);
  if ( v5 == (struct _TEB *)v5->NtTib.Self )
  {
    v5->TlsSlots[8] = Wow64FsEnableRedirection;
  }
  else
  {
    v5[1].GdiTebBatch.Buffer[185] = (unsigned int)Wow64FsEnableRedirection;
    v5[1].GdiTebBatch.Buffer[186] = 0;
  }
  *OldFsRedirectionLevel = v8;
  return 0;
}
