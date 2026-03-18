/*
 * XREFs of EtwpObjectHandleRundown @ 0x14093988C
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140780460 (EtwpProcessEnumCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     PsGetProcessId @ 0x1402D44D0 (PsGetProcessId.c)
 *     ObReferenceProcessHandleTable @ 0x14061F2E4 (ObReferenceProcessHandleTable.c)
 *     ExEnumHandleTable @ 0x1406B8320 (ExEnumHandleTable.c)
 */

void __fastcall EtwpObjectHandleRundown(struct _EX_RUNDOWN_REF *Process, __int64 a2)
{
  unsigned int *v4; // rdi

  v4 = (unsigned int *)ObReferenceProcessHandleTable(Process);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 44) = (unsigned int)PsGetProcessId((PEPROCESS)Process);
    *(_BYTE *)(a2 + 68) = (HIDWORD(Process[271].Ptr) & 0x1000) != 0;
    ExEnumHandleTable(
      v4,
      (__int64 (__fastcall *)(unsigned int *, __int64 *, __int64, __int64))EtwpObjectHandleEnumCallback,
      a2,
      0LL);
    ExReleaseRundownProtection_0(Process + 139);
  }
}
