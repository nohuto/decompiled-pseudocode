/*
 * XREFs of ?GetCachedBufferSizes@QDC_CACHE@@QEAAJIPEAI@Z @ 0x1C00E40F8
 * Callers:
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00E3F90 (DxgkGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0008D70 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall QDC_CACHE::GetCachedBufferSizes(
        struct DXGFASTMUTEX *const *this,
        __int64 a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 233LL;
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
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, this[1], 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
      v11 = (char *)(this + 2);
      v12 = 0LL;
      while ( !*v11 || *((_DWORD *)v11 + 1) != (_DWORD)v5 )
      {
        v12 = (unsigned int)(v12 + 1);
        v11 += 32;
        if ( (unsigned int)v12 >= 0x12 )
        {
          v11 = 0LL;
          break;
        }
      }
      if ( v11 )
      {
        v13 = 0;
        *a3 = *((_DWORD *)v11 + 2);
      }
      else
      {
        v13 = -1073741823;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v8, v9, v10) + 24) = v5;
      }
      if ( v15[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v8);
      return v13;
    }
  }
}
