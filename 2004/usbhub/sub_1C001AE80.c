/*
 * XREFs of sub_1C001AE80 @ 0x1C001AE80
 * Callers:
 *     sub_1C0002478 @ 0x1C0002478 (sub_1C0002478.c)
 *     sub_1C000F4B0 @ 0x1C000F4B0 (sub_1C000F4B0.c)
 *     sub_1C00131B0 @ 0x1C00131B0 (sub_1C00131B0.c)
 *     sub_1C0013438 @ 0x1C0013438 (sub_1C0013438.c)
 *     sub_1C0034F64 @ 0x1C0034F64 (sub_1C0034F64.c)
 *     sub_1C0035154 @ 0x1C0035154 (sub_1C0035154.c)
 *     sub_1C0035284 @ 0x1C0035284 (sub_1C0035284.c)
 *     sub_1C00354A8 @ 0x1C00354A8 (sub_1C00354A8.c)
 *     sub_1C003571C @ 0x1C003571C (sub_1C003571C.c)
 *     sub_1C0035848 @ 0x1C0035848 (sub_1C0035848.c)
 *     sub_1C0035A44 @ 0x1C0035A44 (sub_1C0035A44.c)
 *     sub_1C0035BB0 @ 0x1C0035BB0 (sub_1C0035BB0.c)
 *     sub_1C0035E78 @ 0x1C0035E78 (sub_1C0035E78.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C001AE80(__int64 a1, __int64 a2, int a3, KIRQL *a4, int a5)
{
  __int64 v6; // rbp
  KIRQL v9; // al
  __int64 v10; // rdx
  unsigned __int16 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx

  v6 = a3;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v10 = *(unsigned __int16 *)(a2 + 4);
  *a4 = v9;
  v11 = v10;
  *(_DWORD *)(a2 + 448) = 1;
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 724267376;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = v6;
        *(_QWORD *)(v13 + 24) = v10;
        v11 = *(_WORD *)(a2 + 4);
      }
    }
  }
  v14 = *(int *)(a2 + 12);
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 724267376;
        *(_QWORD *)(v16 + 24) = v11;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = v14;
      }
    }
  }
  v17 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v17;
  v18 = a2 + 32 * (v17 + 43);
  *(_DWORD *)v18 = v6;
  *(_DWORD *)(v18 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + 12) = a5;
  *(_DWORD *)(v18 + 8) = -1;
  *(_QWORD *)(v18 + 16) = 0LL;
  *(_QWORD *)(v18 + 24) = 0LL;
  return *(unsigned int *)(a2 + 12);
}
