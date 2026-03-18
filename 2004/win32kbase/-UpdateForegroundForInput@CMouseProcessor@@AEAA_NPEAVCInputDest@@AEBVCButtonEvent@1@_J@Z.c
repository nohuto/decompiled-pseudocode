/*
 * XREFs of ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C006B618
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006C024 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionChangeForegroundQueueForMouseInput @ 0x1C0004F44 (ApiSetEditionChangeForegroundQueueForMouseInput.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00535B0 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0056998 (_anonymous_namespace_--ValidateUIPI.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0069090 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00690EC (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00692B8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0070978 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 */

bool __fastcall CMouseProcessor::UpdateForegroundForInput(
        CMouseProcessor *this,
        struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4)
{
  bool v6; // di
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 *v14; // rdx
  int WindowHandle; // eax
  __int64 v16; // rcx
  _BYTE v17[64]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+20h] BYREF

  v18 = a4;
  v6 = 1;
  if ( !(unsigned __int8)CInputDest::DoesBelongToForeground(a2, 1LL) )
  {
    if ( *((_DWORD *)a3 + 8) == 1 )
    {
      if ( gpqForeground
        && (*((_DWORD *)a2 + 23) != 2 ? (v11 = 0LL) : (v11 = *((_QWORD *)a2 + 10)),
            v11 && grpdeskRitInput && v11 == *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 1) + 24LL)) )
      {
        WindowHandle = (unsigned int)CInputDest::GetWindowHandle(a2);
        CBaseProcessor::PostQEventWork((__int64)this, WindowHandle, 0, 0, 0LL, 0LL);
      }
      else
      {
        v12 = *((_QWORD *)a3 + 1);
        v18 = *(_QWORD *)(v12 + 132);
        v13 = *(_DWORD *)(v12 + 108);
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v17, a2, v8, v9);
        v14 = &v18;
        if ( v13 == 1 )
          v14 = 0LL;
        v6 = (unsigned int)ApiSetEditionChangeForegroundQueueForMouseInput((__int64)a2, (__int64)v14) != 0;
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v17);
      }
    }
    else
    {
      v16 = *((_QWORD *)a3 + 1);
      if ( *(_DWORD *)(v16 + 108) != 1 )
        return anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v16 + 132), a2, v8, v9) != 0;
    }
  }
  return v6;
}
