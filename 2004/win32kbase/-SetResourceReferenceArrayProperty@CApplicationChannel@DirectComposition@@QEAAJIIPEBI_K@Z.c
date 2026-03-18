/*
 * XREFs of ?SetResourceReferenceArrayProperty@CApplicationChannel@DirectComposition@@QEAAJIIPEBI_K@Z @ 0x1C0099898
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0097420 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C0097AEC (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetResourceReferenceArrayProperty(
        DirectComposition::CApplicationChannel *this,
        int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r11
  unsigned __int64 v7; // r10
  struct DirectComposition::CResourceMarshaler *v11; // rsi
  unsigned __int64 v12; // rbp
  signed int v13; // ebx
  __int64 v14; // r9
  unsigned int v15; // ecx
  unsigned __int64 v16; // r8
  __int64 v17; // r8
  char v19; // [rsp+78h] [rbp+10h] BYREF

  v5 = 0LL;
  v19 = 0;
  v6 = 0LL;
  v7 = (unsigned int)(a2 - 1);
  if ( a2 && v7 < *((_QWORD *)this + 10) )
  {
    _mm_lfence();
    v11 = *(struct DirectComposition::CResourceMarshaler **)(v7 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
  }
  else
  {
    v11 = 0LL;
  }
  v12 = a5;
  v13 = v11 == 0LL ? 0xC0000022 : 0;
  if ( a5 )
  {
    if ( v11 )
    {
      v6 = 8 * a5;
      if ( is_mul_ok(a5, 8uLL) )
      {
        v13 = 0;
      }
      else
      {
        v6 = -1LL;
        v13 = -1073741675;
      }
    }
    if ( v13 >= 0 )
    {
      v5 = Win32AllocPoolWithQuota(v6, 0x66624344u);
      if ( !v5 )
        v13 = -1073741801;
    }
    v14 = 0LL;
    if ( v13 < 0 )
      goto LABEL_27;
    do
    {
      if ( (unsigned int)v14 >= v12 )
        break;
      v15 = a4[v14];
      v16 = v15 - 1;
      if ( v15 && v16 < *((_QWORD *)this + 10) )
        v17 = *(_QWORD *)(v16 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
      else
        v17 = 0LL;
      *(_QWORD *)(v5 + 8 * v14) = v17;
      if ( !v17 )
        v13 = -1073741811;
      v14 = (unsigned int)(v14 + 1);
    }
    while ( v13 >= 0 );
  }
  if ( v13 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, _QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)v11 + 160LL))(
            v11,
            this,
            a3,
            v5,
            v12,
            &v19);
    if ( v13 >= 0 )
    {
      if ( v19 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v11);
      return (unsigned int)v13;
    }
  }
LABEL_27:
  if ( v5 )
    Win32FreePool(v5);
  return (unsigned int)v13;
}
