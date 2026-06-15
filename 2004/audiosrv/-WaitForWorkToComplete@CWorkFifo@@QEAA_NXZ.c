/*
 * XREFs of ?WaitForWorkToComplete@CWorkFifo@@QEAA_NXZ @ 0x180109CFC
 * Callers:
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x180108330 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 * Callees:
 *     ?FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B55D4 (-FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

char __fastcall CWorkFifo::WaitForWorkToComplete(CWorkFifo *this)
{
  char v2; // bl
  void *v3; // rcx
  DWORD v4; // eax
  __int64 v5; // r8
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  v3 = (void *)*((_QWORD *)this + 28);
  if ( v3 )
  {
    v4 = WaitForSingleObjectEx(v3, 0xFFFFFFFF, 0);
    if ( v4 != 258 )
    {
      if ( v4 )
      {
        wil::details::in1diag3::FailFast_Unexpected(retaddr, 2569LL, v5, v6);
        __debugbreak();
      }
      return *((_BYTE *)this + 136) == 0;
    }
  }
  return v2;
}
