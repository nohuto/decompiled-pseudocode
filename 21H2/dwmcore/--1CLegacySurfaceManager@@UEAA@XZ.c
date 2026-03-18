/*
 * XREFs of ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180194CC4
 * Callers:
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x180194B78 (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 *     ??_ECLegacySurfaceManager@@UEAAPEAXI@Z @ 0x180194F30 (--_ECLegacySurfaceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ @ 0x1800D7A14 (-ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1801B9570 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 */

void __fastcall CLegacySurfaceManager::~CLegacySurfaceManager(void **this)
{
  int i; // ebx
  struct _RTL_GENERIC_TABLE *v3; // rdi
  PVOID v4; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *this = &CLegacySurfaceManager::`vftable';
  CLegacySurfaceManager::ReleaseCaptureBitsResponse((CLegacySurfaceManager *)this);
  CLegacySurfaceManager::ProcessPostPresentResponseItems((CLegacySurfaceManager *)this);
  for ( i = *((_DWORD *)this + 32); i > 0; --i )
    DefaultHeap::Free(*((void **)this[13] + 2 * (unsigned int)(i - 1) + 1));
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)(this + 13), 0x10u);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 22);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 18);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 13);
  *this = &CLogicalSurfaceHandleMap::`vftable';
  v3 = (struct _RTL_GENERIC_TABLE *)(this + 1);
  while ( 1 )
  {
    RestartKey = 0LL;
    v4 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v4 )
      break;
    if ( !RtlDeleteElementGenericTable(v3, v4) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
}
