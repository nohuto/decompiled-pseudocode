/*
 * XREFs of ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x18009F384
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180011830 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18009FFE8 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800A01C4 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 */

__int64 __fastcall CContactManager::OnMultiContact(
        CContactManager *this,
        const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // r8
  int v8; // ecx
  char *v9; // r9
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v12[4]; // [rsp+48h] [rbp-30h] BYREF

  v11 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *((unsigned int *)a2 + 1);
  if ( (unsigned int)(v4 - 1) <= 0x7E )
  {
    if ( *((_DWORD *)a2 + 2) == 40 * v4 )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = *((_QWORD *)a2 + 5 * v6 + 3);
        if ( *((_DWORD *)a2 + 10 * v6 + 12) == 1 )
        {
          if ( *((_BYTE *)this + 324) )
          {
            v8 = *((_DWORD *)a2 + 10 * v6 + 7);
            v9 = (char *)v12;
            v12[1] = v8 - 25;
            v12[3] = v8 + 25;
            v12[0] = v7 - 25;
            v12[2] = v7 + 25;
          }
          else
          {
            v9 = (char *)a2 + 40 * v6 + 32;
          }
          CContactManager::ProcessTouchContact(
            this,
            *((unsigned int *)a2 + 10 * v6 + 5),
            v7,
            v9,
            *((_DWORD *)a2 + 10 * v6 + 13),
            *((_DWORD *)a2 + 10 * v6 + 14),
            *(_QWORD *)((char *)a2 + 12));
        }
        else
        {
          CContactManager::ProcessPenContact(this, *((unsigned int *)a2 + 10 * v6 + 5), v7);
        }
        ++v6;
      }
      while ( v6 < *((_DWORD *)a2 + 1) );
    }
    else
    {
      v5 = -2147024872;
    }
  }
  else
  {
    v5 = -2147024809;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v5;
}
