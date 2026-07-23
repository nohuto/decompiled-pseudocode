/*
 * XREFs of KeInitializeProfile @ 0x1408BC218
 * Callers:
 *     NtStartProfile @ 0x14095AFA0 (NtStartProfile.c)
 * Callees:
 *     KeAndAffinityEx @ 0x1402CE930 (KeAndAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 */

__int16 __fastcall KeInitializeProfile(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int16 a8,
        unsigned __int16 *a9)
{
  _BYTE *v9; // rbx
  int v10; // eax

  v9 = (_BYTE *)(a1 + 72);
  *(_DWORD *)a1 = 16252951;
  *(_QWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 48) = a6 - 2;
  *(_DWORD *)(a1 + 64) = a7;
  *(_WORD *)(a1 + 240) = a8;
  *(_QWORD *)(a1 + 56) = a3;
  *(_QWORD *)(a1 + 32) = a4;
  *(_QWORD *)(a1 + 40) = a4 + a5;
  *(_BYTE *)(a1 + 242) = 0;
  if ( a9 )
    v10 = KeAndAffinityEx(a9, (unsigned __int16 *)KeActiveProcessors, v9);
  else
    v10 = 0;
  if ( !v10 )
    LOWORD(v10) = KeCopyAffinityEx((__int64)v9, (unsigned __int16 *)KeActiveProcessors);
  return v10;
}
