/*
 * XREFs of ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x1801E74FC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800A0B90 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@PEAVCVisual@@@?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@QEAAPEAPEAVCVisual@@QEAPEAV2@$$QEAPEAV2@@Z @ 0x1801B52E4 (--$_Emplace_reallocate@PEAVCVisual@@@-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@@@std@.c)
 *     ?SetStops@CGradientBrush@@QEAAXAEBV?$span@PEAVCColorGradientStop@@$0?0@gsl@@_N@Z @ 0x1801E77F8 (-SetStops@CGradientBrush@@QEAAXAEBV-$span@PEAVCColorGradientStop@@$0-0@gsl@@_N@Z.c)
 */

__int64 __fastcall CGradientBrush::ProcessSetColorStops(
        CGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS *a3,
        unsigned int *a4,
        unsigned int a5)
{
  _BYTE *v5; // rsi
  unsigned int v6; // r15d
  CResourceTable *v8; // rax
  _BYTE *v9; // rbx
  unsigned int v10; // r14d
  struct CResource *ResourceWithoutType; // r12
  void *v12; // rdi
  __int64 v13; // rbx
  unsigned int v15; // [rsp+20h] [rbp-40h]
  _QWORD v16[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  _BYTE *v18; // [rsp+50h] [rbp-10h]
  CResource *v19; // [rsp+A0h] [rbp+40h]
  const struct tagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS *v21; // [rsp+B0h] [rbp+50h]

  v21 = a3;
  v19 = this;
  v5 = 0LL;
  v6 = 0;
  v18 = 0LL;
  v8 = a2;
  v17 = 0LL;
  if ( *((_DWORD *)a3 + 3) != a5 || (a5 & 3) != 0 )
  {
    v15 = 215;
LABEL_18:
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, v15, 0LL);
    v12 = (void *)v17;
  }
  else
  {
    v9 = (_BYTE *)*((_QWORD *)&v17 + 1);
    v10 = 0;
    if ( a5 >> 2 )
    {
      while ( 1 )
      {
        ResourceWithoutType = CResourceTable::GetResourceWithoutType(v8, *a4);
        if ( !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
                ResourceWithoutType,
                21LL) )
        {
          v15 = 224;
          goto LABEL_18;
        }
        v16[0] = ResourceWithoutType;
        if ( v5 == v9 )
        {
          std::vector<CVisual *>::_Emplace_reallocate<CVisual *>((__int64 *)&v17, v9, v16);
          v5 = v18;
          v9 = (_BYTE *)*((_QWORD *)&v17 + 1);
        }
        else
        {
          *(_QWORD *)v9 = ResourceWithoutType;
          v9 += 8;
          *((_QWORD *)&v17 + 1) = v9;
        }
        ++v10;
        ++a4;
        if ( v10 >= a5 >> 2 )
          break;
        v8 = a2;
      }
      a3 = v21;
      this = v19;
    }
    v12 = (void *)v17;
    v13 = (__int64)&v9[-v17] >> 3;
    v16[0] = (int)v13;
    if ( (int)v13 < 0 || (v16[1] = v17) == 0LL && (_DWORD)v13 )
    {
      ((void (__fastcall *)(CGradientBrush *, struct CResourceTable *, const struct tagMILCMD_GRADIENTBRUSH_SETCOLORSTOPS *))`gsl::details::get_terminate_handler'::`2'::handler)(
        this,
        a2,
        a3);
      __debugbreak();
    }
    CGradientBrush::SetStops(this);
  }
  if ( v12 )
    std::_Deallocate<16,0>(v12, (v5 - (_BYTE *)v12) & 0xFFFFFFFFFFFFFFF8uLL);
  return v6;
}
