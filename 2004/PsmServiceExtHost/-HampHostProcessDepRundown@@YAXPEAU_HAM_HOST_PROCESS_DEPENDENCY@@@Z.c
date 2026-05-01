/*
 * XREFs of ?HampHostProcessDepRundown@@YAXPEAU_HAM_HOST_PROCESS_DEPENDENCY@@@Z @ 0x180035CB8
 * Callers:
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180035A9C (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampHostProcessDepRundown(struct _HAM_HOST_PROCESS_DEPENDENCY *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)a1 + 10);
  if ( v2 )
  {
    TpSetWait(v2, 0LL, 0LL);
    TpWaitForWait(*((_QWORD *)a1 + 10), 1LL);
  }
  v3 = *((_QWORD *)a1 + 11);
  if ( v3 )
  {
    TpSetWait(v3, 0LL, 0LL);
    TpWaitForWait(*((_QWORD *)a1 + 11), 1LL);
  }
}
