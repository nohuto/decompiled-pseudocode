/*
 * XREFs of MiUnapplyDriverHotPatch @ 0x1408C9D50
 * Callers:
 *     MiApplyHotPatchToDriver @ 0x1408C47C4 (MiApplyHotPatchToDriver.c)
 * Callees:
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     VslRevertHotPatch @ 0x1404F7CAC (VslRevertHotPatch.c)
 *     VslDetermineHotPatchUndoTableSize @ 0x14088B274 (VslDetermineHotPatchUndoTableSize.c)
 *     VslObtainHotPatchUndoTable @ 0x14088BB98 (VslObtainHotPatchUndoTable.c)
 *     MiPrepareDriverPatchState @ 0x1408C03EC (MiPrepareDriverPatchState.c)
 *     MiUnlockDriverPages @ 0x1408C0470 (MiUnlockDriverPages.c)
 *     MiLockHotPatchUndoPages @ 0x1408C68E4 (MiLockHotPatchUndoPages.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiUnapplyDriverHotPatch(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v5; // rcx
  void *v6; // rdi
  signed int v7; // ebx
  PVOID Pool; // rax
  __int64 v10[2]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v11[12]; // [rsp+30h] [rbp-30h]
  int v12; // [rsp+3Ch] [rbp-24h]
  __int64 v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h]
  __int64 v16; // [rsp+58h] [rbp-8h]
  unsigned int v17; // [rsp+80h] [rbp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 64);
  v17 = 0;
  *(_QWORD *)&v11[4] = 0LL;
  v12 = 0;
  v14 = 0LL;
  v16 = 0LL;
  v10[0] = a1;
  v5 = *(_QWORD *)(a1 + 48);
  v10[1] = 0LL;
  v13 = 0LL;
  v6 = 0LL;
  v15 = 0LL;
  *(_QWORD *)v11 = (v2 >> 12) + ((v2 & 0xFFF) != 0);
  v7 = VslDetermineHotPatchUndoTableSize(v5, &v17);
  if ( v7 >= 0 )
  {
    v7 = v17;
    if ( v17 )
    {
      Pool = MiAllocatePool(256, v17, 0x54555048u);
      v6 = Pool;
      if ( Pool )
      {
        v7 = VslObtainHotPatchUndoTable(*(PVOID *)(a1 + 48), (__int64)Pool, v7);
        if ( v7 >= 0 )
        {
          v7 = MiPrepareDriverPatchState((__int64)v10);
          if ( v7 >= 0 )
          {
            v7 = MiLockHotPatchUndoPages(v10, (int)v6);
            if ( v7 >= 0 )
              v7 = VslRevertHotPatch(*(_QWORD *)(a1 + 48), 0, 0);
          }
        }
      }
      else
      {
        v7 = -1073741670;
      }
    }
  }
  MiUnlockDriverPages(v10);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 >= 0 )
    *(_QWORD *)(a2 + 120) = 0LL;
  return (unsigned int)v7;
}
