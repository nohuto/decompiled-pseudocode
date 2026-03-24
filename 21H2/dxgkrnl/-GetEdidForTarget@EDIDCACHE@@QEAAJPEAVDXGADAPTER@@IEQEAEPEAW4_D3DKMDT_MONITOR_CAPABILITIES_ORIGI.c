/*
 * XREFs of ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C02764D0
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C02FB208 (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C018D678 (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?ReadEdidFromRegistry@EDIDCACHE@@QEAAJIPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0276918 (-ReadEdidFromRegistry@EDIDCACHE@@QEAAJIPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 */

__int64 __fastcall EDIDCACHE::GetEdidForTarget(
        EDIDCACHE *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *const a5,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *a6)
{
  struct DXGFASTMUTEX *v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *v14; // rdx
  EDIDCACHE *v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rax
  _BYTE v18[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !a5 )
    return 3221225713LL;
  v11 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 76);
  if ( !v11 )
    return 3221225659LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, v11, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v12 = (_QWORD *)((char *)this + 12);
  LODWORD(v13) = 0;
  do
  {
    if ( *((_DWORD *)v12 - 1) == (unsigned int)*(_QWORD *)((char *)a2 + 316)
      && *v12 == __PAIR64__(a3, HIDWORD(*(_QWORD *)((char *)a2 + 316))) )
    {
      v17 = (unsigned int)v13;
      v14 = a6;
      *(_OWORD *)a5 = *(_OWORD *)((char *)this + 152 * v17 + 24);
      *((_OWORD *)a5 + 1) = *(_OWORD *)((char *)this + 152 * v17 + 40);
      *((_OWORD *)a5 + 2) = *(_OWORD *)((char *)this + 152 * v17 + 56);
      *((_OWORD *)a5 + 3) = *(_OWORD *)((char *)this + 152 * v17 + 72);
      *((_OWORD *)a5 + 4) = *(_OWORD *)((char *)this + 152 * v17 + 88);
      *((_OWORD *)a5 + 5) = *(_OWORD *)((char *)this + 152 * v17 + 104);
      *((_OWORD *)a5 + 6) = *(_OWORD *)((char *)this + 152 * v17 + 120);
      *((_OWORD *)a5 + 7) = *(_OWORD *)((char *)this + 152 * v17 + 136);
      if ( a6 )
        *a6 = *((enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *)this + 38 * v17 + 5);
      goto LABEL_12;
    }
    v13 = (unsigned int)(v13 + 1);
    v12 += 19;
  }
  while ( (unsigned int)v13 < 4 );
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18, v13);
  if ( a4 && (int)EDIDCACHE::ReadEdidFromRegistry(v15, a3, a5, a6) >= 0 )
  {
    EDIDCACHE::AddEdid(this, a2, a3, 0, a5, *a6);
LABEL_12:
    v16 = 0;
    goto LABEL_16;
  }
  v16 = -1073741275;
LABEL_16:
  if ( v18[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18, (__int64)v14);
  return v16;
}
