/*
 * XREFs of PerfControlCppcRequestMsrHidden @ 0x1C0002420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PerfControlCppcRequestMsrHidden(__int64 *a1, _QWORD *a2, char a3, char a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  if ( a3 || a4 )
  {
    if ( !*((_BYTE *)a1 + 105) || a4 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD *))qword_1C00136E8)(
        *(unsigned int *)(*a1 + 84),
        *((unsigned int *)a1 + 31),
        v9);
      v6 = v9[0];
      *((_BYTE *)a1 + 105) = 1;
    }
    else
    {
      v6 = a1[17];
    }
    v7 = *((unsigned int *)a1 + 31);
    v8 = *a1;
    v9[0] = v6 & ~a1[18] | a1[18] & *a2;
    ((void (__fastcall *)(_QWORD, __int64))qword_1C00136F0)(*(unsigned int *)(v8 + 84), v7);
    a1[17] = v9[0];
  }
}
