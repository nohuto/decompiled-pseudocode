/*
 * XREFs of ?CreateDestructionBuffers@DXGDEVICE@@QEAAJIPEAVDXGRESOURCE@@H@Z @ 0x1C016F100
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F2BE0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall DXGDEVICE::CreateDestructionBuffers(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGRESOURCE *a3,
        int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbp
  SIZE_T v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID v16; // rdi
  __int64 v17; // r8
  _QWORD *v18; // rax
  void *v20; // rcx
  _BYTE v21[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v10 + 24) = 4589LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( a3 )
  {
    if ( !a4 )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGRESOURCE *)((char *)a3 + 80), 0);
      if ( (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() )
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
      v11 = *((_QWORD *)a3 + 3);
      while ( v11 )
      {
        v11 = *(_QWORD *)(v11 + 64);
        ++a2;
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
    }
    if ( a2 > 0x10 )
    {
      v12 = a2;
      v13 = 8LL * a2;
      if ( !is_mul_ok(a2, 8uLL) )
        v13 = -1LL;
      v16 = operator new[](v13, 0x4B677844u, PagedPool);
      if ( !v16 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v17);
        v18[3] = this;
        v18[4] = v12;
        v18[5] = -1073741801LL;
        WdLogEvent5_WdWarning(v18);
        return 3221225495LL;
      }
      if ( !a4 )
      {
        v20 = (void *)*((_QWORD *)a3 + 8);
        if ( v20 )
          operator delete[](v20);
      }
      *((_QWORD *)a3 + 8) = v16;
    }
  }
  return 0LL;
}
