/*
 * XREFs of ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180106CFC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1d89632f3144689dba3d227faae4cbd9__void_::_Do_call @ 0x180109130 (std--_Func_impl_no_alloc__lambda_1d89632f3144689dba3d227faae4cbd9__void_--_Do_call.c)
 * Callees:
 *     ?GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z @ 0x180106740 (-GetFirstStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@K@Z.c)
 *     ?GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180106C9C (-GrantApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180108478 (-RevokeApplicationResources@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18010A020 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ @ 0x18010B3D4 (-IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange(
        Sarm::CSpatialAudioResourceManager *this,
        unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  Sarm::CStreamResource *FirstStream; // rax
  Sarm::CStreamResource *v6; // rdi
  char IsProcessMuted; // al

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleAppVolumePolicyChange", 0x32Au);
  FirstStream = Sarm::CSpatialAudioResourceManager::GetFirstStream(this, a2);
  v6 = FirstStream;
  if ( FirstStream )
  {
    IsProcessMuted = Sarm::CStreamResource::IsProcessMuted(FirstStream);
    if ( IsProcessMuted != *((_BYTE *)v6 + 88) )
    {
      *((_BYTE *)v6 + 88) = IsProcessMuted;
      if ( IsProcessMuted )
        Sarm::CSpatialAudioResourceManager::RevokeApplicationResources(this, a2);
      else
        Sarm::CSpatialAudioResourceManager::GrantApplicationResources(this, a2);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
