/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C00E42A8
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C00E41C0 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0008D70 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedData(
        struct DXGFASTMUTEX *const *this,
        __int64 a2,
        unsigned int *a3,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a4,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a5,
        unsigned int *a6)
{
  __int64 v8; // rdi
  DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rax
  int v18; // edi
  struct DXGPROCESS *v19; // rax
  int v20; // ecx
  __int64 v21; // rdx
  unsigned int v22; // ebx
  _QWORD *v24; // rax
  _BYTE v25[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 274LL;
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
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, this[1], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
      v14 = (char *)(this + 2);
      v15 = *((unsigned int *)this + 148);
      *a6 = v15;
      v16 = 0;
      while ( !*v14 || *((_DWORD *)v14 + 1) != (_DWORD)v8 )
      {
        ++v16;
        v14 += 32;
        if ( v16 >= 0x12 )
        {
          v14 = 0LL;
          break;
        }
      }
      if ( v14 )
      {
        v17 = *((unsigned int *)v14 + 2);
        if ( (unsigned int)v17 > *a3 )
        {
          v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v11, v12);
          v24[3] = v8;
          v24[4] = *((unsigned int *)v14 + 2);
          v24[5] = *a3;
          WdLogEvent5_WdWarning(v24);
          v22 = -1073741823;
        }
        else
        {
          memmove(a4, *((const void **)v14 + 2), 200 * v17);
          *a3 = *((_DWORD *)v14 + 2);
          if ( a5 )
            *(_DWORD *)a5 = *((_DWORD *)v14 + 6);
          v18 = *((_DWORD *)this + 148);
          v19 = DXGPROCESS::GetCurrent();
          if ( v18 == *((_DWORD *)v19 + 118) )
          {
            v20 = *((_DWORD *)v19 + 117);
          }
          else
          {
            *((_DWORD *)v19 + 118) = v18;
            v20 = 0;
          }
          v21 = (unsigned int)(v20 + 1);
          *((_DWORD *)v19 + 117) = v21;
          if ( (v20 & (unsigned int)v21) == 0 && v20 != 1 )
            DxgkLogCodePointPacket(0x4Du, v21, *((_DWORD *)v14 + 1), *((_DWORD *)v14 + 7), 0LL);
          v22 = 0;
        }
      }
      else
      {
        v22 = -1073741801;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v11, v12, v13) + 24) = v8;
      }
      if ( v25[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, v21);
      return v22;
    }
  }
}
