/*
 * XREFs of ?Mid@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@HH@Z @ 0x1800C9B88
 * Callers:
 *     ?Tokenize@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@PEBGAEAH@Z @ 0x1800CB874 (-Tokenize@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA-AV12@PEBGAEAH@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800070F0 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     memcpy_s @ 0x180034A94 (memcpy_s.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180045134 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800BB57C (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ??$AtlAddThrow@H@ATL@@YAHHH@Z @ 0x1800C6994 (--$AtlAddThrow@H@ATL@@YAHHH@Z.c)
 *     ?GetManager@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@2@XZ @ 0x1800C8A54 (-GetManager@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBAPEAUIAtlStringMgr@.c)
 */

__int64 *__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Mid(
        __int64 *a1,
        __int64 *a2,
        int a3,
        int a4)
{
  int v4; // esi
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  __int64 v10; // r14
  int v11; // ecx
  int v12; // ebx
  __int64 (__fastcall ***Manager)(_QWORD, _QWORD, __int64); // rax
  const void *v14; // rsi
  __int64 v15; // rax

  v4 = 0;
  if ( a3 >= 0 )
    v4 = a3;
  v7 = 0;
  v8 = *(_DWORD *)(*a1 - 16);
  if ( a4 >= 0 )
    v7 = a4;
  v9 = ATL::AtlAddThrow<int>(v4, v7);
  v10 = *a1;
  v11 = *(_DWORD *)(*a1 - 16);
  if ( v9 > v8 )
    v7 = v11 - v4;
  v12 = 0;
  if ( v4 <= v11 )
    v12 = v7;
  if ( v4 || v12 != v11 )
  {
    Manager = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::GetManager(a1);
    v14 = (const void *)(v10 + 2LL * v4);
    if ( !Manager )
      ATL::AtlThrowImpl(-2147467259);
    if ( !v14 && v12 )
      ATL::AtlThrowImpl(-2147024809);
    v15 = (**Manager)(Manager, (unsigned int)v12, 2LL);
    if ( !v15 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    *a2 = v15 + 24;
    ATL::CSimpleStringT<unsigned short,0>::SetLength(a2, v12);
    memcpy_s((void *const)*a2, 2LL * v12, v14, 2LL * v12);
  }
  else
  {
    *a2 = (__int64)(ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)(v10 - 24)) + 6);
  }
  return a2;
}
