/*
 * XREFs of DmrEnumerateSatcDevices @ 0x140538278
 * Callers:
 *     HalpIvtProcessDmarTable @ 0x140537044 (HalpIvtProcessDmarTable.c)
 * Callees:
 *     ExtEnvAllocateMemory @ 0x1403CE24C (ExtEnvAllocateMemory.c)
 *     DmrGetNextDeviceScope @ 0x1405383E4 (DmrGetNextDeviceScope.c)
 *     DmrGetNextRemappingStructure @ 0x14053842C (DmrGetNextRemappingStructure.c)
 */

__int64 __fastcall DmrEnumerateSatcDevices(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 i; // rdi
  __int64 v5; // r14
  _BYTE *j; // r8
  __int16 v7; // bp
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rax
  _BYTE *NextDeviceScope; // rax
  _BYTE *v13; // rsi
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  v3 = 0;
  for ( i = DmrGetNextRemappingStructure(a1, 0LL); i; i = DmrGetNextRemappingStructure(a1, i) )
  {
    if ( *(_WORD *)i == 5 )
    {
      v5 = i + *(unsigned __int16 *)(i + 2);
      for ( j = 0LL; ; j = v13 )
      {
        NextDeviceScope = (_BYTE *)DmrGetNextDeviceScope(i + 8, v5, j);
        v13 = NextDeviceScope;
        if ( !NextDeviceScope )
          break;
        if ( *NextDeviceScope != 1 || NextDeviceScope[1] != 8 )
          return (unsigned int)-1073741637;
        v7 = (unsigned __int8)NextDeviceScope[7] | (unsigned __int16)(8
                                                                    * ((unsigned __int8)NextDeviceScope[6] | (unsigned __int16)(32 * (unsigned __int8)NextDeviceScope[5])));
        v8 = HalpIommuAtsDeviceList;
        if ( (__int64 *)HalpIommuAtsDeviceList == &HalpIommuAtsDeviceList )
        {
LABEL_11:
          v15 = 0LL;
          ExtEnvAllocateMemory(v9, 0x30u, &v15);
          v10 = v15;
          if ( !v15 )
            return (unsigned int)-1073741670;
          *(_DWORD *)(v15 + 16) = 1;
          *(_WORD *)(v10 + 28) = v7;
          *(_WORD *)(v10 + 24) = *(_WORD *)(i + 6);
          *(_DWORD *)(v10 + 40) = *(unsigned __int8 *)(i + 4);
          v11 = (__int64 *)qword_140C4BE78;
          if ( *(__int64 **)qword_140C4BE78 != &HalpIommuAtsDeviceList )
            __fastfail(3u);
          *(_QWORD *)v10 = &HalpIommuAtsDeviceList;
          *(_QWORD *)(v10 + 8) = v11;
          *v11 = v10;
          qword_140C4BE78 = v10;
        }
        else
        {
          v9 = *(unsigned __int16 *)(i + 6);
          while ( *(_WORD *)(v8 + 24) != (_WORD)v9 || *(_WORD *)(v8 + 28) != v7 )
          {
            v8 = *(_QWORD *)v8;
            if ( (__int64 *)v8 == &HalpIommuAtsDeviceList )
              goto LABEL_11;
          }
        }
      }
    }
  }
  return v3;
}
