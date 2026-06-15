/*
 * XREFs of ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x18000B610
 * Callers:
 *     ?ForEachEntry@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18000C840 (-ForEachEntry@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJ$$QEAVCListWorker@1@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_SSd @ 0x18000A680 (WPP_SF_SSd.c)
 *     WPP_SF_i @ 0x18000A85C (WPP_SF_i.c)
 *     WPP_SF_id @ 0x18000A8A4 (WPP_SF_id.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGenerateDuckingNotification::Invoke(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v3; // di
  int MediaEvent; // r14d
  char v6; // dl
  const wchar_t *v8; // rax
  _DWORD *v9; // rbx
  _QWORD *v10; // rcx
  _DWORD *v11; // rbx
  _UNKNOWN **v12; // rcx
  USHORT v13; // dx
  _UNKNOWN **v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rdx
  bool v18; // bp
  _QWORD *v19; // rcx
  _DWORD *v20; // rbx
  _DWORD *v21; // rbx
  int v22; // edi
  _DWORD *v23; // rbx
  _DWORD *v24; // [rsp+60h] [rbp+8h]

  v3 = 0;
  MediaEvent = 0;
  LODWORD(v24) = 0;
  v6 = *(_BYTE *)(a1 + 25);
  if ( !*(_BYTE *)(a1 + 24) )
  {
    if ( v6 )
    {
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
        v20 = v24;
      }
      else
      {
        v20 = (_DWORD *)a2[3];
        if ( v20 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20 + 8LL))(a2[3]);
          v19 = WPP_GLOBAL_Control;
        }
        WPP_SF_id(v19[2], 0x12u, a3, *a2, v20[4]);
        v3 = 2;
      }
      if ( (v3 & 2) != 0 && v20 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 16LL))(v20);
      v21 = (_DWORD *)a2[3];
      if ( v21 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21 + 8LL))(a2[3]);
      v22 = v21[4];
      v18 = v22 != 0;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v21 + 16LL))(v21);
      if ( v22 )
      {
        v23 = (_DWORD *)a2[3];
        if ( v23 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23 + 8LL))(a2[3]);
        --v23[4];
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v14 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    else
    {
      v14 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, a3, *a2);
        v14 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      v18 = *(_DWORD *)(a2[2] - 16LL) == 0;
    }
LABEL_76:
    if ( v18 )
      goto LABEL_18;
LABEL_29:
    if ( v14 == &WPP_GLOBAL_Control || (*((_DWORD *)v14 + 7) & 0x8000000) == 0 || *((_BYTE *)v14 + 25) < 4u )
      goto LABEL_40;
    WPP_SF_SSd(
      (TRACEHANDLE)v14[2],
      0x17u,
      &WPP_5deeced5c0273ddc6a386dd17acdfa68_Traceguids,
      *(const wchar_t **)(a1 + 16),
      (const wchar_t *)a2[2],
      *((_DWORD *)a2 + 2));
    goto LABEL_33;
  }
  v8 = *(const wchar_t **)(a1 + 16);
  if ( !v6 )
  {
    v18 = !v8 && !*(_DWORD *)(a2[2] - 16LL);
    v14 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_id(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        *(_DWORD *)(a2[2] - 16LL) == 0,
        *a2,
        *(_DWORD *)(a2[2] - 16LL) == 0);
      v14 = (_UNKNOWN **)WPP_GLOBAL_Control;
    }
    goto LABEL_76;
  }
  if ( !v8 || _wcsicoll((const wchar_t *)a2[2], v8) )
  {
    v14 = (_UNKNOWN **)WPP_GLOBAL_Control;
    goto LABEL_29;
  }
  if ( *(_DWORD *)(a2[2] - 16LL) )
  {
    v9 = (_DWORD *)a2[3];
    if ( v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(a2[3]);
    ++v9[4];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v11 = v24;
    }
    else
    {
      v11 = (_DWORD *)a2[3];
      if ( v11 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(a2[3]);
        v10 = WPP_GLOBAL_Control;
      }
      WPP_SF_id(v10[2], 0x10u, a3, *a2, v11[4]);
      v3 = 1;
    }
    if ( (v3 & 1) != 0 && v11 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_18:
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL) = *a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x14u, a3, *a2);
  }
  MediaEvent = GenerateMediaEvent(*(_QWORD *)(a1 + 8), *((unsigned int *)a2 + 2));
  if ( !MediaEvent )
  {
    v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_40;
    }
    v13 = 22;
    goto LABEL_27;
  }
  v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v13 = 21;
LABEL_27:
    WPP_SF_d((TRACEHANDLE)v12[2], v13, &WPP_5deeced5c0273ddc6a386dd17acdfa68_Traceguids, *((_DWORD *)a2 + 2));
LABEL_33:
    v12 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( MediaEvent < 0 )
  {
    if ( v12 != &WPP_GLOBAL_Control && (*((_DWORD *)v12 + 7) & 0x8000000) != 0 && *((_BYTE *)v12 + 25) >= 2u )
      WPP_SF_d((TRACEHANDLE)v12[2], 0x18u, &WPP_5deeced5c0273ddc6a386dd17acdfa68_Traceguids, MediaEvent);
    AudPolicyLogError("CGenerateDuckingNotification::Invoke", 627, MediaEvent);
  }
LABEL_40:
  v15 = a2[3];
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = (volatile signed __int32 *)(a2[2] - 24LL);
  if ( _InterlockedExchangeAdd(v16 + 4, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 8LL))(*(_QWORD *)v16);
  return (unsigned int)MediaEvent;
}
