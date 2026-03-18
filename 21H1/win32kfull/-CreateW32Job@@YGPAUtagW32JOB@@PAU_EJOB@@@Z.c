/*
 * XREFs of ?CreateW32Job@@YGPAUtagW32JOB@@PAU_EJOB@@@Z @ 0x9D5D4
 * Callers:
 *     _UserJobCallout@4 @ 0x9D26C (_UserJobCallout@4.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagW32JOB *__thiscall CreateW32Job(void *this)
{
  _DWORD *v2; // esi
  int v3; // edx
  int v4; // ecx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((int)this, 4, 0xDu, 15, (int)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, (char)this);
  v2 = (_DWORD *)Win32AllocPoolZInit(40, 1651143509);
  if ( !v2 )
    return 0;
  if ( (int)CreateGlobalAtomTable(v2 + 2) < 0 )
  {
    Win32FreePool(v2);
    return 0;
  }
  *v2 = _gpJobsList;
  _gpJobsList = v2;
  v2[1] = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_qq(v4, v3, 0xDu, 16, (int)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, (char)v2, (char)this);
  }
  return (struct tagW32JOB *)v2;
}
