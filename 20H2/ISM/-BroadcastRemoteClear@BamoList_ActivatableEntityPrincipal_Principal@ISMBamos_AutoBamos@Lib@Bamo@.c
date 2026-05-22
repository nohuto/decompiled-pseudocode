/*
 * XREFs of ?BroadcastRemoteClear@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJXZ @ 0x1801043A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CallRemoteClearOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@@Z @ 0x180104568 (-CallRemoteClearOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@Bamo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::BroadcastRemoteClear(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  unsigned int v2; // edi
  __int64 v3; // r9
  const char *v4; // r8
  __int64 v5; // rdx
  struct Microsoft::BamoImpl::ConnectionIndirector *i; // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  Microsoft::BamoImpl::BamoImplObject *v10; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(&v10, this[3]);
  if ( *(_QWORD *)(*((_QWORD *)this[3] + 4) + 56LL) )
  {
    for ( i = this[5]; ; i = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)i + 6) )
    {
      if ( !i )
      {
        v2 = 0;
        goto LABEL_10;
      }
      if ( *((_BYTE *)i + 32) )
      {
        v7 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::CallRemoteClearOnStub(i);
        v2 = v7;
        if ( v7 < 0 )
          break;
      }
    }
    v3 = (unsigned int)v7;
    v4 = "onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl";
    v5 = 471LL;
  }
  else
  {
    v2 = -2018375660;
    v3 = 2276591636LL;
    v4 = "onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h";
    v5 = 53515LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v5, (__int64)v4, (const char *)v3);
LABEL_10:
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v10);
  return v2;
}
