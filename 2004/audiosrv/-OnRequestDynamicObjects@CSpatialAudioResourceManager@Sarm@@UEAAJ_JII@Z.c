/*
 * XREFs of ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180108330
 * Callers:
 *     ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180048010 (-OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x1801071F4 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180109288 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?WaitForWorkToComplete@CWorkFifo@@QEAA_NXZ @ 0x180109CFC (-WaitForWorkToComplete@CWorkFifo@@QEAA_NXZ.c)
 *     ?LogRequestDynamicObjects@CSpatialAudioResourceManagerTraceLogger@@QEAAX_JII@Z @ 0x18010A9F0 (-LogRequestDynamicObjects@CSpatialAudioResourceManagerTraceLogger@@QEAAX_JII@Z.c)
 *     ?ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z @ 0x18010C764 (-ValidateDynamicObjectRequest@CStreamResource@Sarm@@QEBAJII@Z.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(
        Sarm::CSpatialAudioResourceManager *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  CSpatialAudioResourceManagerTraceLogger *v9; // rcx
  Sarm::CStreamResource *Stream; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // eax
  struct Sarm::CStreamResource *v16; // rax
  __int128 v17; // [rsp+20h] [rbp-60h]
  __int64 (__fastcall **v18)(); // [rsp+40h] [rbp-40h] BYREF
  __int128 v19; // [rsp+48h] [rbp-38h]
  unsigned __int64 v20; // [rsp+58h] [rbp-28h]
  __int64 (__fastcall ***v21)(); // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  CSpatialAudioResourceManagerTraceLogger::LogRequestDynamicObjects(v9, a2, a3, a4);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
  if ( !Stream )
  {
    v11 = -2005139191;
    v12 = 485LL;
    v13 = 2289828105LL;
    goto LABEL_8;
  }
  v14 = Sarm::CStreamResource::ValidateDynamicObjectRequest(Stream, a3, a4);
  v11 = v14;
  if ( v14 < 0 )
  {
    v12 = 488LL;
LABEL_7:
    v13 = (unsigned int)v14;
    goto LABEL_8;
  }
  v18 = off_1801568D0;
  *(_QWORD *)&v17 = this;
  *((_QWORD *)&v17 + 1) = a2;
  v21 = &v18;
  v19 = v17;
  v20 = __PAIR64__(a4, a3);
  v14 = CWorkFifo::ScheduleWorkItem((Sarm::CSpatialAudioResourceManager *)((char *)this + 344));
  v11 = v14;
  if ( v14 < 0 )
  {
    v12 = 492LL;
    goto LABEL_7;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( a3 )
  {
    if ( !CWorkFifo::WaitForWorkToComplete((Sarm::CSpatialAudioResourceManager *)((char *)this + 344)) )
    {
      v11 = -2005139188;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F1,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)0x887C010CLL);
      return v11;
    }
    EnterCriticalSection(v4);
    v16 = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
    if ( !v16 )
    {
      v11 = -2005139191;
      v12 = 502LL;
LABEL_20:
      v13 = v11;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)v13);
      if ( v4 )
        LeaveCriticalSection(v4);
      return v11;
    }
    if ( *((_DWORD *)v16 + 20) < a3 )
    {
      v11 = -2005139188;
      v12 = 505LL;
      goto LABEL_20;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  return 0LL;
}
