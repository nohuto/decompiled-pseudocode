/*
 * XREFs of ?GetRule@PolicyRule@@UEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@@Z @ 0x180112D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIPolicyRule@@PEAU3@@Z @ 0x180112770 (-Find@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s.c)
 */

__int64 __fastcall PolicyRule::GetRule(PolicyRule *this, struct IAudioProcess *a2, struct _DynamicRoutingRule *a3)
{
  __int64 v5; // rcx
  _OWORD *v6; // rax
  __int128 v7; // xmm1

  if ( !ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::Find(
          (_QWORD *)this + 2,
          (__int64)a2) )
    return 2147942487LL;
  v5 = 2LL;
  v6 = (_OWORD *)((char *)this + 64);
  do
  {
    *(_OWORD *)a3 = *v6;
    *((_OWORD *)a3 + 1) = v6[1];
    *((_OWORD *)a3 + 2) = v6[2];
    *((_OWORD *)a3 + 3) = v6[3];
    *((_OWORD *)a3 + 4) = v6[4];
    *((_OWORD *)a3 + 5) = v6[5];
    *((_OWORD *)a3 + 6) = v6[6];
    a3 = (struct _DynamicRoutingRule *)((char *)a3 + 128);
    v7 = v6[7];
    v6 += 8;
    *((_OWORD *)a3 - 1) = v7;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)a3 = *v6;
  *((_DWORD *)a3 + 4) = *((_DWORD *)v6 + 4);
  return 0LL;
}
