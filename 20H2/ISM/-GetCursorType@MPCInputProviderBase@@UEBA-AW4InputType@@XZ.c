/*
 * XREFs of ?GetCursorType@MPCInputProviderBase@@UEBA?AW4InputType@@XZ @ 0x1800408A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputProviderBase::GetCursorType(__int64 a1)
{
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1) )
    return 0x20000LL;
  else
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
}
