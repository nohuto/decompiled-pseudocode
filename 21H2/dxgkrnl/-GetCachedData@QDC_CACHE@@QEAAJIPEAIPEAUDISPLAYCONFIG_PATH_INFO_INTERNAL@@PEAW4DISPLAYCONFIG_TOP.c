/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C0185F08
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C01B3480 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000F538 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedData(
        QDC_CACHE *this,
        __int64 a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5,
        unsigned int *a6)
{
  __int64 v8; // rdi
  DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  char *v12; // rbx
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rax
  struct DXGPROCESS *v17; // rax
  int v18; // ecx
  int v19; // ecx
  _BYTE v21[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 267LL;
    return 3221225659LL;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent();
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      return 3221225473LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (QDC_CACHE *)((char *)this + 8), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
      v12 = (char *)this + 56;
      v13 = *((unsigned int *)this + 158);
      *a6 = v13;
      v14 = 0;
      while ( !*v12 || *((_DWORD *)v12 + 1) != (_DWORD)v8 )
      {
        ++v14;
        v12 += 32;
        if ( v14 >= 0x12 )
          goto LABEL_6;
      }
      if ( !v12 )
      {
LABEL_6:
        v15 = -1073741801;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v11) + 24) = v8;
        goto LABEL_16;
      }
      v16 = *((unsigned int *)v12 + 2);
      if ( (unsigned int)v16 > *a3 )
      {
        WdLogSingleEntry3(3LL, v8, *((unsigned int *)v12 + 2), *a3);
        v15 = -1073741823;
      }
      else
      {
        memmove(a4, *((const void **)v12 + 2), 216 * v16);
        *a3 = *((_DWORD *)v12 + 2);
        if ( a5 )
          *(_DWORD *)a5 = *((_DWORD *)v12 + 6);
        v17 = DXGPROCESS::GetCurrent();
        v18 = *((_DWORD *)this + 158);
        if ( v18 == *((_DWORD *)v17 + 146) )
        {
          v19 = *((_DWORD *)v17 + 145);
        }
        else
        {
          *((_DWORD *)v17 + 146) = v18;
          v19 = 0;
        }
        *((_DWORD *)v17 + 145) = v19 + 1;
        if ( (v19 & (v19 + 1)) == 0 && v19 != 1 )
          DxgkLogCodePointPacket(0x4Du, v19 + 1, *((_DWORD *)v12 + 1), *((_DWORD *)v12 + 7), 0LL);
        v15 = 0;
      }
LABEL_16:
      if ( v21[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
      return v15;
    }
  }
}
