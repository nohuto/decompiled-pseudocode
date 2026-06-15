/*
 * XREFs of sub_1800457EC @ 0x1800457EC
 * Callers:
 *     sub_18002E880 @ 0x18002E880 (sub_18002E880.c)
 *     sub_1800C14A0 @ 0x1800C14A0 (sub_1800C14A0.c)
 *     sub_1800C1760 @ 0x1800C1760 (sub_1800C1760.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800457EC(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  ULONGLONG TickCount64; // rsi
  char v4; // r14
  __int64 v5; // rbp

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  TickCount64 = GetTickCount64();
  v4 = 0;
  if ( *(_QWORD *)(a1 + 8) )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( GetTickCount64() - v5 > 0x3E8 )
    {
      (**(void (__fastcall ***)(__int64, __int64, _QWORD))a1)(a1, v5 - *(_QWORD *)(a1 + 16), *(unsigned int *)(a1 + 24));
      v4 = 1;
    }
  }
  if ( v4 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    *(_QWORD *)(a1 + 16) = TickCount64;
  }
  else
  {
    ++*(_DWORD *)(a1 + 24);
  }
  *(_QWORD *)(a1 + 8) = TickCount64;
  if ( v2 )
    LeaveCriticalSection(v2);
}
