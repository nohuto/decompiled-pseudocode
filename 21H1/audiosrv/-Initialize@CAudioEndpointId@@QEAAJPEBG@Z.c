/*
 * XREFs of ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180018A10
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180017480 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     AudioSessionManagerGetCurrentSession @ 0x18001CC70 (AudioSessionManagerGetCurrentSession.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800D46F8 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x1800D4794 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x1800D4B3C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001BBA0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x18002C8BC (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     _invalid_parameter_noinfo @ 0x18006B51E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180074B4F (memcpy_0.c)
 *     memmove_0 @ 0x180074B5B (memmove_0.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8FE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioEndpointId::Initialize(CAudioEndpointId *this, const unsigned __int16 *a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r14
  char *v7; // rcx
  size_t v8; // r8
  char *v10; // rdx

  if ( !a2 )
    goto LABEL_21;
  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( !(_DWORD)v4 )
  {
LABEL_21:
    ATL::CSimpleStringT<unsigned short,0>::Empty(this);
    return 0LL;
  }
  v5 = *(unsigned int *)(*(_QWORD *)this - 16LL);
  v6 = ((__int64)a2 - *(_QWORD *)this) >> 1;
  if ( ((1 - *(_DWORD *)(*(_QWORD *)this - 8LL)) | (*(_DWORD *)(*(_QWORD *)this - 12LL) - (int)v4)) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(this, (unsigned int)v4);
  v7 = *(char **)this;
  v8 = 2LL * (int)v4;
  if ( v6 <= v5 )
  {
    v10 = &v7[2 * v6];
    if ( !v8 )
      goto LABEL_11;
    if ( v7 && v10 )
    {
      memmove_0(v7, v10, v8);
      goto LABEL_11;
    }
  }
  else
  {
    if ( !v8 )
      goto LABEL_11;
    if ( v7 )
    {
      memcpy_0(v7, a2, v8);
      goto LABEL_11;
    }
  }
  *(_DWORD *)_o__errno(v7) = 22;
  invalid_parameter_noinfo();
LABEL_11:
  if ( (int)v4 < 0 || (int)v4 > *(_DWORD *)(*(_QWORD *)this - 12LL) )
    ATL::AtlThrowImpl(-2147024809);
  *(_DWORD *)(*(_QWORD *)this - 16LL) = v4;
  *(_WORD *)(*(_QWORD *)this + 2LL * (int)v4) = 0;
  return 0LL;
}
