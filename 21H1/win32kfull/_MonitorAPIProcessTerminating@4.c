/*
 * XREFs of _MonitorAPIProcessTerminating@4 @ 0x9DC7E
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@AAEJPAVCPhysicalMonitorHandle@@KPAVCMutex@2@@Z @ 0x1CFBF4 (-DestroyHandleInternal@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@AAEJPAVCPhysicalM.c)
 *     ?GetElement@?$CList@VCPhysicalMonitorHandle@@@OPM@@QAEJKPAPAVCPhysicalMonitorHandle@@@Z @ 0x1CFCA1 (-GetElement@-$CList@VCPhysicalMonitorHandle@@@OPM@@QAEJKPAPAVCPhysicalMonitorHandle@@@Z.c)
 *     ?GetNextElementIndex@?$CList@VCPhysicalMonitorHandle@@@OPM@@QAEEKPAK@Z @ 0x1CFDDD (-GetNextElementIndex@-$CList@VCPhysicalMonitorHandle@@@OPM@@QAEEKPAK@Z.c)
 */

void __stdcall MonitorAPIProcessTerminating(void *a1)
{
  char *v1; // ebx
  int v2; // esi
  char i; // al
  _BYTE v4[4]; // [esp+Ch] [ebp-Ch] BYREF
  OPM::CMonitorPDO *v5; // [esp+10h] [ebp-8h] BYREF
  int v6; // [esp+14h] [ebp-4h] BYREF

  v1 = (char *)P;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v4, (struct OPM::CMutex *)((char *)P + 20));
  v2 = 0;
  v6 = 0;
  if ( *((_DWORD *)v1 + 2) )
  {
    if ( **((_DWORD **)v1 + 1) )
      goto LABEL_8;
    for ( i = OPM::CList<CPhysicalMonitorHandle>::GetNextElementIndex(v1 + 4, 0, &v6);
          i;
          i = OPM::CList<CPhysicalMonitorHandle>::GetNextElementIndex(v1 + 4, v2, &v6) )
    {
      v2 = v6;
LABEL_8:
      v5 = 0;
      OPM::CList<CPhysicalMonitorHandle>::GetElement(v2, &v5);
      if ( OPM::CMonitorPDO::DoesProcessOwnProtectedOutput(v5, a1) )
        OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(v5, v2, v1);
    }
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v4);
}
