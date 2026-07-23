/*
 * XREFs of _LdrpLoadContextReplaceModule@8 @ 0x4B2DE80E
 * Callers:
 *     _LdrpLoadKnownDll@4 @ 0x4B2CEF5D (_LdrpLoadKnownDll@4.c)
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 *     _LdrpMapDllRetry@4 @ 0x4B2DDF9E (_LdrpMapDllRetry@4.c)
 *     _LdrpMapDllFullPath@4 @ 0x4B2DE04A (_LdrpMapDllFullPath@4.c)
 *     _LdrpMapDllSearchPath@4 @ 0x4B2DE148 (_LdrpMapDllSearchPath@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpDependencyExist@8 @ 0x4B2CF1BD (_LdrpDependencyExist@8.c)
 *     _LdrpQueueWork@4 @ 0x4B2DE91E (_LdrpQueueWork@4.c)
 */

void __fastcall LdrpLoadContextReplaceModule(int a1, int a2)
{
  int v4; // edi
  _DWORD *v5; // ebx
  int v6; // eax
  _DWORD **v7; // ecx
  _DWORD *v8; // esi
  _DWORD *v9; // edi
  _DWORD *v10; // ecx
  _DWORD *v11; // esi
  _DWORD **v13; // ecx
  _DWORD *i; // edx
  int v15; // eax
  int v16; // [esp+10h] [ebp-8h]
  _DWORD *BaseAddressa; // [esp+14h] [ebp-4h]

  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 80);
  *(_DWORD *)(a1 + 32) = a2;
  v5 = *(_DWORD **)(a2 + 80);
  v6 = v5[3];
  if ( v6 != -1 )
    v5[3] = v6 + 1;
  *(_DWORD *)(v4 + 12) = 0;
  v7 = *(_DWORD ***)(v4 + 28);
  if ( v7 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      *(_DWORD *)(v4 + 28) = 0;
    else
      *v7 = (_DWORD *)*v8;
    LdrpDereferenceModule((char *)a2);
    v9 = v8 - 2;
    BaseAddressa = (_DWORD *)(v8[1] & 0xFFFFFFF8);
    v16 = *(_DWORD *)(*BaseAddressa + 8);
    if ( LdrpDependencyExist(BaseAddressa, v5) )
    {
      v11 = BaseAddressa;
      v13 = (_DWORD **)BaseAddressa[6];
      for ( i = *v13; i != v9; i = (_DWORD *)*i )
        v13 = (_DWORD **)i;
      *v13 = (_DWORD *)*v9;
      if ( (_DWORD *)BaseAddressa[6] == v9 )
        BaseAddressa[6] = v9 != v13 ? v13 : 0;
      v15 = v5[3];
      if ( v15 != -1 )
        v5[3] = v15 - 1;
      RtlFreeHeap(LdrpHeap, 0, v9);
      v9 = 0;
    }
    else
    {
      v9[1] = v5;
      v10 = (_DWORD *)v5[7];
      if ( v10 )
      {
        *v8 = *v10;
        *v10 = v8;
      }
      else
      {
        *v8 = v8;
      }
      v5[7] = v8;
      v11 = BaseAddressa;
    }
    if ( v16 && ((int)v5[8] >= 2 || !v9) && (*(_DWORD *)(v16 + 56))-- == 1 )
    {
      v11[8] = 4;
      LdrpQueueWork(v16);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
