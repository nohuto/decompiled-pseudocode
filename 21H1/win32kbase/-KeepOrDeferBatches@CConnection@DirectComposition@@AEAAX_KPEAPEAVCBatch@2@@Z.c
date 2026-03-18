/*
 * XREFs of ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1C01D5EEC
 * Callers:
 *     ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1C01D5E54 (-GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C00B35E0 (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z.c)
 *     McTemplateK0qpqxxq_EtwWriteTransfer @ 0x1C0131490 (McTemplateK0qpqxxq_EtwWriteTransfer.c)
 */

void __fastcall DirectComposition::CConnection::KeepOrDeferBatches(
        DirectComposition::CConnection *this,
        __int64 a2,
        struct DirectComposition::CBatch **a3)
{
  struct DirectComposition::CBatch *v3; // rbx
  _QWORD *v4; // r15
  struct DirectComposition::CBatch **v5; // r14
  struct DirectComposition::CBatch *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  struct DirectComposition::CBatch *v12; // rax
  int v13; // [rsp+80h] [rbp+8h] BYREF
  int v14; // [rsp+90h] [rbp+18h] BYREF

  v3 = *a3;
  v4 = (_QWORD *)((char *)this + 136);
  v5 = a3;
  v8 = *a3;
  if ( *a3 )
  {
    do
    {
      v9 = *((_QWORD *)v8 + 12);
      if ( v9 )
      {
        if ( *(_BYTE *)(v9 + 33) )
        {
          v13 = 0;
          if ( (*((_BYTE *)v8 + 32) & 0x10) != 0
            && (!DirectComposition::CBatch::ShouldDefer(
                   v8,
                   *((_QWORD *)this + 20),
                   0,
                   0LL,
                   (enum DirectComposition::CBatch::DeferReason *)&v13)
             || v13 == 6) )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 36));
            *((_BYTE *)v8 + 32) &= ~0x10u;
          }
        }
      }
      v8 = *(struct DirectComposition::CBatch **)v8;
    }
    while ( v8 );
    do
    {
      v14 = 0;
      *((_QWORD *)v3 + 7) = a2;
      if ( DirectComposition::CBatch::ShouldDefer(
             v3,
             *((_QWORD *)this + 20),
             1,
             *((struct DirectComposition::CEvent **)this + 10),
             (enum DirectComposition::CBatch::DeferReason *)&v14) )
      {
        if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
          McTemplateK0qpqxxq_EtwWriteTransfer(
            *((_QWORD *)v3 + 1),
            v10,
            v11,
            *(_DWORD *)(*((_QWORD *)v3 + 1) + 28LL),
            (char)v3,
            *((_DWORD *)v3 + 4),
            *((_QWORD *)v3 + 8),
            *((_QWORD *)this + 20),
            v14);
        v12 = *(struct DirectComposition::CBatch **)v3;
        *((_QWORD *)v3 + 7) = 0LL;
        *v5 = v12;
        *v4 = v3;
        v4 = v3;
        *(_QWORD *)v3 = 0LL;
      }
      else
      {
        if ( (*((_BYTE *)v3 + 32) & 8) != 0 )
          *(_BYTE *)(*((_QWORD *)v3 + 1) + 242LL) = 1;
        v5 = (struct DirectComposition::CBatch **)v3;
      }
      v3 = *v5;
    }
    while ( *v5 );
  }
}
