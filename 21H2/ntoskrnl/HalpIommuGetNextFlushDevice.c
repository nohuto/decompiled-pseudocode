/*
 * XREFs of HalpIommuGetNextFlushDevice @ 0x1404CC1BC
 * Callers:
 *     IvtFlushTbInternal @ 0x1404DFCE4 (IvtFlushTbInternal.c)
 *     HsaFlushTbInternal @ 0x1404E303C (HsaFlushTbInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpIommuGetNextFlushDevice(_QWORD *a1, _QWORD **a2, _QWORD *a3, _DWORD *a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v7; // r9
  _QWORD *v8; // r9
  __int64 v10; // rcx

  v7 = *a2;
  if ( !*a2 )
  {
    *a2 = a1;
    v7 = a1;
  }
  v8 = (_QWORD *)*v7;
  if ( v8 == a1 )
  {
    *a3 = 0LL;
    *a4 = 0;
    *a5 = 0LL;
    *a6 = 0LL;
    return 0;
  }
  else
  {
    v10 = v8[5];
    *a2 = v8;
    *a3 = *(_QWORD *)(v10 + 40);
    *a4 = *(_DWORD *)(v10 + 56);
    *a5 = v10 + 48;
    *a6 = v8 + 4;
    return 1;
  }
}
