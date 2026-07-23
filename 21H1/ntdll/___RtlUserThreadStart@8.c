/*
 * XREFs of ___RtlUserThreadStart@8 @ 0x4B2E7A1F
 * Callers:
 *     __RtlUserThreadStart@8 @ 0x4B2E7A03 (__RtlUserThreadStart@8.c)
 * Callees:
 *     _RtlExitUserThread@4 @ 0x4B2EB460 (_RtlExitUserThread@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 *     _RtlUnhandledExceptionFilter2@8 @ 0x4B3686E0 (_RtlUnhandledExceptionFilter2@8.c)
 */

int __fastcall __RtlUserThreadStart(int (__thiscall *a1)(_DWORD, int), int a2, int a3, int a4)
{
  NTSTATUS v5; // eax

  if ( !Kernel32ThreadInitThunkFunction )
  {
    v5 = a1(a1, a2);
    RtlExitUserThread(v5);
  }
  return ((int (__fastcall *)(_DWORD, int (__thiscall *)(_DWORD, int), int))Kernel32ThreadInitThunkFunction)(0, a1, a2);
}
