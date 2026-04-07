/*
 * XREFs of ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180010E1C
 * Callers:
 *     ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180010E98 (-OnTick@CAnimationEngine@@QEAAJNPEA_N@Z.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800A941C (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x1800393D4 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::StopAnimations(CAnimationEngine *this)
{
  unsigned int v1; // esi
  int v2; // edi
  __int64 i; // r15
  __int64 v5; // rbx
  int v7; // ebp
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax

  v1 = 0;
  v2 = *((_DWORD *)this + 16) - 1;
  if ( v2 < 0 )
    return v1;
  for ( i = 8LL * v2; ; i -= 8LL )
  {
    v5 = *(_QWORD *)(i + *((_QWORD *)this + 5));
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    if ( !*(_BYTE *)(v5 + 49) )
      goto LABEL_6;
    v7 = 0;
    if ( *(_DWORD *)(v5 + 20) )
      break;
LABEL_13:
    v10 = CAnimationEngine::NotifyAnimationCompleteAndCleanupByIndex(this, v2);
    v1 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x117u);
      goto LABEL_15;
    }
LABEL_6:
    CBaseObject::Release((CBaseObject *)v5);
    if ( --v2 < 0 )
      return v1;
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(v5 + 32);
    if ( v8 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
      v1 = v9;
      if ( v9 < 0 )
        break;
    }
    if ( (unsigned int)++v7 >= *(_DWORD *)(v5 + 20) )
      goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x113u);
LABEL_15:
  CBaseObject::Release((CBaseObject *)v5);
  return v1;
}
