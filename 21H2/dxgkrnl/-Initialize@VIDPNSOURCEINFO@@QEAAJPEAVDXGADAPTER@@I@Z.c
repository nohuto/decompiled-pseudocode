/*
 * XREFs of ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C02BB468
 * Callers:
 *     ?AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C02B9860 (-AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002104 (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A6CC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A708 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000BB90 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C001B1B4 (-IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C001E9EC (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?GetPresentDiagHistory@DISPLAY_SOURCE@@QEAAXPEAUPRESENTHISTORYDIAGNOSTICINFO@@I@Z @ 0x1C004DF90 (-GetPresentDiagHistory@DISPLAY_SOURCE@@QEAAXPEAUPRESENTHISTORYDIAGNOSTICINFO@@I@Z.c)
 *     ?RtlStringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x1C004E040 (-RtlStringCchCopyA@@YAJPEAD_KPEBD@Z.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C00E07E8 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 */

__int64 __fastcall VIDPNSOURCEINFO::Initialize(VIDPNSOURCEINFO *this, struct DXGADAPTER *a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  _QWORD *v7; // rsi
  struct DXGDEVICE *VidPnSourceOwner; // rax
  struct DXGDEVICE *v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // r14
  int VidPnSourceOwnerType; // eax
  int v14; // ecx
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  unsigned __int8 *v19; // rdx
  __int16 v20; // cx
  unsigned int i; // edi
  struct _DISPLAY_PLANE_CONFIG *LatestPlaneConfigInternal; // rax
  __int64 v23; // rdx
  int v24; // ecx
  const char *ProcessImageFileName; // rax
  __int64 v26; // rdx
  _BYTE v27[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  if ( !a2 )
    return 3221225485LL;
  v7 = (_QWORD *)*((_QWORD *)a2 + 337);
  *((_DWORD *)this + 2) = -1;
  *((_DWORD *)this + 12) = 0;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  VidPnSourceOwner = ADAPTER_DISPLAY::GetVidPnSourceOwner((ADAPTER_DISPLAY *)v7, a3);
  v9 = VidPnSourceOwner;
  if ( VidPnSourceOwner )
  {
    _m_prefetchw((char *)VidPnSourceOwner + 64);
    v10 = *((_QWORD *)VidPnSourceOwner + 8);
    while ( v10 )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 8, v10 + 1, v10);
      if ( v11 == v10 )
      {
        *(_QWORD *)this = v9;
        break;
      }
    }
  }
  *((_DWORD *)this + 2) = v3;
  *((_QWORD *)this + 2) = *(_QWORD *)((char *)a2 + 316);
  *((_DWORD *)this + 6) = v3;
  *((_DWORD *)this + 7) = 25;
  *((_DWORD *)this + 7) ^= (*((_DWORD *)this + 7) ^ (2
                                                   * ADAPTER_DISPLAY::IsVidPnSourceActive(
                                                       (ADAPTER_DISPLAY *)v7,
                                                       (unsigned int)v3))) & 2;
  *((_DWORD *)this + 7) ^= (*((_DWORD *)this + 7) ^ (4
                                                   * ADAPTER_DISPLAY::IsVidPnSourceVisible(
                                                       (ADAPTER_DISPLAY *)v7,
                                                       (unsigned int)v3))) & 4;
  *((_DWORD *)this + 7) ^= (*((_DWORD *)this + 7) ^ (32
                                                   * ADAPTER_DISPLAY::IsPointerVisible(
                                                       (ADAPTER_DISPLAY *)v7,
                                                       (unsigned int)v3))) & 0x20;
  v12 = 3968 * v3;
  *((_DWORD *)this + 7) ^= ((unsigned __int8)*((_DWORD *)this + 7) ^ (unsigned __int8)(*(_BYTE *)(3968 * v3
                                                                                                + v7[14]
                                                                                                + 1112) << 7)) & 0x80;
  VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType((ADAPTER_DISPLAY *)v7, (unsigned int)v3);
  v14 = 0;
  if ( VidPnSourceOwnerType == 1 )
    v14 = 256;
  v15 = v14 | *((_DWORD *)this + 7) & 0xFFFFFEFF;
  *((_DWORD *)this + 7) = v15;
  if ( *((_QWORD *)a2 + 338) )
    v16 = *((_DWORD *)a2 + 70) > 1u ? 0x400 : 0;
  else
    v16 = 0;
  v17 = v16 | v15 & 0xFFFFFBFF;
  *((_DWORD *)this + 7) = v17;
  v18 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(2 * *((_DWORD *)a2 + 87))) & 0x200;
  v19 = *(unsigned __int8 **)this;
  *((_DWORD *)this + 7) = v18;
  if ( v19 )
    v20 = v19[1906];
  else
    v20 = 0;
  *((_DWORD *)this + 7) = v18 ^ ((unsigned __int16)v18 ^ (unsigned __int16)(v20 << 14)) & 0x4000;
  *((_DWORD *)this + 7) ^= (*((_DWORD *)this + 7) ^ (ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(
                                                       *((DXGADAPTER ***)a2 + 337),
                                                       (const struct DXGDEVICE *)v19,
                                                       v3) << 15)) & 0x8000;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)(v7 + 66), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  for ( i = 0; i < 0xA; ++i )
  {
    LatestPlaneConfigInternal = DISPLAY_SOURCE::GetLatestPlaneConfigInternal((DISPLAY_SOURCE *)(v12 + v7[14]), i);
    if ( LatestPlaneConfigInternal )
    {
      v24 = *((_DWORD *)LatestPlaneConfigInternal + 2);
      if ( (v24 & 1) != 0 && i )
      {
        *((_DWORD *)this + 7) |= 0x800u;
        v24 = *((_DWORD *)LatestPlaneConfigInternal + 2);
      }
      if ( (v24 & 8) != 0 )
        *((_DWORD *)this + 7) |= 0x1000u;
    }
  }
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v23);
  if ( *(_QWORD *)this )
  {
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40LL) + 56LL));
    RtlStringCchCopyA((char *)this + 32, v26, ProcessImageFileName);
  }
  else
  {
    *((_BYTE *)this + 32) = 0;
  }
  if ( (*((_DWORD *)this + 7) & 0xC86) != 6 || !*(_QWORD *)this )
    *((_DWORD *)this + 12) = 1;
  DISPLAY_SOURCE::GetPresentDiagHistory((DISPLAY_SOURCE *)(v12 + v7[14]), (VIDPNSOURCEINFO *)((char *)this + 64));
  result = 0LL;
  *((_DWORD *)this + 3) = *(_DWORD *)(v12 + v7[14] + 1068);
  return result;
}
