/*
 * XREFs of sub_1C003C4E8 @ 0x1C003C4E8
 * Callers:
 *     sub_1C003C4D0 @ 0x1C003C4D0 (sub_1C003C4D0.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C003C4E8(ULONG_PTR a1, IRP *a2)
{
  unsigned int Status; // edi
  _DWORD *v5; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  char QuadPart; // r9
  int MinorFunction; // r10d
  __int64 v9; // rcx
  __int64 v10; // rax

  if ( sub_1C0011220(a1)[281] == 6 )
  {
    Status = -1073741130;
    a2->IoStatus.Status = -1073741130;
LABEL_12:
    IofCompleteRequest(a2, 0);
    return Status;
  }
  v5 = sub_1C0011220(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  QuadPart = -1;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( (_BYTE)MinorFunction )
  {
    if ( (unsigned __int8)(MinorFunction - 2) <= 1u )
    {
      QuadPart = LOBYTE(CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart) | 0x80;
      if ( CurrentStackLocation->Parameters.Create.Options != 1 )
        QuadPart = CurrentStackLocation->Parameters.LockControl.ByteOffset.QuadPart;
    }
  }
  else
  {
    QuadPart = CurrentStackLocation->Parameters.SetLock.Lock;
  }
  v9 = ((unsigned __int8)_InterlockedExchangeAdd(v5 + 227, 1u) + 1) & 0xF;
  *((_BYTE *)v5 + v9 + 912) = MinorFunction;
  *((_BYTE *)v5 + v9 + 928) = QuadPart;
  v5[294] = MinorFunction;
  v10 = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)v10 >= 4u )
  {
    Status = a2->IoStatus.Status;
    goto LABEL_12;
  }
  return (unsigned int)off_1C005E168[2 * v10](a1, (ULONG_PTR)a2);
}
