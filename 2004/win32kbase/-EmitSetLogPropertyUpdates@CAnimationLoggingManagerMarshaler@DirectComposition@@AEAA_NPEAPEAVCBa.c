/*
 * XREFs of ?EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A6FEC
 * Callers:
 *     ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00A7050 (-EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00A1378 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00A6F50 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     _lambda_b8fe0773f13596fc9d0c7c35c2a05b25_::operator() @ 0x1C00C4210 (_lambda_b8fe0773f13596fc9d0c7c35c2a05b25_--operator().c)
 */

char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetLogPropertyUpdates(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v2; // esi
  char v5; // di
  bool v6; // zf
  char *v8; // rax
  unsigned int v9; // eax
  int v10; // ecx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  void *v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = *((_DWORD *)this + 20);
  v12 = *((_DWORD *)this + 24);
  v5 = 1;
  v6 = v12 == v2;
  if ( v12 < v2 )
  {
    v11[0] = this;
    v11[1] = &v12;
    while ( 1 )
    {
      v13 = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v13) )
        break;
      v8 = (char *)v13;
      *(_DWORD *)v13 = 24;
      *(_OWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 5) = 0;
      *((_DWORD *)v8 + 1) = 19;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
      lambda_b8fe0773f13596fc9d0c7c35c2a05b25_::operator()(v11);
      v9 = v12;
      v10 = ++*((_DWORD *)this + 24);
      v12 = v9 + 1;
      if ( v9 + 1 >= v2 )
        goto LABEL_10;
    }
    v10 = *((_DWORD *)this + 24);
    v5 = 0;
LABEL_10:
    v6 = v10 == v2;
  }
  if ( v6 )
  {
    v5 = 1;
    DirectComposition::CDCompDynamicArrayBase::SetCount(
      (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 56),
      0LL,
      0x6D6C4344u);
    *((_DWORD *)this + 24) = 0;
  }
  return v5;
}
