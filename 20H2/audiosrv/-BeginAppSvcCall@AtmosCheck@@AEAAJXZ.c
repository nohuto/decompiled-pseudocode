/*
 * XREFs of ?BeginAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x1801347F8
 * Callers:
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x180136400 (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     ?PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z @ 0x1801365A8 (-PerformLicenseCheckForSpatialAudioSubtype@AtmosCheck@@AEAAJPEBG0PEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x180133B04 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 */

__int64 __fastcall AtmosCheck::BeginAppSvcCall(AtmosCheck *this)
{
  DWORD CurrentThreadId; // eax
  _BYTE *v3; // rdx
  HRESULT v4; // eax
  const char *v5; // r9
  unsigned int v6; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD v9; // [rsp+30h] [rbp+8h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  try
  {
    v9 = CurrentThreadId;
    v3 = (_BYTE *)*((_QWORD *)this + 67);
    if ( *((_BYTE **)this + 68) == v3 )
    {
      std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>((const void **)this + 66, v3, &v9);
    }
    else
    {
      *(_DWORD *)v3 = CurrentThreadId;
      *((_QWORD *)this + 67) += 4LL;
    }
    v4 = CoEnableCallCancellation(0LL);
    v6 = v4;
    if ( v4 >= 0 )
    {
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC0,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v4);
      result = v6;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xAC4,
                           (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
                           v5);
  }
  return result;
}
