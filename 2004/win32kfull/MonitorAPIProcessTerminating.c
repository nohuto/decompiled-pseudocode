/*
 * XREFs of MonitorAPIProcessTerminating @ 0x1C0104600
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@AEAAJPEAVCPhysicalMonitorHandle@@KPEAVCMutex@2@@Z @ 0x1C0272948 (-DestroyHandleInternal@-$CMonitorHandleTable@VCPhysicalMonitorHandle@@PEAX@OPM@@AEAAJPEAVCPhysic.c)
 *     ?GetElement@?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z @ 0x1C0272A6C (-GetElement@-$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAJKPEAPEAVCPhysicalMonitorHandle@@@Z.c)
 *     ?GetNextElementIndex@?$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAEKPEAK@Z @ 0x1C0272C44 (-GetNextElementIndex@-$CList@VCPhysicalMonitorHandle@@@OPM@@QEAAEKPEAK@Z.c)
 */

void __fastcall MonitorAPIProcessTerminating(void *a1)
{
  char *v1; // rsi
  unsigned int v3; // ebx
  __int64 i; // rdx
  unsigned int v5; // [rsp+48h] [rbp+10h] BYREF
  OPM::CMonitorPDO *v6; // [rsp+50h] [rbp+18h] BYREF
  char v7; // [rsp+58h] [rbp+20h] BYREF

  v1 = (char *)qword_1C033B048;
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v7, (struct OPM::CMutex *)((char *)qword_1C033B048 + 32));
  v3 = 0;
  v5 = 0;
  if ( *((_DWORD *)v1 + 4) )
  {
    if ( **((_QWORD **)v1 + 1) )
      goto LABEL_8;
    for ( i = 0LL; (unsigned __int8)OPM::CList<CPhysicalMonitorHandle>::GetNextElementIndex(v1 + 8, i, &v5); i = v3 )
    {
      v3 = v5;
LABEL_8:
      v6 = 0LL;
      OPM::CList<CPhysicalMonitorHandle>::GetElement(v1 + 8, v3, &v6);
      if ( OPM::CMonitorPDO::DoesProcessOwnProtectedOutput(v6, a1) )
        OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(v1 + 8, v6, v3, v1);
    }
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v7);
}
