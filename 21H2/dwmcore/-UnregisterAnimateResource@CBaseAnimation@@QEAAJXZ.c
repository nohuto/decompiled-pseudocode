/*
 * XREFs of ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800CDDDC
 * Callers:
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800CDD50 (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     ?UpdateAnimateValues@CScalar@@UEAAXXZ @ 0x18023B910 (-UpdateAnimateValues@CScalar@@UEAAXXZ.c)
 * Callees:
 *     ?UnregisterResourceForAnimationTelemetry@CComposition@@QEAAXPEBVCResource@@PEBU_GUID@@I@Z @ 0x180043000 (-UnregisterResourceForAnimationTelemetry@CComposition@@QEAAXPEBVCResource@@PEBU_GUID@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseAnimation::UnregisterAnimateResource(CBaseAnimation *this)
{
  unsigned int v1; // edi
  __int64 v3; // r9
  char *v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r10
  const struct _GUID *v8; // rbp
  unsigned int v9; // eax
  __int64 v11; // rcx

  v1 = 0;
  if ( *((_BYTE *)this + 104) )
  {
    v3 = *((_QWORD *)this + 2);
    v4 = (char *)this + 64;
    v5 = 0LL;
    v6 = *(unsigned int *)(v3 + 712);
    v7 = *(_QWORD *)(v3 + 688);
    if ( (_DWORD)v6 )
    {
      do
      {
        if ( v4 == *(char **)(v7 + 8 * v5) )
          break;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < (unsigned int)v6 );
    }
    if ( (unsigned int)v5 >= (unsigned int)v6 )
    {
      v1 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2147024809, 0x87Cu);
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, -2147024809, 0x97u);
    }
    else
    {
      for ( ; (unsigned int)v5 < (int)v6 - 1; LODWORD(v6) = *(_DWORD *)(v3 + 712) )
      {
        v6 = (unsigned int)v5;
        LODWORD(v5) = v5 + 1;
        *(_QWORD *)(v7 + 8 * v6) = *(_QWORD *)(v7 + 8LL * (unsigned int)v5);
      }
      *(_DWORD *)(v3 + 712) = v6 - 1;
      v8 = (const struct _GUID *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
      v9 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 32LL))(v4);
      if ( v8 || v9 )
        CComposition::UnregisterResourceForAnimationTelemetry(
          *((CComposition **)this + 2),
          (unsigned __int64)this,
          v8,
          v9);
      *((_BYTE *)this + 104) = 0;
    }
  }
  return v1;
}
