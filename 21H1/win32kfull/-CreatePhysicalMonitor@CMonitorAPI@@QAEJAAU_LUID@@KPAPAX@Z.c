/*
 * XREFs of ?CreatePhysicalMonitor@CMonitorAPI@@QAEJAAU_LUID@@KPAPAX@Z @ 0x1CF068
 * Callers:
 *     _CreatePhysicalMonitorWrap@12 @ 0x1CFFF5 (_CreatePhysicalMonitorWrap@12.c)
 * Callees:
 *     ??0CPhysicalMonitorHandle@@QAE@AAU_LUID@@KPAJ@Z @ 0x1CEE6C (--0CPhysicalMonitorHandle@@QAE@AAU_LUID@@KPAJ@Z.c)
 *     ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAVCPhysicalMonitorHandle@@PAPAX@Z @ 0x1CEFA9 (-AddHandleToTable@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAVCPhysicalMonito.c)
 */

int __thiscall CMonitorAPI::CreatePhysicalMonitor(CMonitorAPI *this, struct _LUID *a2, unsigned int a3, void **a4)
{
  _DWORD *v4; // esi
  CPhysicalMonitorHandle *v5; // edi
  CPhysicalMonitorHandle *PoolWithTag; // eax
  int v7; // esi
  _BYTE v9[4]; // [esp+8h] [ebp-Ch] BYREF
  void *v10; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v4 = P;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v9, (struct OPM::CMutex *)P);
  v5 = 0;
  v10 = 0;
  v11 = 0;
  PoolWithTag = (CPhysicalMonitorHandle *)ExAllocatePoolWithTag(PagedPool, 0x34u, 0x63326947u);
  if ( PoolWithTag )
    v5 = CPhysicalMonitorHandle::CPhysicalMonitorHandle(PoolWithTag, a2, a3, &v11);
  if ( v5 )
  {
    if ( v11 < 0
      || (v7 = OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::AddHandleToTable(v4 + 1, (int)v5, &v10),
          v11 = v7,
          v7 < 0) )
    {
      (**(void (__thiscall ***)(CPhysicalMonitorHandle *, int))v5)(v5, 1);
      v7 = v11;
    }
    else
    {
      *a4 = v10;
    }
  }
  else
  {
    v7 = -1073741801;
    v11 = -1073741801;
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v9);
  return v7;
}
