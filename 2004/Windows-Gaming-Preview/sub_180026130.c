/*
 * XREFs of sub_180026130 @ 0x180026130
 * Callers:
 *     sub_18001E3F0 @ 0x18001E3F0 (sub_18001E3F0.c)
 *     sub_180024CA0 @ 0x180024CA0 (sub_180024CA0.c)
 *     sub_1800250A0 @ 0x1800250A0 (sub_1800250A0.c)
 *     sub_180025110 @ 0x180025110 (sub_180025110.c)
 *     sub_1800261B0 @ 0x1800261B0 (sub_1800261B0.c)
 *     sub_18003C0D0 @ 0x18003C0D0 (sub_18003C0D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180026130(__int64 a1)
{
  signed __int32 v1; // ebx
  int v2; // edi
  unsigned __int32 v3; // ebx
  void (*v4)(void); // rax

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 68), 0xFFFFFFFF);
  v2 = *(_DWORD *)(a1 + 88);
  v3 = v1 - 1;
  if ( v3 )
  {
    if ( (v2 & 4) == 0 && v3 == 1 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)qword_18005ADB0 + 16LL);
      goto LABEL_8;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 1LL);
    if ( (v2 & 4) != 0 && qword_18005ADB0 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)qword_18005ADB0 + 16LL);
LABEL_8:
      v4();
    }
  }
  return v3;
}
