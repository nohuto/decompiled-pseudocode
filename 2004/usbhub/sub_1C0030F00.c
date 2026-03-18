/*
 * XREFs of sub_1C0030F00 @ 0x1C0030F00
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 *     sub_1C0058A58 @ 0x1C0058A58 (sub_1C0058A58.c)
 */

__int64 __fastcall sub_1C0030F00(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  unsigned int v6; // edi
  _QWORD *p_NamedPipeType; // rcx

  if ( dword_1C006B640 )
  {
    v6 = -1073741637;
    a3->IoStatus.Status = -1073741637;
    IofCompleteRequest(a3, 0);
    sub_1C0014E84(a2, (ULONG_PTR)a3);
  }
  else
  {
    p_NamedPipeType = &a3->Tail.Overlay.CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( p_NamedPipeType && *p_NamedPipeType )
    {
      return (unsigned int)sub_1C0058A58(a1, a2, a3, 1LL, 0);
    }
    else
    {
      v6 = -1073741224;
      a3->IoStatus.Status = -1073741224;
      IofCompleteRequest(a3, 0);
      sub_1C0014E84(a2, (ULONG_PTR)a3);
      sub_1C004A608(a1, 0, 122, 0, 0, -1073741224, 0, (__int64)aDioctlC, 1148, 0);
    }
  }
  return v6;
}
