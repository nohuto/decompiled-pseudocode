/*
 * XREFs of ?IsAllocationDisplayed@ADAPTER_DISPLAY@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0213754
 * Callers:
 *     ?IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z @ 0x1C003E9E4 (-IsDisplayedPrimary@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z @ 0x1C00DF904 (-GetDisplayPlaneConfigHead@@YAPEAU_DISPLAY_PLANE_CONFIG@@PEAU_DISPLAY_PLANE_CONFIG_QUEUE@@PEAH@Z.c)
 */

char __fastcall ADAPTER_DISPLAY::IsAllocationDisplayed(ADAPTER_DISPLAY *this, const struct DXGALLOCATION *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  unsigned int v6; // r9d
  __int64 v7; // rsi
  char v8; // bl
  unsigned int v9; // r10d
  __int64 v10; // rbp
  const struct DXGALLOCATION **DisplayPlaneConfigHead; // rax
  int v12; // r10d
  unsigned int v13; // r11d
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+50h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (ADAPTER_DISPLAY *)((char *)this + 520), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  v5 = *((_DWORD *)this + 20);
  v6 = 0;
  if ( v5 )
  {
    v7 = *((_QWORD *)this + 14);
    v8 = 1;
    while ( 1 )
    {
      v9 = 0;
      v10 = 3968LL * v6;
      if ( *(_DWORD *)(v7 + v10 + 3736) )
        break;
LABEL_7:
      if ( ++v6 >= v5 )
        goto LABEL_8;
    }
    while ( 1 )
    {
      DisplayPlaneConfigHead = (const struct DXGALLOCATION **)GetDisplayPlaneConfigHead(
                                                                (struct _DISPLAY_PLANE_CONFIG_QUEUE *)(v7 + v10 + 168LL * v9 + 1120),
                                                                &v16);
      if ( DisplayPlaneConfigHead )
      {
        if ( *DisplayPlaneConfigHead == a2 )
          break;
      }
      v9 = v12 + 1;
      if ( v9 >= v13 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_8:
    v8 = 0;
  }
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v4);
  return v8;
}
