/*
 * XREFs of KiExtendProcessAffinity @ 0x14052463C
 * Callers:
 *     KeStartThread @ 0x140265A0C (KeStartThread.c)
 *     KeSetAffinityThread @ 0x14039951C (KeSetAffinityThread.c)
 * Callees:
 *     KiSetIdealNodeProcessByGroup @ 0x14029AA54 (KiSetIdealNodeProcessByGroup.c)
 */

__int64 __fastcall KiExtendProcessAffinity(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 result; // rax

  v2 = a2;
  v4 = qword_140CFC848[a2];
  v5 = *(_QWORD *)(a1 + 8 * v2 + 88);
  if ( v5 )
  {
    result = v4 | v5;
    *(_QWORD *)(a1 + 8 * v2 + 88) = result;
  }
  else
  {
    if ( *(_WORD *)(a1 + 80) <= (unsigned __int16)v2 )
      *(_WORD *)(a1 + 80) = v2 + 1;
    *(_QWORD *)(a1 + 8 * v2 + 88) |= v4;
    result = KiSetIdealNodeProcessByGroup(a1, 0LL, v2);
    *(_DWORD *)(a1 + 636) |= 1 << v2;
  }
  return result;
}
