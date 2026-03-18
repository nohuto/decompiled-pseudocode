/*
 * XREFs of ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C000DA20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C01961F0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C019AB18 (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

__int64 __fastcall CFlipExBuffer::SignalGpuFence(CFlipExBuffer *this, __int64 a2, char a3)
{
  int v3; // ebx
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v7; // rdi
  void (__fastcall **v8)(_QWORD); // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v12; // rcx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
      goto LABEL_11;
    if ( !DXGGLOBAL::m_pGlobal )
    {
      WdLogSingleEntry1(1LL, 2373LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v14,
            v13,
            v15,
            0,
            2,
            -1,
            (__int64)L"m_pGlobal != NULL",
            2373LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    SessionData = DXGGLOBAL::GetSessionData((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
    if ( SessionData && (v7 = *((_QWORD *)SessionData + 2343)) != 0 )
    {
      (**(void (__fastcall ***)(_QWORD))v7)(*((_QWORD *)SessionData + 2343));
      if ( *((_DWORD *)this + 159)
        && ((v16 = *((_QWORD *)this + 85),
             *((_BYTE *)this + 688) = 1,
             v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16),
             v17 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 160LL))(v7))
          ? (v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)this + 85) + 48LL))(
                    *((_QWORD *)this + 85),
                    *((unsigned int *)this + 164),
                    *((_QWORD *)this + 43),
                    a2))
          : (v3 = -1073741823),
            --*((_DWORD *)this + 159),
            v3 >= 0) )
      {
        *((_BYTE *)this + 688) = 0;
      }
      else
      {
        v8 = *(void (__fastcall ***)(_QWORD))v7;
        v9 = *((_QWORD *)this + 45);
        v18 = 0LL;
        v3 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *))v8[19])(v7, v9, &v18);
        if ( v3 >= 0 )
        {
          LOBYTE(v10) = *((_DWORD *)this + 164) == 0;
          v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v18 + 16LL))(
                 v18,
                 *((_QWORD *)this + 43),
                 a2,
                 v10);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        }
      }
    }
    else
    {
      v3 = -1073741823;
      v7 = 0LL;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    if ( v3 < 0 )
    {
LABEL_11:
      v12 = *((_QWORD *)this + 43);
      v3 = -1073741637;
      if ( v12 )
        return (unsigned int)DxgkImmediateSignalSynchronizationObjectByReference(v12, a2);
    }
  }
  return (unsigned int)v3;
}
