/*
 * XREFs of ?JobCalloutTerminate@@YGHPAUtagW32JOB@@@Z @ 0x9D20C
 * Callers:
 *     _UserJobCallout@4 @ 0x9D26C (_UserJobCallout@4.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 */

int __thiscall JobCalloutTerminate(_DWORD *this)
{
  _DWORD *v2; // edx
  _DWORD *v3; // ecx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q((int)this, 4, 0xDu, 24, (int)&WPP_8d1b82f3b1933447d2872340d476a1f2_Traceguids, (char)this);
  if ( this[9] )
  {
    Win32FreePool(this[9]);
    this[9] = 0;
    this[7] = 0;
    this[8] = 0;
  }
  v2 = (_DWORD *)_gpJobsList;
  v3 = (_DWORD *)_gpJobsList;
  if ( _gpJobsList )
  {
    while ( v3 != this )
    {
      v2 = v3;
      v3 = (_DWORD *)*v3;
      if ( !v3 )
        goto LABEL_8;
    }
    *v2 = *this;
  }
LABEL_8:
  RtlDestroyAtomTable((PRTL_ATOM_TABLE)this[2]);
  Win32FreePool(this);
  return 1;
}
