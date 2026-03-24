/*
 * XREFs of ?GetCachedData@QDC_CACHE@@QEAAJIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@0@Z @ 0x1C013A968
 * Callers:
 *     DxgkQueryDisplayConfig @ 0x1C013A880 (DxgkQueryDisplayConfig.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000A914 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A9FC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  __int64 v18; // rdx
  int v19; // edi
  struct DXGPROCESS *v20; // rax
  int v21; // ecx
  __int64 v22; // rdx
  unsigned int v23; // ebx
  _QWORD *v25; // rax
  _BYTE v26[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 274LL;
    return 3221225659LL;
  }
  else
  {
    Current = DXGPROCESS::GetCurrent((__int64)this, a2);
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      return 3221225473LL;
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, this[1], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
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
          v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v11, v12);
          v25[3] = v8;
          v25[4] = *((unsigned int *)v14 + 2);
          v25[5] = *a3;
          WdLogEvent5_WdWarning(v25);
          v23 = -1073741823;
        }
        else
        {
          memmove(a4, *((const void **)v14 + 2), 200 * v17);
          *a3 = *((_DWORD *)v14 + 2);
          if ( a5 )
            *(_DWORD *)a5 = *((_DWORD *)v14 + 6);
          v19 = *((_DWORD *)this + 148);
          v20 = DXGPROCESS::GetCurrent((__int64)a5, v18);
          if ( v19 == *((_DWORD *)v20 + 118) )
          {
            v21 = *((_DWORD *)v20 + 117);
          }
          else
          {
            *((_DWORD *)v20 + 118) = v19;
            v21 = 0;
          }
          v22 = (unsigned int)(v21 + 1);
          *((_DWORD *)v20 + 117) = v22;
          if ( (v21 & (unsigned int)v22) == 0 && v21 != 1 )
            DxgkLogCodePointPacket(0x4Du, v22, *((_DWORD *)v14 + 1), *((_DWORD *)v14 + 7), 0LL);
          v23 = 0;
        }
      }
      else
      {
        v23 = -1073741801;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v11, v12, v13) + 24) = v8;
      }
      if ( v26[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, v22);
      return v23;
    }
  }
}
