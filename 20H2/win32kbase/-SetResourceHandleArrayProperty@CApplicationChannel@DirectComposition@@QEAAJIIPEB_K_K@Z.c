/*
 * XREFs of ?SetResourceHandleArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEB_K_K@Z @ 0x1C01CF56C
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0057F10 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00585DC (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     Win32AllocPoolWithQuota @ 0x1C0059700 (Win32AllocPoolWithQuota.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceHandleArrayProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        const unsigned __int64 *a4,
        unsigned __int64 a5)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // r10
  struct DirectComposition::CResourceMarshaler *v10; // rsi
  int v11; // edi
  unsigned __int64 v12; // rdi
  unsigned int v13; // edx
  __int64 v14; // rcx
  char v16; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  v16 = 0;
  v6 = (unsigned int)(a2 - 1);
  if ( a2 && v6 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v10 = *(struct DirectComposition::CResourceMarshaler **)(v6 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v12 = a5;
    if ( a5 )
    {
      v5 = Win32AllocPoolWithQuota(8 * a5, 0x66624344u);
      if ( !v5 )
        return (unsigned int)-1073741801;
      v13 = 0;
      v14 = 0LL;
      do
      {
        ++v13;
        *(_QWORD *)(v5 + 8 * v14) = a4[v14];
        v14 = v13;
      }
      while ( v13 < v12 );
    }
    v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, _QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)v10 + 136LL))(
            v10,
            a3,
            v5,
            v12,
            &v16);
    if ( v11 < 0 )
    {
      if ( v5 )
        Win32FreePool(v5);
    }
    else if ( v16 )
    {
      DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v10);
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v11;
}
