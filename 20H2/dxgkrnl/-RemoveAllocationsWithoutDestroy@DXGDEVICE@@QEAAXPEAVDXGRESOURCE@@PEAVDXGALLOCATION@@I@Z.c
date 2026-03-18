/*
 * XREFs of ?RemoveAllocationsWithoutDestroy@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@I@Z @ 0x1C02550A4
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F1850 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002AB4 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00042D8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z @ 0x1C0024BF4 (-Initialize@DXGAUTOMUTEX@@QEAAXQEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall DXGDEVICE::RemoveAllocationsWithoutDestroy(
        struct _KTHREAD **this,
        struct DXGRESOURCE *a2,
        struct DXGALLOCATION *a3,
        int a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+28h] [rbp-30h]
  DXGPUSHLOCK *v14[5]; // [rsp+30h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, this + 26, 0);
  v12 = 0LL;
  v13 = 0;
  if ( a2 )
  {
    DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v12, (struct DXGRESOURCE *)((char *)a2 + 80), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v12);
  }
  else
  {
    DXGAUTOPUSHLOCK::AcquireExclusive(v14);
  }
  v8 = (unsigned int)(a4 - 1);
  v9 = (_QWORD *)((char *)a3 + 56);
  v10 = *((_QWORD *)a3 + 7);
  if ( a4 != 1 )
  {
    do
    {
      a3 = (struct DXGALLOCATION *)*((_QWORD *)a3 + 8);
      --v8;
    }
    while ( v8 );
  }
  v11 = *((_QWORD *)a3 + 8);
  if ( v10 )
  {
    *v9 = 0LL;
    *((_QWORD *)a3 + 8) = 0LL;
    *(_QWORD *)(v10 + 64) = v11;
    if ( v11 )
      *(_QWORD *)(v11 + 56) = v10;
  }
  else
  {
    if ( a2 )
      *((_QWORD *)a2 + 3) = v11;
    else
      this[6] = (struct _KTHREAD *)v11;
    *((_QWORD *)a3 + 8) = 0LL;
    if ( v11 )
      *(_QWORD *)(v11 + 56) = 0LL;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v12);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14);
}
