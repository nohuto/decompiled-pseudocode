/*
 * XREFs of ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0188E6C
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0188BF4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0276220 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000BBDC (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z @ 0x1C0188FB0 (-FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C018FD98 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 *     ?WriteEdidToRegistry@EDIDCACHE@@QEAAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C027683C (-WriteEdidToRegistry@EDIDCACHE@@QEAAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 */

void __fastcall EDIDCACHE::AddEdid(
        EDIDCACHE *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a6)
{
  struct DXGFASTMUTEX *v8; // rdx
  struct _LUID v11; // rbx
  unsigned __int8 *v12; // rbp
  int EdidInCache; // eax
  __int64 v14; // rdx
  EDIDCACHE *v15; // rcx
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v16; // r14d
  unsigned int v17; // esi
  EDIDCACHE *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v23[48]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF

  v8 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 76);
  if ( v8 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, v8, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    v11 = *(struct _LUID *)((char *)a2 + 316);
    v12 = a5;
    EdidInCache = EDIDCACHE::FindEdidInCache(this, v11, a3, a5);
    if ( EdidInCache == -1 )
    {
      v16 = a6;
      if ( a4 )
      {
        if ( a6 == D3DKMDT_MCO_MONITORDESCRIPTOR )
        {
          EDIDCACHE::WriteEdidToRegistry(v15, a3, v12, D3DKMDT_MCO_MONITORDESCRIPTOR);
          v22 = 0;
          v24 = 0;
          if ( (int)EDID_V1_GetPhysicalSize(v20, v12, &v22, &v24) >= 0 )
            EDIDCACHE::SetPhysicalDimensionOfInternalPanel(this, v22, v24, 0);
        }
      }
      v17 = 0;
      v18 = this;
      v14 = 0LL;
      while ( *(_QWORD *)v18 )
      {
        v21 = v14;
        if ( *(_QWORD *)v18 >= *((_QWORD *)this + 19 * v17) )
          v21 = v17;
        v14 = (unsigned int)(v14 + 1);
        v18 = (EDIDCACHE *)((char *)v18 + 152);
        v17 = v21;
        if ( (unsigned int)v14 >= 4 )
          goto LABEL_7;
      }
      v17 = v14;
LABEL_7:
      v19 = 152LL * v17;
      *(struct _LUID *)((char *)this + v19 + 8) = v11;
      *(_DWORD *)((char *)this + v19 + 16) = a3;
      *(_DWORD *)((char *)this + v19 + 20) = v16;
      *(_QWORD *)((char *)this + v19) = MEMORY[0xFFFFF78000000014];
      *(_OWORD *)((char *)this + v19 + 24) = *(_OWORD *)v12;
      *(_OWORD *)((char *)this + v19 + 40) = *((_OWORD *)v12 + 1);
      *(_OWORD *)((char *)this + v19 + 56) = *((_OWORD *)v12 + 2);
      *(_OWORD *)((char *)this + v19 + 72) = *((_OWORD *)v12 + 3);
      *(_OWORD *)((char *)this + v19 + 88) = *((_OWORD *)v12 + 4);
      *(_OWORD *)((char *)this + v19 + 104) = *((_OWORD *)v12 + 5);
      *(_OWORD *)((char *)this + v19 + 120) = *((_OWORD *)v12 + 6);
      *(_OWORD *)((char *)this + v19 + 136) = *((_OWORD *)v12 + 7);
    }
    else
    {
      *((_QWORD *)this + 19 * EdidInCache) = MEMORY[0xFFFFF78000000014];
    }
    if ( v23[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v14);
  }
}
