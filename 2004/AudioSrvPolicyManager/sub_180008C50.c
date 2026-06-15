/*
 * XREFs of sub_180008C50 @ 0x180008C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008E98 @ 0x180008E98 (sub_180008E98.c)
 *     sub_180009064 @ 0x180009064 (sub_180009064.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180008C50(__int64 a1, char a2)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v5; // rbx
  struct _TP_POOL *v6; // rcx
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx

  v2 = *(volatile signed __int32 **)(a1 + 480);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v5 = *(volatile signed __int32 **)(a1 + 464);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = *(struct _TP_POOL **)(a1 + 280);
  if ( v6 )
  {
    CloseThreadpool(v6);
    *(_QWORD *)(a1 + 280) = 0LL;
  }
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 368));
  sub_180008E98(a1 + 216);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  sub_180009064((LPCRITICAL_SECTION)(a1 + 72));
  v7 = *(_QWORD **)(a1 + 64);
  *(_QWORD *)(a1 + 64) = 0LL;
  if ( v7 )
  {
    do
    {
      v8 = (_QWORD *)*v7;
      sub_180039D98(v7);
      v7 = v8;
    }
    while ( v8 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  *(_DWORD *)(a1 + 20) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_180039D98((void *)a1);
  return a1;
}
