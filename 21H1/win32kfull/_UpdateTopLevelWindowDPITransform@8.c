/*
 * XREFs of _UpdateTopLevelWindowDPITransform@8 @ 0x99C12
 * Callers:
 *     _UpdateWindowMonitor@8 @ 0x2A95A (_UpdateWindowMonitor@8.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     _GetMonitorTransform@12 @ 0x99CB2 (_GetMonitorTransform@12.c)
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

NTSTATUS __thiscall UpdateTopLevelWindowDPITransform(_DWORD *this)
{
  int v2; // ecx
  NTSTATUS result; // eax
  void *v4; // edi
  _BYTE v5[64]; // [esp+8h] [ebp-68h] BYREF
  struct _KFLOATING_SAVE FloatSave; // [esp+48h] [ebp-28h] BYREF
  char v7; // [esp+68h] [ebp-8h]

  v7 = 0;
  v2 = *(_DWORD *)(this[5] + 184);
  if ( ((v2 & 0xF) != 2 || (v2 & 0x20000000) != 0)
    && CSmartFloatingSave::Save(&FloatSave) >= 0
    && (memset(v5, 0, sizeof(v5)), GetMonitorTransform(v5))
    && (result = KeRestoreFloatingPointState(&FloatSave),
        (v4 = (void *)this[30], v7 = 0, v4)
     || (result = Win32AllocPoolWithQuota(64, 2020438869), v4 = (void *)result, (this[30] = result) != 0)) )
  {
    qmemcpy(v4, v5, 0x40u);
  }
  else
  {
    result = this[30];
    if ( result )
    {
      result = Win32FreePool(this[30]);
      this[30] = 0;
    }
  }
  if ( v7 )
    return KeRestoreFloatingPointState(&FloatSave);
  return result;
}
