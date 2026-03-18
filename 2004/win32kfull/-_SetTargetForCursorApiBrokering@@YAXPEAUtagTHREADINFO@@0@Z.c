/*
 * XREFs of ?_SetTargetForCursorApiBrokering@@YAXPEAUtagTHREADINFO@@0@Z @ 0x1C0007FEC
 * Callers:
 *     NtUserSetTargetForResourceBrokering @ 0x1C0007ED0 (NtUserSetTargetForResourceBrokering.c)
 * Callees:
 *     <none>
 */

void __fastcall _SetTargetForCursorApiBrokering(struct tagTHREADINFO *a1, struct tagTHREADINFO *a2)
{
  __int64 v2; // rax

  if ( a2 )
  {
    *((_DWORD *)a1 + 306) |= 0x8000000u;
    *((_QWORD *)a1 + 185) = a2;
    *((_DWORD *)a2 + 306) &= ~0x8000000u;
    *((_QWORD *)a2 + 185) = a1;
  }
  else
  {
    v2 = *((_QWORD *)a1 + 185);
    if ( v2 )
    {
      *(_QWORD *)(v2 + 1480) = 0LL;
      *((_QWORD *)a1 + 185) = 0LL;
    }
    *((_DWORD *)a1 + 306) &= ~0x8000000u;
  }
}
