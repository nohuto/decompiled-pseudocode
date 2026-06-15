/*
 * XREFs of ?PruneInactiveProcessSubmixes@CBaseStreamGroupProxy@@UEAAXXZ @ 0x18004DF20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18006727C (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800CD3CC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _lambda_ce21942885de90a1a6198292e021f395_::operator() @ 0x1800CDEDC (_lambda_ce21942885de90a1a6198292e021f395_--operator().c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E24A8 (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 */

void __fastcall CBaseStreamGroupProxy::PruneInactiveProcessSubmixes(CBaseStreamGroupProxy *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // r15
  __int64 *v3; // rdi
  __int64 *v4; // rbx
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  bool v8; // si
  __int64 *i; // rsi
  __int64 *v10; // rsi
  __int64 *j; // rdi
  __int64 v12; // rcx
  __int64 *k; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  _QWORD v23[8]; // [rsp+20h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]
  __int64 v25; // [rsp+A0h] [rbp+67h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+6Fh] BYREF
  __int64 v27; // [rsp+B0h] [rbp+77h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  if ( !(*(unsigned __int8 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 152LL))(this) )
  {
    EnterCriticalSection(v1);
    v3 = (__int64 *)*((_QWORD *)this + 28);
    v4 = (__int64 *)*((_QWORD *)this + 27);
    if ( v4 != v3 )
    {
      do
      {
        v5 = *v4;
        v6 = 0LL;
        v25 = 0LL;
        v8 = 1;
        if ( v5 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
                 v5,
                 &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                 &v25);
          v6 = v25;
          if ( v7 >= 0 )
          {
            if ( v25 )
              v8 = 0;
          }
        }
        if ( v6 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        if ( v8 )
          break;
        ++v4;
      }
      while ( v4 != v3 );
      if ( v4 != v3 )
      {
        for ( i = v4 + 1; i != v3; ++i )
        {
          if ( !(unsigned __int8)lambda_ce21942885de90a1a6198292e021f395_::operator()(v6, i) )
          {
            v14 = 0LL;
            if ( &v25 != i )
            {
              v14 = *i;
              *i = 0LL;
            }
            v6 = *v4;
            *v4 = v14;
            if ( v6 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
            ++v4;
          }
        }
      }
    }
    v10 = (__int64 *)*((_QWORD *)this + 28);
    for ( j = v4; j != v10; ++j )
    {
      v12 = *j;
      if ( *j )
      {
        *j = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    *((_QWORD *)this + 28) = v4;
    if ( v1 )
      LeaveCriticalSection(v1);
    for ( k = (__int64 *)*((_QWORD *)this + 27); ; ++k )
    {
      if ( k == *((__int64 **)this + 28) )
        goto LABEL_20;
      v15 = *k;
      v27 = v15;
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      v25 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(&v27, &v25) < 0 )
        break;
      if ( !v25 )
        goto LABEL_58;
      v26 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v25, &v26) >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v26 + 216LL))(v26) )
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v26);
          v17 = v25;
          if ( v25 )
          {
            v25 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
          }
          if ( v15 )
            goto LABEL_59;
        }
        else
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 200LL))(v26);
          v18 = v26;
          if ( v26 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
          v23[0] = off_18014A4C8;
          v23[7] = v23;
          v23[1] = v18;
          v27 = 0LL;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v27);
          v19 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 120LL))(g_AudioService);
          v20 = CSerialWorkQueue::QueueWorkItem(v19, v23);
          if ( v20 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1D0,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
              (const char *)(unsigned int)v20,
              v23[0]);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v26);
          v21 = v25;
          if ( v25 )
          {
            v25 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          }
          if ( v15 )
            goto LABEL_59;
        }
      }
      else
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v26);
        v16 = v25;
        if ( v25 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        if ( v15 )
          goto LABEL_59;
      }
LABEL_60:
      ;
    }
    v22 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
LABEL_58:
    if ( !v15 )
      goto LABEL_60;
LABEL_59:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    goto LABEL_60;
  }
LABEL_20:
  if ( v1 )
    LeaveCriticalSection(v1);
}
