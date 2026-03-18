/*
 * XREFs of ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C002E988
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00302C4 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ApiSetEditionChangeForegroundQueueForMouseInput @ 0x1C0004F44 (ApiSetEditionChangeForegroundQueueForMouseInput.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C002C860 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0033C60 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00A6E9C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00AAC14 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z @ 0x1C00B39E0 (-PostQEventWork@CBaseProcessor@@IEAAXPEAUHWND__@@W4EventWorkId@1@I_K_J@Z.c)
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C00B69A8 (_anonymous_namespace_--ValidateUIPI.c)
 */

bool __fastcall CMouseProcessor::UpdateForegroundForInput(
        CMouseProcessor *this,
        struct CInputDest *a2,
        const struct CMouseProcessor::CButtonEvent *a3,
        __int64 a4)
{
  bool v6; // di
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 *v12; // rdx
  HWND WindowHandle; // rax
  __int64 v14; // rcx
  _BYTE v15[64]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+20h] BYREF

  v16 = a4;
  v6 = 1;
  if ( !(unsigned __int8)CInputDest::DoesBelongToForeground(a2, 1LL) )
  {
    if ( *((_DWORD *)a3 + 8) == 1 )
    {
      if ( gpqForeground
        && (*((_DWORD *)a2 + 23) != 2 ? (v9 = 0LL) : (v9 = *((_QWORD *)a2 + 10)),
            v9 && grpdeskRitInput && v9 == *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 1) + 24LL)) )
      {
        WindowHandle = CInputDest::GetWindowHandle(a2);
        CBaseProcessor::PostQEventWork(this, WindowHandle, 0LL, 0LL, 0LL, 0LL);
      }
      else
      {
        v10 = *((_QWORD *)a3 + 1);
        v16 = *(_QWORD *)(v10 + 132);
        v11 = *(_DWORD *)(v10 + 108);
        CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v15, a2);
        v12 = &v16;
        if ( v11 == 1 )
          v12 = 0LL;
        v6 = (unsigned int)ApiSetEditionChangeForegroundQueueForMouseInput((__int64)a2, (__int64)v12) != 0;
        CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v15);
      }
    }
    else
    {
      v14 = *((_QWORD *)a3 + 1);
      if ( *(_DWORD *)(v14 + 108) != 1 )
        return (unsigned __int8)anonymous_namespace_::ValidateUIPI(*(_QWORD *)(v14 + 132), a2) != 0;
    }
  }
  return v6;
}
