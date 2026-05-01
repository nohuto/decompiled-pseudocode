/*
 * XREFs of ?Handle_RM_AcquireResourceSet@ResourceManagerServerProxy@@QEAAJPEAXPEAURmResourceSetInfo@@EPEBGPEAEKKK_KKPEAH4PEA_K@Z @ 0x180062F70
 * Callers:
 *     RmtSrv_RM_AcquireResourceSet @ 0x180062D30 (RmtSrv_RM_AcquireResourceSet.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x180011C70 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x180012FA0 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x1800274E4 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180046068 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046540 (_guard_dispatch_icall_nop.c)
 *     ?ValidateUserSidInput@ResourceManagerServerProxy@@IEAAEPEAEK@Z @ 0x180063430 (-ValidateUserSidInput@ResourceManagerServerProxy@@IEAAEPEAEK@Z.c)
 *     ?CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceSetInfo@1@@Z @ 0x180078194 (-CopyRmResourceSetInfoToResourceSetInfo@ExecutionModel@@YAXPEBURmResourceSetInfo@@PEAU_ResourceS.c)
 */

__int64 __fastcall ResourceManagerServerProxy::Handle_RM_AcquireResourceSet(
        ResourceManagerServerProxy *this,
        struct _RM_ACTIVATOR *a2,
        struct RmResourceSetInfo *a3,
        char a4,
        unsigned __int16 *a5,
        unsigned __int8 *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int64 a10,
        unsigned int a11,
        int *a12,
        unsigned __int64 a13,
        unsigned __int64 *a14)
{
  ResourceManagerServerProxy *v18; // rcx
  struct ExecutionModel::_ResourceSetInfo *v19; // r8
  int v20; // edi
  unsigned __int64 v21; // rbp
  _QWORD *v22; // rbx
  __int64 v23; // rax
  struct _RM_SERVICE_GLOBALS *v24; // rcx
  unsigned __int8 v26; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v27[384]; // [rsp+70h] [rbp-1C8h] BYREF

  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ExecutionModel::_ResourceSetInfo *)v27);
  if ( !a6 || ResourceManagerServerProxy::ValidateUserSidInput(v18, a6, a7) )
  {
    ExecutionModel::CopyRmResourceSetInfoToResourceSetInfo(a3, (const struct RmResourceSetInfo *)v27, v19);
    v21 = HamObjectIdGenerate(1);
    if ( a4 )
    {
      v22 = operator new(0x20uLL);
      if ( v22 )
      {
        v23 = *((_QWORD *)this + 2);
        v22[1] = -1LL;
        *v22 = &ResourceSetCallback::`vftable';
        v22[2] = v23;
        *((_DWORD *)v22 + 6) = 1;
      }
      else
      {
        v22 = 0LL;
      }
      if ( v22 )
      {
        v22[1] = v21;
        v24 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)this + 2);
        v26 = 0;
        v20 = RmSrvAcquireResourceSet(
                v24,
                (struct ExecutionModel::_ResourceSetInfo *)v27,
                (struct ExecutionModel::IResourceSetCallback *)v22,
                0LL,
                a5,
                a6,
                a8,
                a9,
                a10,
                v21,
                a2,
                (bool *)((unsigned __int64)&v26 & -(__int64)(a12 != 0LL)));
        if ( v20 >= 0 )
        {
          if ( a12 )
            *a12 = v26;
          *a14 = v21;
          v20 = 0;
        }
        (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
    else
    {
      return (unsigned int)-805306127;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v20;
}
