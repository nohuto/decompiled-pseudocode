/*
 * XREFs of ?UnregisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x1800AE2F0
 * Callers:
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800AE2AC (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::UnregisterAnimateResource(CComposition *this, unsigned __int64 a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // esi
  __int64 v4; // r10
  __int64 i; // r8
  __int64 v8; // rbp
  unsigned int v9; // eax
  __int64 v11; // rcx

  v2 = *((_DWORD *)this + 140);
  v3 = 0;
  v4 = *((_QWORD *)this + 67);
  for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 1) )
  {
    if ( a2 == *(_QWORD *)(v4 + 8 * i) )
      break;
  }
  if ( (unsigned int)i >= v2 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x7DCu, 0LL);
  }
  else
  {
    for ( ; (unsigned int)i < v2 - 1; v2 = *((_DWORD *)this + 140) )
    {
      v11 = (unsigned int)i;
      LODWORD(i) = i + 1;
      *(_QWORD *)(v4 + 8 * v11) = *(_QWORD *)(v4 + 8LL * (unsigned int)i);
    }
    *((_DWORD *)this + 140) = v2 - 1;
  }
  v8 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 16LL))(a2);
  v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 32LL))(a2);
  if ( v8 || v9 )
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, __int64))(**((_QWORD **)this + 63) + 56LL))(
      *((_QWORD *)this + 63),
      v9,
      a2 | 0xDD00000000000000uLL,
      v8);
  return v3;
}
