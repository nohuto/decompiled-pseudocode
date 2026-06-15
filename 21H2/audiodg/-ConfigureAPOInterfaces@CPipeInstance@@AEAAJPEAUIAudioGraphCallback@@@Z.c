/*
 * XREFs of ?ConfigureAPOInterfaces@CPipeInstance@@AEAAJPEAUIAudioGraphCallback@@@Z @ 0x1400073A0
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007324 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCA8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x14001CCB4 (--_U@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14001DF48 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003EAEC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004DAEC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CPipeInstance::ConfigureAPOInterfaces(CPipeInstance *this, struct IAudioGraphCallback *a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  int v15; // esi
  _QWORD *v16; // rbx
  __int64 v17; // rdi

  v2 = 0LL;
  v3 = 0LL;
  if ( !a2 )
    return 0;
  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    goto LABEL_18;
  do
  {
    v7 = *(_QWORD *)(v6 + 16);
    v6 = *(_QWORD *)(v6 + 8);
    if ( *(_DWORD *)(v7 + 40) == 2 && !**(_DWORD **)(v7 + 32) )
      v2 = (unsigned int)(v2 + 1);
  }
  while ( v6 );
  if ( !(_DWORD)v2 )
    goto LABEL_18;
  v8 = operator new[](saturated_mul((unsigned int)v2, 8uLL));
  v3 = v8;
  if ( !v8 )
  {
    v15 = -2147024882;
    goto LABEL_30;
  }
  memset_0(v8, 0, 8 * v2);
  v9 = *((_QWORD *)this + 3);
  v10 = 0LL;
  if ( !v9 )
  {
LABEL_18:
    v15 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, CPipeInstance *, _QWORD, _QWORD *))(*(_QWORD *)a2 + 24LL))(
            a2,
            this,
            (unsigned int)v2,
            v3);
    goto LABEL_19;
  }
  while ( 1 )
  {
    v11 = *(_QWORD *)(v9 + 16);
    v9 = *(_QWORD *)(v9 + 8);
    if ( *(_DWORD *)(v11 + 40) == 2 )
    {
      v12 = *(_QWORD *)(v11 + 32);
      if ( !*(_DWORD *)v12 && (unsigned int)v10 < (unsigned int)v2 )
        break;
    }
LABEL_17:
    if ( !v9 )
      goto LABEL_18;
  }
  v13 = &v3[v10];
  if ( v13 )
  {
    *v13 = *(_QWORD *)(v12 + 40);
    v14 = *(_QWORD *)(v12 + 40);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v10 = (unsigned int)(v10 + 1);
    goto LABEL_17;
  }
  v15 = -2147467261;
LABEL_19:
  if ( v3 )
  {
    if ( (_DWORD)v2 )
    {
      v16 = v3;
      v17 = (unsigned int)v2;
      do
      {
        if ( *v16 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 16LL))(*v16);
          *v16 = 0LL;
        }
        ++v16;
        --v17;
      }
      while ( v17 );
    }
    operator delete(v3);
  }
  if ( v15 < 0 )
  {
LABEL_30:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        57LL,
        &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
        (unsigned int)v15);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::ConfigureAPOInterfaces", 0x1127u, v15);
  }
  return (unsigned int)v15;
}
