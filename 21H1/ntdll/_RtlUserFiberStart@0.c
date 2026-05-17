/*
 * XREFs of _RtlUserFiberStart@0 @ 0x4B2F2730
 * Callers:
 *     <none>
 * Callees:
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

void __stdcall __noreturn RtlUserFiberStart()
{
  void (__thiscall *v0)(_DWORD); // ecx

  v0 = *(void (__thiscall **)(_DWORD))(NtCurrentTeb()->NtTib.Version + 192);
  v0(v0);
  RtlExitUserThread(-1073741823);
}
