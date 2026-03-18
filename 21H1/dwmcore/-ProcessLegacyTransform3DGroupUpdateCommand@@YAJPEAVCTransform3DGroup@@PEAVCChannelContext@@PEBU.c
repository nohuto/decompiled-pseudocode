/*
 * XREFs of ?ProcessLegacyTransform3DGroupUpdateCommand@@YAJPEAVCTransform3DGroup@@PEAVCChannelContext@@PEBUtagMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x1801B7594
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x18002A6AC (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?SetOrAppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@_N@Z @ 0x180176154 (-SetOrAppendChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEB.c)
 */

__int64 __fastcall ProcessLegacyTransform3DGroupUpdateCommand(
        char **this,
        struct CChannelContext *a2,
        const struct tagMILCMD_TRANSFORM3DGROUP *a3,
        unsigned int *a4,
        unsigned int a5)
{
  __int64 v5; // rax
  unsigned int v7; // r8d
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  bool v12; // zf
  void *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  int appended; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD v20[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+28h] BYREF
  void *lpMem; // [rsp+80h] [rbp+30h] BYREF

  v5 = *((_QWORD *)a2 + 3);
  v7 = *((_DWORD *)a3 + 2);
  v21 = 0;
  v9 = CResource::UnmarshalResourceArray(a4, a5, v7, 0xBAu, &v21, &lpMem, v5, 0);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x622u, 0LL);
    return (unsigned int)v11;
  }
  v12 = *((_DWORD *)a3 + 3) == 0;
  v13 = lpMem;
  v20[1] = lpMem;
  v20[0] = v21;
  if ( v12 )
  {
    if ( lpMem || !v21 )
    {
      appended = CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::SetOrAppendChildren(this, (__int64)v20, 0);
      v11 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, appended, 0x62Au, 0LL);
      goto LABEL_12;
    }
LABEL_9:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  if ( !lpMem && v21 )
    goto LABEL_9;
  v14 = CTransform3DGroupGeneratedT<CTransform3DGroup,CTransform3D>::SetOrAppendChildren(this, (__int64)v20, 1);
  v11 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x626u, 0LL);
LABEL_12:
  operator delete(v13);
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v11, 0x62Eu, 0LL);
  return (unsigned int)v11;
}
