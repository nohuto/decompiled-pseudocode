/*
 * XREFs of sub_1C002A530 @ 0x1C002A530
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0015C80 @ 0x1C0015C80 (sub_1C0015C80.c)
 */

__int64 __fastcall sub_1C002A530(__int64 a1, ULONG_PTR a2, IRP *a3, char a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int v9; // ebx
  __int64 *SecurityContext; // r15
  __int64 v11; // rax

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v9 = -1073741811;
  sub_1C0011220(a2);
  SecurityContext = (__int64 *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext )
  {
    if ( a4 )
    {
      v11 = sub_1C0015C80(a1, a2, (__int64)CurrentStackLocation->Parameters.QueryDirectory.FileName, 0x48447472u);
      *SecurityContext = v11;
      v9 = v11 == 0 ? 0xC000000D : 0;
    }
    else
    {
      v9 = 0;
    }
  }
  a3->IoStatus.Status = v9;
  IofCompleteRequest(a3, 0);
  sub_1C0014E84(a2, (ULONG_PTR)a3);
  return v9;
}
