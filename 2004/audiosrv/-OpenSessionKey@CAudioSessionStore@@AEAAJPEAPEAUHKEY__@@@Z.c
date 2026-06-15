/*
 * XREFs of ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18005248C
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z @ 0x18000360C (-LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180003F10 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180004278 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180006EA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x180008350 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?Format@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ @ 0x18001BAF0 (-Format@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAXPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEqual@CAudioSessionStore@@UEAA_NPEBG@Z @ 0x1800526C0 (-IsEqual@CAudioSessionStore@@UEAA_NPEBG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ACC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CB1E0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSessionStore::OpenSessionKey(CAudioSessionStore *this, HKEY *a2)
{
  RPC_STATUS v4; // eax
  unsigned int v5; // edi
  LPCWSTR v6; // rdi
  unsigned int ValueW; // eax
  unsigned __int64 v8; // rax
  unsigned __int16 *pvData; // rax
  unsigned int v10; // eax
  bool IsEqual; // al
  unsigned __int16 *v12; // rcx
  HKEY v13; // rax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  unsigned int v17; // esi
  unsigned int phkResult; // [rsp+20h] [rbp-A8h]
  unsigned int phkResulta; // [rsp+20h] [rbp-A8h]
  HKEY hkey; // [rsp+40h] [rbp-88h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-80h] BYREF
  int i; // [rsp+4Ch] [rbp-7Ch]
  unsigned __int16 *v23; // [rsp+50h] [rbp-78h]
  LPCWSTR lpSubKey[2]; // [rsp+58h] [rbp-70h] BYREF
  char v25; // [rsp+68h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  RPC_STATUS v27; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v28; // [rsp+E8h] [rbp+20h]

  *a2 = 0LL;
  if ( !*((_QWORD *)this + 8) )
  {
    v15 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDB0,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x8007139FLL);
    return v15;
  }
  v4 = RpcImpersonateClient(0LL);
  v27 = v4;
  lpSubKey[1] = (LPCWSTR)&v27;
  v25 = 1;
  if ( v4 && v4 != 1725 )
  {
    if ( v4 > 0 )
      v15 = (unsigned __int16)v4 | 0x80070000;
    else
      v15 = v4;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDB6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)v15);
    if ( !v27 )
      RpcRevertToSelf();
    return v15;
  }
  v28 = 0;
  v28 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(*((unsigned __int16 **)this + 6));
  v5 = 0;
  for ( i = 0; ; ++i )
  {
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(lpSubKey, (__int64)&ATL::g_strmgr);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
      (wchar_t **)lpSubKey,
      L"%x_%d",
      v28,
      v5);
    hkey = 0LL;
    v6 = lpSubKey[0];
    ValueW = RegOpenKeyExW(*((HKEY *)this + 8), lpSubKey[0], 0, 0x20019u, &hkey);
    if ( ValueW == 2 )
    {
      if ( hkey )
        RegCloseKey(hkey);
      ATL::CStringData::Release((ATL::CStringData *)(v6 - 12));
      pcbData = 0;
      ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(lpSubKey, (__int64)&ATL::g_strmgr);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Format(
        (wchar_t **)lpSubKey,
        L"%x_%d",
        v28,
        0LL);
      JUMPOUT(0x18009D46CLL);
    }
    if ( ValueW )
    {
      v16 = 3533LL;
LABEL_30:
      v17 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)v16,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)ValueW,
              phkResult);
      goto LABEL_32;
    }
    pcbData = 0;
    ValueW = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, 0LL, &pcbData);
    if ( ValueW )
    {
      v16 = 3536LL;
      goto LABEL_30;
    }
    v8 = 2 * (((unsigned __int64)pcbData >> 1) + 1);
    if ( !is_mul_ok(((unsigned __int64)pcbData >> 1) + 1, 2uLL) )
      v8 = -1LL;
    pvData = (unsigned __int16 *)operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
    v23 = pvData;
    if ( !pvData )
      break;
    v10 = RegGetValueW(hkey, 0LL, 0LL, 2u, 0LL, pvData, &pcbData);
    if ( v10 )
    {
      v17 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0xDD5,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)v10,
              phkResulta);
      operator delete(v23, (const struct std::nothrow_t *)2);
      goto LABEL_32;
    }
    IsEqual = CAudioSessionStore::IsEqual((CAudioSessionStore *)((char *)this + 24), v23);
    v12 = v23;
    if ( IsEqual )
    {
      v13 = hkey;
      hkey = 0LL;
      *a2 = v13;
      operator delete(v12, (const struct std::nothrow_t *)2);
      if ( hkey )
        RegCloseKey(hkey);
      ATL::CStringData::Release((ATL::CStringData *)(v6 - 12));
      if ( !v27 )
        RpcRevertToSelf();
      return 0LL;
    }
    operator delete(v23, (const struct std::nothrow_t *)2);
    if ( hkey )
      RegCloseKey(hkey);
    ATL::CStringData::Release((ATL::CStringData *)(v6 - 12));
    v5 = i + 1;
  }
  v17 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDD3,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)0x8007000ELL);
LABEL_32:
  if ( hkey )
    RegCloseKey(hkey);
  ATL::CStringData::Release((ATL::CStringData *)(v6 - 12));
  if ( !v27 )
    RpcRevertToSelf();
  return v17;
}
