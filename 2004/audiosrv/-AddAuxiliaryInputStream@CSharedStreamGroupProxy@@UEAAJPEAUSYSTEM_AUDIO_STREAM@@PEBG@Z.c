/*
 * XREFs of ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@PEBG@Z @ 0x1800E48C0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A740 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x1800467D0 (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::AddAuxiliaryInputStream(
        CSharedStreamGroupProxy *this,
        struct SYSTEM_AUDIO_STREAM *a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  void **v9; // r15
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r12
  char *v12; // rbp
  SIZE_T v13; // rax
  char *v14; // rax
  __int64 v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( *((_QWORD *)this + 45) )
  {
    v6 = 1221LL;
LABEL_3:
    v7 = -2147418113;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v9 = (void **)((char *)this + 1592);
  if ( *((_QWORD *)this + 199) )
  {
    v6 = 1222LL;
    goto LABEL_3;
  }
  v10 = -1LL;
  do
    ++v10;
  while ( a3[v10] );
  v11 = v10 + 1;
  v12 = 0LL;
  if ( v10 + 1 < v10 )
  {
    v7 = -2147024362;
  }
  else
  {
    v13 = 2 * v11;
    if ( is_mul_ok(v11, 2uLL) )
    {
      v7 = 0;
    }
    else
    {
      v13 = -1LL;
      v7 = -2147024362;
    }
    if ( v7 >= 0 )
    {
      v14 = (char *)CoTaskMemAlloc(v13);
      v12 = v14;
      if ( v14 )
      {
        v7 = 0;
        StringCchCopyNExW(v14, v10 + 1, a3, v10);
      }
      else
      {
        v7 = -2147024882;
      }
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    v9,
    v12);
  if ( v7 < 0 )
  {
    v6 = 1224LL;
    goto LABEL_4;
  }
  v15 = 9LL;
  v16 = (_OWORD *)((char *)this + 328);
  do
  {
    *v16 = *(_OWORD *)a2;
    v16[1] = *((_OWORD *)a2 + 1);
    v16[2] = *((_OWORD *)a2 + 2);
    v16[3] = *((_OWORD *)a2 + 3);
    v16[4] = *((_OWORD *)a2 + 4);
    v16[5] = *((_OWORD *)a2 + 5);
    v16[6] = *((_OWORD *)a2 + 6);
    v16 += 8;
    v17 = *((_OWORD *)a2 + 7);
    a2 = (struct SYSTEM_AUDIO_STREAM *)((char *)a2 + 128);
    *(v16 - 1) = v17;
    --v15;
  }
  while ( v15 );
  *v16 = *(_OWORD *)a2;
  v16[1] = *((_OWORD *)a2 + 1);
  v16[2] = *((_OWORD *)a2 + 2);
  v16[3] = *((_OWORD *)a2 + 3);
  v16[4] = *((_OWORD *)a2 + 4);
  v16[5] = *((_OWORD *)a2 + 5);
  v16[6] = *((_OWORD *)a2 + 6);
  CSharedStreamGroupProxy::UpdateAuxiliaryStreamState((CSharedStreamGroupProxy *)((char *)this - 8));
  return 0LL;
}
