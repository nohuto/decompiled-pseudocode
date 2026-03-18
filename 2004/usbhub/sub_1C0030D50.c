/*
 * XREFs of sub_1C0030D50 @ 0x1C0030D50
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C0029E7C @ 0x1C0029E7C (sub_1C0029E7C.c)
 */

NTSTATUS __fastcall sub_1C0030D50(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v9; // ebx
  _QWORD *p_Length; // rcx
  _QWORD *p_SecurityQos; // r14

  v6 = sub_1C000F050(a1);
  if ( (v6[640] & 1) != 0 )
  {
    CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
    v9 = 0;
    p_Length = &CurrentStackLocation->Parameters.QueryDirectory.FileName->Length;
    if ( p_Length && (p_SecurityQos = &CurrentStackLocation->Parameters.Create.SecurityContext->SecurityQos) != 0LL )
    {
      *p_Length = *((_QWORD *)v6 + 152);
      ObfReferenceObject(*((PVOID *)v6 + 152));
      *p_SecurityQos = *((_QWORD *)v6 + 149);
      ObfReferenceObject(*((PVOID *)v6 + 149));
    }
    else
    {
      v9 = -1073741811;
    }
    a3->IoStatus.Status = v9;
    IofCompleteRequest(a3, 0);
    sub_1C0014E84(a2, (ULONG_PTR)a3);
    return v9;
  }
  else
  {
    sub_1C0014E84(a2, (ULONG_PTR)a3);
    return sub_1C0029E7C(a1, a3);
  }
}
