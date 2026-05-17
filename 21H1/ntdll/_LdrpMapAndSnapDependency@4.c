/*
 * XREFs of _LdrpMapAndSnapDependency@4 @ 0x4B2CB3D0
 * Callers:
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _LdrpPrepareImportAddressTableForSnap@4 @ 0x4B2B9C01 (_LdrpPrepareImportAddressTableForSnap@4.c)
 *     _LdrpSnapModule@4 @ 0x4B2BDE10 (_LdrpSnapModule@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpQueueWork@4 @ 0x4B2DE91E (_LdrpQueueWork@4.c)
 *     _LdrpFindDllActivationContext@4 @ 0x4B2E4C0D (_LdrpFindDllActivationContext@4.c)
 *     _LdrpGetImportDescriptorForSnap@4 @ 0x4B2E5CCD (_LdrpGetImportDescriptorForSnap@4.c)
 *     _LdrpShouldModuleImportBeRedirected@4 @ 0x4B2E8DE5 (_LdrpShouldModuleImportBeRedirected@4.c)
 */

int *__thiscall LdrpMapAndSnapDependency(int *this)
{
  int *v1; // esi
  int DllActivationContext; // ebx
  int ImportDescriptorForSnap; // eax
  int v4; // esi
  _DWORD *v5; // ecx
  int v6; // ebx
  int v7; // edx
  _DWORD *v8; // edi
  bool v9; // zf
  int *result; // eax
  int v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // eax
  int v15; // ecx
  char *v16; // eax
  unsigned int v17; // eax
  int v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+18h] [ebp-18h]
  int v22; // [esp+1Ch] [ebp-14h] BYREF
  _DWORD *v23; // [esp+20h] [ebp-10h]
  int v24; // [esp+24h] [ebp-Ch]
  STRING SourceString; // [esp+28h] [ebp-8h] BYREF
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  v1 = this;
  v19 = this[8];
  if ( (this[4] & 0x800000) == 0 )
  {
    DllActivationContext = LdrpFindDllActivationContext(this[8]);
    if ( DllActivationContext < 0 )
      goto LABEL_39;
  }
  DllActivationContext = LdrpPrepareImportAddressTableForSnap(v1);
  v21 = DllActivationContext;
  if ( DllActivationContext < 0 )
    goto LABEL_39;
  if ( !v1[15] )
    goto LABEL_31;
  if ( (unsigned __int8)LdrpShouldModuleImportBeRedirected(v19) )
    v1[4] |= 0x2000000u;
  ImportDescriptorForSnap = LdrpGetImportDescriptorForSnap(v1);
  v4 = 0;
  v24 = ImportDescriptorForSnap;
  v23 = (_DWORD *)(ImportDescriptorForSnap + 12);
  if ( !*(_DWORD *)(ImportDescriptorForSnap + 12) )
    goto LABEL_38;
  v5 = (_DWORD *)(ImportDescriptorForSnap + 12);
  v6 = 0;
  do
  {
    v7 = v5[1];
    if ( !v7 )
      break;
    ++v4;
    if ( *(_DWORD *)(v7 + *(_DWORD *)(v19 + 24)) )
      ++v6;
    v5 += 5;
  }
  while ( *v5 );
  v8 = v23;
  v9 = v6 == 0;
  v20 = v6;
  DllActivationContext = v21;
  if ( v9 )
  {
LABEL_38:
    v1 = this;
LABEL_31:
    result = *(int **)(v19 + 80);
    if ( v1[15] )
    {
      result[8] = 4;
      if ( v1[7] )
      {
        result = (int *)LdrpQueueWork(v1);
      }
      else
      {
        result = (int *)LdrpSnapModule(v1, (int)&savedregs);
        DllActivationContext = (int)result;
      }
    }
    else
    {
      result[8] = 5;
    }
    goto LABEL_34;
  }
  result = (int *)RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8, 4 * v4);
  this[12] = (int)result;
  if ( result )
  {
    v11 = v24;
    this[13] = v4;
    v1 = this;
    v22 = 0;
    this[19] = v11;
    result = (int *)(v20 + 1);
    this[14] = v20 + 1;
    if ( *v8 )
    {
      v12 = v19;
      v13 = 0;
      do
      {
        v14 = v8[1];
        if ( !v14 )
          break;
        v15 = *(_DWORD *)(v12 + 24);
        if ( *(_DWORD *)(v14 + v15) )
        {
          v9 = v15 + *v8 == 0;
          v16 = (char *)(v15 + *v8);
          *(_DWORD *)&SourceString.Length = 0;
          SourceString.Buffer = v16;
          if ( !v9 )
          {
            v17 = strlen(v16);
            if ( v17 > 0xFFFE )
            {
              DllActivationContext = -1073741562;
              break;
            }
            SourceString.Length = v17;
            SourceString.MaximumLength = v17 + 1;
          }
          DllActivationContext = LdrpLoadDependentModule(&SourceString, v19, 0, v13 + this[12], (int)&v22);
          if ( DllActivationContext < 0 )
            break;
          v12 = v19;
        }
        v8 += 5;
        v13 += 4;
      }
      while ( *v8 );
      result = (int *)v22;
      if ( v22 )
        result = (int *)RtlFreeHeap(LdrpHeap, 0, v22);
      v1 = this;
    }
    if ( DllActivationContext >= 0 )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v20 = --v1[14];
      result = (int *)RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  else
  {
    DllActivationContext = -1073741801;
    v1 = this;
  }
  if ( !v20 )
    goto LABEL_31;
LABEL_34:
  if ( DllActivationContext < 0 )
  {
LABEL_39:
    result = (int *)v1[6];
    *result = DllActivationContext;
  }
  return result;
}
