/*
 * XREFs of sub_18001C264 @ 0x18001C264
 * Callers:
 *     sub_18001C9C0 @ 0x18001C9C0 (sub_18001C9C0.c)
 * Callees:
 *     sub_180017A94 @ 0x180017A94 (sub_180017A94.c)
 *     sub_180020FF0 @ 0x180020FF0 (sub_180020FF0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18001C264(_BYTE *a1, int a2, __int64 a3)
{
  int v6; // eax
  int v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]

  if ( *a1 && !byte_18021F508 )
  {
    v6 = (int)qword_18021F500;
    if ( qword_18021F500 )
      v6 = (unsigned __int8)qword_18021F500();
    if ( !v6 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)a1 + 1);
      v7 = a2;
      v8 = a3;
      sub_180020FF0(a1 + 48, &v7, 16LL);
      sub_180017A94((struct _TP_TIMER **)a1 + 2, a1 + 24, a1);
      if ( a1 != (_BYTE *)-8LL )
        ReleaseSRWLockExclusive((PSRWLOCK)a1 + 1);
    }
  }
}
