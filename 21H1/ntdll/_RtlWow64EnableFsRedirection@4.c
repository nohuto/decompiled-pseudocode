/*
 * XREFs of _RtlWow64EnableFsRedirection@4 @ 0x4B33A140
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl RtlWow64EnableFsRedirection(BOOLEAN Wow64FsEnableRedirection)
{
  NTSTATUS result; // eax
  struct _TEB *v2; // ecx
  int WowTebOffset; // edx

  result = 0;
  v2 = NtCurrentTeb();
  WowTebOffset = v2->WowTebOffset;
  if ( Wow64FsEnableRedirection )
  {
    if ( WowTebOffset < 0 )
      v2 = (struct _TEB *)((char *)v2 + WowTebOffset);
    if ( v2 == (struct _TEB *)v2->NtTib.Self )
    {
      v2->TlsSlots[8] = 0;
      return result;
    }
    v2[1].GdiTebBatch.Buffer[185] = 0;
  }
  else
  {
    if ( WowTebOffset < 0 )
      v2 = (struct _TEB *)((char *)v2 + WowTebOffset);
    if ( v2 == (struct _TEB *)v2->NtTib.Self )
    {
      v2->TlsSlots[8] = (void *)1;
      return result;
    }
    v2[1].GdiTebBatch.Buffer[185] = 1;
  }
  v2[1].GdiTebBatch.Buffer[186] = 0;
  return result;
}
