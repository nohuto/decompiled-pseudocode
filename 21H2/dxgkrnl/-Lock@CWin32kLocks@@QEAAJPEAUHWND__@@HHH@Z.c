/*
 * XREFs of ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C0020C00
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C03304A4 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C002C6E4 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall CWin32kLocks::Lock(CWin32kLocks *this, HWND a2, int a3, int a4, int a5)
{
  __int64 v7; // rcx
  char *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // r8d

  v7 = *((_QWORD *)this + 7);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v7 + 184)
    || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v7 + 168)) )
  {
    WdLogSingleEntry1(1LL, 568LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v18,
          v17,
          v19,
          0,
          2,
          -1,
          (__int64)L"!m_pAdapter->IsCoreResourceSharedOwner()",
          568LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *(_QWORD *)this || *((_QWORD *)this + 1) || *((_QWORD *)this + 2) )
  {
    WdLogSingleEntry1(1LL, 570LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v21,
          v20,
          v22,
          0,
          2,
          -1,
          (__int64)L"m_hWindowDc == NULL && m_hFullscreenDc == NULL && m_hDevLocked == NULL",
          570LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( a5 )
    v10 = (char *)this + 8;
  else
    v10 = 0LL;
  v11 = (*(__int64 (__fastcall **)(HWND, char *))(*((_QWORD *)this + 3) + 48LL))(a2, v10);
  *(_QWORD *)this = v11;
  if ( v11 )
  {
    if ( a5 )
    {
      if ( !*((_QWORD *)this + 1) )
      {
        WdLogSingleEntry1(1LL, 576LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
            McTemplateK0zqqzxxxxx_EtwWriteTransfer(
              v24,
              v23,
              v25,
              0,
              2,
              -1,
              (__int64)L"((! bFullscreen) || (m_hFullscreenDc))",
              576LL,
              0LL,
              0LL,
              0LL,
              0LL);
        }
      }
    }
    (*(void (__fastcall **)(_QWORD, __int64))(*((_QWORD *)this + 3) + 288LL))(*(_QWORD *)this, 1LL);
    v12 = *((_QWORD *)this + 7);
    v13 = *(_QWORD *)this;
    *((_QWORD *)this + 4) = *((_QWORD *)this + 3);
    *((_QWORD *)this + 5) = 0LL;
    *((_DWORD *)this + 12) = a3;
    if ( *((_DWORD *)this + 13) )
    {
      WdLogSingleEntry1(1LL, 466LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v27,
            v26,
            v28,
            0,
            2,
            -1,
            (__int64)L"bSpriteLockTaken == NULL",
            466LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( v13 )
    {
      if ( v12 )
      {
        v14 = *((_QWORD *)this + 4);
        *((_QWORD *)this + 5) = v12;
        (*(void (__fastcall **)(__int64))(v14 + 256))(v13);
        if ( a4 )
        {
          (*(void (__fastcall **)(_QWORD, bool))(*((_QWORD *)this + 4) + 272LL))(
            *((_QWORD *)this + 5),
            *((_DWORD *)this + 12) == 0);
          *((_DWORD *)this + 13) = 1;
        }
      }
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)this + 3) + 16LL))(*(_QWORD *)this);
    *((_QWORD *)this + 2) = v15;
    if ( v15 )
    {
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(4LL, *(_QWORD *)this);
      CWin32kLocks::Unlock(this);
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, a2);
    return 3223191565LL;
  }
}
