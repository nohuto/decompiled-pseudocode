/*
 * XREFs of sub_1800385D0 @ 0x1800385D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800385D0(__int64 a1)
{
  signed __int32 v1; // ebx
  int v2; // edi
  unsigned __int32 v3; // ebx
  void (*v4)(void); // rax

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 12), 0xFFFFFFFF);
  v2 = *(_DWORD *)(a1 + 20);
  v3 = v1 - 1;
  if ( v3 )
  {
    if ( (v2 & 6) == 0 && v3 == 1 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)qword_18005ADB0 + 16LL);
      goto LABEL_7;
    }
  }
  else
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, 1LL);
    if ( (v2 & 5) == 5 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)qword_18005ADB0 + 16LL);
LABEL_7:
      v4();
    }
  }
  return v3;
}
