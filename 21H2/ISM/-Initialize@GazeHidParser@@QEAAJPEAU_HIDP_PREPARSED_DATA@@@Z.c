/*
 * XREFs of ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x18012A2AC
 * Callers:
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x18009DA18 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800893A0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBW4GazeProperty@@G@std@@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4GazeProperty@@G@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBW4GazeProperty@@G@1@PEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@1@@Z @ 0x18012985C (--$_Insert_nohint@AEAU-$pair@$$CBW4GazeProperty@@G@std@@PEAU-$_Tree_node@U-$pair@$$CBW4GazePrope.c)
 *     ?FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z @ 0x180129BDC (-FindCollectionForProperty@GazeHidParser@@AEAAJW4GazeProperty@@PEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidParser::Initialize(PHIDP_CAPS Capabilities, PHIDP_PREPARSED_DATA PreparsedData)
{
  NTSTATUS Caps; // eax
  unsigned int v5; // ebx
  int CollectionForProperty; // eax
  __int64 v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // r8
  _BYTE v10[24]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v12; // [rsp+60h] [rbp+8h] BYREF

  *(_QWORD *)&Capabilities[1].Usage = PreparsedData;
  Caps = HidP_GetCaps(PreparsedData, Capabilities);
  if ( Caps < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x18,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
             (const char *)(unsigned int)Caps);
  v5 = 0;
  while ( v5 < 0xB )
  {
    v12 = 0;
    CollectionForProperty = GazeHidParser::FindCollectionForProperty((__int64)Capabilities, v5, &v12);
    try
    {
      if ( CollectionForProperty >= 0 )
      {
        v7 = *(_QWORD *)&Capabilities[1].FeatureReportByteLength;
        v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
        *((_DWORD *)v8 + 7) = v5;
        *((_WORD *)v8 + 16) = v12;
        *v8 = v7;
        v8[1] = v7;
        v8[2] = v7;
        *((_WORD *)v8 + 12) = 0;
        std::_Tree<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Insert_nohint<std::pair<enum GazeProperty const,unsigned short> &,std::_Tree_node<std::pair<enum GazeProperty const,unsigned short>,void *> *>(
          (__int64 *)&Capabilities[1].FeatureReportByteLength,
          (__int64)v10,
          v9,
          (_DWORD *)v8 + 7,
          v8);
      }
      ++v5;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2B,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
  }
  return 0LL;
}
