/*
 * XREFs of _LdrpNtOpenFileUnredirected@12 @ 0x4B2B925A
 * Callers:
 *     _LdrpMapResourceFile@24 @ 0x4B2B961A (_LdrpMapResourceFile@24.c)
 * Callees:
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 */

NTSTATUS __fastcall LdrpNtOpenFileUnredirected(PHANDLE FileHandle, POBJECT_ATTRIBUTES ObjectAttributes, char a3)
{
  NTSTATUS v5; // edx
  struct _TEB *v7; // ecx
  int WowTebOffset; // eax
  void *v9; // eax
  struct _TEB *v10; // eax
  int v11; // ecx
  void *v12; // esi
  struct _TEB *v13; // eax
  int v14; // ecx
  struct _TEB *v15; // eax
  int v16; // ecx
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+8h] [ebp-8h] BYREF

  v5 = NtOpenFile(FileHandle, 0x100001u, ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( (a3 & 3) != 0 )
  {
    v7 = NtCurrentTeb();
    WowTebOffset = v7->WowTebOffset;
    if ( WowTebOffset < 0 )
      v7 = (struct _TEB *)((char *)v7 + WowTebOffset);
    if ( v7 == (struct _TEB *)v7->NtTib.Self )
      v9 = v7->TlsSlots[8];
    else
      v9 = (void *)v7[1].GdiTebBatch.Buffer[185];
    if ( !v9 && v5 == -1073741772 )
    {
      v10 = NtCurrentTeb();
      v11 = v10->WowTebOffset;
      if ( v11 < 0 )
        v10 = (struct _TEB *)((char *)v10 + v11);
      if ( v10 == (struct _TEB *)v10->NtTib.Self )
        v12 = v10->TlsSlots[8];
      else
        v12 = (void *)v10[1].GdiTebBatch.Buffer[185];
      v13 = NtCurrentTeb();
      v14 = v13->WowTebOffset;
      if ( v14 < 0 )
        v13 = (struct _TEB *)((char *)v13 + v14);
      if ( v13 == (struct _TEB *)v13->NtTib.Self )
      {
        v13->TlsSlots[8] = (void *)1;
      }
      else
      {
        v13[1].GdiTebBatch.Buffer[186] = 0;
        v13[1].GdiTebBatch.Buffer[185] = 1;
      }
      v5 = NtOpenFile(FileHandle, 0x100001u, ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
      if ( v5 < 0 )
        v5 = -1073741772;
      v15 = NtCurrentTeb();
      v16 = v15->WowTebOffset;
      if ( v16 < 0 )
        v15 = (struct _TEB *)((char *)v15 + v16);
      if ( v15 == (struct _TEB *)v15->NtTib.Self )
      {
        v15->TlsSlots[8] = v12;
      }
      else
      {
        v15[1].GdiTebBatch.Buffer[186] = 0;
        v15[1].GdiTebBatch.Buffer[185] = (unsigned int)v12;
      }
    }
  }
  return v5;
}
