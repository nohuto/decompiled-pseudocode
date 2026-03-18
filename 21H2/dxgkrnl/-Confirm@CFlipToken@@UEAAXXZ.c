/*
 * XREFs of ?Confirm@CFlipToken@@UEAAXXZ @ 0x1C00037A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z @ 0x1C00038CC (-ConfirmIndependentFlipEntry@CompositionSurfaceObject@@QEAAJ_K00II0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall CFlipToken::Confirm(CFlipToken *this)
{
  __int64 v2; // r15
  char v3; // bl
  int v4; // ebp
  int v5; // r14d
  __int64 v6; // rdi
  void (__fastcall *v7)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, _DWORD); // r12
  __int64 v8; // rsi
  unsigned int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d

  *((_DWORD *)this + 6) = 4;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry1(1LL, 2373LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v11, v10, v12, 0, 2, -1, (__int64)L"m_pGlobal != NULL", 69, 0, 0, 0, 0);
    }
  }
  v2 = *((_QWORD *)this + 5);
  v3 = *((_BYTE *)this + 563);
  v4 = *((unsigned __int8 *)this + 560);
  v5 = *((_DWORD *)this + 6);
  v6 = *((_QWORD *)this + 12);
  v7 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int, int, bool, __int64, __int64, _DWORD))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38073) + 352LL);
  v8 = *(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
  v9 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 112LL))(this);
  v7(*((_QWORD *)this + 4), *((unsigned int *)this + 26), v9, v6, v5, v4, v3 == 0, v8, v2, 0);
  if ( *((_BYTE *)this + 561) )
  {
    CompositionSurfaceObject::ConfirmIndependentFlipEntry(
      *((CompositionSurfaceObject **)this + 4),
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 71),
      *((_QWORD *)this + 12),
      *((_DWORD *)this + 146),
      *((_DWORD *)this + 147),
      *((_QWORD *)this + 72));
    *((_BYTE *)this + 561) = 0;
  }
}
