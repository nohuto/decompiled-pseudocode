/*
 * XREFs of ?Destroy@CPhysicalMonitorHandle@@UAEJXZ @ 0x1CFBAB
 * Callers:
 *     ??_GCPhysicalMonitorHandle@@UAEPAXI@Z @ 0x1CEEA4 (--_GCPhysicalMonitorHandle@@UAEPAXI@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall CPhysicalMonitorHandle::Destroy(CPhysicalMonitorHandle *this)
{
  int v2; // edi
  void *v3; // ecx
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  v2 = OPM::CMonitorPDO::Destroy(this);
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v5, (CPhysicalMonitorHandle *)((char *)this + 40));
  v3 = (void *)*((_DWORD *)this + 11);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x63326947u);
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v5);
  return v2;
}
