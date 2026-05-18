/*
 * XREFs of sub_1800FC984 @ 0x1800FC984
 * Callers:
 *     sub_1800BD494 @ 0x1800BD494 (sub_1800BD494.c)
 *     sub_1800FC688 @ 0x1800FC688 (sub_1800FC688.c)
 * Callees:
 *     sub_1800ACBBC @ 0x1800ACBBC (sub_1800ACBBC.c)
 *     sub_1800FDB80 @ 0x1800FDB80 (sub_1800FDB80.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800FC984(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v7 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
    v4 = a2[1];
  }
  *(_QWORD *)&v7 = *a2;
  *((_QWORD *)&v7 + 1) = v4;
  sub_1800ACBBC(a1, (__int64)&v7);
  *(_QWORD *)a1 = &Spectre::Engine::ViewerCamera::`vftable';
  *(_QWORD *)(a1 + 1768) = 0LL;
  *(_QWORD *)(a1 + 1776) = 0LL;
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_DWORD *)(a1 + 1800) = 0;
  *(_DWORD *)(a1 + 1804) = 0;
  *(_DWORD *)(a1 + 1808) = 0;
  *(_DWORD *)(a1 + 1828) = 1061158912;
  *(_DWORD *)(a1 + 1832) = 1092616192;
  *(_DWORD *)(a1 + 1880) = 1071644672;
  *(_DWORD *)(a1 + 1904) = _InterlockedIncrement(&dword_1802217C8);
  *(_DWORD *)(a1 + 1884) = 0;
  *(_DWORD *)(a1 + 1888) = 0;
  *(_DWORD *)(a1 + 1840) = 1048971922;
  *(_DWORD *)(a1 + 1836) = -1077342245;
  *(_DWORD *)(a1 + 1856) = 1082130432;
  *(_DWORD *)(a1 + 1844) = 1077936128;
  *(_DWORD *)(a1 + 1852) = 1069547520;
  *(_DWORD *)(a1 + 1860) = 1084227584;
  *(_QWORD *)(a1 + 1800) = qword_180221E80;
  *(_DWORD *)(a1 + 1808) = dword_180221E88;
  sub_1800FDB80(a1);
  v5 = (volatile signed __int32 *)a2[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
