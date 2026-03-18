/*
 * XREFs of ?AddVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIHI@Z @ 0x1C00559A8
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0057F10 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C00585DC (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::AddVisualChild(
        DirectComposition::CApplicationChannel *this,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // r10
  struct DirectComposition::CResourceMarshaler *v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v12; // r14
  unsigned __int64 v13; // rdx
  int v14; // ebx
  char v16; // [rsp+68h] [rbp+10h] BYREF

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
    if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v10 + 96LL))(
            v10,
            195LL) )
      return (unsigned int)-1073741811;
    v11 = (unsigned int)(a3 - 1);
    if ( a3 && v11 < *((_QWORD *)this + 10) )
    {
      _mm_lfence();
      v12 = *(_QWORD *)(v11 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
    }
    else
    {
      v12 = 0LL;
    }
    if ( !v12 || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 96LL))(v12, 195LL) )
      return (unsigned int)-1073741811;
    if ( !a5 )
      goto LABEL_16;
    v13 = a5 - 1;
    if ( v13 < *((_QWORD *)this + 10) )
    {
      _mm_lfence();
      v5 = *(_QWORD *)(v13 * *((_QWORD *)this + 11) + *((_QWORD *)this + 7));
    }
    if ( v5 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 96LL))(v5, 195LL) )
    {
LABEL_16:
      v14 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, DirectComposition::CApplicationChannel *, __int64, _QWORD, __int64, char *))(*(_QWORD *)v10 + 224LL))(
              v10,
              this,
              v12,
              a4,
              v5,
              &v16);
      if ( v14 >= 0 && v16 )
        DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(this, v10);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v14;
}
