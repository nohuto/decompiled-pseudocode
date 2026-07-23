/*
 * XREFs of DmrEnumerateRmrrDomains @ 0x1404E89B0
 * Callers:
 *     HalpIvtProcessDrhdEntry @ 0x1404E764C (HalpIvtProcessDrhdEntry.c)
 * Callees:
 *     DmrFindDrhdForDeviceScope @ 0x1404E85BC (DmrFindDrhdForDeviceScope.c)
 *     DmrCheckPathMatch @ 0x1404E8698 (DmrCheckPathMatch.c)
 *     DmrGetNextDeviceScope @ 0x1404E8814 (DmrGetNextDeviceScope.c)
 *     DmrGetNextRemappingStructure @ 0x1404E885C (DmrGetNextRemappingStructure.c)
 *     DmrFreeRmrrTree @ 0x1404E8AF4 (DmrFreeRmrrTree.c)
 *     DmrpRmrrTreeAddNewScope @ 0x1404E8B78 (DmrpRmrrTreeAddNewScope.c)
 *     DmrpRmrrTreeAddRegionToDevice @ 0x1404E8C18 (DmrpRmrrTreeAddRegionToDevice.c)
 */

__int64 __fastcall DmrEnumerateRmrrDomains(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v7; // r13
  unsigned __int64 i; // r8
  unsigned __int16 v9; // r12
  _QWORD *v10; // rdi
  __int64 v11; // rbp
  int v12; // edi
  char *NextDeviceScope; // rax
  __int64 v14; // r11
  char *v15; // rsi
  _WORD *NextRemappingStructure; // rax
  _WORD *v17; // rbx

  *(_DWORD *)a3 = 0;
  v3 = (_QWORD **)(a3 + 8);
  v4 = a2;
  *(_QWORD *)(a3 + 16) = a3 + 8;
  *(_QWORD *)(a3 + 8) = a3 + 8;
  v5 = 0LL;
  while ( 1 )
  {
    NextRemappingStructure = (_WORD *)DmrGetNextRemappingStructure(a1, v5);
    v17 = NextRemappingStructure;
    if ( !NextRemappingStructure )
      break;
    if ( *NextRemappingStructure == 1 )
    {
      v7 = (unsigned __int64)NextRemappingStructure + (unsigned __int16)NextRemappingStructure[1];
      for ( i = 0LL; ; i = (unsigned __int64)v15 )
      {
        NextDeviceScope = (char *)DmrGetNextDeviceScope((unsigned __int64)(v17 + 12), v7, i);
        v15 = NextDeviceScope;
        if ( !NextDeviceScope )
          break;
        if ( *NextDeviceScope == 1 && (!v4 || DmrFindDrhdForDeviceScope(v14, v17[3], NextDeviceScope) == v4) )
        {
          v9 = v17[3];
          v10 = *v3;
          while ( v10 != v3 )
          {
            v11 = (__int64)v10;
            v10 = (_QWORD *)*v10;
            if ( *(_WORD *)(v11 + 32) == v9 && *(_BYTE *)(v11 + 34) == 1 && DmrCheckPathMatch(v15, (char *)(v11 + 34)) )
              goto LABEL_13;
          }
          v11 = DmrpRmrrTreeAddNewScope(a3, v9, v15);
LABEL_13:
          if ( !v11 )
          {
            v12 = -1073741670;
LABEL_23:
            DmrFreeRmrrTree(a3);
            return (unsigned int)v12;
          }
          v12 = DmrpRmrrTreeAddRegionToDevice(v11, *((_QWORD *)v17 + 1), *((_QWORD *)v17 + 2));
          if ( v12 < 0 )
            goto LABEL_23;
          v4 = a2;
        }
      }
    }
    v5 = (__int64)v17;
    a1 = v14;
  }
  return 0;
}
