/*
 * XREFs of ?RemoveAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAHH@Z @ 0x140001DAC
 * Callers:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x140001D34 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x140003A50 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x140037090 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memmove_s @ 0x1400377E4 (memmove_s.c)
 */

__int64 __fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::RemoveAt(
        __int64 a1,
        int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  void *v4; // rax
  void *v5; // rax
  __int64 result; // rax
  errno_t v7; // eax
  errno_t v8; // eax

  v2 = a2;
  if ( a2 < 0 || a2 >= (int)qword_140085218 )
    return 0LL;
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)qword_140085208 + a2) - 24LL));
  v3 = qword_140085218;
  if ( (_DWORD)v2 != (_DWORD)qword_140085218 - 1 )
  {
    v7 = memmove_s(
           (char *)qword_140085208 + 8 * v2,
           8LL * ((int)qword_140085218 - (int)v2),
           (char *)qword_140085208 + 8 * v2 + 8,
           8LL * ((int)qword_140085218 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v7);
    v8 = memmove_s(
           (char *)qword_140085210 + 8 * v2,
           8LL * ((int)qword_140085218 - (int)v2),
           (char *)qword_140085210 + 8 * v2 + 8,
           8LL * ((int)qword_140085218 - (int)v2 - 1));
    ATL::AtlCrtErrorCheck(v8);
    v3 = qword_140085218;
  }
  v4 = (void *)_o__recalloc(qword_140085208, v3 - 1, 8LL);
  if ( v4 || (_DWORD)qword_140085218 == 1 )
    qword_140085208 = v4;
  v5 = (void *)_o__recalloc(qword_140085210, (int)qword_140085218 - 1, 8LL);
  if ( v5 || (_DWORD)qword_140085218 == 1 )
    qword_140085210 = v5;
  result = 1LL;
  LODWORD(qword_140085218) = qword_140085218 - 1;
  return result;
}
