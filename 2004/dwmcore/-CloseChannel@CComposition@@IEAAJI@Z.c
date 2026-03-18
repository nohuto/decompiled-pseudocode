/*
 * XREFs of ?CloseChannel@CComposition@@IEAAJI@Z @ 0x1800CBA90
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z @ 0x1800A43C0 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@PEAI@Z.c)
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x1801572A4 (-OnShutdown@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x1800574D0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ??$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z @ 0x18009747C (--$ReleaseInterface@VCProcessAttribution@@@@YAXAEAPEAVCProcessAttribution@@@Z.c)
 *     ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18009CB4C (-ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x1800A4484 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$00@@IEAAXI@Z @ 0x1800B3FB0 (-ShrinkToSize@-$DynArrayImpl@$00@@IEAAXI@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1800CBBA4 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x1801577F8 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CComposition::CloseChannel(CComposition *this, unsigned int a2)
{
  __int64 v2; // rbp
  int AttachedChannel; // eax
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // r8
  CResourceTable **v8; // rdi
  struct CComposition *v9; // rdx
  __int64 *v10; // rdi
  char v11; // r8
  int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v17; // rcx
  CDrawListEntry *v18; // [rsp+50h] [rbp+18h] BYREF

  v18 = 0LL;
  v2 = a2;
  AttachedChannel = CComposition::GetAttachedChannel(this, a2, &v18);
  v6 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, AttachedChannel, 0x71Bu, 0LL);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 63) + 64LL))(*((_QWORD *)this + 63), (unsigned int)v2);
    v8 = (CResourceTable **)v18;
    if ( *((_BYTE *)v18 + 64) )
    {
      *((_BYTE *)v18 + 64) = 0;
      CComposition::UpdateDebugCounter(this, 0);
    }
    if ( (unsigned int)DynArray<CChannelContext *,1>::Remove((char *)this + 392, &v18, v7) )
      CDrawListEntry::Release((CDrawListEntry *)v8);
    CResourceTable::ReleaseHandleTableEntries(v8[3], v9, (struct CChannelContext *)v8);
    CDrawListEntry::Release((CDrawListEntry *)v8);
    ReleaseInterface<CProcessAttribution>(&v18);
    v10 = (__int64 *)((char *)this + 296);
    v11 = 0;
    *(_QWORD *)(*((_QWORD *)this + 37) + 8 * v2) = 0LL;
    v12 = *((_DWORD *)this + 80);
    if ( v12 )
    {
      do
      {
        v13 = *((_DWORD *)this + 80);
        v14 = *v10;
        v15 = v13 - 1;
        if ( *(_QWORD *)(*v10 + 8 * v15) )
          break;
        v17 = (unsigned int)(v12 - 1);
        if ( (unsigned int)v17 >= v13 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024809, 0x19Cu, 0LL);
        }
        else
        {
          if ( (unsigned int)v17 < (unsigned int)v15 )
          {
            do
            {
              *(_QWORD *)(v14 + 8 * v17) = *(_QWORD *)(v14 + 8LL * (unsigned int)(v17 + 1));
              v17 = (unsigned int)(v17 + 1);
              v13 = *((_DWORD *)this + 80);
            }
            while ( (unsigned int)v17 < v13 - 1 );
          }
          *((_DWORD *)this + 80) = v13 - 1;
        }
        v12 = *((_DWORD *)this + 80);
        v11 = 1;
      }
      while ( v12 );
      if ( v11 )
        DynArrayImpl<1>::ShrinkToSize((__int64)this + 296, 8u);
    }
  }
  return v6;
}
