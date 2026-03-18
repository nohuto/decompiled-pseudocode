/*
 * XREFs of ?PostPresent@CGlobalSurfaceManager@@UEAAJ_N@Z @ 0x1800D79B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x180115BE2 (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1801B9570 (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 */

__int64 __fastcall CGlobalSurfaceManager::PostPresent(CGlobalSurfaceManager *this, char a2)
{
  __int64 i; // rsi
  __int64 v5; // rcx
  HANDLE hEvent; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 41) )
  {
    if ( ++*((_DWORD *)this + 84) <= 8u )
    {
      if ( !a2 )
        goto LABEL_2;
    }
    else
    {
      ++*((_DWORD *)this + 86);
    }
    CLegacySurfaceManager::ReleaseCaptureBitsResponse((CGlobalSurfaceManager *)((char *)this + 120));
  }
LABEL_2:
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 80); i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)this + 37);
    hEvent = 0LL;
    if ( (int)OpenDxBltEvent(*(_QWORD *)(v5 + 8 * i), &hEvent) >= 0 )
    {
      SetEvent(hEvent);
      CloseHandle(hEvent);
    }
  }
  *((_DWORD *)this + 80) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 296, 8u);
  return CLegacySurfaceManager::ProcessPostPresentResponseItems((CGlobalSurfaceManager *)((char *)this + 120));
}
