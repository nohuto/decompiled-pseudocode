/*
 * XREFs of sub_18001AF20 @ 0x18001AF20
 * Callers:
 *     sub_18000609C @ 0x18000609C (sub_18000609C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001AF20(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = off_18003F290;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 32), 0, 0);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 10;
  InitializeSRWLock((PSRWLOCK)(a1 + 120));
  result = a1;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = 10;
  return result;
}
