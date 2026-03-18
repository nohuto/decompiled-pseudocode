/*
 * XREFs of EtwpObjectHandleRundown @ 0x1409EA9A0
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140814660 (EtwpProcessEnumCallback.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x14066B3D8 (ObReferenceProcessHandleTable.c)
 */

void __fastcall EtwpObjectHandleRundown(struct _EX_RUNDOWN_REF *Process, __int64 a2)
{
  unsigned __int64 v4; // rdi

  v4 = ObReferenceProcessHandleTable(Process);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 44) = (unsigned int)PsGetProcessId((PEPROCESS)Process);
    *(_BYTE *)(a2 + 68) = (HIDWORD(Process[271].Ptr) & 0x1000) != 0;
    ExEnumHandleTable(
      v4,
      (__int64 (__fastcall *)(__int64, signed __int64 *, _QWORD, __int64))EtwpObjectHandleEnumCallback,
      a2,
      0LL);
    ExReleaseRundownProtection(Process + 139);
  }
}
