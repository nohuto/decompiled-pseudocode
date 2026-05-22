/*
 * XREFs of ?BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipalImpl@BamoImpl@@QEAAJAEBU_GUID@@@Z @ 0x180187398
 * Callers:
 *     ?BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipal@@UEAAJAEBU_GUID@@@Z @ 0x180187340 (-BroadcastUIAHitTestResponse@BamoUIAHitTestPrincipal@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallUIAHitTestResponseOnStub@BamoUIAHitTestPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@AEBU_GUID@@@Z @ 0x180187438 (-CallUIAHitTestResponseOnStub@BamoUIAHitTestPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microso.c)
 */

__int64 __fastcall BamoImpl::BamoUIAHitTestPrincipalImpl::BroadcastUIAHitTestResponse(
        BamoImpl::BamoUIAHitTestPrincipalImpl *this,
        const struct _GUID *a2)
{
  __int64 i; // rbx
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 56LL) )
  {
    for ( i = *((_QWORD *)this + 4); ; i = *(_QWORD *)(i + 48) )
    {
      if ( !i )
        return 0;
      if ( *(_BYTE *)(i + 32) )
      {
        v5 = BamoImpl::BamoUIAHitTestPrincipalImpl::CallUIAHitTestResponseOnStub(
               (struct Microsoft::BamoImpl::BamoStubImpl *)i,
               a2);
        v6 = v5;
        if ( v5 < 0 )
          break;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D7,
      (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
      (const char *)(unsigned int)v5);
    return v6;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCB5F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
