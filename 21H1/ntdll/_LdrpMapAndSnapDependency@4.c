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

void __thiscall LdrpMapAndSnapDependency(_DWORD *this)
{
  _DWORD *v1; // esi
  NTSTATUS DllActivationContext; // ebx
  int ImportDescriptorForSnap; // eax
  int v4; // esi
  _DWORD *v5; // ecx
  int v6; // ebx
  int v7; // edx
  _DWORD *v8; // edi
  bool v9; // zf
  PVOID Heap; // eax
  int v11; // eax
  int v12; // edx
  int v13; // esi
  int v14; // eax
  int v15; // ecx
  char *v16; // eax
  unsigned int v17; // eax
  int v18; // eax
  SIZE_T v19; // [esp-4h] [ebp-34h]
  int v21; // [esp+10h] [ebp-20h]
  int v22; // [esp+14h] [ebp-1Ch]
  NTSTATUS v23; // [esp+18h] [ebp-18h]
  PVOID BaseAddress; // [esp+1Ch] [ebp-14h] BYREF
  _DWORD *v25; // [esp+20h] [ebp-10h]
  int v26; // [esp+24h] [ebp-Ch]
  ANSI_STRING SourceString; // [esp+28h] [ebp-8h] BYREF
  int savedregs; // [esp+30h] [ebp+0h] BYREF

  v1 = this;
  v21 = this[8];
  if ( (this[4] & 0x800000) == 0 )
  {
    DllActivationContext = LdrpFindDllActivationContext(this[8]);
    if ( DllActivationContext < 0 )
      goto LABEL_39;
  }
  DllActivationContext = LdrpPrepareImportAddressTableForSnap(v1);
  v23 = DllActivationContext;
  if ( DllActivationContext < 0 )
    goto LABEL_39;
  if ( !v1[15] )
    goto LABEL_31;
  if ( (unsigned __int8)LdrpShouldModuleImportBeRedirected(v21) )
    v1[4] |= 0x2000000u;
  ImportDescriptorForSnap = LdrpGetImportDescriptorForSnap(v1);
  v4 = 0;
  v26 = ImportDescriptorForSnap;
  v25 = (_DWORD *)(ImportDescriptorForSnap + 12);
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
    if ( *(_DWORD *)(v7 + *(_DWORD *)(v21 + 24)) )
      ++v6;
    v5 += 5;
  }
  while ( *v5 );
  v8 = v25;
  v9 = v6 == 0;
  v22 = v6;
  DllActivationContext = v23;
  if ( v9 )
  {
LABEL_38:
    v1 = this;
LABEL_31:
    v18 = *(_DWORD *)(v21 + 80);
    if ( v1[15] )
    {
      *(_DWORD *)(v18 + 32) = 4;
      if ( v1[7] )
        LdrpQueueWork(v1);
      else
        DllActivationContext = LdrpSnapModule(v1, (int)&savedregs);
    }
    else
    {
      *(_DWORD *)(v18 + 32) = 5;
    }
    goto LABEL_34;
  }
  LODWORD(v19) = 4 * v4;
  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8, v19);
  this[12] = Heap;
  if ( Heap )
  {
    v11 = v26;
    this[13] = v4;
    v1 = this;
    BaseAddress = 0;
    this[19] = v11;
    this[14] = v22 + 1;
    if ( *v8 )
    {
      v12 = v21;
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
          DllActivationContext = LdrpLoadDependentModule(&SourceString, v21, 0, v13 + this[12], (int)&BaseAddress);
          if ( DllActivationContext < 0 )
            break;
          v12 = v21;
        }
        v8 += 5;
        v13 += 4;
      }
      while ( *v8 );
      if ( BaseAddress )
        RtlFreeHeap(LdrpHeap, 0, BaseAddress);
      v1 = this;
    }
    if ( DllActivationContext >= 0 )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v22 = --v1[14];
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  else
  {
    DllActivationContext = -1073741801;
    v1 = this;
  }
  if ( !v22 )
    goto LABEL_31;
LABEL_34:
  if ( DllActivationContext < 0 )
LABEL_39:
    *(_DWORD *)v1[6] = DllActivationContext;
}
