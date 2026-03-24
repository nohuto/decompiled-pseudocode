/*
 * XREFs of CmpKeyNodeStackEntryPopulate @ 0x140876310
 * Callers:
 *     CmSaveKey @ 0x140728BCC (CmSaveKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpKeyNodeStackEntryPopulate(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = a3;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a2 + 8))(a2, a3, a1 + 24);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
