/*
 * XREFs of ?_ivOnChildLifetimeNotification@CBaseInput@@CAJPEAX@Z @ 0x1C01B4450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::_ivOnChildLifetimeNotification(unsigned int *a1)
{
  __int64 v2; // rcx

  v2 = (__int64)*(&qword_1C0241018 + 6 * a1[4]);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 136LL))(v2, a1);
  else
    return 3221225473LL;
}
