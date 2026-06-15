/*
 * XREFs of ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x180010DC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_di @ 0x18001015C (WPP_SF_di.c)
 *     ?Init@CDuckingNotification@@QEAAJKPEBG_K@Z @ 0x180010A5C (-Init@CDuckingNotification@@QEAAJKPEBG_K@Z.c)
 *     ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180012330 (-RemoveInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x180014AB0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::DeleteDuckingNotification(CDuckingManager *this, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // edi
  __int64 v9; // rbx
  _QWORD *v10; // rdx
  ATL::CAtlException *v12; // rbx
  ATL::CAtlException *v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+38h] [rbp-50h] BYREF
  int v15; // [rsp+40h] [rbp-48h]
  __int64 v16; // [rsp+48h] [rbp-40h]
  __int64 v17; // [rsp+50h] [rbp-38h]
  __int64 v18; // [rsp+58h] [rbp-30h]
  int v19; // [rsp+60h] [rbp-28h]
  __int64 v20; // [rsp+70h] [rbp-18h]
  int v22; // [rsp+A8h] [rbp+20h]

  v16 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v17 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_di(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, a2, a3);
  }
  v8 = CDuckingNotification::Init((CDuckingNotification *)&v14, a2, 0LL, a3);
  if ( v8 < 0 )
  {
    v9 = v17;
LABEL_13:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_5deeced5c0273ddc6a386dd17acdfa68_Traceguids, v8);
    }
    AudPolicyLogError("CDuckingManager::DeleteDuckingNotification", 483, v8);
    goto LABEL_18;
  }
  v18 = v14;
  v19 = v15;
  try
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>();
    v9 = v17;
    v20 = v17;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v8 = CLockedList<CDuckingNotification,1,0>::RemoveInterface((LPCRITICAL_SECTION)((char *)this + 64));
  }
  catch ( ATL::CAtlException *v13 )
  {
    v12 = v13;
    if ( *(_DWORD *)v13 == -1073741571 )
      _o__resetstkoflw();
    v22 = *(_DWORD *)v12;
    v9 = v17;
    v8 = v22;
  }
  if ( v8 < 0 )
    goto LABEL_13;
LABEL_18:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = (_QWORD *)(v16 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 8LL))(*v10);
  return (unsigned int)v8;
}
