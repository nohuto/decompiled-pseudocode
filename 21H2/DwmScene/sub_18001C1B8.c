/*
 * XREFs of sub_18001C1B8 @ 0x18001C1B8
 * Callers:
 *     sub_180020140 @ 0x180020140 (sub_180020140.c)
 * Callees:
 *     sub_180017C34 @ 0x180017C34 (sub_180017C34.c)
 *     sub_180020FF0 @ 0x180020FF0 (sub_180020FF0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_18001C1B8(_BYTE *a1, int a2, __int16 a3, int a4)
{
  int v8; // eax
  int v9; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+24h] [rbp-44h]
  __int16 v11; // [rsp+26h] [rbp-42h]
  int v12; // [rsp+28h] [rbp-40h]

  if ( *a1 && !byte_18021F508 )
  {
    if ( qword_18021F500 )
      v8 = (unsigned __int8)qword_18021F500();
    else
      v8 = 0;
    if ( !v8 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)a1 + 5);
      v11 = 0;
      v9 = a2;
      v10 = a3;
      v12 = a4;
      sub_180020FF0(a1 + 248, &v9, 12LL);
      sub_180017C34((struct _TP_TIMER **)a1 + 7, a1 + 64, a1);
      if ( a1 != (_BYTE *)-40LL )
        ReleaseSRWLockExclusive((PSRWLOCK)a1 + 5);
    }
  }
}
