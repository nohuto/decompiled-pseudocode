/*
 * XREFs of ?SyncLockForParallelMode@CRenderTargetManager@@QEAAXXZ @ 0x18003AFA4
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18003E980 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x18003AA04 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003D750 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180168250 (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 *     ?reserve_region@?$vector_facade@PEAUIDXGIResource@@V?$buffer_impl@PEAUIDXGIResource@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAUIDXGIResource@@_K0@Z @ 0x180168404 (-reserve_region@-$vector_facade@PEAUIDXGIResource@@V-$buffer_impl@PEAUIDXGIResource@@$06$00Vlibe.c)
 */

void __fastcall CRenderTargetManager::SyncLockForParallelMode(CRenderTargetManager *this)
{
  _BYTE *v2; // r8
  _BYTE *v3; // rax
  __int64 v4; // r15
  CMILCOMBase **v5; // r14
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  CMILCOMBase *v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  _BYTE *v11; // rcx
  unsigned int v12; // esi
  _BYTE *v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // eax
  void *v16; // rbx
  unsigned int v17; // r15d
  __int64 v18; // rsi
  __int64 v19; // r14
  int v20; // eax
  unsigned int v21; // edi
  int v22; // r12d
  __int64 v23; // r14
  unsigned int v24; // eax
  __int64 v25; // r14
  void *v26; // [rsp+20h] [rbp-40h] BYREF
  _BYTE *v27; // [rsp+28h] [rbp-38h] BYREF
  _BYTE *v28; // [rsp+30h] [rbp-30h]
  __int64 *v29; // [rsp+38h] [rbp-28h]
  _BYTE v30[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h] BYREF

  v2 = v30;
  v27 = v30;
  v3 = v30;
  v4 = 0LL;
  v28 = v30;
  *((_BYTE *)this + 128) = 1;
  v5 = (CMILCOMBase **)*((_QWORD *)this + 1);
  v6 = *((_QWORD *)this + 2) - (_QWORD)v5;
  v29 = &v31;
  v7 = (unsigned __int64)(v6 + 7) >> 3;
  if ( (unsigned __int64)v5 > *((_QWORD *)this + 2) )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      v8 = *v5;
      v26 = 0LL;
      if ( (int)CMILCOMBase::InternalQueryInterface(v8, &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9, &v26) >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v26 + 56LL))(v26);
        if ( v9 )
        {
          v12 = 0;
          v13 = v27;
          if ( (v28 - v27) >> 3 )
          {
            v14 = 0LL;
            do
            {
              v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v13[8 * v14] + 56LL))(*(_QWORD *)&v13[8 * v14]);
              v13 = v27;
              if ( v9 <= v15 )
                break;
              v14 = ++v12;
            }
            while ( v12 < (unsigned __int64)((v28 - v27) >> 3) );
          }
          v16 = v26;
          *(_QWORD *)detail::vector_facade<IDXGIResource *,detail::buffer_impl<IDXGIResource *,7,1,detail::liberal_expansion_policy>>::reserve_region(
                       &v27,
                       (8LL * v12) >> 3) = v16;
        }
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v26);
      ++v5;
      ++v4;
    }
    while ( v4 != v7 );
    v3 = v28;
    v2 = v27;
  }
  v10 = 0;
  if ( (v3 - v2) >> 3 )
  {
    do
    {
      v17 = 0;
      v18 = 8LL * v10;
      v19 = v10;
      v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v2[v18] + 56LL))(*(_QWORD *)&v2[v18]);
      v21 = v10;
      v2 = v27;
      v22 = v20;
      if ( v10 < (unsigned __int64)((v28 - v27) >> 3) )
      {
        while ( 1 )
        {
          v23 = *(_QWORD *)&v2[8 * v19];
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v23 + 56LL))(v23) != v22 )
            break;
          v24 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v23 + 48LL))(v23, &v26);
          v2 = v27;
          if ( v17 <= v24 )
            v17 = v24;
          v19 = ++v21;
          if ( v21 >= (unsigned __int64)((v28 - v27) >> 3) )
            goto LABEL_26;
        }
        v2 = v27;
LABEL_26:
        if ( v10 < v21 )
        {
          v25 = v21 - v10;
          v10 = v21;
          do
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&v2[v18] + 64LL))(*(_QWORD *)&v2[v18], v17);
            v2 = v27;
            v18 += 8LL;
            --v25;
          }
          while ( v25 );
        }
      }
    }
    while ( v10 < (unsigned __int64)((v28 - v2) >> 3) );
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  v11 = v27;
  if ( (v28 - v27) >> 3 )
  {
    detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(&v27);
    v11 = v27;
  }
  v27 = 0LL;
  if ( v11 == v30 )
    v11 = 0LL;
  operator delete(v11);
}
