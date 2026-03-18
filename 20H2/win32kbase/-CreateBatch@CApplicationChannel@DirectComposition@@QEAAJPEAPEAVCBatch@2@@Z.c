/*
 * XREFs of ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C007CCE8
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C005FB2C (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C007C9C4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0059680 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolZInit @ 0x1C006B1A0 (Win32AllocPoolZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax

  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this) == 3 )
    v5 = Win32AllocPoolZInit(0xA0uLL, 0x61624344u);
  else
    v5 = Win32AllocPoolWithQuotaZInit(0xA0uLL, 0x61624344u);
  if ( v5 )
  {
    v5[1] = this;
    v5[15] = &DirectComposition::CBatch::CBatchListProxy::`vftable';
    *((_DWORD *)v5 + 5) = 7;
    v5[16] = v5;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
    *a2 = (struct DirectComposition::CBatch *)v5;
  else
    return (unsigned int)-1073741801;
  return v4;
}
