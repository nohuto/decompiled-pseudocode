/*
 * XREFs of PipVisitDeviceObjectListEntry @ 0x14073758C
 * Callers:
 *     PipSortDeviceObjectList @ 0x1407374E0 (PipSortDeviceObjectList.c)
 *     PipVisitDeviceObjectListEntry @ 0x14073758C (PipVisitDeviceObjectListEntry.c)
 * Callees:
 *     PipVisitDeviceObjectListEntry @ 0x14073758C (PipVisitDeviceObjectListEntry.c)
 *     PipIsDeviceInDeviceObjectList @ 0x140737ABC (PipIsDeviceInDeviceObjectList.c)
 *     PiGetDependentList @ 0x14074B534 (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x14089DA58 (PiEnumerateDependentListEntry.c)
 */

__int64 __fastcall PipVisitDeviceObjectListEntry(__int64 *a1, _DWORD *a2, int *a3)
{
  int v5; // eax
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD **DependentList; // r15
  _QWORD *v13; // rdi
  int v14; // eax
  _QWORD v16[7]; // [rsp+20h] [rbp-38h] BYREF
  char v17; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v18; // [rsp+78h] [rbp+20h] BYREF

  v16[0] = 0LL;
  v18 = 0LL;
  v5 = *((_DWORD *)a1 + 4);
  if ( (v5 & 2) == 0 )
  {
    *((_DWORD *)a1 + 4) = v5 | 2;
    v7 = *a1;
    if ( v7 )
      v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
    else
      v8 = 0LL;
    v9 = 0LL;
    if ( *a2 )
    {
      do
      {
        v10 = &a2[4 * v9 + 4 + 2 * v9];
        v11 = (_QWORD *)*v10;
        v18 = v10;
        if ( v11 )
          v11 = *(_QWORD **)(v11[39] + 40LL);
        if ( v11[2] == v8 || (v11[81] & 0xFFFFFFFFFFFFFFFEuLL) == v8 )
          PipVisitDeviceObjectListEntry(v10, a2, a3);
        v9 = (unsigned int)(v9 + 1);
      }
      while ( (unsigned int)v9 < *a2 );
      v7 = *a1;
    }
    DependentList = (_QWORD **)PiGetDependentList(v7);
    v13 = *DependentList;
    while ( v13 != DependentList )
    {
      PiEnumerateDependentListEntry(v13, v16, &v17);
      v13 = (_QWORD *)*v13;
      if ( v16[0] && (unsigned __int8)PipIsDeviceInDeviceObjectList(a2, v16[0], &v18) )
        PipVisitDeviceObjectListEntry(v18, a2, a3);
    }
    v14 = *a3;
    *((_DWORD *)a1 + 3) = *a3;
    *a3 = v14 + 1;
  }
  return 0LL;
}
