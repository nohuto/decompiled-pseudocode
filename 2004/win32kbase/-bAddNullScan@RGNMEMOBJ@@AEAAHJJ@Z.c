/*
 * XREFs of ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C00C3244
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C009A120 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C00812E0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?Feature_Servicing_HangGdi_28656583__private_IsEnabled@@YAHXZ @ 0x1C00CF1B8 (-Feature_Servicing_HangGdi_28656583__private_IsEnabled@@YAHXZ.c)
 */

__int64 __fastcall RGNMEMOBJ::bAddNullScan(RGNMEMOBJ *this, int a2, int a3)
{
  int IsEnabled; // eax
  unsigned int v7; // edx
  unsigned int v8; // edx
  __int64 result; // rax
  _DWORD *v10; // rdx

  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 24LL) - *(_DWORD *)(*(_QWORD *)this + 80LL)) < 0x10 )
  {
    IsEnabled = Feature_Servicing_HangGdi_28656583__private_IsEnabled();
    v7 = *(_DWORD *)(*(_QWORD *)this + 24LL);
    if ( IsEnabled )
    {
      if ( v7 + 1136 < v7 )
        return 0LL;
      v8 = v7 + 1136;
    }
    else
    {
      v8 = v7 + 1136;
    }
    if ( !(unsigned int)RGNOBJ::bExpand(this, v8) )
      return 0LL;
  }
  result = 1LL;
  v10 = *(_DWORD **)(*(_QWORD *)this + 40LL);
  ++*(_DWORD *)(*(_QWORD *)this + 84LL);
  v10[1] = a2;
  v10[2] = a3;
  *(_DWORD *)(*(_QWORD *)this + 80LL) += 16;
  v10[3] = 0;
  *v10 = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = v10 + 4;
  return result;
}
