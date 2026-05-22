/*
 * XREFs of ?BroadcastRemoteRemove@BamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAJI@Z @ 0x180004990
 * Callers:
 *     <none>
 * Callees:
 *     ?CallRemoteRemoveOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@CAJPEAVBamoStubImpl@36@I@Z @ 0x180002E38 (-CallRemoteRemoveOnStub@BamoList_ActivatableEntityPrincipal_PrincipalImpl@ISMBamos_AutoBamos@Bam.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800056E0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180011854 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal::BroadcastRemoteRemove(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        int a2)
{
  struct Microsoft::BamoImpl::ConnectionIndirector *i; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // r9
  const char *v9; // r8
  __int64 v10; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v13; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v13, this[3]);
  if ( *(_QWORD *)(*((_QWORD *)this[3] + 4) + 56LL) )
  {
    for ( i = this[5]; ; i = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)i + 6) )
    {
      if ( !i )
      {
        v6 = 0;
        goto LABEL_8;
      }
      if ( *((_BYTE *)i + 32) )
      {
        v5 = Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_PrincipalImpl::CallRemoteRemoveOnStub(
               i,
               a2);
        v6 = v5;
        if ( v5 < 0 )
          break;
      }
    }
    v8 = (unsigned int)v5;
    v9 = "onecore\\private\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl";
    v10 = 471LL;
  }
  else
  {
    v6 = -2018375660;
    v8 = 2276591636LL;
    v9 = "onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h";
    v10 = 53485LL;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)v10, (unsigned int)v9, (const char *)v8, v11);
LABEL_8:
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v13);
  return v6;
}
