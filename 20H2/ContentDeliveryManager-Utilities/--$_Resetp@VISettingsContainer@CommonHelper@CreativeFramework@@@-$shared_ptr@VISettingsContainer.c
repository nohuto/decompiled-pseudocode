/*
 * XREFs of ??$_Resetp@VISettingsContainer@CommonHelper@CreativeFramework@@@?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@@Z @ 0x18007A134
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x180075A44 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800AFF68 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::_Resetp<CreativeFramework::CommonHelper::ISettingsContainer>(
        _QWORD *a1)
{
  unsigned __int64 result; // rax
  _QWORD *v3; // rbx
  volatile signed __int32 *v4; // rdi

  try
  {
    result = (unsigned __int64)operator new(0x18uLL);
    v3 = (_QWORD *)result;
    if ( result )
    {
      *(_DWORD *)(result + 8) = 1;
      *(_DWORD *)(result + 12) = 1;
      result = (unsigned __int64)&std::_Ref_count<CreativeFramework::CommonHelper::ISettingsContainer>::`vftable';
      *v3 = &std::_Ref_count<CreativeFramework::CommonHelper::ISettingsContainer>::`vftable';
      v3[2] = 0LL;
    }
    v4 = (volatile signed __int32 *)a1[1];
    if ( v4 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
        result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
      }
    }
    a1[1] = v3;
    *a1 = 0LL;
  }
  catch ( ... )
  {
    operator delete(0LL);
    throw;
  }
  return result;
}
