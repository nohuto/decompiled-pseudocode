/*
 * XREFs of ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x140003898
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400037D4 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x140003954 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x14001ADA4 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x14001DB2E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x14001F43F (memcpy_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1400336CC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x140037260 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     memmove_s @ 0x1400377E4 (memmove_s.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::SetString(void **a1, _BYTE *a2, __int64 a3)
{
  __int64 v3; // rdi
  char *v6; // r10
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  __int64 v9; // rcx

  v3 = (int)a3;
  if ( !(_DWORD)a3 )
    return ATL::CSimpleStringT<unsigned short,0>::Empty();
  if ( !a2 )
    ATL::AtlThrowImpl(-2147024809);
  v6 = (char *)*a1;
  v7 = (a2 - (_BYTE *)*a1) >> 1;
  v8 = *((unsigned int *)*a1 - 4);
  if ( (int)((*((_DWORD *)*a1 - 3) - a3) | (1 - *((_DWORD *)*a1 - 2))) < 0 )
  {
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1, (unsigned int)a3);
    v6 = (char *)*a1;
  }
  v9 = 2 * v3;
  if ( v7 <= v8 )
  {
    memmove_s(v6, 2 * v3, &v6[2 * v7], 2 * v3);
  }
  else if ( v9 )
  {
    if ( v6 )
    {
      memcpy_0(v6, a2, 2 * v3);
    }
    else
    {
      *(_DWORD *)_o__errno(v9, a2, a3) = 22;
      invalid_parameter_noinfo();
    }
  }
  return ATL::CSimpleStringT<unsigned short,0>::SetLength(a1, (unsigned int)v3);
}
