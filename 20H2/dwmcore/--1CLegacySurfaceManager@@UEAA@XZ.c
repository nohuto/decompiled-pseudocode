/*
 * XREFs of ??1CLegacySurfaceManager@@UEAA@XZ @ 0x180163E58
 * Callers:
 *     ??1CGlobalSurfaceManager@@MEAA@XZ @ 0x180163C2C (--1CGlobalSurfaceManager@@MEAA@XZ.c)
 *     ??_ECLegacySurfaceManager@@UEAAPEAXI@Z @ 0x180164050 (--_ECLegacySurfaceManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180070A30 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BBE68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ @ 0x180178A00 (-ProcessPostPresentResponseItems@CLegacySurfaceManager@@QEAAJXZ.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x180178AB8 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 */

void __fastcall CLegacySurfaceManager::~CLegacySurfaceManager(CLegacySurfaceManager *this)
{
  int i; // ebx
  struct _RTL_GENERIC_TABLE *v3; // rdi
  PVOID v4; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CLegacySurfaceManager::`vftable';
  CLegacySurfaceManager::ReleaseCaptureBitsResponse(this);
  CLegacySurfaceManager::ProcessPostPresentResponseItems(this);
  for ( i = *((_DWORD *)this + 32); i > 0; --i )
    operator delete(*(void **)(*((_QWORD *)this + 13) + 16LL * (unsigned int)(i - 1) + 8));
  *((_DWORD *)this + 32) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 104, 0x10u);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 176);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 144);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 104);
  *(_QWORD *)this = &CLogicalSurfaceHandleMap::`vftable';
  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
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
