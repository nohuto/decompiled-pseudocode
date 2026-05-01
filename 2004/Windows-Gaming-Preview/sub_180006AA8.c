/*
 * XREFs of sub_180006AA8 @ 0x180006AA8
 * Callers:
 *     sub_180007470 @ 0x180007470 (sub_180007470.c)
 * Callees:
 *     sub_180006954 @ 0x180006954 (sub_180006954.c)
 *     sub_180006F98 @ 0x180006F98 (sub_180006F98.c)
 *     sub_180007048 @ 0x180007048 (sub_180007048.c)
 *     sub_180008034 @ 0x180008034 (sub_180008034.c)
 *     sub_18000806C @ 0x18000806C (sub_18000806C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180006AA8(PVOID pv, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rdi
  int v9; // eax
  char v10; // bl
  int v11; // eax

  if ( *(_BYTE *)pv && (unsigned __int8)sub_180006F98() )
  {
    v8 = *((_QWORD *)pv + 3);
    if ( a3 == 254 )
    {
      sub_180006954(*((PSRWLOCK *)pv + 3));
      v10 = 1;
    }
    else
    {
      if ( a3 >= 0xC8 && ((int)a3 < 256 || a3 >= 0x200) )
        return;
      AcquireSRWLockExclusive(*((PSRWLOCK *)pv + 3));
      if ( a3 <= 7 && (v9 = 204, _bittest(&v9, a3)) || a3 - 256 <= 0x7F )
      {
        sub_18000806C(v8 + 8, a3, a2);
        v10 = *(_BYTE *)(v8 + 64);
      }
      else
      {
        v10 = sub_180008034(v8 + 72, a3, a2, a4);
      }
      if ( v8 )
        ReleaseSRWLockExclusive((PSRWLOCK)v8);
    }
    if ( v10 && !byte_18005AC18 )
    {
      v11 = (int)qword_18005ABE0;
      if ( qword_18005ABE0 )
        v11 = (unsigned __int8)qword_18005ABE0();
      if ( !v11 )
      {
        AcquireSRWLockExclusive((PSRWLOCK)pv + 4);
        sub_180007048(pv);
        if ( pv != (PVOID)-32LL )
          ReleaseSRWLockExclusive((PSRWLOCK)pv + 4);
      }
    }
  }
}
