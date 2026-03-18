/*
 * XREFs of ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C001BFC0
 * Callers:
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C00064CC (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ?CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z @ 0x1C0062D90 (-CanReleaseAnalogToken@CFlipToken@@UEAAJIPEA_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z @ 0x1C001C0B8 (-StartCompositionEarly@CompositionSurfaceObject@@QEAA_N_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipToken::TraceStateChanged(CFlipToken *this, __int64 a2)
{
  int v3; // r13d
  bool started; // al
  __int64 v5; // r15
  char v6; // bl
  __int64 v7; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rdi
  struct DXGGLOBAL *Global; // rax
  bool v11; // zf
  int v12; // ebx
  void (__fastcall *v13)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64, BOOL); // rbp
  unsigned int v14; // eax
  BOOL v15; // [rsp+A0h] [rbp+8h]
  BOOL v16; // [rsp+A8h] [rbp+10h]

  v15 = 0;
  v3 = *((_DWORD *)this + 6);
  if ( v3 == 3 )
  {
    started = CompositionSurfaceObject::StartCompositionEarly(
                *((CompositionSurfaceObject **)this + 4),
                *((_QWORD *)this + 5));
    v3 = *((_DWORD *)this + 6);
    v15 = started;
  }
  v5 = *((_QWORD *)this + 4);
  v6 = *((_BYTE *)this + 559);
  v7 = *((_QWORD *)this + 5);
  v8 = *((_DWORD *)this + 26);
  v9 = *(_QWORD *)(v5 + 24);
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2);
  v11 = v6 == 0;
  v12 = *((unsigned __int8 *)this + 556);
  v13 = *(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int, BOOL, __int64, __int64, BOOL))(*((_QWORD *)Global + 38033) + 120LL);
  v16 = v11;
  v14 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v13(v5, v8, v14, *((_QWORD *)this + 12), v3, v12, v16, v9, v7, v15);
}
