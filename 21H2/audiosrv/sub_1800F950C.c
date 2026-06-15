/*
 * XREFs of sub_1800F950C @ 0x1800F950C
 * Callers:
 *     sub_1800F9390 @ 0x1800F9390 (sub_1800F9390.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F9630 @ 0x1800F9630 (sub_1800F9630.c)
 */

__int64 __fastcall sub_1800F950C(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  HANDLE CurrentProcess; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = 0LL;
  v4 = combase_167(a1, &unk_180172568, &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 437;
LABEL_6:
    sub_18004BD84((int)retaddr, v6, (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h", v4);
    goto LABEL_9;
  }
  if ( v10 )
  {
    sub_1800F9630(a3, 0LL);
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, 4096LL, a3);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 440;
      goto LABEL_6;
    }
  }
  else
  {
    CurrentProcess = GetCurrentProcess();
    sub_1800F9630(a3, CurrentProcess);
  }
  v5 = 0;
LABEL_9:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v5;
}
