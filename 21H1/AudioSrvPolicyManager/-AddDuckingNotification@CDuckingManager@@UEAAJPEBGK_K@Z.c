/*
 * XREFs of ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x180010B70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_Sdi @ 0x1800100B4 (WPP_SF_Sdi.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180010A5C (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x1800124F4 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x180014AB0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::AddDuckingNotification(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        int a3,
        __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rbx
  _UNKNOWN **v11; // rcx
  int v12; // edi
  _QWORD *v13; // rdx
  ATL::CAtlException *v15; // rbx
  char v16[4]; // [rsp+20h] [rbp-78h]
  int v18; // [rsp+30h] [rbp-68h]
  ATL::CAtlException *v19; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  int v21; // [rsp+48h] [rbp-50h]
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+58h] [rbp-40h]
  __int64 v24; // [rsp+60h] [rbp-38h] BYREF
  int v25; // [rsp+68h] [rbp-30h]
  __int64 v26; // [rsp+78h] [rbp-20h]

  v22 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v10 = 0LL;
  v23 = 0LL;
  v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    *(_DWORD *)v16 = a3;
    WPP_SF_Sdi(*((_QWORD *)WPP_GLOBAL_Control + 2), v8, v9, a2, *(_DWORD *)v16, a4);
    v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *((_DWORD *)this + 120) == 1 )
  {
    v12 = -2147467260;
    goto LABEL_16;
  }
  v12 = CDuckingNotification::Init((CDuckingNotification *)&v20, a3, a2, a4);
  if ( v12 < 0 )
  {
    v10 = v23;
LABEL_15:
    v11 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_16:
    if ( v11 != &WPP_GLOBAL_Control && (*((_DWORD *)v11 + 7) & 0x8000000) != 0 && *((_BYTE *)v11 + 25) >= 2u )
      WPP_SF_d((TRACEHANDLE)v11[2], 0xDu, &WPP_5deeced5c0273ddc6a386dd17acdfa68_Traceguids, v12);
    AudPolicyLogError("CDuckingManager::AddDuckingNotification", 411, v12);
    goto LABEL_21;
  }
  v24 = v20;
  v25 = v21;
  try
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>();
    v10 = v23;
    v26 = v23;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    v12 = CLockedList<CDuckingNotification,1,0>::AddInterface((char *)this + 64, &v24);
  }
  catch ( ATL::CAtlException *v19 )
  {
    v15 = v19;
    if ( *(_DWORD *)v19 == -1073741571 )
      _o__resetstkoflw();
    v18 = *(_DWORD *)v15;
    v10 = v23;
    v12 = v18;
  }
  if ( v12 < 0 )
    goto LABEL_15;
LABEL_21:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v13 = (_QWORD *)(v22 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 8LL))(*v13);
  return (unsigned int)v12;
}
