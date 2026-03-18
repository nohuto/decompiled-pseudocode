/*
 * XREFs of ?GetTransformList@InputTransform@@YGHPAUtagWND@@IPA_KPAUtagINPUT_TRANSFORM@@D@Z @ 0x15E504
 * Callers:
 *     _GetMiPInputTransform@8 @ 0x14E25A (_GetMiPInputTransform@8.c)
 *     _GetInputTransformList@20 @ 0x15E9A2 (_GetInputTransformList@20.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?FindEntryByTime@@YGPAUtagINPUTTRANSFORMENTRY@@PAUtagINPUTTRANSFORMLIST@@PAU1@_K@Z @ 0x15E421 (-FindEntryByTime@@YGPAUtagINPUTTRANSFORMENTRY@@PAUtagINPUTTRANSFORMLIST@@PAU1@_K@Z.c)
 */

int __userpurge InputTransform::GetTransformList@<eax>(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        InputTransform *this,
        struct tagWND *a4,
        char a5,
        unsigned __int64 *a6,
        struct tagINPUT_TRANSFORM *a7,
        char a8)
{
  int v8; // esi
  unsigned int i; // ebx
  char *v11; // edi
  unsigned __int64 v12; // [esp+0h] [ebp-4Ch]
  int v13; // [esp+14h] [ebp-38h]
  int v15; // [esp+2Ch] [ebp-20h]
  struct tagINPUTTRANSFORMENTRY *EntryByTime; // [esp+30h] [ebp-1Ch]

  v8 = *(_DWORD *)(a2 + 160);
  v15 = v8;
  if ( !v8 )
    return 0;
  v13 = *(_DWORD *)(a2 + 160);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v8, 0);
  if ( *(_DWORD *)(v8 + 4) == v8 + 4 )
  {
    ExReleasePushLockSharedEx(v8, 0);
    KeLeaveCriticalRegion();
    return 0;
  }
  EntryByTime = *(struct tagINPUTTRANSFORMENTRY **)(v8 + 4);
  for ( i = 0; i < a1; ++i )
  {
    EntryByTime = FindEntryByTime((int)EntryByTime, v8, *((_QWORD *)this + i), v12);
    if ( a5 == 1 )
    {
      v11 = (char *)a4 + 64 * i;
      if ( (unsigned int)v11 >= _MmUserProbeAddress )
        v11 = (char *)_MmUserProbeAddress;
      qmemcpy(v11, (char *)EntryByTime + 16, 0x40u);
    }
    else
    {
      qmemcpy((char *)a4 + 64 * i, (char *)EntryByTime + 16, 0x40u);
    }
    v8 = v15;
  }
  ExReleasePushLockSharedEx(v13, 0);
  KeLeaveCriticalRegion();
  return 1;
}
