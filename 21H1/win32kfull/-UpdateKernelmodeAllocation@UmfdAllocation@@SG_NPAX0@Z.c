/*
 * XREFs of ?UpdateKernelmodeAllocation@UmfdAllocation@@SG_NPAX0@Z @ 0x24A90E
 * Callers:
 *     ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z @ 0x22911D (-TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z.c)
 * Callees:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z @ 0x8D01C (-Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z @ 0xCFE32 (-Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z.c)
 */

char __fastcall UmfdAllocation::UpdateKernelmodeAllocation(char *a1, int a2)
{
  _DWORD *v2; // edi
  char *v3; // ebx
  PVOID v5; // esi
  _QWORD *v6; // eax
  NSInstrumentation::CPointerHashTable *v7; // ecx
  const void *v8; // [esp-Ch] [ebp-1Ch]
  void *v10; // [esp+Ch] [ebp-4h] BYREF

  v2 = (_DWORD *)(a2 - 20);
  v3 = a1 - 20;
  if ( a1 - 20 == (char *)(a2 - 20) )
    return 1;
  v5 = UmfdAllocation::s_allocationLookupLock;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5, 0);
  if ( *((_DWORD *)v3 + 1) != v2[1] || *((_DWORD *)v3 + 4) != v2[4] )
    goto LABEL_10;
  if ( UmfdAllocation::s_allocationLookup )
  {
    v6 = (_QWORD *)v2[3];
    if ( v6 )
    {
      v10 = 0;
      NSInstrumentation::CPointerHashTable::Remove(UmfdAllocation::s_allocationLookup, v6, &v10);
    }
  }
  v7 = UmfdAllocation::s_allocationLookup;
  *((_DWORD *)v3 + 2) = v2[2];
  v8 = (const void *)v2[3];
  *((_DWORD *)v3 + 3) = v8;
  if ( NSInstrumentation::CPointerHashTable::Insert(v7, v8, a1) )
  {
    EngFreeMem(v2);
    ExReleasePushLockExclusiveEx(v5, 0);
    KeLeaveCriticalRegion();
    return 1;
  }
  else
  {
LABEL_10:
    ExReleasePushLockExclusiveEx(v5, 0);
    KeLeaveCriticalRegion();
    return 0;
  }
}
