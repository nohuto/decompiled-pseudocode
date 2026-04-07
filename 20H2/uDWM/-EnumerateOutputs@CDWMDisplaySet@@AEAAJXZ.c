/*
 * XREFs of ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180037958
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180036D88 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180026234 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180037C84 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     ??0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x180037D54 (--0CDWMDisplay@@AEAA@_NPEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 *     ?Validate@DXGIOutputInfo@@QEBAJXZ @ 0x180038104 (-Validate@DXGIOutputInfo@@QEBAJXZ.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180038250 (-Release@CDWMDisplay@@QEBAKXZ.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x1800388FC (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x180053530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDisplaySet::EnumerateOutputs(CDWMDisplaySet *this)
{
  __int64 v1; // rax
  int v3; // ebx
  bool v4; // zf
  __int64 v5; // rax
  bool v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v11; // rdi
  int updated; // eax
  __int64 v13; // rcx
  CDWMDisplay *v14; // rax
  CDWMDisplay *v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // r8d
  int v18; // eax
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-58h]
  CDWMDisplay *v21; // [rsp+30h] [rbp-48h] BYREF
  __int128 v22; // [rsp+38h] [rbp-40h] BYREF

  v1 = *((_QWORD *)this + 1);
  v3 = 0;
  v21 = 0LL;
  v4 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 48) + 24LL))(*(_QWORD *)(v1 + 48)) == 0;
  v5 = *((_QWORD *)this + 1);
  v6 = !v4;
  v7 = 0LL;
  if ( *(_DWORD *)(v5 + 80) )
  {
    while ( 1 )
    {
      v8 = 0LL;
      v9 = *(_QWORD *)(*(_QWORD *)(v5 + 56) + 8 * v7);
      if ( *(_DWORD *)(v9 + 376) )
        break;
LABEL_3:
      v5 = *((_QWORD *)this + 1);
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *(_DWORD *)(v5 + 80) )
        goto LABEL_4;
    }
    while ( 1 )
    {
      v11 = *(_QWORD *)(v9 + 352) + 288 * v8;
      updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)v11);
      v3 = updated;
      if ( updated < 0 )
        break;
      if ( *(_DWORD *)(v11 + 184) || *(_DWORD *)(v11 + 188) || *(_DWORD *)(v11 + 192) || *(_DWORD *)(v11 + 196) )
      {
        v13 = *(_QWORD *)(v11 + 104);
        v22 = 0LL;
        if ( (unsigned int)GetUniformSpaceMapping(v13, &v22) )
          *(_OWORD *)(v11 + 184) = v22;
        if ( *(char *)(v11 + 200) >= 0 )
        {
          CAnalogCompositorManager::GetInstance();
          updated = DXGIOutputInfo::Validate((DXGIOutputInfo *)v11);
          v3 = updated;
          if ( updated < 0 )
          {
            v20 = 267;
            goto LABEL_35;
          }
          v14 = (CDWMDisplay *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 224LL);
          if ( v14 )
            v15 = CDWMDisplay::CDWMDisplay(v14, v6, (struct CDWMDXGIAdapter *)v9, (const struct DXGIOutputInfo *)v11);
          else
            v15 = 0LL;
          v21 = v15;
          if ( !v15 )
          {
            v3 = -2147024882;
            v20 = 275;
            goto LABEL_32;
          }
          v16 = *((_DWORD *)this + 16);
          v17 = v16 + 1;
          if ( v16 + 1 < v16 )
          {
            v3 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_30:
            v20 = 277;
LABEL_32:
            v19 = v3;
            goto LABEL_36;
          }
          if ( v17 <= *((_DWORD *)this + 15) )
          {
            v3 = 0;
            *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * *((unsigned int *)this + 16)) = v15;
            *((_DWORD *)this + 16) = v17;
          }
          else
          {
            v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 40, 8u, 1, &v21);
            v3 = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0xC0u);
            if ( v3 < 0 )
              goto LABEL_30;
          }
          v21 = 0LL;
        }
      }
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *(_DWORD *)(v9 + 376) )
        goto LABEL_3;
    }
    v20 = 242;
LABEL_35:
    v19 = updated;
LABEL_36:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, v20);
  }
LABEL_4:
  if ( v21 )
    CDWMDisplay::Release(v21);
  return (unsigned int)v3;
}
