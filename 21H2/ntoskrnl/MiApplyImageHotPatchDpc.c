/*
 * XREFs of MiApplyImageHotPatchDpc @ 0x1409B1820
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalCallDpcSynchronize @ 0x14051A020 (KeSignalCallDpcSynchronize.c)
 *     RtlApplyHotPatch @ 0x1409B3674 (RtlApplyHotPatch.c)
 */

__int64 __fastcall MiApplyImageHotPatchDpc(__int64 a1, _QWORD *a2, volatile signed __int32 *a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 result; // rax
  char v12; // [rsp+28h] [rbp-90h]
  int v13; // [rsp+30h] [rbp-88h]
  int v14; // [rsp+90h] [rbp-28h]
  int v15; // [rsp+98h] [rbp-20h]
  __int64 v16; // [rsp+A0h] [rbp-18h]

  v7 = KeSignalCallDpcSynchronize(a4, (__int64)a2, (__int64)a3, a4);
  v10 = 0LL;
  if ( v7 )
    *((_DWORD *)a2 + 11) = RtlApplyHotPatch(
                             *(_QWORD *)(*a2 + 72LL),
                             *(_QWORD *)(*a2 + 8LL),
                             *(_QWORD *)(*a2 + 80LL),
                             *(_DWORD *)(*a2 + 36LL),
                             (__int64)(a2 + 5),
                             v12,
                             v13,
                             *(_QWORD *)(a2[1] + 72LL),
                             *(_QWORD *)(a2[1] + 8LL),
                             0LL,
                             0,
                             0LL,
                             a2[2],
                             a2[3],
                             1,
                             *(PRTL_BITMAP *)(*a2 + 40LL),
                             a2[4],
                             0LL,
                             v14,
                             v15,
                             v16);
  result = KeSignalCallDpcSynchronize(a4, v10, v8, v9);
  _InterlockedDecrement(a3);
  return result;
}
