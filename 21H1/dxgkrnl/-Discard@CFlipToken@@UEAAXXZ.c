/*
 * XREFs of ?Discard@CFlipToken@@UEAAXXZ @ 0x1C00069D0
 * Callers:
 *     ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C00055A0 (--_ECFlipToken@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z @ 0x1C001C1C8 (-SignalPresentLimitSemaphore@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z @ 0x1C001C290 (-SignalGpuFence@CompositionSurfaceObject@@QEAAJ_K0_N@Z.c)
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C001DC80 (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipToken::Discard(CFlipToken *this, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // r15
  unsigned int v5; // r13d
  BOOL v6; // ebp
  bool v7; // zf
  __int64 v8; // r12
  int v9; // ebx
  void (__fastcall *v10)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64, _DWORD); // rdi
  unsigned int v11; // eax
  char v12; // al
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  CompositionSurfaceObject *v15; // rcx
  __int64 v16; // rax

  v2 = *((_QWORD *)this + 4);
  v4 = *((_QWORD *)this + 5);
  v5 = *((_DWORD *)this + 26);
  v6 = *((_BYTE *)this + 559) == 0;
  v7 = DXGGLOBAL::m_pGlobal == 0LL;
  *((_DWORD *)this + 6) = 6;
  v8 = *(_QWORD *)(v2 + 24);
  if ( v7 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v16 + 24) = 2219LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v9 = *((unsigned __int8 *)this + 556);
  v10 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64, _DWORD))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38033) + 120LL);
  v11 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v10(v2, v5, v11, *((_QWORD *)this + 12), 6, v9, v6, v8, v4, 0);
  if ( *((_BYTE *)this + 557) )
  {
    CompositionSurfaceObject::ConfirmIndependentFlipEntry(
      *((CompositionSurfaceObject **)this + 4),
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 71),
      *((_QWORD *)this + 12),
      *((_DWORD *)this + 146),
      *((_DWORD *)this + 147),
      *((_QWORD *)this + 72));
    *((_BYTE *)this + 557) = 0;
  }
  v12 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this);
  if ( !*((_BYTE *)this + 48) )
  {
    v13 = *((_QWORD *)this + 12);
    if ( v13 > 1 )
      CompositionSurfaceObject::SignalGpuFence(
        *((CompositionSurfaceObject **)this + 4),
        *((_QWORD *)this + 5),
        v13 - 1,
        v12);
  }
  *((_QWORD *)this + 12) = 0LL;
  if ( !*((_BYTE *)this + 89) )
  {
    v14 = *((_QWORD *)this + 5);
    v15 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
    *((_BYTE *)this + 89) = 1;
    CompositionSurfaceObject::SignalPresentLimitSemaphore(v15, v14);
  }
}
