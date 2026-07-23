/*
 * XREFs of _KiUserExceptionDispatcher@8 @ 0x4B2F4E70
 * Callers:
 *     sub_4B2F4E64 @ 0x4B2F4E64 (sub_4B2F4E64.c)
 * Callees:
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwContinue@8 @ 0x4B2F2DB0 (_ZwContinue@8.c)
 *     _ZwRaiseException@12 @ 0x4B2F3FE0 (_ZwRaiseException@12.c)
 *     _RtlRaiseException@4 @ 0x4B308940 (_RtlRaiseException@4.c)
 */

// positive sp value has been detected, the output may be wrong!
int __stdcall KiUserExceptionDispatcher(PCONTEXT ContextRecord, int a2)
{
  PEXCEPTION_RECORD v3; // ebx
  NTSTATUS v4; // eax
  _DWORD v5[3]; // [esp-8h] [ebp-14h] BYREF
  PEXCEPTION_RECORD v6; // [esp+4h] [ebp-8h]
  PCONTEXT v7; // [esp+8h] [ebp-4h]

  if ( !LdrDelegatedKiUserExceptionDispatcher )
  {
    v3 = v6;
    if ( RtlDispatchException(v6, v7) )
      v4 = ZwContinue(v7, 0);
    else
      v4 = ZwRaiseException(v6, v7, 0);
    v5[0] = v4;
    v5[1] = 1;
    v5[2] = v3;
    v7 = 0;
    RtlRaiseException((PEXCEPTION_RECORD)v5);
  }
  return ((int (__stdcall *)(PCONTEXT, int))LdrDelegatedKiUserExceptionDispatcher)(ContextRecord, a2);
}
